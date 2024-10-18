// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_detection_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__BUILDER_HPP_
#define ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_detection_interfaces/srv/detail/process_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_detection_interfaces
{

namespace srv
{

namespace builder
{

class Init_ProcessImage_Request_frame
{
public:
  explicit Init_ProcessImage_Request_frame(::aruco_detection_interfaces::srv::ProcessImage_Request & msg)
  : msg_(msg)
  {}
  ::aruco_detection_interfaces::srv::ProcessImage_Request frame(::aruco_detection_interfaces::srv::ProcessImage_Request::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_detection_interfaces::srv::ProcessImage_Request msg_;
};

class Init_ProcessImage_Request_imgorvid
{
public:
  explicit Init_ProcessImage_Request_imgorvid(::aruco_detection_interfaces::srv::ProcessImage_Request & msg)
  : msg_(msg)
  {}
  Init_ProcessImage_Request_frame imgorvid(::aruco_detection_interfaces::srv::ProcessImage_Request::_imgorvid_type arg)
  {
    msg_.imgorvid = std::move(arg);
    return Init_ProcessImage_Request_frame(msg_);
  }

private:
  ::aruco_detection_interfaces::srv::ProcessImage_Request msg_;
};

class Init_ProcessImage_Request_path
{
public:
  explicit Init_ProcessImage_Request_path(::aruco_detection_interfaces::srv::ProcessImage_Request & msg)
  : msg_(msg)
  {}
  Init_ProcessImage_Request_imgorvid path(::aruco_detection_interfaces::srv::ProcessImage_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_ProcessImage_Request_imgorvid(msg_);
  }

private:
  ::aruco_detection_interfaces::srv::ProcessImage_Request msg_;
};

class Init_ProcessImage_Request_img
{
public:
  Init_ProcessImage_Request_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessImage_Request_path img(::aruco_detection_interfaces::srv::ProcessImage_Request::_img_type arg)
  {
    msg_.img = std::move(arg);
    return Init_ProcessImage_Request_path(msg_);
  }

private:
  ::aruco_detection_interfaces::srv::ProcessImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_detection_interfaces::srv::ProcessImage_Request>()
{
  return aruco_detection_interfaces::srv::builder::Init_ProcessImage_Request_img();
}

}  // namespace aruco_detection_interfaces


namespace aruco_detection_interfaces
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
  ::aruco_detection_interfaces::srv::ProcessImage_Response imgbounds(::aruco_detection_interfaces::srv::ProcessImage_Response::_imgbounds_type arg)
  {
    msg_.imgbounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_detection_interfaces::srv::ProcessImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_detection_interfaces::srv::ProcessImage_Response>()
{
  return aruco_detection_interfaces::srv::builder::Init_ProcessImage_Response_imgbounds();
}

}  // namespace aruco_detection_interfaces

#endif  // ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__BUILDER_HPP_
