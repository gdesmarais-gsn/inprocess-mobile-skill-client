#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GSN.Skill.Phoenix.Model.Data.DeviceData
struct DeviceData_t2224045298;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Requests.Account.RegisterDeviceRequestData
struct RegisterDeviceRequestData_t2792337458;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou2792337458.h"

// System.Void GSN.Skill.Phoenix.Model.Data.DeviceData::.ctor()
extern "C"  void DeviceData__ctor_m3485495786 (DeviceData_t2224045298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.Data.DeviceData::get_clientID()
extern "C"  String_t* DeviceData_get_clientID_m2419669688 (DeviceData_t2224045298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.DeviceData::set_clientID(System.String)
extern "C"  void DeviceData_set_clientID_m1873010187 (DeviceData_t2224045298 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.DeviceData::OnDeviceDataSet(GSN.Skill.Phoenix.Requests.Account.RegisterDeviceRequestData)
extern "C"  void DeviceData_OnDeviceDataSet_m2750480700 (DeviceData_t2224045298 * __this, RegisterDeviceRequestData_t2792337458 * ___registerDeviceData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.DeviceData::OnClientIDSet(GSN.Skill.Events.IEvent)
extern "C"  void DeviceData_OnClientIDSet_m2396077904 (DeviceData_t2224045298 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
