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

// Bridge
struct Bridge_t684972609;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void Bridge::.ctor()
extern "C"  void Bridge__ctor_m1730623164 (Bridge_t684972609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bridge::Awake()
extern "C"  void Bridge_Awake_m1098915281 (Bridge_t684972609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bridge::SetColliderDimensions()
extern "C"  void Bridge_SetColliderDimensions_m2583901827 (Bridge_t684972609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bridge::CanCollideWithLayer(UnityEngine.GameObject)
extern "C"  bool Bridge_CanCollideWithLayer_m2838118977 (Bridge_t684972609 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bridge::OnTagEnter(UnityEngine.Collider)
extern "C"  void Bridge_OnTagEnter_m1022297980 (Bridge_t684972609 * __this, Collider_t3497673348 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bridge::OnTagExit(UnityEngine.Collider)
extern "C"  void Bridge_OnTagExit_m4240131334 (Bridge_t684972609 * __this, Collider_t3497673348 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bridge::FixedUpdate()
extern "C"  void Bridge_FixedUpdate_m3711066855 (Bridge_t684972609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Bridge::GetInvisiblePlatform(System.Int32)
extern "C"  Transform_t3275118058 * Bridge_GetInvisiblePlatform_m2141468397 (Bridge_t684972609 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bridge::Update()
extern "C"  void Bridge_Update_m2763658573 (Bridge_t684972609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
