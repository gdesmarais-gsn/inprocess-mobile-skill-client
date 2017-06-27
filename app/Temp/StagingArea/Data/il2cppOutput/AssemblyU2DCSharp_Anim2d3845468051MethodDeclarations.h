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

// Anim2d
struct Anim2d_t3845468051;
// AnimLayer2d[]
struct AnimLayer2dU5BU5D_t2435474137;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<BezierPatchGrid>
struct List_1_t3502065515;
// AnimState2d
struct AnimState2d_t3361730764;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void Anim2d::.ctor()
extern "C"  void Anim2d__ctor_m4157040834 (Anim2d_t3845468051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AnimLayer2d[] Anim2d::GetLayersProxy()
extern "C"  AnimLayer2dU5BU5D_t2435474137* Anim2d_GetLayersProxy_m2761536123 (Anim2d_t3845468051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::SetOffsetMatrix(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  void Anim2d_SetOffsetMatrix_m2098801470 (Anim2d_t3845468051 * __this, Matrix4x4_t2933234003  ___mPos0, Matrix4x4_t2933234003  ___mScale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::Awake()
extern "C"  void Anim2d_Awake_m490828415 (Anim2d_t3845468051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::GatherChildGridsNotInSubRenderers(UnityEngine.Transform,System.Collections.Generic.List`1<BezierPatchGrid>)
extern "C"  void Anim2d_GatherChildGridsNotInSubRenderers_m334199676 (Anim2d_t3845468051 * __this, Transform_t3275118058 * ___t0, List_1_t3502065515 * ___grids1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Anim2d::CustomUpdate(System.Single,System.Boolean)
extern "C"  bool Anim2d_CustomUpdate_m860464172 (Anim2d_t3845468051 * __this, float ___deltaTime0, bool ___forceNoEnd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::StepUpdate(System.Single)
extern "C"  void Anim2d_StepUpdate_m2629724232 (Anim2d_t3845468051 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AnimState2d Anim2d::Play(System.Int32,System.Single,System.Single)
extern "C"  AnimState2d_t3361730764 * Anim2d_Play_m929531822 (Anim2d_t3845468051 * __this, int32_t ___layerIndex0, float ___blendTime1, float ___skipTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::Abort()
extern "C"  void Anim2d_Abort_m119960208 (Anim2d_t3845468051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::Stop()
extern "C"  void Anim2d_Stop_m3170370260 (Anim2d_t3845468051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::Reset(System.Int32)
extern "C"  void Anim2d_Reset_m4281775048 (Anim2d_t3845468051 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2d::ResetInternal(System.Int32,System.Single)
extern "C"  void Anim2d_ResetInternal_m1786309746 (Anim2d_t3845468051 * __this, int32_t ___layerIndex0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Anim2d::GetDuration(System.Int32,System.Single,System.Single)
extern "C"  float Anim2d_GetDuration_m480574841 (Anim2d_t3845468051 * __this, int32_t ___layerIndex0, float ___blendTime1, float ___skipTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
