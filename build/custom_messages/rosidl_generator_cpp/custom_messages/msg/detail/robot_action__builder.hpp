// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/RobotAction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ROBOT_ACTION__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__ROBOT_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/robot_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_RobotAction_y
{
public:
  explicit Init_RobotAction_y(::custom_messages::msg::RobotAction & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::RobotAction y(::custom_messages::msg::RobotAction::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::RobotAction msg_;
};

class Init_RobotAction_x
{
public:
  explicit Init_RobotAction_x(::custom_messages::msg::RobotAction & msg)
  : msg_(msg)
  {}
  Init_RobotAction_y x(::custom_messages::msg::RobotAction::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotAction_y(msg_);
  }

private:
  ::custom_messages::msg::RobotAction msg_;
};

class Init_RobotAction_command
{
public:
  Init_RobotAction_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotAction_x command(::custom_messages::msg::RobotAction::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_RobotAction_x(msg_);
  }

private:
  ::custom_messages::msg::RobotAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::RobotAction>()
{
  return custom_messages::msg::builder::Init_RobotAction_command();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ROBOT_ACTION__BUILDER_HPP_
