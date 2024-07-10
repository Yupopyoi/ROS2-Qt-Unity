#ifndef JOINTSTATEHANDLER_H
#define JOINTSTATEHANDLER_H

#include <QObject>
#include <QVector>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/serialization.hpp>
#include <sensor_msgs/msg/joint_state.hpp>

class JointStateHandler : public QObject
{
    Q_OBJECT

public:
    void Deserialize(QByteArray subscribedData);
    sensor_msgs::msg::JointState::SharedPtr SubscribedMessage();

signals:
    void onDeserializedMessage() const;

private:
    const int LINK_NUMBER = 6;
    sensor_msgs::msg::JointState subscribedMessage_;
    void deserializeJointState(QByteArray subscribedData);
};

#endif // JOINTSTATEHANDLER_H
