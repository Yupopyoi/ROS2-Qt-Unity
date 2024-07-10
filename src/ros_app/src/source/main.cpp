#include "mainwindow.h"
#include "UnityConnector.h"
#include "JointStateHandler.h"
#include "SerializedTrajectoryMaker.h"

#include <rclcpp/rclcpp.hpp>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    setvbuf(stdout, nullptr, _IONBF, BUFSIZ);
    rclcpp::init(argc, argv);

    std::shared_ptr<JointStateHandler> jointStateHandler = std::make_shared<JointStateHandler>();
    std::shared_ptr<rclcpp::executors::MultiThreadedExecutor> executor = std::make_shared<rclcpp::executors::MultiThreadedExecutor>();

    std::thread executor_thread([executor](){executor->spin();});

    auto unityConnector = std::make_shared<UnityConnector>();

    QApplication a(argc, argv);

    mainwindow mainWindow;
    mainWindow.show();

    // ---- CONNECTIONS ----

    // ANGLES SETTING : MAIN WINDOW => JOINT STATE HANDLER / UNITY CONNECTOR
    QObject::connect(&mainWindow, &mainwindow::onAngleChanged,
                     [&mainWindow, &unityConnector]()
                     {
                         auto angles = mainWindow.JointAngles();

                         SerializedTrajectoryMaker::createSingleTrajectorySerializedMessage(angles, false);

                         auto msg = SerializedTrajectoryMaker::getSerializedMessage();

                         unityConnector->Publish(msg);
                     });

    // SUBSCRIBED DATA : UNITY CONTROLLER => JOINT STATE HANDLER
    QObject::connect(unityConnector.get(), &UnityConnector::onSubscribedDataFromUnity,
                     [&unityConnector, &jointStateHandler]()
                     {
                        jointStateHandler->Deserialize(unityConnector->SubscribedData());
                     });

    // DESERIALIZED MESSAGE : JOINT STATE HANDLER => MAIN WINDOW
    QObject::connect(jointStateHandler.get(), &JointStateHandler::onDeserializedMessage,
                     [&jointStateHandler, &mainWindow]()
                     {
                        auto subscribedData = jointStateHandler->SubscribedMessage();

                        // ここから下は仮

                        auto angles = subscribedData->position;

                        QString jointAnglesString_ = "Joint Angles :";

                        for(uint jointIndex = 0; jointIndex < 6; jointIndex++)
                        {
                            std::ostringstream oss;
                            oss << std::fixed << std::setprecision(1) << angles[jointIndex] * 180 / M_PI;

                            jointAnglesString_ += " " + oss.str() + " /";
                        }

                        mainWindow.UpdateStateLog(jointAnglesString_, "", angles, std::vector<double>(6));
                     });

    // ---- ESTABLISH TCP CONNECTION ----

    unityConnector->startListen();

    return a.exec();
}
