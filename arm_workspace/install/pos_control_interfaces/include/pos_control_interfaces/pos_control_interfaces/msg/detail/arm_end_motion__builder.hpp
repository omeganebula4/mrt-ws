// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pos_control_interfaces:msg/ArmEndMotion.idl
// generated code does not contain a copyright notice

#ifndef POS_CONTROL_INTERFACES__MSG__DETAIL__ARM_END_MOTION__BUILDER_HPP_
#define POS_CONTROL_INTERFACES__MSG__DETAIL__ARM_END_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pos_control_interfaces/msg/detail/arm_end_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pos_control_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArmEndMotion_reset
{
public:
  explicit Init_ArmEndMotion_reset(::pos_control_interfaces::msg::ArmEndMotion & msg)
  : msg_(msg)
  {}
  ::pos_control_interfaces::msg::ArmEndMotion reset(::pos_control_interfaces::msg::ArmEndMotion::_reset_type arg)
  {
    msg_.reset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::msg::ArmEndMotion msg_;
};

class Init_ArmEndMotion_sys_check
{
public:
  explicit Init_ArmEndMotion_sys_check(::pos_control_interfaces::msg::ArmEndMotion & msg)
  : msg_(msg)
  {}
  Init_ArmEndMotion_reset sys_check(::pos_control_interfaces::msg::ArmEndMotion::_sys_check_type arg)
  {
    msg_.sys_check = std::move(arg);
    return Init_ArmEndMotion_reset(msg_);
  }

private:
  ::pos_control_interfaces::msg::ArmEndMotion msg_;
};

class Init_ArmEndMotion_speed
{
public:
  explicit Init_ArmEndMotion_speed(::pos_control_interfaces::msg::ArmEndMotion & msg)
  : msg_(msg)
  {}
  Init_ArmEndMotion_sys_check speed(::pos_control_interfaces::msg::ArmEndMotion::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ArmEndMotion_sys_check(msg_);
  }

private:
  ::pos_control_interfaces::msg::ArmEndMotion msg_;
};

class Init_ArmEndMotion_direction
{
public:
  Init_ArmEndMotion_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmEndMotion_speed direction(::pos_control_interfaces::msg::ArmEndMotion::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_ArmEndMotion_speed(msg_);
  }

private:
  ::pos_control_interfaces::msg::ArmEndMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::msg::ArmEndMotion>()
{
  return pos_control_interfaces::msg::builder::Init_ArmEndMotion_direction();
}

}  // namespace pos_control_interfaces

#endif  // POS_CONTROL_INTERFACES__MSG__DETAIL__ARM_END_MOTION__BUILDER_HPP_
