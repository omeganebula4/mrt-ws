// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interfaces:msg/UserCommand.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__USER_COMMAND__STRUCT_H_
#define MSG_INTERFACES__MSG__DETAIL__USER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UserCommand in the package msg_interfaces.
typedef struct msg_interfaces__msg__UserCommand
{
  double x;
  double y;
  double z;
  bool sys_check;
  bool reset;
} msg_interfaces__msg__UserCommand;

// Struct for a sequence of msg_interfaces__msg__UserCommand.
typedef struct msg_interfaces__msg__UserCommand__Sequence
{
  msg_interfaces__msg__UserCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interfaces__msg__UserCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACES__MSG__DETAIL__USER_COMMAND__STRUCT_H_
