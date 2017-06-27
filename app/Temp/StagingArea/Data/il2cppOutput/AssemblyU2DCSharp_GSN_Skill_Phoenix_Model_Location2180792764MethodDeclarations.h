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

// GSN.Skill.Phoenix.Model.LocationManager
struct LocationManager_t2180792764;
// System.Action
struct Action_t3226471752;
// System.Action`1<GSN.Skill.Phoenix.Model.LocationFailReason>
struct Action_1_t2037039551;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser
struct GeolocationParser_t2750765603;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Utils_GeoLocat1069557131.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Utils_GeoLocat2750765603.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3579828208.h"

// System.Void GSN.Skill.Phoenix.Model.LocationManager::.ctor()
extern "C"  void LocationManager__ctor_m4242007092 (LocationManager_t2180792764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> GSN.Skill.Phoenix.Model.LocationManager::areCardGamesAllowed()
extern "C"  Nullable_1_t2088641033  LocationManager_areCardGamesAllowed_m3586169152 (LocationManager_t2180792764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> GSN.Skill.Phoenix.Model.LocationManager::areAllTournTypesAllowed()
extern "C"  Nullable_1_t2088641033  LocationManager_areAllTournTypesAllowed_m537018511 (LocationManager_t2180792764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LocationManager::ValidateLocation(System.Action,System.Action`1<GSN.Skill.Phoenix.Model.LocationFailReason>,System.Int32,System.Int32)
extern "C"  void LocationManager_ValidateLocation_m1993072128 (LocationManager_t2180792764 * __this, Action_t3226471752 * ___successCallback0, Action_1_t2037039551 * ___failCallback1, int32_t ___gameID2, int32_t ___flavorTypeID3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LocationManager::OnFailGetLocation(GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult)
extern "C"  void LocationManager_OnFailGetLocation_m2563080068 (LocationManager_t2180792764 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LocationManager::StartValidateLocation(System.String,GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser)
extern "C"  void LocationManager_StartValidateLocation_m3759287333 (LocationManager_t2180792764 * __this, String_t* ___location0, GeolocationParser_t2750765603 * ___geolocationParser1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LocationManager::OnStartValidateLocationFetchComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void LocationManager_OnStartValidateLocationFetchComplete_m1699974410 (LocationManager_t2180792764 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LocationManager::OnStartValidateLocationFetchFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void LocationManager_OnStartValidateLocationFetchFail_m3325412719 (LocationManager_t2180792764 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LocationManager::ValidateLocation(GSN.Skill.Phoenix.Requests.Account.LocationLegalityData)
extern "C"  void LocationManager_ValidateLocation_m94009894 (LocationManager_t2180792764 * __this, LocationLegalityData_t3579828208  ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LocationManager::<OnStartValidateLocationFetchFail>m__0()
extern "C"  void LocationManager_U3COnStartValidateLocationFetchFailU3Em__0_m3365632959 (LocationManager_t2180792764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
