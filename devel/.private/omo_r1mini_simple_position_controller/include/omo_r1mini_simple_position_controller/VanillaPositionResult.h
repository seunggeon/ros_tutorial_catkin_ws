// Generated by gencpp from file omo_r1mini_simple_position_controller/VanillaPositionResult.msg
// DO NOT EDIT!


#ifndef OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONRESULT_H
#define OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONRESULT_H


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
struct VanillaPositionResult_
{
  typedef VanillaPositionResult_<ContainerAllocator> Type;

  VanillaPositionResult_()
    : x_result(0.0)
    , y_result(0.0)
    , theta_result(0.0)  {
    }
  VanillaPositionResult_(const ContainerAllocator& _alloc)
    : x_result(0.0)
    , y_result(0.0)
    , theta_result(0.0)  {
  (void)_alloc;
    }



   typedef float _x_result_type;
  _x_result_type x_result;

   typedef float _y_result_type;
  _y_result_type y_result;

   typedef float _theta_result_type;
  _theta_result_type theta_result;





  typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> const> ConstPtr;

}; // struct VanillaPositionResult_

typedef ::omo_r1mini_simple_position_controller::VanillaPositionResult_<std::allocator<void> > VanillaPositionResult;

typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionResult > VanillaPositionResultPtr;
typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionResult const> VanillaPositionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator1> & lhs, const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator2> & rhs)
{
  return lhs.x_result == rhs.x_result &&
    lhs.y_result == rhs.y_result &&
    lhs.theta_result == rhs.theta_result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator1> & lhs, const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace omo_r1mini_simple_position_controller

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43f67436b0054f56d2e5b2339aa76e1f";
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43f67436b0054f56ULL;
  static const uint64_t static_value2 = 0xd2e5b2339aa76e1fULL;
};

template<class ContainerAllocator>
struct DataType< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "omo_r1mini_simple_position_controller/VanillaPositionResult";
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"float32 x_result\n"
"float32 y_result\n"
"float32 theta_result\n"
;
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x_result);
      stream.next(m.y_result);
      stream.next(m.theta_result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VanillaPositionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::omo_r1mini_simple_position_controller::VanillaPositionResult_<ContainerAllocator>& v)
  {
    s << indent << "x_result: ";
    Printer<float>::stream(s, indent + "  ", v.x_result);
    s << indent << "y_result: ";
    Printer<float>::stream(s, indent + "  ", v.y_result);
    s << indent << "theta_result: ";
    Printer<float>::stream(s, indent + "  ", v.theta_result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONRESULT_H
