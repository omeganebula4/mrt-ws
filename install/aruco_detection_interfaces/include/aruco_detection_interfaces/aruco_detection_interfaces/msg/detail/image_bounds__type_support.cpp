// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aruco_detection_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aruco_detection_interfaces/msg/detail/image_bounds__struct.hpp"
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

void ImageBounds_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aruco_detection_interfaces::msg::ImageBounds(_init);
}

void ImageBounds_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aruco_detection_interfaces::msg::ImageBounds *>(message_memory);
  typed_message->~ImageBounds();
}

size_t size_function__ImageBounds__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImageBounds__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ImageBounds__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImageBounds__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__ImageBounds__ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__ImageBounds__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__ImageBounds__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__ImageBounds__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImageBounds__bounds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aruco_detection_interfaces::msg::PointArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImageBounds__bounds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aruco_detection_interfaces::msg::PointArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ImageBounds__bounds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aruco_detection_interfaces::msg::PointArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImageBounds__bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aruco_detection_interfaces::msg::PointArray *>(
    get_const_function__ImageBounds__bounds(untyped_member, index));
  auto & value = *reinterpret_cast<aruco_detection_interfaces::msg::PointArray *>(untyped_value);
  value = item;
}

void assign_function__ImageBounds__bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aruco_detection_interfaces::msg::PointArray *>(
    get_function__ImageBounds__bounds(untyped_member, index));
  const auto & value = *reinterpret_cast<const aruco_detection_interfaces::msg::PointArray *>(untyped_value);
  item = value;
}

void resize_function__ImageBounds__bounds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aruco_detection_interfaces::msg::PointArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImageBounds_message_member_array[2] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_detection_interfaces::msg::ImageBounds, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImageBounds__ids,  // size() function pointer
    get_const_function__ImageBounds__ids,  // get_const(index) function pointer
    get_function__ImageBounds__ids,  // get(index) function pointer
    fetch_function__ImageBounds__ids,  // fetch(index, &value) function pointer
    assign_function__ImageBounds__ids,  // assign(index, value) function pointer
    resize_function__ImageBounds__ids  // resize(index) function pointer
  },
  {
    "bounds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aruco_detection_interfaces::msg::PointArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_detection_interfaces::msg::ImageBounds, bounds),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImageBounds__bounds,  // size() function pointer
    get_const_function__ImageBounds__bounds,  // get_const(index) function pointer
    get_function__ImageBounds__bounds,  // get(index) function pointer
    fetch_function__ImageBounds__bounds,  // fetch(index, &value) function pointer
    assign_function__ImageBounds__bounds,  // assign(index, value) function pointer
    resize_function__ImageBounds__bounds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImageBounds_message_members = {
  "aruco_detection_interfaces::msg",  // message namespace
  "ImageBounds",  // message name
  2,  // number of fields
  sizeof(aruco_detection_interfaces::msg::ImageBounds),
  ImageBounds_message_member_array,  // message members
  ImageBounds_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageBounds_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImageBounds_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImageBounds_message_members,
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
get_message_type_support_handle<aruco_detection_interfaces::msg::ImageBounds>()
{
  return &::aruco_detection_interfaces::msg::rosidl_typesupport_introspection_cpp::ImageBounds_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_detection_interfaces, msg, ImageBounds)() {
  return &::aruco_detection_interfaces::msg::rosidl_typesupport_introspection_cpp::ImageBounds_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
