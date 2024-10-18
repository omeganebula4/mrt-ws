// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Point_coords
{
public:
  Init_Point_coords()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::msg::Point coords(::tutorial_interfaces::msg::Point::_coords_type arg)
  {
    msg_.coords = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Point msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Point>()
{
  return tutorial_interfaces::msg::builder::Init_Point_coords();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_
