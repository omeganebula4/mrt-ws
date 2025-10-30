// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pos_control_interfaces:action/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__FUNCTIONS_H_
#define POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pos_control_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pos_control_interfaces/action/detail/trajectory__struct.h"

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_Goal
 * )) before or use
 * pos_control_interfaces__action__Trajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Goal__init(pos_control_interfaces__action__Trajectory_Goal * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Goal__fini(pos_control_interfaces__action__Trajectory_Goal * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_Goal *
pos_control_interfaces__action__Trajectory_Goal__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Goal__destroy(pos_control_interfaces__action__Trajectory_Goal * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Goal__are_equal(const pos_control_interfaces__action__Trajectory_Goal * lhs, const pos_control_interfaces__action__Trajectory_Goal * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Goal__copy(
  const pos_control_interfaces__action__Trajectory_Goal * input,
  pos_control_interfaces__action__Trajectory_Goal * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Goal__Sequence__init(pos_control_interfaces__action__Trajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Goal__Sequence__fini(pos_control_interfaces__action__Trajectory_Goal__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_Goal__Sequence *
pos_control_interfaces__action__Trajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Goal__Sequence__destroy(pos_control_interfaces__action__Trajectory_Goal__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Goal__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_Goal__Sequence * lhs, const pos_control_interfaces__action__Trajectory_Goal__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Goal__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_Goal__Sequence * input,
  pos_control_interfaces__action__Trajectory_Goal__Sequence * output);

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_Result
 * )) before or use
 * pos_control_interfaces__action__Trajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Result__init(pos_control_interfaces__action__Trajectory_Result * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Result__fini(pos_control_interfaces__action__Trajectory_Result * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_Result *
pos_control_interfaces__action__Trajectory_Result__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Result__destroy(pos_control_interfaces__action__Trajectory_Result * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Result__are_equal(const pos_control_interfaces__action__Trajectory_Result * lhs, const pos_control_interfaces__action__Trajectory_Result * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Result__copy(
  const pos_control_interfaces__action__Trajectory_Result * input,
  pos_control_interfaces__action__Trajectory_Result * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Result__Sequence__init(pos_control_interfaces__action__Trajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Result__Sequence__fini(pos_control_interfaces__action__Trajectory_Result__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_Result__Sequence *
pos_control_interfaces__action__Trajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Result__Sequence__destroy(pos_control_interfaces__action__Trajectory_Result__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Result__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_Result__Sequence * lhs, const pos_control_interfaces__action__Trajectory_Result__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Result__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_Result__Sequence * input,
  pos_control_interfaces__action__Trajectory_Result__Sequence * output);

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_Feedback
 * )) before or use
 * pos_control_interfaces__action__Trajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Feedback__init(pos_control_interfaces__action__Trajectory_Feedback * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Feedback__fini(pos_control_interfaces__action__Trajectory_Feedback * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_Feedback *
pos_control_interfaces__action__Trajectory_Feedback__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Feedback__destroy(pos_control_interfaces__action__Trajectory_Feedback * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Feedback__are_equal(const pos_control_interfaces__action__Trajectory_Feedback * lhs, const pos_control_interfaces__action__Trajectory_Feedback * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Feedback__copy(
  const pos_control_interfaces__action__Trajectory_Feedback * input,
  pos_control_interfaces__action__Trajectory_Feedback * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Feedback__Sequence__init(pos_control_interfaces__action__Trajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Feedback__Sequence__fini(pos_control_interfaces__action__Trajectory_Feedback__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_Feedback__Sequence *
pos_control_interfaces__action__Trajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_Feedback__Sequence__destroy(pos_control_interfaces__action__Trajectory_Feedback__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Feedback__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_Feedback__Sequence * lhs, const pos_control_interfaces__action__Trajectory_Feedback__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_Feedback__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_Feedback__Sequence * input,
  pos_control_interfaces__action__Trajectory_Feedback__Sequence * output);

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_SendGoal_Request
 * )) before or use
 * pos_control_interfaces__action__Trajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Request__init(pos_control_interfaces__action__Trajectory_SendGoal_Request * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Request__fini(pos_control_interfaces__action__Trajectory_SendGoal_Request * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_SendGoal_Request *
pos_control_interfaces__action__Trajectory_SendGoal_Request__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Request__destroy(pos_control_interfaces__action__Trajectory_SendGoal_Request * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Request__are_equal(const pos_control_interfaces__action__Trajectory_SendGoal_Request * lhs, const pos_control_interfaces__action__Trajectory_SendGoal_Request * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Request__copy(
  const pos_control_interfaces__action__Trajectory_SendGoal_Request * input,
  pos_control_interfaces__action__Trajectory_SendGoal_Request * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__init(pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__fini(pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence *
pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__destroy(pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence * lhs, const pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence * input,
  pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence * output);

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_SendGoal_Response
 * )) before or use
 * pos_control_interfaces__action__Trajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Response__init(pos_control_interfaces__action__Trajectory_SendGoal_Response * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Response__fini(pos_control_interfaces__action__Trajectory_SendGoal_Response * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_SendGoal_Response *
pos_control_interfaces__action__Trajectory_SendGoal_Response__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Response__destroy(pos_control_interfaces__action__Trajectory_SendGoal_Response * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Response__are_equal(const pos_control_interfaces__action__Trajectory_SendGoal_Response * lhs, const pos_control_interfaces__action__Trajectory_SendGoal_Response * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Response__copy(
  const pos_control_interfaces__action__Trajectory_SendGoal_Response * input,
  pos_control_interfaces__action__Trajectory_SendGoal_Response * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__init(pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__fini(pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence *
pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__destroy(pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence * lhs, const pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence * input,
  pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence * output);

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_GetResult_Request
 * )) before or use
 * pos_control_interfaces__action__Trajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Request__init(pos_control_interfaces__action__Trajectory_GetResult_Request * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Request__fini(pos_control_interfaces__action__Trajectory_GetResult_Request * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_GetResult_Request *
pos_control_interfaces__action__Trajectory_GetResult_Request__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Request__destroy(pos_control_interfaces__action__Trajectory_GetResult_Request * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Request__are_equal(const pos_control_interfaces__action__Trajectory_GetResult_Request * lhs, const pos_control_interfaces__action__Trajectory_GetResult_Request * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Request__copy(
  const pos_control_interfaces__action__Trajectory_GetResult_Request * input,
  pos_control_interfaces__action__Trajectory_GetResult_Request * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__init(pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__fini(pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence *
pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__destroy(pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence * lhs, const pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence * input,
  pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence * output);

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_GetResult_Response
 * )) before or use
 * pos_control_interfaces__action__Trajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Response__init(pos_control_interfaces__action__Trajectory_GetResult_Response * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Response__fini(pos_control_interfaces__action__Trajectory_GetResult_Response * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_GetResult_Response *
pos_control_interfaces__action__Trajectory_GetResult_Response__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Response__destroy(pos_control_interfaces__action__Trajectory_GetResult_Response * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Response__are_equal(const pos_control_interfaces__action__Trajectory_GetResult_Response * lhs, const pos_control_interfaces__action__Trajectory_GetResult_Response * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Response__copy(
  const pos_control_interfaces__action__Trajectory_GetResult_Response * input,
  pos_control_interfaces__action__Trajectory_GetResult_Response * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__init(pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__fini(pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence *
pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__destroy(pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence * lhs, const pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence * input,
  pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence * output);

/// Initialize action/Trajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pos_control_interfaces__action__Trajectory_FeedbackMessage
 * )) before or use
 * pos_control_interfaces__action__Trajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_FeedbackMessage__init(pos_control_interfaces__action__Trajectory_FeedbackMessage * msg);

/// Finalize action/Trajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_FeedbackMessage__fini(pos_control_interfaces__action__Trajectory_FeedbackMessage * msg);

/// Create action/Trajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pos_control_interfaces__action__Trajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_FeedbackMessage *
pos_control_interfaces__action__Trajectory_FeedbackMessage__create();

/// Destroy action/Trajectory message.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_FeedbackMessage__destroy(pos_control_interfaces__action__Trajectory_FeedbackMessage * msg);

/// Check for action/Trajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_FeedbackMessage__are_equal(const pos_control_interfaces__action__Trajectory_FeedbackMessage * lhs, const pos_control_interfaces__action__Trajectory_FeedbackMessage * rhs);

/// Copy a action/Trajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_FeedbackMessage__copy(
  const pos_control_interfaces__action__Trajectory_FeedbackMessage * input,
  pos_control_interfaces__action__Trajectory_FeedbackMessage * output);

/// Initialize array of action/Trajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * pos_control_interfaces__action__Trajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__init(pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__fini(pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence * array);

/// Create array of action/Trajectory messages.
/**
 * It allocates the memory for the array and calls
 * pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence *
pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Trajectory messages.
/**
 * It calls
 * pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
void
pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__destroy(pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence * array);

/// Check for action/Trajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__are_equal(const pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence * lhs, const pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Trajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pos_control_interfaces
bool
pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence__copy(
  const pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence * input,
  pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__FUNCTIONS_H_
