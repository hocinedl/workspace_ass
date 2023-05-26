// Generated by gencpp from file assignmentpackage/my_serviceRequest.msg
// DO NOT EDIT!


#ifndef ASSIGNMENTPACKAGE_MESSAGE_MY_SERVICEREQUEST_H
#define ASSIGNMENTPACKAGE_MESSAGE_MY_SERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace assignmentpackage
{
template <class ContainerAllocator>
struct my_serviceRequest_
{
  typedef my_serviceRequest_<ContainerAllocator> Type;

  my_serviceRequest_()
    {
    }
  my_serviceRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct my_serviceRequest_

typedef ::assignmentpackage::my_serviceRequest_<std::allocator<void> > my_serviceRequest;

typedef boost::shared_ptr< ::assignmentpackage::my_serviceRequest > my_serviceRequestPtr;
typedef boost::shared_ptr< ::assignmentpackage::my_serviceRequest const> my_serviceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::assignmentpackage::my_serviceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace assignmentpackage

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::assignmentpackage::my_serviceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "assignmentpackage/my_serviceRequest";
  }

  static const char* value(const ::assignmentpackage::my_serviceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::assignmentpackage::my_serviceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct my_serviceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::assignmentpackage::my_serviceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::assignmentpackage::my_serviceRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ASSIGNMENTPACKAGE_MESSAGE_MY_SERVICEREQUEST_H
