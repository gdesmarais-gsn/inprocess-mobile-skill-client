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

// PlanarStream
struct PlanarStream_t990221036;
// UnityEngine.Transform
struct Transform_t3275118058;
// PlanarStream/SpawnInfo[]
struct SpawnInfoU5BU5D_t77013569;
// PlanarStream/Axis
struct Axis_t1057766848;
// PlanarStream/StreamObject
struct StreamObject_t1307730122;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void PlanarStream::.ctor(UnityEngine.Transform)
extern "C"  void PlanarStream__ctor_m1607711528 (PlanarStream_t990221036 * __this, Transform_t3275118058 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::OnDestroy()
extern "C"  void PlanarStream_OnDestroy_m2614408914 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::Clear()
extern "C"  void PlanarStream_Clear_m1420357734 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::Add(PlanarStream/SpawnInfo[])
extern "C"  void PlanarStream_Add_m569656628 (PlanarStream_t990221036 * __this, SpawnInfoU5BU5D_t77013569* ___infos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::CacheUpdateValues()
extern "C"  void PlanarStream_CacheUpdateValues_m1289045114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds PlanarStream::GetWorldBoundsOfScreen(UnityEngine.Vector3)
extern "C"  Bounds_t3033363703  PlanarStream_GetWorldBoundsOfScreen_m2546861499 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___pointInPlane0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::UpdateByCamera()
extern "C"  void PlanarStream_UpdateByCamera_m1456492892 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::Update(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void PlanarStream_Update_m1659844072 (PlanarStream_t990221036 * __this, Vector2_t2243707579  ___bottomLeftPos0, Vector2_t2243707579  ___bottomRightPos1, Vector2_t2243707579  ___topLeftPos2, Vector2_t2243707579  ___topRightPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::UpdateAllSecondary(System.Int32,UnityEngine.Vector3,System.Single)
extern "C"  void PlanarStream_UpdateAllSecondary_m223463436 (Il2CppObject * __this /* static, unused */, int32_t ___index0, Vector3_t2243707580  ___pos1, float ___extent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::UpdateSecondary(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void PlanarStream_UpdateSecondary_m2604852537 (PlanarStream_t990221036 * __this, int32_t ___index0, float ___xMin1, float ___yMin2, float ___xMax3, float ___yMax4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::DespawnAll()
extern "C"  void PlanarStream_DespawnAll_m2047910998 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlanarStream::DisableAutomaticDespawn(UnityEngine.Transform,System.Boolean)
extern "C"  bool PlanarStream_DisableAutomaticDespawn_m2965481106 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, bool ___active1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::ReEnableAutomaticDespawn(UnityEngine.Transform,System.Boolean)
extern "C"  void PlanarStream_ReEnableAutomaticDespawn_m1228868446 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, bool ___reactivate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::CacheStreamObjectLookup(UnityEngine.Transform)
extern "C"  void PlanarStream_CacheStreamObjectLookup_m930881671 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::HidePlane(System.Boolean)
extern "C"  void PlanarStream_HidePlane_m3605179612 (PlanarStream_t990221036 * __this, bool ___hide0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlanarStream::RegisterVitalTransform(UnityEngine.Transform)
extern "C"  int32_t PlanarStream_RegisterVitalTransform_m1346907365 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlanarStream/Axis PlanarStream::GetAxis(System.Int32)
extern "C"  Axis_t1057766848 * PlanarStream_GetAxis_m4222580236 (PlanarStream_t990221036 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::EnterAll()
extern "C"  void PlanarStream_EnterAll_m3577336814 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::ExitAll()
extern "C"  void PlanarStream_ExitAll_m3715809556 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::EnforceAll()
extern "C"  void PlanarStream_EnforceAll_m4175340474 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlanarStream/StreamObject PlanarStream::FindStreamObject(UnityEngine.Transform)
extern "C"  StreamObject_t1307730122 * PlanarStream_FindStreamObject_m4035401065 (PlanarStream_t990221036 * __this, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlanarStream/StreamObject PlanarStream::GetOrFindAndCacheStreamObject(UnityEngine.Transform)
extern "C"  StreamObject_t1307730122 * PlanarStream_GetOrFindAndCacheStreamObject_m3446929805 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::StaticEnforceAll()
extern "C"  void PlanarStream_StaticEnforceAll_m1340991824 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::SetDisableDespawnTag(UnityEngine.Transform)
extern "C"  void PlanarStream_SetDisableDespawnTag_m4113237466 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::ClearDisableDespawnTag(UnityEngine.Transform,System.Boolean)
extern "C"  void PlanarStream_ClearDisableDespawnTag_m2260567794 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, bool ___allowEnforce1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlanarStream::GetDisableDespawnTag(UnityEngine.Transform)
extern "C"  bool PlanarStream_GetDisableDespawnTag_m734750628 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::PushStream()
extern "C"  void PlanarStream_PushStream_m1325054321 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream::PopStream()
extern "C"  void PlanarStream_PopStream_m1978550904 (PlanarStream_t990221036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
