// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_detection_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_HPP_
#define ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_HPP_

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
# define DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Request __declspec(deprecated)
#endif

namespace aruco_detection_interfaces
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
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
      this->imgorvid = false;
      this->frame = 0;
    }
  }

  explicit ProcessImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_alloc, _init),
    path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
      this->imgorvid = false;
      this->frame = 0;
    }
  }

  // field types and members
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;
  using _imgorvid_type =
    bool;
  _imgorvid_type imgorvid;
  using _frame_type =
    uint16_t;
  _frame_type frame;

  // setters for named parameter idiom
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__imgorvid(
    const bool & _arg)
  {
    this->imgorvid = _arg;
    return *this;
  }
  Type & set__frame(
    const uint16_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Request
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Request
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessImage_Request_ & other) const
  {
    if (this->img != other.img) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->imgorvid != other.imgorvid) {
      return false;
    }
    if (this->frame != other.frame) {
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
  aruco_detection_interfaces::srv::ProcessImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_detection_interfaces


// Include directives for member types
// Member 'imgbounds'
#include "aruco_detection_interfaces/msg/detail/image_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Response __declspec(deprecated)
#endif

namespace aruco_detection_interfaces
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
    aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator>;
  _imgbounds_type imgbounds;

  // setters for named parameter idiom
  Type & set__imgbounds(
    const aruco_detection_interfaces::msg::ImageBounds_<ContainerAllocator> & _arg)
  {
    this->imgbounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Response
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_detection_interfaces__srv__ProcessImage_Response
    std::shared_ptr<aruco_detection_interfaces::srv::ProcessImage_Response_<ContainerAllocator> const>
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
  aruco_detection_interfaces::srv::ProcessImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_detection_interfaces

namespace aruco_detection_interfaces
{

namespace srv
{

struct ProcessImage
{
  using Request = aruco_detection_interfaces::srv::ProcessImage_Request;
  using Response = aruco_detection_interfaces::srv::ProcessImage_Response;
};

}  // namespace srv

}  // namespace aruco_detection_interfaces

#endif  // ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_HPP_
