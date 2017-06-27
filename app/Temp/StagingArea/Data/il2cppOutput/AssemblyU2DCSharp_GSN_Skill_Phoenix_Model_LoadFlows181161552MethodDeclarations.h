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

// GSN.Skill.Phoenix.Model.LoadFlows.GameLoad
struct GameLoad_t181161552;
// GSN.Skill.Phoenix.Model.SceneManager
struct SceneManager_t2219221181;
// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_SceneMan2219221181.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_WebObject_WebOb631940280.h"

// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::.ctor(GSN.Skill.Phoenix.Model.SceneManager,GSN.Skill.Phoenix.WebObject.WebObjectWrapper)
extern "C"  void GameLoad__ctor_m4018248104 (GameLoad_t181161552 * __this, SceneManager_t2219221181 * ___sceneManager0, WebObjectWrapper_t631940280 * ___webGame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::Start()
extern "C"  void GameLoad_Start_m2877600099 (GameLoad_t181161552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::Finish()
extern "C"  void GameLoad_Finish_m2890445418 (GameLoad_t181161552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::Reset()
extern "C"  void GameLoad_Reset_m262181542 (GameLoad_t181161552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::OnSceneProgress(System.Single)
extern "C"  void GameLoad_OnSceneProgress_m947735394 (GameLoad_t181161552 * __this, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::OnNativeGameSceneLoad()
extern "C"  void GameLoad_OnNativeGameSceneLoad_m4009107889 (GameLoad_t181161552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::OnWebGameSceneLoad()
extern "C"  void GameLoad_OnWebGameSceneLoad_m1545494424 (GameLoad_t181161552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::OnWebGamePageLoaded(GSN.Skill.Events.IEvent)
extern "C"  void GameLoad_OnWebGamePageLoaded_m844905611 (GameLoad_t181161552 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::OnWebGameReady(GSN.Skill.Events.IEvent)
extern "C"  void GameLoad_OnWebGameReady_m841671888 (GameLoad_t181161552 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::OnGateComplete()
extern "C"  void GameLoad_OnGateComplete_m2869408192 (GameLoad_t181161552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
