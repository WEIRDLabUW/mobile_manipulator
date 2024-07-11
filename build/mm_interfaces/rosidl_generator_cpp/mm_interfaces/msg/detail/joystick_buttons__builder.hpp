// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mm_interfaces/msg/detail/joystick_buttons__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_JoystickButtons_rg
{
public:
  explicit Init_JoystickButtons_rg(::mm_interfaces::msg::JoystickButtons & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::JoystickButtons rg(::mm_interfaces::msg::JoystickButtons::_rg_type arg)
  {
    msg_.rg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::JoystickButtons msg_;
};

class Init_JoystickButtons_rtr
{
public:
  explicit Init_JoystickButtons_rtr(::mm_interfaces::msg::JoystickButtons & msg)
  : msg_(msg)
  {}
  Init_JoystickButtons_rg rtr(::mm_interfaces::msg::JoystickButtons::_rtr_type arg)
  {
    msg_.rtr = std::move(arg);
    return Init_JoystickButtons_rg(msg_);
  }

private:
  ::mm_interfaces::msg::JoystickButtons msg_;
};

class Init_JoystickButtons_b
{
public:
  explicit Init_JoystickButtons_b(::mm_interfaces::msg::JoystickButtons & msg)
  : msg_(msg)
  {}
  Init_JoystickButtons_rtr b(::mm_interfaces::msg::JoystickButtons::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_JoystickButtons_rtr(msg_);
  }

private:
  ::mm_interfaces::msg::JoystickButtons msg_;
};

class Init_JoystickButtons_a
{
public:
  Init_JoystickButtons_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoystickButtons_b a(::mm_interfaces::msg::JoystickButtons::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_JoystickButtons_b(msg_);
  }

private:
  ::mm_interfaces::msg::JoystickButtons msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::JoystickButtons>()
{
  return mm_interfaces::msg::builder::Init_JoystickButtons_a();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__BUILDER_HPP_
