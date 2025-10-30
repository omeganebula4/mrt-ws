// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arm_pos_interfaces:msg/ArmEndMotion.idl
// generated code does not contain a copyright notice

#ifndef ARM_POS_INTERFACES__MSG__DETAIL__ARM_END_MOTION__FUNCTIONS_H_
#define ARM_POS_INTERFACES__MSG__DETAIL__ARM_END_MOTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arm_pos_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "arm_pos_interfaces/msg/detail/arm_end_motion__struct.h"

/// Initialize msg/ArmEndMotion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arm_pos_interfaces__msg__ArmEndMotion
 * )) before or use
 * arm_pos_interfaces__msg__ArmEndMotion__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__ArmEndMotion__init(arm_pos_interfaces__msg__ArmEndMotion * msg);

/// Finalize msg/ArmEndMotion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__ArmEndMotion__fini(arm_pos_interfaces__msg__ArmEndMotion * msg);

/// Create msg/ArmEndMotion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arm_pos_interfaces__msg__ArmEndMotion__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
arm_pos_interfaces__msg__ArmEndMotion *
arm_pos_interfaces__msg__ArmEndMotion__create();

/// Destroy msg/ArmEndMotion message.
/**
 * It calls
 * arm_pos_interfaces__msg__ArmEndMotion__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__ArmEndMotion__destroy(arm_pos_interfaces__msg__ArmEndMotion * msg);

/// Check for msg/ArmEndMotion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__ArmEndMotion__are_equal(const arm_pos_interfaces__msg__ArmEndMotion * lhs, const arm_pos_interfaces__msg__ArmEndMotion * rhs);

/// Copy a msg/ArmEndMotion message.
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
arm_pos_interfaces__msg__ArmEndMotion__copy(
  const arm_pos_interfaces__msg__ArmEndMotion * input,
  arm_pos_interfaces__msg__ArmEndMotion * output);

/// Initialize array of msg/ArmEndMotion messages.
/**
 * It allocates the memory for the number of elements and calls
 * arm_pos_interfaces__msg__ArmEndMotion__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__ArmEndMotion__Sequence__init(arm_pos_interfaces__msg__ArmEndMotion__Sequence * array, size_t size);

/// Finalize array of msg/ArmEndMotion messages.
/**
 * It calls
 * arm_pos_interfaces__msg__ArmEndMotion__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__ArmEndMotion__Sequence__fini(arm_pos_interfaces__msg__ArmEndMotion__Sequence * array);

/// Create array of msg/ArmEndMotion messages.
/**
 * It allocates the memory for the array and calls
 * arm_pos_interfaces__msg__ArmEndMotion__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
arm_pos_interfaces__msg__ArmEndMotion__Sequence *
arm_pos_interfaces__msg__ArmEndMotion__Sequence__create(size_t size);

/// Destroy array of msg/ArmEndMotion messages.
/**
 * It calls
 * arm_pos_interfaces__msg__ArmEndMotion__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
void
arm_pos_interfaces__msg__ArmEndMotion__Sequence__destroy(arm_pos_interfaces__msg__ArmEndMotion__Sequence * array);

/// Check for msg/ArmEndMotion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_pos_interfaces
bool
arm_pos_interfaces__msg__ArmEndMotion__Sequence__are_equal(const arm_pos_interfaces__msg__ArmEndMotion__Sequence * lhs, const arm_pos_interfaces__msg__ArmEndMotion__Sequence * rhs);

/// Copy an array of msg/ArmEndMotion messages.
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
arm_pos_interfaces__msg__ArmEndMotion__Sequence__copy(
  const arm_pos_interfaces__msg__ArmEndMotion__Sequence * input,
  arm_pos_interfaces__msg__ArmEndMotion__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARM_POS_INTERFACES__MSG__DETAIL__ARM_END_MOTION__FUNCTIONS_H_
