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

// GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager
struct GameObjectPoolManager_t3946188246;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.Pool.PoolData>
struct List_1_t1751204214;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Phoenix.View.Pool.GameObjectPool
struct GameObjectPool_t2519041363;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AssetBundle2054978754.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Pool_Game2519041363.h"

// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::.ctor()
extern "C"  void GameObjectPoolManager__ctor_m3381168138 (GameObjectPoolManager_t3946188246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::Awake()
extern "C"  void GameObjectPoolManager_Awake_m1783254923 (GameObjectPoolManager_t3946188246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::InitAsync(System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.Pool.PoolData>,System.Action)
extern "C"  void GameObjectPoolManager_InitAsync_m511444702 (GameObjectPoolManager_t3946188246 * __this, List_1_t1751204214 * ___pools0, Action_t3226471752 * ___completeCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::AddPool(System.String,System.Int32,UnityEngine.AssetBundle)
extern "C"  void GameObjectPoolManager_AddPool_m2993167547 (GameObjectPoolManager_t3946188246 * __this, String_t* ___resourceName0, int32_t ___initialSize1, AssetBundle_t2054978754 * ___bundle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::AddPool(System.String,System.Int32)
extern "C"  void GameObjectPoolManager_AddPool_m4258104894 (GameObjectPoolManager_t3946188246 * __this, String_t* ___resourceName0, int32_t ___initialSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::AddPool(UnityEngine.GameObject,System.Int32)
extern "C"  void GameObjectPoolManager_AddPool_m2856075464 (GameObjectPoolManager_t3946188246 * __this, GameObject_t1756533147 * ___templateObj0, int32_t ___initialSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::AddPoolAsync(System.String,System.Int32)
extern "C"  Il2CppObject * GameObjectPoolManager_AddPoolAsync_m3662317562 (GameObjectPoolManager_t3946188246 * __this, String_t* ___resourceName0, int32_t ___initialSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::GetObject(System.String,System.String)
extern "C"  GameObject_t1756533147 * GameObjectPoolManager_GetObject_m1550163106 (GameObjectPoolManager_t3946188246 * __this, String_t* ___resourceName0, String_t* ___assetBundleName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::InternalInitAsync(System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.Pool.PoolData>,System.Action)
extern "C"  Il2CppObject * GameObjectPoolManager_InternalInitAsync_m3616561729 (GameObjectPoolManager_t3946188246 * __this, List_1_t1751204214 * ___pools0, Action_t3226471752 * ___completeCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::InternalAddPool(System.String,System.String,GSN.Skill.Phoenix.View.Pool.GameObjectPool)
extern "C"  void GameObjectPoolManager_InternalAddPool_m1817823544 (GameObjectPoolManager_t3946188246 * __this, String_t* ___assetBundleName0, String_t* ___resourceName1, GameObjectPool_t2519041363 * ___gameObjPool2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::PoolExists(System.String,System.String)
extern "C"  bool GameObjectPoolManager_PoolExists_m1203219174 (GameObjectPoolManager_t3946188246 * __this, String_t* ___resourceName0, String_t* ___bundleName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::get_IsAppQuitting()
extern "C"  bool GameObjectPoolManager_get_IsAppQuitting_m3561801077 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::set_IsAppQuitting(System.Boolean)
extern "C"  void GameObjectPoolManager_set_IsAppQuitting_m755322160 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::OnApplicationQuit()
extern "C"  void GameObjectPoolManager_OnApplicationQuit_m2403998380 (GameObjectPoolManager_t3946188246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
