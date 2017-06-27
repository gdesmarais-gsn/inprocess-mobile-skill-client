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

// GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationAndroidMode
struct GeolocationAndroidMode_t1977984886;
// System.Action
struct Action_t3226471752;
// System.Action`1<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult>
struct Action_1_t871356513;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3499681863.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_LocationInfo1364725149.h"

// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationAndroidMode::.ctor()
extern "C"  void GeolocationAndroidMode__ctor_m1212057498 (GeolocationAndroidMode_t1977984886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationAndroidMode::CheckDeviceSettings(System.Action,System.Action`1<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult>)
extern "C"  void GeolocationAndroidMode_CheckDeviceSettings_m3504884314 (GeolocationAndroidMode_t1977984886 * __this, Action_t3226471752 * ___successCallback0, Action_1_t871356513 * ___failCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationAndroidMode::OpenSettings()
extern "C"  void GeolocationAndroidMode_OpenSettings_m1385579861 (GeolocationAndroidMode_t1977984886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData/GpsData GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationAndroidMode::ParseGpsData(System.String)
extern "C"  GpsData_t3499681863  GeolocationAndroidMode_ParseGpsData_m1516072213 (GeolocationAndroidMode_t1977984886 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationAndroidMode::HandleReverseGeolocation(UnityEngine.LocationInfo)
extern "C"  void GeolocationAndroidMode_HandleReverseGeolocation_m1410989402 (GeolocationAndroidMode_t1977984886 * __this, LocationInfo_t1364725149  ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
