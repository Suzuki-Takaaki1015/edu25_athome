// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_msgs:srv/StringCommand.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_MSGS__SRV__DETAIL__STRING_COMMAND__BUILDER_HPP_
#define SERVICE_MSGS__SRV__DETAIL__STRING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_msgs/srv/detail/string_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_msgs
{

namespace srv
{

namespace builder
{

class Init_StringCommand_Request_command
{
public:
  Init_StringCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_msgs::srv::StringCommand_Request command(::service_msgs::srv::StringCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_msgs::srv::StringCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_msgs::srv::StringCommand_Request>()
{
  return service_msgs::srv::builder::Init_StringCommand_Request_command();
}

}  // namespace service_msgs


namespace service_msgs
{

namespace srv
{

namespace builder
{

class Init_StringCommand_Response_answer
{
public:
  Init_StringCommand_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_msgs::srv::StringCommand_Response answer(::service_msgs::srv::StringCommand_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_msgs::srv::StringCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_msgs::srv::StringCommand_Response>()
{
  return service_msgs::srv::builder::Init_StringCommand_Response_answer();
}

}  // namespace service_msgs

#endif  // SERVICE_MSGS__SRV__DETAIL__STRING_COMMAND__BUILDER_HPP_
