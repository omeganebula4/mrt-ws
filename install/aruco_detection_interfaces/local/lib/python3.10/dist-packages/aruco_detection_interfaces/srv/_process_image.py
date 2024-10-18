# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aruco_detection_interfaces:srv/ProcessImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProcessImage_Request(type):
    """Metaclass of message 'ProcessImage_Request'."""

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
                'aruco_detection_interfaces.srv.ProcessImage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__process_image__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__process_image__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__process_image__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__process_image__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__process_image__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProcessImage_Request(metaclass=Metaclass_ProcessImage_Request):
    """Message class 'ProcessImage_Request'."""

    __slots__ = [
        '_img',
        '_path',
        '_imgorvid',
        '_frame',
    ]

    _fields_and_field_types = {
        'img': 'sensor_msgs/Image',
        'path': 'string',
        'imgorvid': 'boolean',
        'frame': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.img = kwargs.get('img', Image())
        self.path = kwargs.get('path', str())
        self.imgorvid = kwargs.get('imgorvid', bool())
        self.frame = kwargs.get('frame', int())

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
        if self.img != other.img:
            return False
        if self.path != other.path:
            return False
        if self.imgorvid != other.imgorvid:
            return False
        if self.frame != other.frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def img(self):
        """Message field 'img'."""
        return self._img

    @img.setter
    def img(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'img' field must be a sub message of type 'Image'"
        self._img = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'path' field must be of type 'str'"
        self._path = value

    @builtins.property
    def imgorvid(self):
        """Message field 'imgorvid'."""
        return self._imgorvid

    @imgorvid.setter
    def imgorvid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imgorvid' field must be of type 'bool'"
        self._imgorvid = value

    @builtins.property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'frame' field must be an unsigned integer in [0, 65535]"
        self._frame = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ProcessImage_Response(type):
    """Metaclass of message 'ProcessImage_Response'."""

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
                'aruco_detection_interfaces.srv.ProcessImage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__process_image__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__process_image__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__process_image__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__process_image__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__process_image__response

            from aruco_detection_interfaces.msg import ImageBounds
            if ImageBounds.__class__._TYPE_SUPPORT is None:
                ImageBounds.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProcessImage_Response(metaclass=Metaclass_ProcessImage_Response):
    """Message class 'ProcessImage_Response'."""

    __slots__ = [
        '_imgbounds',
    ]

    _fields_and_field_types = {
        'imgbounds': 'aruco_detection_interfaces/ImageBounds',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aruco_detection_interfaces', 'msg'], 'ImageBounds'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aruco_detection_interfaces.msg import ImageBounds
        self.imgbounds = kwargs.get('imgbounds', ImageBounds())

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
        if self.imgbounds != other.imgbounds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def imgbounds(self):
        """Message field 'imgbounds'."""
        return self._imgbounds

    @imgbounds.setter
    def imgbounds(self, value):
        if __debug__:
            from aruco_detection_interfaces.msg import ImageBounds
            assert \
                isinstance(value, ImageBounds), \
                "The 'imgbounds' field must be a sub message of type 'ImageBounds'"
        self._imgbounds = value


class Metaclass_ProcessImage(type):
    """Metaclass of service 'ProcessImage'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aruco_detection_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aruco_detection_interfaces.srv.ProcessImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__process_image

            from aruco_detection_interfaces.srv import _process_image
            if _process_image.Metaclass_ProcessImage_Request._TYPE_SUPPORT is None:
                _process_image.Metaclass_ProcessImage_Request.__import_type_support__()
            if _process_image.Metaclass_ProcessImage_Response._TYPE_SUPPORT is None:
                _process_image.Metaclass_ProcessImage_Response.__import_type_support__()


class ProcessImage(metaclass=Metaclass_ProcessImage):
    from aruco_detection_interfaces.srv._process_image import ProcessImage_Request as Request
    from aruco_detection_interfaces.srv._process_image import ProcessImage_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
