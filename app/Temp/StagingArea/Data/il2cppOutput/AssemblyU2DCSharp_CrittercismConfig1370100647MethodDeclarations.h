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

// CrittercismConfig
struct CrittercismConfig_t1370100647;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void CrittercismConfig::.ctor()
extern "C"  void CrittercismConfig__ctor_m131428740 (CrittercismConfig_t1370100647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject CrittercismConfig::GetAndroidConfig()
extern "C"  AndroidJavaObject_t4251328308 * CrittercismConfig_GetAndroidConfig_m3197162279 (CrittercismConfig_t1370100647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CrittercismConfig::GetCustomVersionName()
extern "C"  String_t* CrittercismConfig_GetCustomVersionName_m3660826455 (CrittercismConfig_t1370100647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismConfig::SetCustomVersionName(System.String)
extern "C"  void CrittercismConfig_SetCustomVersionName_m509596998 (CrittercismConfig_t1370100647 * __this, String_t* ___customVersionName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismConfig::IsLogcatReportingEnabled()
extern "C"  bool CrittercismConfig_IsLogcatReportingEnabled_m3370834513 (CrittercismConfig_t1370100647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismConfig::SetLogcatReportingEnabled(System.Boolean)
extern "C"  void CrittercismConfig_SetLogcatReportingEnabled_m910615340 (CrittercismConfig_t1370100647 * __this, bool ___shouldCollectLogcat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismConfig::IsServiceMonitoringEnabled()
extern "C"  bool CrittercismConfig_IsServiceMonitoringEnabled_m2968758014 (CrittercismConfig_t1370100647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismConfig::SetServiceMonitoringEnabled(System.Boolean)
extern "C"  void CrittercismConfig_SetServiceMonitoringEnabled_m2577515883 (CrittercismConfig_t1370100647 * __this, bool ___isServiceMonitoringEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismConfig::CallConfigMethod(System.String,System.Object[])
extern "C"  void CrittercismConfig_CallConfigMethod_m2423922207 (CrittercismConfig_t1370100647 * __this, String_t* ___methodName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
