// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_pos_interfaces:msg/ArmEndMotion.idl
// generated code does not contain a copyright notice

#ifndef ARM_POS_INTERFACES__MSG__DETAIL__ARM_END_MOTION__STRUCT_H_
#define ARM_POS_INTERFACES__MSG__DETAIL__ARM_END_MOTION__STRUCT_H_

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

/// Struct defined in msg/ArmEndMotion in the package arm_pos_interfaces.
typedef struct arm_pos_interfaces__msg__ArmEndMotion
{
  rosidl_runtime_c__int64__Sequence direction;
  rosidl_runtime_c__int64__Sequence speed;
  bool sys_check;
  bool reset;
} arm_pos_interfaces__msg__ArmEndMotion;

// Struct for a sequence of arm_pos_interfaces__msg__ArmEndMotion.
typedef struct arm_pos_interfaces__msg__ArmEndMotion__Sequence
{
  arm_pos_interfaces__msg__ArmEndMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_pos_interfaces__msg__ArmEndMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_POS_INTERFACES__MSG__DETAIL__ARM_END_MOTION__STRUCT_H_
