// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__STRUCT_HPP_
#define MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mm_interfaces__msg__JoystickButtons __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__msg__JoystickButtons __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoystickButtons_
{
  using Type = JoystickButtons_<ContainerAllocator>;

  explicit JoystickButtons_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = false;
      this->b = false;
      this->rtr = false;
      this->rg = false;
    }
  }

  explicit JoystickButtons_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = false;
      this->b = false;
      this->rtr = false;
      this->rg = false;
    }
  }

  // field types and members
  using _a_type =
    bool;
  _a_type a;
  using _b_type =
    bool;
  _b_type b;
  using _rtr_type =
    bool;
  _rtr_type rtr;
  using _rg_type =
    bool;
  _rg_type rg;

  // setters for named parameter idiom
  Type & set__a(
    const bool & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const bool & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__rtr(
    const bool & _arg)
  {
    this->rtr = _arg;
    return *this;
  }
  Type & set__rg(
    const bool & _arg)
  {
    this->rg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::msg::JoystickButtons_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::msg::JoystickButtons_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::JoystickButtons_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::JoystickButtons_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__msg__JoystickButtons
    std::shared_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__msg__JoystickButtons
    std::shared_ptr<mm_interfaces::msg::JoystickButtons_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoystickButtons_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->rtr != other.rtr) {
      return false;
    }
    if (this->rg != other.rg) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoystickButtons_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoystickButtons_

// alias to use template instance with default allocator
using JoystickButtons =
  mm_interfaces::msg::JoystickButtons_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__STRUCT_HPP_
