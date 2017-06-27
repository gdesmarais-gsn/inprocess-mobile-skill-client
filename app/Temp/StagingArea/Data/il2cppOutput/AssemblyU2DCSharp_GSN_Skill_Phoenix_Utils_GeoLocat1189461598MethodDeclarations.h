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

// GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation
struct Geolocation_t1189461598;
// System.Action`2<System.String,GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser>
struct Action_2_t661119999;
// System.Action`1<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult>
struct Action_1_t871356513;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Utils_GeoLocat1069557131.h"
#include "UnityEngine_UnityEngine_LocationInfo1364725149.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::.ctor()
extern "C"  void Geolocation__ctor_m1035229052 (Geolocation_t1189461598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::Awake()
extern "C"  void Geolocation_Awake_m4136605365 (Geolocation_t1189461598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::GetLocation(System.Action`2<System.String,GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser>,System.Action`1<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult>)
extern "C"  void Geolocation_GetLocation_m3581794916 (Geolocation_t1189461598 * __this, Action_2_t661119999 * ___successCallback0, Action_1_t871356513 * ___failCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::OnApplicationPause(System.Boolean)
extern "C"  void Geolocation_OnApplicationPause_m1716702274 (Geolocation_t1189461598 * __this, bool ___pauseStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::CreateGeolocationMode()
extern "C"  void Geolocation_CreateGeolocationMode_m2893851247 (Geolocation_t1189461598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::HandleFailLocationResult(GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult)
extern "C"  void Geolocation_HandleFailLocationResult_m4176609298 (Geolocation_t1189461598 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::EndGetLocationAttempt(GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult)
extern "C"  void Geolocation_EndGetLocationAttempt_m3617564051 (Geolocation_t1189461598 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::StartLocationService()
extern "C"  void Geolocation_StartLocationService_m2442102236 (Geolocation_t1189461598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::GetLocationInfo()
extern "C"  Il2CppObject * Geolocation_GetLocationInfo_m2148700415 (Geolocation_t1189461598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::HandleGetLocationInfoFail(GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult)
extern "C"  Il2CppObject * Geolocation_HandleGetLocationInfoFail_m3292526061 (Geolocation_t1189461598 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::GeoCode(UnityEngine.LocationInfo)
extern "C"  void Geolocation_GeoCode_m399487136 (Geolocation_t1189461598 * __this, LocationInfo_t1364725149  ___locationInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::OnGeoCodeComplete(System.String)
extern "C"  void Geolocation_OnGeoCodeComplete_m2561081410 (Geolocation_t1189461598 * __this, String_t* ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::OnGeoCodeFail(GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult,System.String)
extern "C"  void Geolocation_OnGeoCodeFail_m3792454727 (Geolocation_t1189461598 * __this, int32_t ___reason0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::ReceivedLocation(System.String)
extern "C"  void Geolocation_ReceivedLocation_m3353637120 (Geolocation_t1189461598 * __this, String_t* ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::ReceivedLocationError(System.String)
extern "C"  void Geolocation_ReceivedLocationError_m3850700916 (Geolocation_t1189461598 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
