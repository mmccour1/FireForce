// Generated by gencpp from file localizer_dwm1001/Tag_srvResponse.msg
// DO NOT EDIT!


#ifndef LOCALIZER_DWM1001_MESSAGE_TAG_SRVRESPONSE_H
#define LOCALIZER_DWM1001_MESSAGE_TAG_SRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace localizer_dwm1001
{
template <class ContainerAllocator>
struct Tag_srvResponse_
{
  typedef Tag_srvResponse_<ContainerAllocator> Type;

  Tag_srvResponse_()
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Tag_srvResponse_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Tag_srvResponse_

typedef ::localizer_dwm1001::Tag_srvResponse_<std::allocator<void> > Tag_srvResponse;

typedef boost::shared_ptr< ::localizer_dwm1001::Tag_srvResponse > Tag_srvResponsePtr;
typedef boost::shared_ptr< ::localizer_dwm1001::Tag_srvResponse const> Tag_srvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator1> & lhs, const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator1> & lhs, const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace localizer_dwm1001

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a842b65f413084dULL;
  static const uint64_t static_value2 = 0xc2b10fb484ea7f17ULL;
};

template<class ContainerAllocator>
struct DataType< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "localizer_dwm1001/Tag_srvResponse";
  }

  static const char* value(const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Tag_srvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::localizer_dwm1001::Tag_srvResponse_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOCALIZER_DWM1001_MESSAGE_TAG_SRVRESPONSE_H
