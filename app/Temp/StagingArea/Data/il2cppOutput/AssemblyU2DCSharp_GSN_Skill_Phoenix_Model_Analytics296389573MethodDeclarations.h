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

// GSN.Skill.Phoenix.Model.AnalyticsManager
struct AnalyticsManager_t296389573;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// GSN.Skill.Phoenix.Model.AnalyticsAttributes
struct AnalyticsAttributes_t3724305597;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Analytic3724305597.h"

// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::.ctor()
extern "C"  void AnalyticsManager__ctor_m2033766179 (AnalyticsManager_t296389573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::Init(GSN.Skill.Phoenix.Model.Data.CurrentUser,GSN.Skill.Phoenix.Model.Data.GameListData)
extern "C"  void AnalyticsManager_Init_m1213362317 (AnalyticsManager_t296389573 * __this, CurrentUser_t3910039426 * ___currentUser0, GameListData_t2961126766 * ___gameList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.Model.AnalyticsManager::EventSendingLoop()
extern "C"  Il2CppObject * AnalyticsManager_EventSendingLoop_m3263019361 (AnalyticsManager_t296389573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::GetDeviceToken()
extern "C"  void AnalyticsManager_GetDeviceToken_m2528156658 (AnalyticsManager_t296389573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::GetUserToken()
extern "C"  void AnalyticsManager_GetUserToken_m1150493311 (AnalyticsManager_t296389573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::OnFabricEventTokenComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void AnalyticsManager_OnFabricEventTokenComplete_m3440692090 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::OnFabricEventTokenFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void AnalyticsManager_OnFabricEventTokenFail_m4150048813 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::AddAnalyticsEvent(GSN.Skill.Phoenix.Model.AnalyticsAttributes)
extern "C"  void AnalyticsManager_AddAnalyticsEvent_m16500010 (AnalyticsManager_t296389573 * __this, AnalyticsAttributes_t3724305597 * ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::SendAnalyticsEvents()
extern "C"  void AnalyticsManager_SendAnalyticsEvents_m2721908730 (AnalyticsManager_t296389573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::UpdateEventQueue()
extern "C"  void AnalyticsManager_UpdateEventQueue_m529479867 (AnalyticsManager_t296389573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::OnFabricEventServiceComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void AnalyticsManager_OnFabricEventServiceComplete_m3148662132 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::OnFabricEventServiceFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void AnalyticsManager_OnFabricEventServiceFail_m3483137111 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::<Init>m__0(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsManager_U3CInitU3Em__0_m1157288789 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::<Init>m__1(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsManager_U3CInitU3Em__1_m4127626170 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::<Init>m__2(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsManager_U3CInitU3Em__2_m3916911903 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.AnalyticsManager::<Init>m__3(GSN.Skill.Events.IEvent)
extern "C"  void AnalyticsManager_U3CInitU3Em__3_m3347435652 (AnalyticsManager_t296389573 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
