// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_detection_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_HPP_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bounds'
#include "aruco_detection_interfaces/msg/detail/point_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_detection_interfaces__msg__ImageBounds __attribute__((deprecated))
#else
# define DEPRECATED__aruco_detection_interfaces__msg__ImageBounds __declspec(deprecated)
#endif

namespace aruco_detection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageBounds_
{
  using Type = ImageBounds_<ContainerAllocator>;

  explicit ImageBounds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bounds.fill(aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>{_init});
    }
  }

  explicit ImageBounds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounds(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bounds.fill(aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _ids_type ids;
  using _bounds_type =
    std::array<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>, 1000>;
  _bounds_type bounds;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__bounds(
    const std::array<aruco_detection_interfaces::msg::PointArray_<ContainerAllocator>, 1000> & _arg)
  {
    this->bounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_detection_interfaces__msg__ImageBounds
    std::shared_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_detection_interfaces__msg__ImageBounds
    std::shared_ptr<aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageBounds_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->bounds != other.bounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageBounds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageBounds_

// alias to use template instance with default allocator
using ImageBounds =
  aruco_detection_interfaces::msg::ImageBounds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_detection_interfaces

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_HPP_
