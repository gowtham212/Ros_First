// Generated by gencpp from file basic/sensordata.msg
// DO NOT EDIT!


#ifndef BASIC_MESSAGE_SENSORDATA_H
#define BASIC_MESSAGE_SENSORDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace basic
{
template <class ContainerAllocator>
struct sensordata_
{
  typedef sensordata_<ContainerAllocator> Type;

  sensordata_()
    : d(0)
    , name()
    , temp(0.0)
    , hum(0.0)  {
    }
  sensordata_(const ContainerAllocator& _alloc)
    : d(0)
    , name(_alloc)
    , temp(0.0)
    , hum(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _d_type;
  _d_type d;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef float _temp_type;
  _temp_type temp;

   typedef float _hum_type;
  _hum_type hum;





  typedef boost::shared_ptr< ::basic::sensordata_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::basic::sensordata_<ContainerAllocator> const> ConstPtr;

}; // struct sensordata_

typedef ::basic::sensordata_<std::allocator<void> > sensordata;

typedef boost::shared_ptr< ::basic::sensordata > sensordataPtr;
typedef boost::shared_ptr< ::basic::sensordata const> sensordataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::basic::sensordata_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::basic::sensordata_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::basic::sensordata_<ContainerAllocator1> & lhs, const ::basic::sensordata_<ContainerAllocator2> & rhs)
{
  return lhs.d == rhs.d &&
    lhs.name == rhs.name &&
    lhs.temp == rhs.temp &&
    lhs.hum == rhs.hum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::basic::sensordata_<ContainerAllocator1> & lhs, const ::basic::sensordata_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace basic

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::basic::sensordata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::basic::sensordata_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic::sensordata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic::sensordata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic::sensordata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic::sensordata_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::basic::sensordata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae971ffc0dc298299f0004681564b4ef";
  }

  static const char* value(const ::basic::sensordata_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae971ffc0dc29829ULL;
  static const uint64_t static_value2 = 0x9f0004681564b4efULL;
};

template<class ContainerAllocator>
struct DataType< ::basic::sensordata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "basic/sensordata";
  }

  static const char* value(const ::basic::sensordata_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::basic::sensordata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 d\n"
"string name\n"
"float32 temp\n"
"float32 hum\n"
;
  }

  static const char* value(const ::basic::sensordata_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::basic::sensordata_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.d);
      stream.next(m.name);
      stream.next(m.temp);
      stream.next(m.hum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sensordata_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::basic::sensordata_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::basic::sensordata_<ContainerAllocator>& v)
  {
    s << indent << "d: ";
    Printer<int32_t>::stream(s, indent + "  ", v.d);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "temp: ";
    Printer<float>::stream(s, indent + "  ", v.temp);
    s << indent << "hum: ";
    Printer<float>::stream(s, indent + "  ", v.hum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASIC_MESSAGE_SENSORDATA_H
