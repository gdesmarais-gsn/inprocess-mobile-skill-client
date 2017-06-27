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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void SceneActivator::ActivateScene(UnityEngine.GameObject,System.Boolean)
extern "C"  void SceneActivator_ActivateScene_m1227995954 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, bool ___active1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneActivator::ActivateScene(UnityEngine.Transform,System.Boolean)
extern "C"  void SceneActivator_ActivateScene_m681559019 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, bool ___active1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneActivator::ActivateSceneInternal(UnityEngine.Transform,System.Boolean)
extern "C"  void SceneActivator_ActivateSceneInternal_m3369779400 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, bool ___active1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneActivator::Replace(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void SceneActivator_Replace_m406077068 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___from0, Camera_t189460977 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
