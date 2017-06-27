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

// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents
struct AnalyticsEvents_t2028915351;
// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction
struct SendEventFunction_t4048650273;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Model.AnalyticsAttributes
struct AnalyticsAttributes_t3724305597;
// System.Enum
struct Enum_t2459695545;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// System.String
struct String_t;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Ana4048650273.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Analytic3724305597.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Ana4005893319.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Ana3357929951.h"
#include "mscorlib_System_Enum2459695545.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_SceneLoa2121333282.h"

// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::.ctor(GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction,GSN.Skill.Phoenix.Model.Data.CurrentUser,GSN.Skill.Phoenix.Model.Data.GameListData)
extern "C"  void AnalyticsEvents__ctor_m2743978412 (AnalyticsEvents_t2028915351 * __this, SendEventFunction_t4048650273 * ___sendEvent0, CurrentUser_t3910039426 * ___currentUser1, GameListData_t2961126766 * ___gameList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::SetEventListeners()
extern "C"  void AnalyticsEvents_SetEventListeners_m3426249004 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::Send(GSN.Skill.Phoenix.Model.AnalyticsAttributes)
extern "C"  void AnalyticsEvents_Send_m2958116933 (AnalyticsEvents_t2028915351 * __this, AnalyticsAttributes_t3724305597 * ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.AnalyticsAttributes GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::SetMainAttributes(GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/Category,GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/Subcategory,System.Enum)
extern "C"  AnalyticsAttributes_t3724305597 * AnalyticsEvents_SetMainAttributes_m2269500658 (AnalyticsEvents_t2028915351 * __this, int32_t ___category0, int32_t ___subCategory1, Enum_t2459695545 * ___eventName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.AnalyticsAttributes GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::SetFunnelAttributes(GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/Category,GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/Subcategory,System.Enum)
extern "C"  AnalyticsAttributes_t3724305597 * AnalyticsEvents_SetFunnelAttributes_m2831343869 (AnalyticsEvents_t2028915351 * __this, int32_t ___category0, int32_t ___subCategory1, Enum_t2459695545 * ___eventName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::SetAdditionalAttributes(GSN.Skill.Phoenix.Model.AnalyticsAttributes)
extern "C"  void AnalyticsEvents_SetAdditionalAttributes_m2841546273 (AnalyticsEvents_t2028915351 * __this, AnalyticsAttributes_t3724305597 * ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnCashBalanceUpdate(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnCashBalanceUpdate_m1497611937 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnRewardPointsBalanceUpdate(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnRewardPointsBalanceUpdate_m3676261656 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnScreenChangeEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnScreenChangeEvent_m596872409 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::GetTopPopupModalName()
extern "C"  String_t* AnalyticsEvents_GetTopPopupModalName_m488542167 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnPopupEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnPopupEvent_m1120773601 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnPopupCloseEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnPopupCloseEvent_m1919184023 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnLoginClick()
extern "C"  void AnalyticsEvents_OnLoginClick_m349312657 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnRegistrationClick()
extern "C"  void AnalyticsEvents_OnRegistrationClick_m3514414379 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::SendAppInstallEvent()
extern "C"  void AnalyticsEvents_SendAppInstallEvent_m2739116417 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::KochavaAttributionListener(System.String)
extern "C"  void AnalyticsEvents_KochavaAttributionListener_m1188530885 (AnalyticsEvents_t2028915351 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnMakeDepositSuccessEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnMakeDepositSuccessEvent_m3922592812 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnWithdrawSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void AnalyticsEvents_OnWithdrawSuccess_m3948584434 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::SendAppLaunchedEvent()
extern "C"  void AnalyticsEvents_SendAppLaunchedEvent_m2141563904 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnRegistrationSubmit(GSN.Skill.Requests.IWebRequest)
extern "C"  void AnalyticsEvents_OnRegistrationSubmit_m3253619860 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnRegisterUserSuccess(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnRegisterUserSuccess_m3611181360 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnLoginSuccess(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnLoginSuccess_m3296378139 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::SendSessionStart()
extern "C"  void AnalyticsEvents_SendSessionStart_m2011545551 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnLogout(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnLogout_m1765462569 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnApplicationPause(System.Boolean)
extern "C"  void AnalyticsEvents_OnApplicationPause_m3742112095 (AnalyticsEvents_t2028915351 * __this, bool ___pauseStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnWebGameStart(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnWebGameStart_m306675089 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnWebGameEnd(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnWebGameEnd_m1133336394 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnTournamentSignupSuccessEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnTournamentSignupSuccessEvent_m2295711327 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnP1GameSelectedEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnP1GameSelectedEvent_m1147614449 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnSceneLoadComplete(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnSceneLoadComplete_m118142842 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnSceneLoadBegin(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnSceneLoadBegin_m4264850718 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnLoadScreenStart(GSN.Skill.Phoenix.Model.SceneLoadType)
extern "C"  void AnalyticsEvents_OnLoadScreenStart_m1455320347 (AnalyticsEvents_t2028915351 * __this, int32_t ___screen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnLoadScreenComplete(GSN.Skill.Phoenix.Model.SceneLoadType)
extern "C"  void AnalyticsEvents_OnLoadScreenComplete_m3291970174 (AnalyticsEvents_t2028915351 * __this, int32_t ___screen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnStartupLoadBegin()
extern "C"  void AnalyticsEvents_OnStartupLoadBegin_m1551424574 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnAtGameSelectScreen()
extern "C"  void AnalyticsEvents_OnAtGameSelectScreen_m4282985443 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnShowWelcomeScreenEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnShowWelcomeScreenEvent_m4005187930 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnFetchScreenBeginEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnFetchScreenBeginEvent_m1339613610 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnGameSelected()
extern "C"  void AnalyticsEvents_OnGameSelected_m1497275 (AnalyticsEvents_t2028915351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnLogErrorEvent(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnLogErrorEvent_m446858339 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::OnUserFacingError(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsEvents_OnUserFacingError_m2048751668 (AnalyticsEvents_t2028915351 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
