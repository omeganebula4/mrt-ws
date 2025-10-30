// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arm_pos_interfaces:msg/EncoderArm.idl
// generated code does not contain a copyright notice

#ifndef ARM_POS_INTERFACES__MSG__DETAIL__ENCODER_ARM__FUNCTIONS_H_
#define ARM_POS_INTERFACES__MSG__DETAIL__ENCODER_ARM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arm_pos_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "arm_pos_interfaces/msg/detail/encoder_arm__struct.h"

/// Initialize msg/EncoderArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arm_pos_interfaces__msg__EncoderArm
 * )) before or use
 * arm_pos_interfaces__msg__EncoderArm__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__EncoderArm__init(arm_pos_interfaces__msg__EncoderArm * msg);

/// Finalize msg/EncoderArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__EncoderArm__fini(arm_pos_interfaces__msg__EncoderArm * msg);

/// Create msg/EncoderArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arm_pos_interfaces__msg__EncoderArm__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
arm_pos_interfaces__msg__EncoderArm *
arm_pos_interfaces__msg__EncoderArm__create();

/// Destroy msg/EncoderArm message.
/**
 * It calls
 * arm_pos_interfaces__msg__EncoderArm__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__EncoderArm__destroy(arm_pos_interfaces__msg__EncoderArm * msg);

/// Check for msg/EncoderArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__EncoderArm__are_equal(const arm_pos_interfaces__msg__EncoderArm * lhs, const arm_pos_interfaces__msg__EncoderArm * rhs);

/// Copy a msg/EncoderArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__EncoderArm__copy(
  const arm_pos_interfaces__msg__EncoderArm * input,
  arm_pos_interfaces__msg__EncoderArm * output);

/// Initialize array of msg/EncoderArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * arm_pos_interfaces__msg__EncoderArm__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__EncoderArm__Sequence__init(arm_pos_interfaces__msg__EncoderArm__Sequence * array, size_t size);

/// Finalize array of msg/EncoderArm messages.
/**
 * It calls
 * arm_pos_interfaces__msg__EncoderArm__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__EncoderArm__Sequence__fini(arm_pos_interfaces__msg__EncoderArm__Sequence * array);

/// Create array of msg/EncoderArm messages.
/**
 * It allocates the memory for the array and calls
 * arm_pos_interfaces__msg__EncoderArm__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
arm_pos_interfaces__msg__EncoderArm__Sequence *
arm_pos_interfaces__msg__EncoderArm__Sequence__create(size_t size);

/// Destroy array of msg/EncoderArm messages.
/**
 * It calls
 * arm_pos_interfaces__msg__EncoderArm__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__EncoderArm__Sequence__destroy(arm_pos_interfaces__msg__EncoderArm__Sequence * array);

/// Check for msg/EncoderArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__EncoderArm__Sequence__are_equal(const arm_pos_interfaces__msg__EncoderArm__Sequence * lhs, const arm_pos_interfaces__msg__EncoderArm__Sequence * rhs);

/// Copy an array of msg/EncoderArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__EncoderArm__Sequence__copy(
  const arm_pos_interfaces__msg__EncoderArm__Sequence * input,
  arm_pos_interfaces__msg__EncoderArm__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARM_POS_INTERFACES__MSG__DETAIL__ENCODER_ARM__FUNCTIONS_H_
