// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_detection_interfaces:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_HPP_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rowpoints'
#include "aruco_detection_interfaces/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_detection_interfaces__msg__PointArray __attribute__((deprecated))
#else
# define DEPRECATED__aruco_detection_interfaces__msg__PointArray __declspec(deprecated)
#endif

namespace aruco_detection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointArray_
{
  using Type = PointArray_<ContainerAllocator>;

  explicit PointArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rowpoints.fill(aruco_detection_interfaces::msg::Point_<ContainerAllocator>{_init});
    }
  }

  explicit PointArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rowpoints(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rowpoints.fill(aruco_detection_interfaces::msg::Point_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _rowpoints_type =
    std::array<aruco_detection_interfaces::msg::Point_<ContainerAllocator>, 4>;
  _rowpoints_type rowpoints;

  // setters for named parameter idiom
  Type & set__rowpoints(
    const std::array<aruco_detection_interfaces::msg::Point_<ContainerAllocator>, 4> & _arg)
  {
    this->rowpoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_detection_interfaces::msg::PointArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_detection_interfaces::msg::PointArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_detection_interfaces__msg__PointArray
    std::shared_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_detection_interfaces__msg__PointArray
    std::shared_ptr<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointArray_ & other) const
  {
    if (this->rowpoints != other.rowpoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointArray_

// alias to use template instance with default allocator
using PointArray =
  aruco_detection_interfaces::msg::PointArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_detection_interfaces

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_HPP_
