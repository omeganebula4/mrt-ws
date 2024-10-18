// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aruco_detection_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aruco_detection_interfaces/msg/detail/point__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aruco_detection_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Point_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aruco_detection_interfaces::msg::Point(_init);
}

void Point_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aruco_detection_interfaces::msg::Point *>(message_memory);
  typed_message->~Point();
}

size_t size_function__Point__coords(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Point__coords(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Point__coords(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Point__coords(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Point__coords(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Point__coords(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Point__coords(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Point_message_member_array[1] = {
  {
    "coords",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(aruco_detection_interfaces::msg::Point, coords),  // bytes offset in struct
    nullptr,  // default value
    size_function__Point__coords,  // size() function pointer
    get_const_function__Point__coords,  // get_const(index) function pointer
    get_function__Point__coords,  // get(index) function pointer
    fetch_function__Point__coords,  // fetch(index, &value) function pointer
    assign_function__Point__coords,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Point_message_members = {
  "aruco_detection_interfaces::msg",  // message namespace
  "Point",  // message name
  1,  // number of fields
  sizeof(aruco_detection_interfaces::msg::Point),
  Point_message_member_array,  // message members
  Point_init_function,  // function to initialize message memory (memory has to be allocated)
  Point_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Point_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Point_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aruco_detection_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_detection_interfaces::msg::Point>()
{
  return &::aruco_detection_interfaces::msg::rosidl_typesupport_introspection_cpp::Point_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_detection_interfaces, msg, Point)() {
  return &::aruco_detection_interfaces::msg::rosidl_typesupport_introspection_cpp::Point_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
