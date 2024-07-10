#ifndef SERIALIZEDTRAJECTORYMAKER_H
#define SERIALIZEDTRAJECTORYMAKER_H

#include <QVector>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/serialization.hpp>

#include <moveit_msgs/msg/robot_trajectory.hpp>
#include <trajectory_msgs/msg/joint_trajectory.h>
#include <trajectory_msgs/msg/joint_trajectory_point.hpp>

class SerializedTrajectoryMaker
{
public:
    static void Serialize(moveit_msgs::msg::RobotTrajectory trajectory);
    static void createSingleTrajectorySerializedMessage(QVector<double> angles, bool isRadian = true);

    static std::shared_ptr<const QByteArray> getSerializedMessage()
    {
        return std::shared_ptr<const QByteArray>(serializedMessage_);
    };

private:
    static std::shared_ptr<QByteArray> serializedMessage_;
};

#endif // SERIALIZEDTRAJECTORYMAKER_H
