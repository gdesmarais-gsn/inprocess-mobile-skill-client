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

// GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad
struct StartupLoad_t3869443323;
// GSN.Skill.Phoenix.Model.SceneManager
struct SceneManager_t2219221181;
// GSN.Skill.Phoenix.Model.LoginFlowManager
struct LoginFlowManager_t3154992724;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_SceneMan2219221181.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_LoginFlo3154992724.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests3348797540.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_LoadFlows457383815.h"

// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::.ctor(GSN.Skill.Phoenix.Model.SceneManager,GSN.Skill.Phoenix.Model.LoginFlowManager)
extern "C"  void StartupLoad__ctor_m3317878443 (StartupLoad_t3869443323 * __this, SceneManager_t2219221181 * ___sceneManager0, LoginFlowManager_t3154992724 * ___loginFlowManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::Start()
extern "C"  void StartupLoad_Start_m103557192 (StartupLoad_t3869443323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnVersionCheckComplete(GSN.Skill.Events.IEvent)
extern "C"  void StartupLoad_OnVersionCheckComplete_m554851719 (StartupLoad_t3869443323 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::Finish()
extern "C"  void StartupLoad_Finish_m2065152435 (StartupLoad_t3869443323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnMainSceneProgress(System.Single)
extern "C"  void StartupLoad_OnMainSceneProgress_m3974384920 (StartupLoad_t3869443323 * __this, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnRequestsComplete(GSN.Skill.Requests.WebRequests)
extern "C"  void StartupLoad_OnRequestsComplete_m1842238883 (StartupLoad_t3869443323 * __this, WebRequests_t3348797540 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnRequestsFail(GSN.Skill.Requests.WebRequests)
extern "C"  void StartupLoad_OnRequestsFail_m1696220196 (StartupLoad_t3869443323 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnMainSceneLoaded()
extern "C"  void StartupLoad_OnMainSceneLoaded_m1344695935 (StartupLoad_t3869443323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnInitializePoolsComplete()
extern "C"  void StartupLoad_OnInitializePoolsComplete_m980547699 (StartupLoad_t3869443323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnAutoLoginComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void StartupLoad_OnAutoLoginComplete_m4198959599 (StartupLoad_t3869443323 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::ShowWelcomeScreen(GSN.Skill.Requests.IWebRequest)
extern "C"  void StartupLoad_ShowWelcomeScreen_m131530562 (StartupLoad_t3869443323 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::OnStepComplete()
extern "C"  void StartupLoad_OnStepComplete_m4249220370 (StartupLoad_t3869443323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::HasFlag(GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad/StartupGates,GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad/StartupGates)
extern "C"  bool StartupLoad_HasFlag_m999511960 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::SetFlag(GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad/StartupGates&,GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad/StartupGates)
extern "C"  void StartupLoad_SetFlag_m3903440676 (Il2CppObject * __this /* static, unused */, int32_t* ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::UnsetFlag(GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad/StartupGates&,GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad/StartupGates)
extern "C"  void StartupLoad_UnsetFlag_m2575579315 (Il2CppObject * __this /* static, unused */, int32_t* ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
