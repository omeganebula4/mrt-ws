// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_detection_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_detection_interfaces/msg/detail/point__rosidl_typesupport_introspection_c.h"
#include "aruco_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_detection_interfaces/msg/detail/point__functions.h"
#include "aruco_detection_interfaces/msg/detail/point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_detection_interfaces__msg__Point__init(message_memory);
}

void aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_fini_function(void * message_memory)
{
  aruco_detection_interfaces__msg__Point__fini(message_memory);
}

size_t aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__size_function__Point__coords(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__coords(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__coords(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__fetch_function__Point__coords(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__coords(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__assign_function__Point__coords(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__coords(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_member_array[1] = {
  {
    "coords",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(aruco_detection_interfaces__msg__Point, coords),  // bytes offset in struct
    NULL,  // default value
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__size_function__Point__coords,  // size() function pointer
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__coords,  // get_const(index) function pointer
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__coords,  // get(index) function pointer
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__fetch_function__Point__coords,  // fetch(index, &value) function pointer
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__assign_function__Point__coords,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_members = {
  "aruco_detection_interfaces__msg",  // message namespace
  "Point",  // message name
  1,  // number of fields
  sizeof(aruco_detection_interfaces__msg__Point),
  aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_member_array,  // message members
  aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle = {
  0,
  &aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_detection_interfaces, msg, Point)() {
  if (!aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle.typesupport_identifier) {
    aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_detection_interfaces__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
