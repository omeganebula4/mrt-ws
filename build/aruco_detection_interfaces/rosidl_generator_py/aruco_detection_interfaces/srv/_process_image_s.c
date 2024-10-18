// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aruco_detection_interfaces:srv/ProcessImage.idl
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
#include "aruco_detection_interfaces/srv/detail/process_image__struct.h"
#include "aruco_detection_interfaces/srv/detail/process_image__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aruco_detection_interfaces__srv__process_image__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("aruco_detection_interfaces.srv._process_image.ProcessImage_Request", full_classname_dest, 66) == 0);
  }
  aruco_detection_interfaces__srv__ProcessImage_Request * ros_message = _ros_message;
  {  // img
    PyObject * field = PyObject_GetAttrString(_pymsg, "img");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->img)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // path
    PyObject * field = PyObject_GetAttrString(_pymsg, "path");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->path, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // imgorvid
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgorvid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imgorvid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aruco_detection_interfaces__srv__process_image__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProcessImage_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aruco_detection_interfaces.srv._process_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProcessImage_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aruco_detection_interfaces__srv__ProcessImage_Request * ros_message = (aruco_detection_interfaces__srv__ProcessImage_Request *)raw_ros_message;
  {  // img
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->img);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "img", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->path.data,
      strlen(ros_message->path.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imgorvid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imgorvid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgorvid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "aruco_detection_interfaces/srv/detail/process_image__struct.h"
// already included above
// #include "aruco_detection_interfaces/srv/detail/process_image__functions.h"

bool aruco_detection_interfaces__msg__image_bounds__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aruco_detection_interfaces__msg__image_bounds__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aruco_detection_interfaces__srv__process_image__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("aruco_detection_interfaces.srv._process_image.ProcessImage_Response", full_classname_dest, 67) == 0);
  }
  aruco_detection_interfaces__srv__ProcessImage_Response * ros_message = _ros_message;
  {  // imgbounds
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgbounds");
    if (!field) {
      return false;
    }
    if (!aruco_detection_interfaces__msg__image_bounds__convert_from_py(field, &ros_message->imgbounds)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aruco_detection_interfaces__srv__process_image__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProcessImage_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aruco_detection_interfaces.srv._process_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProcessImage_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aruco_detection_interfaces__srv__ProcessImage_Response * ros_message = (aruco_detection_interfaces__srv__ProcessImage_Response *)raw_ros_message;
  {  // imgbounds
    PyObject * field = NULL;
    field = aruco_detection_interfaces__msg__image_bounds__convert_to_py(&ros_message->imgbounds);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgbounds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
