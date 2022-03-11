// Generated by gencpp from file omo_r1mini_simple_position_controller/VanillaPositionFeedback.msg
// DO NOT EDIT!


#ifndef OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONFEEDBACK_H
#define OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace omo_r1mini_simple_position_controller
{
template <class ContainerAllocator>
struct VanillaPositionFeedback_
{
  typedef VanillaPositionFeedback_<ContainerAllocator> Type;

  VanillaPositionFeedback_()
    : error_s(0.0)
    , error_theta(0.0)  {
    }
  VanillaPositionFeedback_(const ContainerAllocator& _alloc)
    : error_s(0.0)
    , error_theta(0.0)  {
  (void)_alloc;
    }



   typedef float _error_s_type;
  _error_s_type error_s;

   typedef float _error_theta_type;
  _error_theta_type error_theta;





  typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct VanillaPositionFeedback_

typedef ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<std::allocator<void> > VanillaPositionFeedback;

typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback > VanillaPositionFeedbackPtr;
typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback const> VanillaPositionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator1> & lhs, const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.error_s == rhs.error_s &&
    lhs.error_theta == rhs.error_theta;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator1> & lhs, const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace omo_r1mini_simple_position_controller

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebf2815c907dad92c117d5e622ce530";
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbebf2815c907dad9ULL;
  static const uint64_t static_value2 = 0x2c117d5e622ce530ULL;
};

template<class ContainerAllocator>
struct DataType< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "omo_r1mini_simple_position_controller/VanillaPositionFeedback";
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"float32 error_s\n"
"float32 error_theta\n"
;
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error_s);
      stream.next(m.error_theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VanillaPositionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::omo_r1mini_simple_position_controller::VanillaPositionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "error_s: ";
    Printer<float>::stream(s, indent + "  ", v.error_s);
    s << indent << "error_theta: ";
    Printer<float>::stream(s, indent + "  ", v.error_theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONFEEDBACK_H
