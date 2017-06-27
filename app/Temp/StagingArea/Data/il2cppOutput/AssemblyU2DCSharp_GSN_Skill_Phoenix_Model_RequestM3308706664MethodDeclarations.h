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

// GSN.Skill.Phoenix.Model.RequestManager/DeviceDataSet
struct DeviceDataSet_t3308706664;
// System.Object
struct Il2CppObject;
// GSN.Skill.Phoenix.Requests.Account.RegisterDeviceRequestData
struct RegisterDeviceRequestData_t2792337458;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou2792337458.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Phoenix.Model.RequestManager/DeviceDataSet::.ctor(System.Object,System.IntPtr)
extern "C"  void DeviceDataSet__ctor_m3287046017 (DeviceDataSet_t3308706664 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RequestManager/DeviceDataSet::Invoke(GSN.Skill.Phoenix.Requests.Account.RegisterDeviceRequestData)
extern "C"  void DeviceDataSet_Invoke_m3804551396 (DeviceDataSet_t3308706664 * __this, RegisterDeviceRequestData_t2792337458 * ___deviceData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Phoenix.Model.RequestManager/DeviceDataSet::BeginInvoke(GSN.Skill.Phoenix.Requests.Account.RegisterDeviceRequestData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeviceDataSet_BeginInvoke_m1001606377 (DeviceDataSet_t3308706664 * __this, RegisterDeviceRequestData_t2792337458 * ___deviceData0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RequestManager/DeviceDataSet::EndInvoke(System.IAsyncResult)
extern "C"  void DeviceDataSet_EndInvoke_m3589466983 (DeviceDataSet_t3308706664 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
