// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/process_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_ProcessImage_Request_img
{
public:
  Init_ProcessImage_Request_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::ProcessImage_Request img(::tutorial_interfaces::srv::ProcessImage_Request::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::ProcessImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::ProcessImage_Request>()
{
  return tutorial_interfaces::srv::builder::Init_ProcessImage_Request_img();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_ProcessImage_Response_imgbounds
{
public:
  Init_ProcessImage_Response_imgbounds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::ProcessImage_Response imgbounds(::tutorial_interfaces::srv::ProcessImage_Response::_imgbounds_type arg)
  {
    msg_.imgbounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::ProcessImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::ProcessImage_Response>()
{
  return tutorial_interfaces::srv::builder::Init_ProcessImage_Response_imgbounds();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__BUILDER_HPP_
