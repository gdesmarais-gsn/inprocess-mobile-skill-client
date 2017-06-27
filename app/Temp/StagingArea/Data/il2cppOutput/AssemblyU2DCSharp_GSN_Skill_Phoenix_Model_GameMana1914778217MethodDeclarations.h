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

// GSN.Skill.Phoenix.Model.GameManager
struct GameManager_t1914778217;
// GSN.Skill.Phoenix.Model.MainModel
struct MainModel_t781558146;
// GSN.Skill.Phoenix.Model.SceneManager
struct SceneManager_t2219221181;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper
struct WebGameObjectWrapper_t3716051462;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// GSN.Skill.Phoenix.WebGameEndedEvent
struct WebGameEndedEvent_t13827838;
// GSN.Skill.Phoenix.WebGameErrorEvent
struct WebGameErrorEvent_t1371352812;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_MainModel781558146.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_SceneMan2219221181.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_WebObject_WebG3716051462.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ScreenTy4085852022.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_WebGameEndedEven13827838.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_WebGameErrorEv1371352812.h"

// System.Void GSN.Skill.Phoenix.Model.GameManager::.ctor()
extern "C"  void GameManager__ctor_m2530367167 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::Init(GSN.Skill.Phoenix.Model.MainModel,GSN.Skill.Phoenix.Model.SceneManager,GSN.Skill.Phoenix.Model.Data.CurrentUser,GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper)
extern "C"  void GameManager_Init_m3107174392 (GameManager_t1914778217 * __this, MainModel_t781558146 * ___model0, SceneManager_t2219221181 * ___sceneManager1, CurrentUser_t3910039426 * ___currentUser2, WebGameObjectWrapper_t3716051462 * ___webGame3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::RemoveListeners()
extern "C"  void GameManager_RemoveListeners_m482274072 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.ScreenType GSN.Skill.Phoenix.Model.GameManager::get_ReturningScreenType()
extern "C"  int32_t GameManager_get_ReturningScreenType_m3901683232 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::HandleCompletedGame()
extern "C"  void GameManager_HandleCompletedGame_m2310248156 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::Update()
extern "C"  void GameManager_Update_m604129460 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::HandlePhoenixDisconnect()
extern "C"  void GameManager_HandlePhoenixDisconnect_m198096958 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::OnBeginGame(GSN.Skill.Events.IEvent)
extern "C"  void GameManager_OnBeginGame_m2093199922 (GameManager_t1914778217 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::LoadNativeGame()
extern "C"  void GameManager_LoadNativeGame_m777813700 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::LoadWebGame()
extern "C"  void GameManager_LoadWebGame_m3548904235 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::OnWebGameError(GSN.Skill.Events.IEvent)
extern "C"  void GameManager_OnWebGameError_m3076940839 (GameManager_t1914778217 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::OnWebGameDisconnectShow(GSN.Skill.Events.IEvent)
extern "C"  void GameManager_OnWebGameDisconnectShow_m3894017910 (GameManager_t1914778217 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::OnWebGameDiscconectHide(GSN.Skill.Events.IEvent)
extern "C"  void GameManager_OnWebGameDiscconectHide_m2166030456 (GameManager_t1914778217 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::OnWebGameReady(GSN.Skill.Events.IEvent)
extern "C"  void GameManager_OnWebGameReady_m2211114792 (GameManager_t1914778217 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::OnWebGameComplete(GSN.Skill.Events.IEvent)
extern "C"  void GameManager_OnWebGameComplete_m1550128838 (GameManager_t1914778217 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::HandleWebGameComplete(GSN.Skill.Phoenix.WebGameEndedEvent)
extern "C"  void GameManager_HandleWebGameComplete_m1866889398 (GameManager_t1914778217 * __this, WebGameEndedEvent_t13827838 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::HandleWebGameError(GSN.Skill.Phoenix.WebGameErrorEvent)
extern "C"  void GameManager_HandleWebGameError_m3053089533 (GameManager_t1914778217 * __this, WebGameErrorEvent_t1371352812 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::<LoadNativeGame>m__0()
extern "C"  void GameManager_U3CLoadNativeGameU3Em__0_m1968730885 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.GameManager::<LoadNativeGame>m__1()
extern "C"  void GameManager_U3CLoadNativeGameU3Em__1_m1968730852 (GameManager_t1914778217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
