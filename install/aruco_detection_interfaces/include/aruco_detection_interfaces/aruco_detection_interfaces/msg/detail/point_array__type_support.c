// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_detection_interfaces:msg/PointArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_detection_interfaces/msg/detail/point_array__rosidl_typesupport_introspection_c.h"
#include "aruco_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_detection_interfaces/msg/detail/point_array__functions.h"
#include "aruco_detection_interfaces/msg/detail/point_array__struct.h"


// Include directives for member types
// Member `rowpoints`
#include "aruco_detection_interfaces/msg/point.h"
// Member `rowpoints`
#include "aruco_detection_interfaces/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_detection_interfaces__msg__PointArray__init(message_memory);
}

void aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_fini_function(void * message_memory)
{
  aruco_detection_interfaces__msg__PointArray__fini(message_memory);
}

size_t aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__size_function__PointArray__rowpoints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__get_const_function__PointArray__rowpoints(
  const void * untyped_member, size_t index)
{
  const aruco_detection_interfaces__msg__Point * member =
    (const aruco_detection_interfaces__msg__Point *)(untyped_member);
  return &member[index];
}

void * aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__get_function__PointArray__rowpoints(
  void * untyped_member, size_t index)
{
  aruco_detection_interfaces__msg__Point * member =
    (aruco_detection_interfaces__msg__Point *)(untyped_member);
  return &member[index];
}

void aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__fetch_function__PointArray__rowpoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aruco_detection_interfaces__msg__Point * item =
    ((const aruco_detection_interfaces__msg__Point *)
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__get_const_function__PointArray__rowpoints(untyped_member, index));
  aruco_detection_interfaces__msg__Point * value =
    (aruco_detection_interfaces__msg__Point *)(untyped_value);
  *value = *item;
}

void aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__assign_function__PointArray__rowpoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aruco_detection_interfaces__msg__Point * item =
    ((aruco_detection_interfaces__msg__Point *)
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__get_function__PointArray__rowpoints(untyped_member, index));
  const aruco_detection_interfaces__msg__Point * value =
    (const aruco_detection_interfaces__msg__Point *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_member_array[1] = {
  {
    "rowpoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(aruco_detection_interfaces__msg__PointArray, rowpoints),  // bytes offset in struct
    NULL,  // default value
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__size_function__PointArray__rowpoints,  // size() function pointer
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__get_const_function__PointArray__rowpoints,  // get_const(index) function pointer
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__get_function__PointArray__rowpoints,  // get(index) function pointer
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__fetch_function__PointArray__rowpoints,  // fetch(index, &value) function pointer
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__assign_function__PointArray__rowpoints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_members = {
  "aruco_detection_interfaces__msg",  // message namespace
  "PointArray",  // message name
  1,  // number of fields
  sizeof(aruco_detection_interfaces__msg__PointArray),
  aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_member_array,  // message members
  aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_type_support_handle = {
  0,
  &aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_detection_interfaces, msg, PointArray)() {
  aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_detection_interfaces, msg, Point)();
  if (!aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_type_support_handle.typesupport_identifier) {
    aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_detection_interfaces__msg__PointArray__rosidl_typesupport_introspection_c__PointArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
