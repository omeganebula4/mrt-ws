// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POINT2_D__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POINT2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/point2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Point2D_y
{
public:
  explicit Init_Point2D_y(::tutorial_interfaces::msg::Point2D & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::Point2D y(::tutorial_interfaces::msg::Point2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Point2D msg_;
};

class Init_Point2D_x
{
public:
  Init_Point2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2D_y x(::tutorial_interfaces::msg::Point2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2D_y(msg_);
  }

private:
  ::tutorial_interfaces::msg::Point2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Point2D>()
{
  return tutorial_interfaces::msg::builder::Init_Point2D_x();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POINT2_D__BUILDER_HPP_
