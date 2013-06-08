// -*- C++ -*-
/*!
 * @file  KinectToRanger.cpp
 * @brief Kinect and Ranger Data Translator
 * @date $Date$
 *
 * $Id$
 */

#include "KinectToRanger.h"

// Module specification
// <rtc-template block="module_spec">
static const char* kinecttoranger_spec[] =
  {
    "implementation_id", "KinectToRanger",
    "type_name",         "KinectToRanger",
    "description",       "Kinect and Ranger Data Translator",
    "version",           "1.0.0",
    "vendor",            "Sugar Sweet Robotics",
    "category",          "Translato",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
KinectToRanger::KinectToRanger(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_depthIn("depth", m_depth),
    m_rangeOut("range", m_range)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
KinectToRanger::~KinectToRanger()
{
}



RTC::ReturnCode_t KinectToRanger::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("depth", m_depthIn);
  
  // Set OutPort buffer
  addOutPort("range", m_rangeOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t KinectToRanger::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t KinectToRanger::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t KinectToRanger::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t KinectToRanger::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t KinectToRanger::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t KinectToRanger::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t KinectToRanger::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t KinectToRanger::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t KinectToRanger::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t KinectToRanger::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t KinectToRanger::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void KinectToRangerInit(RTC::Manager* manager)
  {
    coil::Properties profile(kinecttoranger_spec);
    manager->registerFactory(profile,
                             RTC::Create<KinectToRanger>,
                             RTC::Delete<KinectToRanger>);
  }
  
};


