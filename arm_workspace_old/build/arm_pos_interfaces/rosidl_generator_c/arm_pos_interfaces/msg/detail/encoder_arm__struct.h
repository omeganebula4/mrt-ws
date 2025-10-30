// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_pos_interfaces:msg/EncoderArm.idl
// generated code does not contain a copyright notice

#ifndef ARM_POS_INTERFACES__MSG__DETAIL__ENCODER_ARM__STRUCT_H_
#define ARM_POS_INTERFACES__MSG__DETAIL__ENCODER_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arm_node0'
// Member 'arm_node1'
// Member 'arm_node2'
// Member 'arm_node3'
// Member 'arm_node4'
// Member 'arm_node5'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EncoderArm in the package arm_pos_interfaces.
typedef struct arm_pos_interfaces__msg__EncoderArm
{
  rosidl_runtime_c__int64__Sequence arm_node0;
  rosidl_runtime_c__int64__Sequence arm_node1;
  rosidl_runtime_c__int64__Sequence arm_node2;
  rosidl_runtime_c__int64__Sequence arm_node3;
  rosidl_runtime_c__int64__Sequence arm_node4;
  rosidl_runtime_c__int64__Sequence arm_node5;
} arm_pos_interfaces__msg__EncoderArm;

// Struct for a sequence of arm_pos_interfaces__msg__EncoderArm.
typedef struct arm_pos_interfaces__msg__EncoderArm__Sequence
{
  arm_pos_interfaces__msg__EncoderArm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_pos_interfaces__msg__EncoderArm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_POS_INTERFACES__MSG__DETAIL__ENCODER_ARM__STRUCT_H_
