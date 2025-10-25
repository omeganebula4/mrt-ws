// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interfaces:msg/UserCommand.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__USER_COMMAND__BUILDER_HPP_
#define MSG_INTERFACES__MSG__DETAIL__USER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_interfaces/msg/detail/user_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_interfaces
{

namespace msg
{

namespace builder
{

class Init_UserCommand_reset
{
public:
  explicit Init_UserCommand_reset(::msg_interfaces::msg::UserCommand & msg)
  : msg_(msg)
  {}
  ::msg_interfaces::msg::UserCommand reset(::msg_interfaces::msg::UserCommand::_reset_type arg)
  {
    msg_.reset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interfaces::msg::UserCommand msg_;
};

class Init_UserCommand_sys_check
{
public:
  explicit Init_UserCommand_sys_check(::msg_interfaces::msg::UserCommand & msg)
  : msg_(msg)
  {}
  Init_UserCommand_reset sys_check(::msg_interfaces::msg::UserCommand::_sys_check_type arg)
  {
    msg_.sys_check = std::move(arg);
    return Init_UserCommand_reset(msg_);
  }

private:
  ::msg_interfaces::msg::UserCommand msg_;
};

class Init_UserCommand_z
{
public:
  explicit Init_UserCommand_z(::msg_interfaces::msg::UserCommand & msg)
  : msg_(msg)
  {}
  Init_UserCommand_sys_check z(::msg_interfaces::msg::UserCommand::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_UserCommand_sys_check(msg_);
  }

private:
  ::msg_interfaces::msg::UserCommand msg_;
};

class Init_UserCommand_y
{
public:
  explicit Init_UserCommand_y(::msg_interfaces::msg::UserCommand & msg)
  : msg_(msg)
  {}
  Init_UserCommand_z y(::msg_interfaces::msg::UserCommand::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_UserCommand_z(msg_);
  }

private:
  ::msg_interfaces::msg::UserCommand msg_;
};

class Init_UserCommand_x
{
public:
  Init_UserCommand_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserCommand_y x(::msg_interfaces::msg::UserCommand::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_UserCommand_y(msg_);
  }

private:
  ::msg_interfaces::msg::UserCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interfaces::msg::UserCommand>()
{
  return msg_interfaces::msg::builder::Init_UserCommand_x();
}

}  // namespace msg_interfaces

#endif  // MSG_INTERFACES__MSG__DETAIL__USER_COMMAND__BUILDER_HPP_
