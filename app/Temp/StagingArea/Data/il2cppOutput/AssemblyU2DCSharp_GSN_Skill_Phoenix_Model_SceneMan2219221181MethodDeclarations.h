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

// GSN.Skill.Phoenix.Model.SceneManager
struct SceneManager_t2219221181;
// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.SceneLoadType,GSN.Skill.Phoenix.Model.LoadFlows.ISceneLoad>
struct Dictionary_2_t4053688042;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PhoenixSce23563331.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_SceneLoa2121333282.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"

// System.Void GSN.Skill.Phoenix.Model.SceneManager::.ctor()
extern "C"  void SceneManager__ctor_m1141353259 (SceneManager_t2219221181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::Init(System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.SceneLoadType,GSN.Skill.Phoenix.Model.LoadFlows.ISceneLoad>)
extern "C"  void SceneManager_Init_m801486764 (SceneManager_t2219221181 * __this, Dictionary_2_t4053688042 * ___sceneLoads0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.PhoenixScene GSN.Skill.Phoenix.Model.SceneManager::get_currentScene()
extern "C"  int32_t SceneManager_get_currentScene_m901447836 (SceneManager_t2219221181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::set_currentScene(GSN.Skill.Phoenix.Model.PhoenixScene)
extern "C"  void SceneManager_set_currentScene_m4106414479 (SceneManager_t2219221181 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::LoadScene(GSN.Skill.Phoenix.Model.SceneLoadType,System.Boolean)
extern "C"  void SceneManager_LoadScene_m1171819745 (SceneManager_t2219221181 * __this, int32_t ___sceneLoadType0, bool ___force1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::FinishLoadScene()
extern "C"  void SceneManager_FinishLoadScene_m1555209480 (SceneManager_t2219221181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::LoadSceneAsyncAdditive(GSN.Skill.Phoenix.Model.PhoenixScene,System.Action`1<System.Single>,System.Action)
extern "C"  void SceneManager_LoadSceneAsyncAdditive_m3947213243 (SceneManager_t2219221181 * __this, int32_t ___scene0, Action_1_t1878309314 * ___progressCallback1, Action_t3226471752 * ___completeCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::LoadSceneAsyncAdditive(System.String,System.Action`1<System.Single>,System.Action)
extern "C"  void SceneManager_LoadSceneAsyncAdditive_m895469851 (SceneManager_t2219221181 * __this, String_t* ___sceneName0, Action_1_t1878309314 * ___progressCallback1, Action_t3226471752 * ___completeCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::HandleSceneLoad(GSN.Skill.Phoenix.Model.SceneLoadType,System.Boolean)
extern "C"  void SceneManager_HandleSceneLoad_m2701228975 (SceneManager_t2219221181 * __this, int32_t ___sceneLoadType0, bool ___force1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager::LoadScene(GSN.Skill.Phoenix.Model.PhoenixScene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m1178858636 (SceneManager_t2219221181 * __this, int32_t ___scene0, int32_t ___loadSceneMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.Model.SceneManager::InternalLoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<System.Single>,System.Action)
extern "C"  Il2CppObject * SceneManager_InternalLoadSceneAsync_m639434547 (SceneManager_t2219221181 * __this, String_t* ___sceneName0, int32_t ___loadSceneMode1, Action_1_t1878309314 * ___progressCallback2, Action_t3226471752 * ___completeCallback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.SceneManager::GetSceneName(GSN.Skill.Phoenix.Model.PhoenixScene)
extern "C"  String_t* SceneManager_GetSceneName_m6498763 (SceneManager_t2219221181 * __this, int32_t ___scene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
