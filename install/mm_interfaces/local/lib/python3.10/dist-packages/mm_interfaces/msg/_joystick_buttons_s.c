// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mm_interfaces/msg/detail/joystick_buttons__struct.h"
#include "mm_interfaces/msg/detail/joystick_buttons__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__msg__joystick_buttons__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mm_interfaces.msg._joystick_buttons.JoystickButtons", full_classname_dest, 51) == 0);
  }
  mm_interfaces__msg__JoystickButtons * ros_message = _ros_message;
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->a = (Py_True == field);
    Py_DECREF(field);
  }
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rtr
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rtr = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rg
    PyObject * field = PyObject_GetAttrString(_pymsg, "rg");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rg = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__msg__joystick_buttons__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JoystickButtons */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.msg._joystick_buttons");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JoystickButtons");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__msg__JoystickButtons * ros_message = (mm_interfaces__msg__JoystickButtons *)raw_ros_message;
  {  // a
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->a ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rtr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rg
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rg ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
