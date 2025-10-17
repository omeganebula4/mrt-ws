// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from all_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef ALL_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define ALL_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "all_interfaces/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace all_interfaces
{

namespace msg
{

namespace builder
{

class Init_Waypoint_t
{
public:
  explicit Init_Waypoint_t(::all_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::all_interfaces::msg::Waypoint t(::all_interfaces::msg::Waypoint::_t_type arg)
  {
    msg_.t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::all_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_z
{
public:
  explicit Init_Waypoint_z(::all_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_t z(::all_interfaces::msg::Waypoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Waypoint_t(msg_);
  }

private:
  ::all_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_y
{
public:
  explicit Init_Waypoint_y(::all_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_z y(::all_interfaces::msg::Waypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Waypoint_z(msg_);
  }

private:
  ::all_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_x
{
public:
  Init_Waypoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_y x(::all_interfaces::msg::Waypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoint_y(msg_);
  }

private:
  ::all_interfaces::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::all_interfaces::msg::Waypoint>()
{
  return all_interfaces::msg::builder::Init_Waypoint_x();
}

}  // namespace all_interfaces

#endif  // ALL_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
