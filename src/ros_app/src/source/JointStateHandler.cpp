#include "JointStateHandler.h"

void JointStateHandler::Deserialize(QByteArray subscribedData)
{
    deserializeJointState(subscribedData);
    emit onDeserializedMessage();
}

sensor_msgs::msg::JointState::SharedPtr JointStateHandler::SubscribedMessage()
{
    return std::make_shared<sensor_msgs::msg::JointState>(subscribedMessage_);
}

void JointStateHandler::deserializeJointState(QByteArray subscribedData)
{
    auto Deserialize = [](QByteArray serialized_message)
    {
        rclcpp::Serialization<sensor_msgs::msg::JointState> deserializer;
        sensor_msgs::msg::JointState message;

        const char* serialized_data = serialized_message.constData();
        size_t serialized_data_size = serialized_message.size();

        rcl_allocator_t allocator = rcl_get_default_allocator();

        rclcpp::SerializedMessage serialized_msg(serialized_data_size, allocator);

        memcpy(serialized_msg.get_rcl_serialized_message().buffer, serialized_data, serialized_data_size);
        serialized_msg.get_rcl_serialized_message().buffer_length = serialized_data_size;
        serialized_msg.get_rcl_serialized_message().buffer_capacity = serialized_data_size;

        deserializer.deserialize_message(&serialized_msg, &message);

        return message;
    };

    subscribedMessage_ = Deserialize(subscribedData);
}
