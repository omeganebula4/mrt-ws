// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_detection_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__STRUCT_HPP_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aruco_detection_interfaces__msg__Point __attribute__((deprecated))
#else
# define DEPRECATED__aruco_detection_interfaces__msg__Point __declspec(deprecated)
#endif

namespace aruco_detection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Point_
{
  using Type = Point_<ContainerAllocator>;

  explicit Point_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 2>::iterator, float>(this->coords.begin(), this->coords.end(), 0.0f);
    }
  }

  explicit Point_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coords(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 2>::iterator, float>(this->coords.begin(), this->coords.end(), 0.0f);
    }
  }

  // field types and members
  using _coords_type =
    std::array<float, 2>;
  _coords_type coords;

  // setters for named parameter idiom
  Type & set__coords(
    const std::array<float, 2> & _arg)
  {
    this->coords = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_detection_interfaces::msg::Point_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_detection_interfaces::msg::Point_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::msg::Point_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::msg::Point_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_detection_interfaces__msg__Point
    std::shared_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_detection_interfaces__msg__Point
    std::shared_ptr<aruco_detection_interfaces::msg::Point_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Point_ & other) const
  {
    if (this->coords != other.coords) {
      return false;
    }
    return true;
  }
  bool operator!=(const Point_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Point_

// alias to use template instance with default allocator
using Point =
  aruco_detection_interfaces::msg::Point_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_detection_interfaces

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__STRUCT_HPP_
