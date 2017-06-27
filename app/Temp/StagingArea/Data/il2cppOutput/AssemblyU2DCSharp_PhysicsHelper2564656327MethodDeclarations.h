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

// PhysicsHelper
struct PhysicsHelper_t2564656327;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void PhysicsHelper::.ctor()
extern "C"  void PhysicsHelper__ctor_m2506198064 (PhysicsHelper_t2564656327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PhysicsHelper::get_FixedTimeRatio()
extern "C"  float PhysicsHelper_get_FixedTimeRatio_m3592042999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhysicsHelper::DisableCollisionsBetweenObjects(UnityEngine.GameObject,UnityEngine.GameObject,System.Boolean)
extern "C"  void PhysicsHelper_DisableCollisionsBetweenObjects_m3335247920 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___objectA0, GameObject_t1756533147 * ___objectB1, bool ___disable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds PhysicsHelper::GetColliderBounds(UnityEngine.GameObject)
extern "C"  Bounds_t3033363703  PhysicsHelper_GetColliderBounds_m1801544594 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhysicsHelper::Raycast(UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool PhysicsHelper_Raycast_m3227495685 (Il2CppObject * __this /* static, unused */, Ray_t2469606224 * ___ray0, RaycastHit_t87180320 * ___hitInfo1, float ___distance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds PhysicsHelper::GetSimpleColliderLocalBounds(UnityEngine.Collider)
extern "C"  Bounds_t3033363703  PhysicsHelper_GetSimpleColliderLocalBounds_m2610457668 (Il2CppObject * __this /* static, unused */, Collider_t3497673348 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
