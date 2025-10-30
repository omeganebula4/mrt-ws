// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pos_control_interfaces:action/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__STRUCT_H_
#define POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_Goal
{
  std_msgs__msg__String command;
} pos_control_interfaces__action__Trajectory_Goal;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_Goal.
typedef struct pos_control_interfaces__action__Trajectory_Goal__Sequence
{
  pos_control_interfaces__action__Trajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_Result
{
  bool success;
} pos_control_interfaces__action__Trajectory_Result;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_Result.
typedef struct pos_control_interfaces__action__Trajectory_Result__Sequence
{
  pos_control_interfaces__action__Trajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'end_effector_pos'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_Feedback
{
  geometry_msgs__msg__Point end_effector_pos;
} pos_control_interfaces__action__Trajectory_Feedback;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_Feedback.
typedef struct pos_control_interfaces__action__Trajectory_Feedback__Sequence
{
  pos_control_interfaces__action__Trajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pos_control_interfaces/action/detail/trajectory__struct.h"

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pos_control_interfaces__action__Trajectory_Goal goal;
} pos_control_interfaces__action__Trajectory_SendGoal_Request;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_SendGoal_Request.
typedef struct pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence
{
  pos_control_interfaces__action__Trajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pos_control_interfaces__action__Trajectory_SendGoal_Response;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_SendGoal_Response.
typedef struct pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence
{
  pos_control_interfaces__action__Trajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pos_control_interfaces__action__Trajectory_GetResult_Request;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_GetResult_Request.
typedef struct pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence
{
  pos_control_interfaces__action__Trajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pos_control_interfaces/action/detail/trajectory__struct.h"

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_GetResult_Response
{
  int8_t status;
  pos_control_interfaces__action__Trajectory_Result result;
} pos_control_interfaces__action__Trajectory_GetResult_Response;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_GetResult_Response.
typedef struct pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence
{
  pos_control_interfaces__action__Trajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pos_control_interfaces/action/detail/trajectory__struct.h"

/// Struct defined in action/Trajectory in the package pos_control_interfaces.
typedef struct pos_control_interfaces__action__Trajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pos_control_interfaces__action__Trajectory_Feedback feedback;
} pos_control_interfaces__action__Trajectory_FeedbackMessage;

// Struct for a sequence of pos_control_interfaces__action__Trajectory_FeedbackMessage.
typedef struct pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence
{
  pos_control_interfaces__action__Trajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pos_control_interfaces__action__Trajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__STRUCT_H_
