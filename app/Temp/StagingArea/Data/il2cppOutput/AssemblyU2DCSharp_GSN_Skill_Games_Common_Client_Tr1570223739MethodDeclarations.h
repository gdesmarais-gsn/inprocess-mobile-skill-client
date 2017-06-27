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

// GSN.Skill.Games.Common.Client.TriPeaksWebEntry
struct TriPeaksWebEntry_t1570223739;
// GSN.Skill.Games.Common.Model.IDataSafePlugin
struct IDataSafePlugin_t3786836483;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JObject
struct JObject_t278519297;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se3113334386.h"
#include "Json_NET_Newtonsoft_Json_Linq_JObject278519297.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "System_Core_System_Action3226471752.h"

// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::.ctor()
extern "C"  void TriPeaksWebEntry__ctor_m37041836 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::Awake()
extern "C"  void TriPeaksWebEntry_Awake_m666041441 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::Start()
extern "C"  void TriPeaksWebEntry_Start_m865994804 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::Update()
extern "C"  void TriPeaksWebEntry_Update_m612661725 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Model.IDataSafePlugin GSN.Skill.Games.Common.Client.TriPeaksWebEntry::CreateDataSafePlugin(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * TriPeaksWebEntry_CreateDataSafePlugin_m2643479784 (TriPeaksWebEntry_t1570223739 * __this, Dictionary_2_t3943999495 * ___joinBody0, Dictionary_2_t3943999495 * ___joinRecord1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::ReceiveJoinData(System.String)
extern "C"  void TriPeaksWebEntry_ReceiveJoinData_m3557908331 (TriPeaksWebEntry_t1570223739 * __this, String_t* ___joinDataJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Session.GameSession/GameSetupOptions GSN.Skill.Games.Common.Client.TriPeaksWebEntry::SetupJoinDataFromJson(System.String)
extern "C"  GameSetupOptions_t3113334386  TriPeaksWebEntry_SetupJoinDataFromJson_m3110651258 (TriPeaksWebEntry_t1570223739 * __this, String_t* ___joinDataJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Session.GameSession/GameSetupOptions GSN.Skill.Games.Common.Client.TriPeaksWebEntry::SetupJoinDataFromJson(Newtonsoft.Json.Linq.JObject)
extern "C"  GameSetupOptions_t3113334386  TriPeaksWebEntry_SetupJoinDataFromJson_m2313872232 (TriPeaksWebEntry_t1570223739 * __this, JObject_t278519297 * ___jbody0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::JoinGameComplete(GSN.Skill.Games.Common.Client.Session.GameSession/GameSetupOptions)
extern "C"  void TriPeaksWebEntry_JoinGameComplete_m465665619 (TriPeaksWebEntry_t1570223739 * __this, GameSetupOptions_t3113334386  ___gameSetupOptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::LoadGameScene(GSN.Skill.Games.Common.Client.Session.GameSession/GameSetupOptions)
extern "C"  void TriPeaksWebEntry_LoadGameScene_m1737636884 (TriPeaksWebEntry_t1570223739 * __this, GameSetupOptions_t3113334386  ___gameSetupOptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.TriPeaksWebEntry::InternalLoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<System.Single>,System.Action)
extern "C"  Il2CppObject * TriPeaksWebEntry_InternalLoadSceneAsync_m124051566 (TriPeaksWebEntry_t1570223739 * __this, String_t* ___sceneName0, int32_t ___loadSceneMode1, Action_1_t1878309314 * ___progressCallback2, Action_t3226471752 * ___completeCallback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::OnGameSceneProgress(System.Single)
extern "C"  void TriPeaksWebEntry_OnGameSceneProgress_m3469040297 (TriPeaksWebEntry_t1570223739 * __this, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::OnGameSceneLoaded()
extern "C"  void TriPeaksWebEntry_OnGameSceneLoaded_m3752937708 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.TriPeaksWebEntry::getTitleName()
extern "C"  String_t* TriPeaksWebEntry_getTitleName_m4003377566 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.TriPeaksWebEntry::getModelHash()
extern "C"  String_t* TriPeaksWebEntry_getModelHash_m4052849930 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.TriPeaksWebEntry::ReturnFromGame()
extern "C"  void TriPeaksWebEntry_ReturnFromGame_m2660221850 (TriPeaksWebEntry_t1570223739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
