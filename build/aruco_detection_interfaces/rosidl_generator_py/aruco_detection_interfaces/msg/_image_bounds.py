# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aruco_detection_interfaces:msg/ImageBounds.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImageBounds(type):
    """Metaclass of message 'ImageBounds'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aruco_detection_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aruco_detection_interfaces.msg.ImageBounds')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__image_bounds
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__image_bounds
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__image_bounds
            cls._TYPE_SUPPORT = module.type_support_msg__msg__image_bounds
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__image_bounds

            from aruco_detection_interfaces.msg import PointArray
            if PointArray.__class__._TYPE_SUPPORT is None:
                PointArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageBounds(metaclass=Metaclass_ImageBounds):
    """Message class 'ImageBounds'."""

    __slots__ = [
        '_ids',
        '_bounds',
    ]

    _fields_and_field_types = {
        'ids': 'sequence<uint64>',
        'bounds': 'sequence<aruco_detection_interfaces/PointArray>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aruco_detection_interfaces', 'msg'], 'PointArray')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ids = array.array('Q', kwargs.get('ids', []))
        self.bounds = kwargs.get('bounds', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ids != other.ids:
            return False
        if self.bounds != other.bounds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ids(self):
        """Message field 'ids'."""
        return self._ids

    @ids.setter
    def ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'ids' array.array() must have the type code of 'Q'"
            self._ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._ids = array.array('Q', value)

    @builtins.property
    def bounds(self):
        """Message field 'bounds'."""
        return self._bounds

    @bounds.setter
    def bounds(self, value):
        if __debug__:
            from aruco_detection_interfaces.msg import PointArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PointArray) for v in value) and
                 True), \
                "The 'bounds' field must be a set or sequence and each value of type 'PointArray'"
        self._bounds = value
