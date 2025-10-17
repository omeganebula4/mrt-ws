// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from all_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "all_interfaces/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
#include "all_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "all_interfaces/msg/detail/waypoint__functions.h"
#include "all_interfaces/msg/detail/waypoint__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
// Member `t`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  all_interfaces__msg__Waypoint__init(message_memory);
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function(void * message_memory)
{
  all_interfaces__msg__Waypoint__fini(message_memory);
}

size_t all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__z(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__z(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__z(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__t(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__t(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__t(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__t(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__t(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__t(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__t(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__t(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(all_interfaces__msg__Waypoint, x),  // bytes offset in struct
    NULL,  // default value
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__x,  // size() function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__x,  // get_const(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__x,  // get(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__x,  // fetch(index, &value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__x,  // assign(index, value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(all_interfaces__msg__Waypoint, y),  // bytes offset in struct
    NULL,  // default value
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__y,  // size() function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__y,  // get_const(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__y,  // get(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__y,  // fetch(index, &value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__y,  // assign(index, value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__y  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(all_interfaces__msg__Waypoint, z),  // bytes offset in struct
    NULL,  // default value
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__z,  // size() function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__z,  // get_const(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__z,  // get(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__z,  // fetch(index, &value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__z,  // assign(index, value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__z  // resize(index) function pointer
  },
  {
    "t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(all_interfaces__msg__Waypoint, t),  // bytes offset in struct
    NULL,  // default value
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__t,  // size() function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__t,  // get_const(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__t,  // get(index) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__t,  // fetch(index, &value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__t,  // assign(index, value) function pointer
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__resize_function__Waypoint__t  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members = {
  "all_interfaces__msg",  // message namespace
  "Waypoint",  // message name
  4,  // number of fields
  sizeof(all_interfaces__msg__Waypoint),
  all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array,  // message members
  all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle = {
  0,
  &all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_all_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, all_interfaces, msg, Waypoint)() {
  if (!all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier) {
    all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &all_interfaces__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
