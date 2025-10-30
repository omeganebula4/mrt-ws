// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pos_control_interfaces:action/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__BUILDER_HPP_
#define POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pos_control_interfaces/action/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_Goal_command
{
public:
  Init_Trajectory_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pos_control_interfaces::action::Trajectory_Goal command(::pos_control_interfaces::action::Trajectory_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_Goal>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_Goal_command();
}

}  // namespace pos_control_interfaces


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_Result_success
{
public:
  Init_Trajectory_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pos_control_interfaces::action::Trajectory_Result success(::pos_control_interfaces::action::Trajectory_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_Result>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_Result_success();
}

}  // namespace pos_control_interfaces


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_Feedback_end_effector_pos
{
public:
  Init_Trajectory_Feedback_end_effector_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pos_control_interfaces::action::Trajectory_Feedback end_effector_pos(::pos_control_interfaces::action::Trajectory_Feedback::_end_effector_pos_type arg)
  {
    msg_.end_effector_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_Feedback>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_Feedback_end_effector_pos();
}

}  // namespace pos_control_interfaces


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_SendGoal_Request_goal
{
public:
  explicit Init_Trajectory_SendGoal_Request_goal(::pos_control_interfaces::action::Trajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pos_control_interfaces::action::Trajectory_SendGoal_Request goal(::pos_control_interfaces::action::Trajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_SendGoal_Request msg_;
};

class Init_Trajectory_SendGoal_Request_goal_id
{
public:
  Init_Trajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_SendGoal_Request_goal goal_id(::pos_control_interfaces::action::Trajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Trajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_SendGoal_Request>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_SendGoal_Request_goal_id();
}

}  // namespace pos_control_interfaces


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_SendGoal_Response_stamp
{
public:
  explicit Init_Trajectory_SendGoal_Response_stamp(::pos_control_interfaces::action::Trajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pos_control_interfaces::action::Trajectory_SendGoal_Response stamp(::pos_control_interfaces::action::Trajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_SendGoal_Response msg_;
};

class Init_Trajectory_SendGoal_Response_accepted
{
public:
  Init_Trajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_SendGoal_Response_stamp accepted(::pos_control_interfaces::action::Trajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Trajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_SendGoal_Response>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_SendGoal_Response_accepted();
}

}  // namespace pos_control_interfaces


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_GetResult_Request_goal_id
{
public:
  Init_Trajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pos_control_interfaces::action::Trajectory_GetResult_Request goal_id(::pos_control_interfaces::action::Trajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_GetResult_Request>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_GetResult_Request_goal_id();
}

}  // namespace pos_control_interfaces


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_GetResult_Response_result
{
public:
  explicit Init_Trajectory_GetResult_Response_result(::pos_control_interfaces::action::Trajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pos_control_interfaces::action::Trajectory_GetResult_Response result(::pos_control_interfaces::action::Trajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_GetResult_Response msg_;
};

class Init_Trajectory_GetResult_Response_status
{
public:
  Init_Trajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_GetResult_Response_result status(::pos_control_interfaces::action::Trajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Trajectory_GetResult_Response_result(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_GetResult_Response>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_GetResult_Response_status();
}

}  // namespace pos_control_interfaces


namespace pos_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Trajectory_FeedbackMessage_feedback
{
public:
  explicit Init_Trajectory_FeedbackMessage_feedback(::pos_control_interfaces::action::Trajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pos_control_interfaces::action::Trajectory_FeedbackMessage feedback(::pos_control_interfaces::action::Trajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_FeedbackMessage msg_;
};

class Init_Trajectory_FeedbackMessage_goal_id
{
public:
  Init_Trajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_FeedbackMessage_feedback goal_id(::pos_control_interfaces::action::Trajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Trajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::pos_control_interfaces::action::Trajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pos_control_interfaces::action::Trajectory_FeedbackMessage>()
{
  return pos_control_interfaces::action::builder::Init_Trajectory_FeedbackMessage_goal_id();
}

}  // namespace pos_control_interfaces

#endif  // POS_CONTROL_INTERFACES__ACTION__DETAIL__TRAJECTORY__BUILDER_HPP_
