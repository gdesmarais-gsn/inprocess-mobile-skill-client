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

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "mscorlib_System_String2029220233.h"

// System.String Stm.V1_1.SceneHelper::FullPathName(UnityEngine.Transform)
extern "C"  String_t* SceneHelper_FullPathName_m3850316147 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.SceneHelper::GetSearchablePathName(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  String_t* SceneHelper_GetSearchablePathName_m3885572989 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, Transform_t3275118058 * ___root1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Stm.V1_1.SceneHelper::DuplicateInHierarchy(UnityEngine.Transform)
extern "C"  Transform_t3275118058 * SceneHelper_DuplicateInHierarchy_m1862640220 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___template0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.SceneHelper::IsObjectStaticallyPlaced(UnityEngine.GameObject)
extern "C"  bool SceneHelper_IsObjectStaticallyPlaced_m2020191230 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::EnableRenderersRecursively(UnityEngine.GameObject,System.Boolean)
extern "C"  void SceneHelper_EnableRenderersRecursively_m863224415 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, bool ___on1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::EnableRenderersRecursively(UnityEngine.Component,System.Boolean)
extern "C"  void SceneHelper_EnableRenderersRecursively_m766520043 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___c0, bool ___on1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::ToggleRenderersRecursively(UnityEngine.Component)
extern "C"  void SceneHelper_ToggleRenderersRecursively_m2411266147 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Stm.V1_1.SceneHelper::DuplicateOrReuseOnReloadGO(UnityEngine.GameObject,System.Boolean)
extern "C"  GameObject_t1756533147 * SceneHelper_DuplicateOrReuseOnReloadGO_m2757829128 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, bool ___isReloadingNow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::Immortalize(UnityEngine.GameObject)
extern "C"  void SceneHelper_Immortalize_m3386671463 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::Destroy(UnityEngine.Object,System.Single)
extern "C"  void SceneHelper_Destroy_m2765690425 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::Destroy(UnityEngine.Transform,System.Single)
extern "C"  void SceneHelper_Destroy_m930329066 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Stm.V1_1.SceneHelper::GetMainCamera(System.Int32,System.Boolean)
extern "C"  Camera_t189460977 * SceneHelper_GetMainCamera_m2434279211 (Il2CppObject * __this /* static, unused */, int32_t ___layerToRender0, bool ___allowWrongLayerFallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.SceneHelper::CameraCulls(UnityEngine.Camera,System.Int32)
extern "C"  bool SceneHelper_CameraCulls_m3088076139 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] Stm.V1_1.SceneHelper::GetAllObjectsInScene(System.String,System.Boolean,UnityEngine.GameObject[])
extern "C"  TransformU5BU5D_t3764228911* SceneHelper_GetAllObjectsInScene_m3688767713 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___onlyRoot1, GameObjectU5BU5D_t3057952154* ___allGameObjects2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] Stm.V1_1.SceneHelper::GetAllObjectsInScene_AutoCached(System.String,System.Boolean)
extern "C"  TransformU5BU5D_t3764228911* SceneHelper_GetAllObjectsInScene_AutoCached_m1570585947 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___onlyRoot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::ClearAutoCache()
extern "C"  void SceneHelper_ClearAutoCache_m3583942672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Stm.V1_1.SceneHelper::DoClearCacheAutoCache()
extern "C"  Il2CppObject * SceneHelper_DoClearCacheAutoCache_m3142723099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] Stm.V1_1.SceneHelper::FindGameObjectsByPath(System.String,UnityEngine.Transform[])
extern "C"  GameObjectU5BU5D_t3057952154* SceneHelper_FindGameObjectsByPath_m262856125 (Il2CppObject * __this /* static, unused */, String_t* ___gameObjectPath0, TransformU5BU5D_t3764228911* ___rootsToCheck1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::GatherChildrenByPath(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Transform,System.String[],System.Int32)
extern "C"  void SceneHelper_GatherChildrenByPath_m2137334452 (Il2CppObject * __this /* static, unused */, List_1_t1125654279 * ___list0, Transform_t3275118058 * ___t1, StringU5BU5D_t1642385972* ___paths2, int32_t ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C"  void SceneHelper_SetLayerRecursively_m1335241047 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::SetLayerRecursively(UnityEngine.Component,System.Int32)
extern "C"  void SceneHelper_SetLayerRecursively_m1096479763 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___obj0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.SceneHelper::StaticCleanup()
extern "C"  void SceneHelper_StaticCleanup_m4030699704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
