// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pos_control_interfaces:msg/ArmEndMotion.idl
// generated code does not contain a copyright notice

#ifndef POS_CONTROL_INTERFACES__MSG__DETAIL__ARM_END_MOTION__STRUCT_H_
#define POS_CONTROL_INTERFACES__MSG__DETAIL__ARM_END_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
// Member 'speed'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ArmEndMotion in the package pos_control_interfaces.
typedef struct pos_control_interfaces__msg__ArmEndMotion
{
  rosidl_runtime_c__int64__Sequence direction;
  rosidl_runtime_c__int64__Sequence speed;
  bool sys_check;
  bool reset;
} pos_control_interfaces__msg__ArmEndMotion;

// Struct for a sequence of pos_control_interfaces__msg__ArmEndMotion.
typedef struct pos_control_interfaces__msg__ArmEndMotion__Sequence
{
  pos_control_interfaces__msg__ArmEndMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__msg__ArmEndMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POS_CONTROL_INTERFACES__MSG__DETAIL__ARM_END_MOTION__STRUCT_H_
