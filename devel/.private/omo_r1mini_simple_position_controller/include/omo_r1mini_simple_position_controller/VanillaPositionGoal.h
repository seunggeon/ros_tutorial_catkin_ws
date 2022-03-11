// Generated by gencpp from file omo_r1mini_simple_position_controller/VanillaPositionGoal.msg
// DO NOT EDIT!


#ifndef OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONGOAL_H
#define OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONGOAL_H


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
struct VanillaPositionGoal_
{
  typedef VanillaPositionGoal_<ContainerAllocator> Type;

  VanillaPositionGoal_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }
  VanillaPositionGoal_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;





  typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct VanillaPositionGoal_

typedef ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<std::allocator<void> > VanillaPositionGoal;

typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionGoal > VanillaPositionGoalPtr;
typedef boost::shared_ptr< ::omo_r1mini_simple_position_controller::VanillaPositionGoal const> VanillaPositionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator1> & lhs, const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.theta == rhs.theta;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator1> & lhs, const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace omo_r1mini_simple_position_controller

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a130bc60ee6513855dc62ea83fcc5b20";
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa130bc60ee651385ULL;
  static const uint64_t static_value2 = 0x5dc62ea83fcc5b20ULL;
};

template<class ContainerAllocator>
struct DataType< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "omo_r1mini_simple_position_controller/VanillaPositionGoal";
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"float32 x\n"
"float32 y\n"
"float32 theta\n"
;
  }

  static const char* value(const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VanillaPositionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::omo_r1mini_simple_position_controller::VanillaPositionGoal_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OMO_R1MINI_SIMPLE_POSITION_CONTROLLER_MESSAGE_VANILLAPOSITIONGOAL_H
