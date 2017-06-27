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

// GSN.Skill.Phoenix.View.Pool.GameObjectPool
struct GameObjectPool_t2519041363;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Phoenix.View.Pool.IGsnPooledObject
struct IGsnPooledObject_t3995842541;
// GSN.Skill.Phoenix.View.Pool.PooledGameObject
struct PooledGameObject_t3748385124;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AssetBundle2054978754.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPool::.ctor()
extern "C"  void GameObjectPool__ctor_m1241790617 (GameObjectPool_t2519041363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPool::ClearScratchArray()
extern "C"  void GameObjectPool_ClearScratchArray_m2633508713 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPool::Init(UnityEngine.Transform,System.String,System.Int32,UnityEngine.AssetBundle)
extern "C"  void GameObjectPool_Init_m1200665178 (GameObjectPool_t2519041363 * __this, Transform_t3275118058 * ___parent0, String_t* ___resourceName1, int32_t ___initialPoolSize2, AssetBundle_t2054978754 * ___bundle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPool::Init(UnityEngine.Transform,System.Int32,UnityEngine.GameObject)
extern "C"  void GameObjectPool_Init_m4021481897 (GameObjectPool_t2519041363 * __this, Transform_t3275118058 * ___parent0, int32_t ___initialPoolSize1, GameObject_t1756533147 * ___templateObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.Pool.GameObjectPool::InitAsync(UnityEngine.Transform,System.String,System.Int32,UnityEngine.AssetBundle)
extern "C"  Il2CppObject * GameObjectPool_InitAsync_m3976989686 (GameObjectPool_t2519041363 * __this, Transform_t3275118058 * ___parent0, String_t* ___resourceName1, int32_t ___initialPoolSize2, AssetBundle_t2054978754 * ___bundle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPool::Initialize(UnityEngine.Transform,System.Int32,UnityEngine.GameObject)
extern "C"  void GameObjectPool_Initialize_m818292183 (GameObjectPool_t2519041363 * __this, Transform_t3275118058 * ___parent0, int32_t ___initialPoolSize1, GameObject_t1756533147 * ___templateObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.Pool.GameObjectPool::InitializeAsync(UnityEngine.Transform,System.Int32,UnityEngine.GameObject)
extern "C"  Il2CppObject * GameObjectPool_InitializeAsync_m3397132211 (GameObjectPool_t2519041363 * __this, Transform_t3275118058 * ___parent0, int32_t ___initialPoolSize1, GameObject_t1756533147 * ___templateObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.View.Pool.IGsnPooledObject GSN.Skill.Phoenix.View.Pool.GameObjectPool::CreateObject()
extern "C"  Il2CppObject * GameObjectPool_CreateObject_m2350081789 (GameObjectPool_t2519041363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.View.Pool.PooledGameObject GSN.Skill.Phoenix.View.Pool.GameObjectPool::GetObject()
extern "C"  PooledGameObject_t3748385124 * GameObjectPool_GetObject_m3136186196 (GameObjectPool_t2519041363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPool::ReleaseObject(GSN.Skill.Phoenix.View.Pool.IGsnPooledObject)
extern "C"  void GameObjectPool_ReleaseObject_m3505484751 (GameObjectPool_t2519041363 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.Pool.GameObjectPool::get_IsDestroyingObjects()
extern "C"  bool GameObjectPool_get_IsDestroyingObjects_m1564787360 (GameObjectPool_t2519041363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GameObjectPool::.cctor()
extern "C"  void GameObjectPool__cctor_m929129658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
