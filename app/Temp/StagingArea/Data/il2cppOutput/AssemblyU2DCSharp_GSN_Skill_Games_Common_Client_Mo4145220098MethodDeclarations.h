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

// GSN.Skill.Games.Common.Client.MonoBehaviourPool
struct MonoBehaviourPool_t4145220098;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GSN.Skill.Games.Common.Utils.IGsnPooledObject
struct IGsnPooledObject_t139234273;
// GSN.Skill.Games.Common.Client.PooledMonoBehaviour
struct PooledMonoBehaviour_t1962253443;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AssetBundle2054978754.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GSN.Skill.Games.Common.Client.MonoBehaviourPool::.ctor(UnityEngine.Transform,System.String,System.Int32,UnityEngine.AssetBundle)
extern "C"  void MonoBehaviourPool__ctor_m1752011956 (MonoBehaviourPool_t4145220098 * __this, Transform_t3275118058 * ___parent0, String_t* ___resourceName1, int32_t ___initialPoolSize2, AssetBundle_t2054978754 * ___bundle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.MonoBehaviourPool::.ctor(UnityEngine.Transform,System.Int32,UnityEngine.GameObject)
extern "C"  void MonoBehaviourPool__ctor_m2125415891 (MonoBehaviourPool_t4145220098 * __this, Transform_t3275118058 * ___parent0, int32_t ___initialPoolSize1, GameObject_t1756533147 * ___templateObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.MonoBehaviourPool::ClearScratchArray()
extern "C"  void MonoBehaviourPool_ClearScratchArray_m2779517045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.MonoBehaviourPool::Initialize(UnityEngine.Transform,System.Int32,UnityEngine.GameObject)
extern "C"  void MonoBehaviourPool_Initialize_m2049830031 (MonoBehaviourPool_t4145220098 * __this, Transform_t3275118058 * ___parent0, int32_t ___initialPoolSize1, GameObject_t1756533147 * ___templateObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IGsnPooledObject GSN.Skill.Games.Common.Client.MonoBehaviourPool::CreateObject()
extern "C"  Il2CppObject * MonoBehaviourPool_CreateObject_m903062486 (MonoBehaviourPool_t4145220098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.PooledMonoBehaviour GSN.Skill.Games.Common.Client.MonoBehaviourPool::getObject()
extern "C"  PooledMonoBehaviour_t1962253443 * MonoBehaviourPool_getObject_m2456633916 (MonoBehaviourPool_t4145220098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.MonoBehaviourPool::ReleaseObject(GSN.Skill.Games.Common.Utils.IGsnPooledObject)
extern "C"  void MonoBehaviourPool_ReleaseObject_m1239338498 (MonoBehaviourPool_t4145220098 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
