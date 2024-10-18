// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__ProcessImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__ProcessImage_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProcessImage_Request_
{
  using Type = ProcessImage_Request_<ContainerAllocator>;

  explicit ProcessImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    (void)_init;
  }

  explicit ProcessImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__ProcessImage_Request
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__ProcessImage_Request
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessImage_Request_ & other) const
  {
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessImage_Request_

// alias to use template instance with default allocator
using ProcessImage_Request =
  tutorial_interfaces::srv::ProcessImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces


// Include directives for member types
// Member 'imgbounds'
#include "tutorial_interfaces/msg/detail/image_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__ProcessImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__ProcessImage_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProcessImage_Response_
{
  using Type = ProcessImage_Response_<ContainerAllocator>;

  explicit ProcessImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imgbounds(_init)
  {
    (void)_init;
  }

  explicit ProcessImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imgbounds(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imgbounds_type =
    tutorial_interfaces::msg::ImageBounds_<ContainerAllocator>;
  _imgbounds_type imgbounds;

  // setters for named parameter idiom
  Type & set__imgbounds(
    const tutorial_interfaces::msg::ImageBounds_<ContainerAllocator> & _arg)
  {
    this->imgbounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__ProcessImage_Response
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__ProcessImage_Response
    std::shared_ptr<tutorial_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessImage_Response_ & other) const
  {
    if (this->imgbounds != other.imgbounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessImage_Response_

// alias to use template instance with default allocator
using ProcessImage_Response =
  tutorial_interfaces::srv::ProcessImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct ProcessImage
{
  using Request = tutorial_interfaces::srv::ProcessImage_Request;
  using Response = tutorial_interfaces::srv::ProcessImage_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_HPP_
