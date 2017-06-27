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

// GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode
struct BaseGeolocationMode_t3275029440;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`2<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult,System.String>
struct Action_2_t2573286683;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LocationInfo1364725149.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::.ctor()
extern "C"  void BaseGeolocationMode__ctor_m1244851420 (BaseGeolocationMode_t3275029440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::ReverseGeolocation(UnityEngine.LocationInfo,System.Action`1<System.String>,System.Action`2<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult,System.String>)
extern "C"  void BaseGeolocationMode_ReverseGeolocation_m265553027 (BaseGeolocationMode_t3275029440 * __this, LocationInfo_t1364725149  ___location0, Action_1_t1831019615 * ___successCallback1, Action_2_t2573286683 * ___failCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::ReceivedLocation(System.String)
extern "C"  void BaseGeolocationMode_ReceivedLocation_m1636185212 (BaseGeolocationMode_t3275029440 * __this, String_t* ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::ReceivedLocationError(System.String)
extern "C"  void BaseGeolocationMode_ReceivedLocationError_m3239377244 (BaseGeolocationMode_t3275029440 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::NotifyLocationResult(System.Boolean,System.String)
extern "C"  void BaseGeolocationMode_NotifyLocationResult_m501009648 (BaseGeolocationMode_t3275029440 * __this, bool ___success0, String_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::IsLocationStale()
extern "C"  bool BaseGeolocationMode_IsLocationStale_m733829442 (BaseGeolocationMode_t3275029440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
