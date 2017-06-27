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

// GSN.Skill.Phoenix.Model.TournamentSignupManager
struct TournamentSignupManager_t2913170070;
// GSN.Skill.Phoenix.Model.ScreenManager
struct ScreenManager_t2047768743;
// GSN.Skill.Phoenix.Model.LocationManager
struct LocationManager_t2180792764;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.Data.DeviceData
struct DeviceData_t2224045298;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Model.Data.StoredConfigData
struct StoredConfigData_t3100406041;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ScreenMa2047768743.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Location2180792764.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Dev2224045298.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Sto3100406041.h"
#include "mscorlib_System_Decimal724701077.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Location2235240169.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_Categor886176045.h"

// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::.ctor(GSN.Skill.Phoenix.Model.ScreenManager,GSN.Skill.Phoenix.Model.LocationManager,GSN.Skill.Phoenix.Model.Data.CurrentUser,GSN.Skill.Phoenix.Model.Data.DeviceData,GSN.Skill.Phoenix.Model.Data.GameListData,GSN.Skill.Phoenix.Model.Data.StoredConfigData)
extern "C"  void TournamentSignupManager__ctor_m2509179450 (TournamentSignupManager_t2913170070 * __this, ScreenManager_t2047768743 * ___screenManager0, LocationManager_t2180792764 * ___locationManager1, CurrentUser_t3910039426 * ___currentUser2, DeviceData_t2224045298 * ___deviceData3, GameListData_t2961126766 * ___gameListData4, StoredConfigData_t3100406041 * ___storedConfigData5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::SignupForP1(System.Int32)
extern "C"  void TournamentSignupManager_SignupForP1_m3366942495 (TournamentSignupManager_t2913170070 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::TournamentSignup(System.Int32,System.Int32,System.Int32,System.Decimal,System.Decimal)
extern "C"  void TournamentSignupManager_TournamentSignup_m3021598138 (TournamentSignupManager_t2913170070 * __this, int32_t ___flavorID0, int32_t ___flavorTypeID1, int32_t ___gameID2, Decimal_t724701077  ___fee3, Decimal_t724701077  ___purseAmount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::ReEnterTournament(System.Int32,System.Int32,System.Int32,System.Int32,System.Decimal,System.Decimal)
extern "C"  void TournamentSignupManager_ReEnterTournament_m2790931596 (TournamentSignupManager_t2913170070 * __this, int32_t ___flavorID0, int32_t ___flavorTypeID1, int32_t ___tournID2, int32_t ___gameID3, Decimal_t724701077  ___fee4, Decimal_t724701077  ___purseAmount5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::EnterPreviouslyUnplayedTournament(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Decimal,System.Decimal)
extern "C"  void TournamentSignupManager_EnterPreviouslyUnplayedTournament_m1541711286 (TournamentSignupManager_t2913170070 * __this, int32_t ___flavorID0, int32_t ___flavorTypeID1, int32_t ___tournID2, int32_t ___unplayedGameID3, int32_t ___gameID4, Decimal_t724701077  ___fee5, Decimal_t724701077  ___purseAmount6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::WinItNow(System.Int32,System.Boolean,System.Decimal)
extern "C"  void TournamentSignupManager_WinItNow_m2776998331 (TournamentSignupManager_t2913170070 * __this, int32_t ___tournID0, bool ___accept1, Decimal_t724701077  ___fee2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnP1WebGameEnded(GSN.Skill.Events.IEvent)
extern "C"  void TournamentSignupManager_OnP1WebGameEnded_m1502971525 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnCompleteP1Success(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_OnCompleteP1Success_m1747663983 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::InternalTournamentSignup(System.Int32,System.Int32,System.Decimal)
extern "C"  void TournamentSignupManager_InternalTournamentSignup_m1153216110 (TournamentSignupManager_t2913170070 * __this, int32_t ___flavorID0, int32_t ___gameID1, Decimal_t724701077  ___fee2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::InternalReEnterTournament(System.Int32,System.Int32,System.Int32,System.Decimal)
extern "C"  void TournamentSignupManager_InternalReEnterTournament_m981060328 (TournamentSignupManager_t2913170070 * __this, int32_t ___flavorID0, int32_t ___tournID1, int32_t ___gameID2, Decimal_t724701077  ___fee3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::InternalEnterPreviouslyUnplayedTournament(System.Int32,System.Int32,System.Int32,System.Int32,System.Decimal)
extern "C"  void TournamentSignupManager_InternalEnterPreviouslyUnplayedTournament_m863994936 (TournamentSignupManager_t2913170070 * __this, int32_t ___flavorID0, int32_t ___tournID1, int32_t ___unplayedGameID2, int32_t ___gameID3, Decimal_t724701077  ___fee4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnValidateLocationFail(GSN.Skill.Phoenix.Model.LocationFailReason)
extern "C"  void TournamentSignupManager_OnValidateLocationFail_m3488661284 (TournamentSignupManager_t2913170070 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.TournamentSignupManager::InitTournSignupRequest(GSN.Skill.Requests.IWebRequest,System.Decimal)
extern "C"  bool TournamentSignupManager_InitTournSignupRequest_m928419776 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, Decimal_t724701077  ___fee1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::AddListeners(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_AddListeners_m2609069753 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.TournamentSignupManager::CheckAndHandleLowBalance(System.Decimal,GSN.Skill.Phoenix.Strings.CategoryTournament)
extern "C"  bool TournamentSignupManager_CheckAndHandleLowBalance_m184137316 (TournamentSignupManager_t2913170070 * __this, Decimal_t724701077  ___fee0, int32_t ___ErrorKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnTournListRequestSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_OnTournListRequestSuccess_m45344274 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnTournListRequestFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_OnTournListRequestFail_m3383935319 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnTournamentSignupSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_OnTournamentSignupSuccess_m294562020 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnTournamentSignupFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_OnTournamentSignupFail_m411056709 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnWinItNowSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_OnWinItNowSuccess_m2780667210 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.TournamentSignupManager::OnWinItNowFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSignupManager_OnWinItNowFail_m2036649105 (TournamentSignupManager_t2913170070 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
