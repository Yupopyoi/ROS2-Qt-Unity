#include "SerializedTrajectoryMaker.h"

std::shared_ptr<QByteArray> SerializedTrajectoryMaker::serializedMessage_ = std::make_shared<QByteArray>();

void SerializedTrajectoryMaker::Serialize(moveit_msgs::msg::RobotTrajectory trajectory)
{
    trajectory.joint_trajectory.joint_names = {"joint_1", "joint_2", "joint_3", "joint_4", "joint_5", "joint_6"};

    auto now = std::chrono::system_clock::now();
    auto unix_seconds = std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count();
    auto unix_nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();

    trajectory.joint_trajectory.header.stamp.sec = unix_seconds;
    trajectory.joint_trajectory.header.stamp.nanosec = unix_nanoseconds;

    auto createSerializeMessage = [trajectory]()
    {
        rclcpp::Serialization<moveit_msgs::msg::RobotTrajectory> serializer;
        rclcpp::SerializedMessage serializedMessage;

        serializer.serialize_message(&trajectory, &serializedMessage);
        return serializedMessage;
    };

    auto serialized_msg = createSerializeMessage();

    const uint8_t* msg_uint_ptr = serialized_msg.get_rcl_serialized_message().buffer;

    serializedMessage_ = std::make_shared<QByteArray>(reinterpret_cast<const char*>(msg_uint_ptr), serialized_msg.size());
}

void SerializedTrajectoryMaker::createSingleTrajectorySerializedMessage(QVector<double> angles, bool isRadian)
{
    moveit_msgs::msg::RobotTrajectory trajectory;
    trajectory_msgs::msg::JointTrajectory joint_trajectory;
    trajectory_msgs::msg::JointTrajectoryPoint point;

    if(!isRadian)
    {
        for(int i = 0; i < angles.size(); i++)
        {
            angles[i] = angles[i] * M_PI / 180;
        }
    }

    point.positions = {angles[0], angles[1], angles[2], angles[3], angles[4], angles[5]};

    joint_trajectory.points.push_back(point);

    trajectory.joint_trajectory = joint_trajectory;

    Serialize(trajectory);
}
