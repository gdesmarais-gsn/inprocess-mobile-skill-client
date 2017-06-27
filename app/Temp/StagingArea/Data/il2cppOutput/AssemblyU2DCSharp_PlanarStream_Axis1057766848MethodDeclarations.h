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

// PlanarStream/Axis
struct Axis_t1057766848;
// PlanarStream/AxisDirection
struct AxisDirection_t4117240815;
// PlanarStream/SpawnInfo[]
struct SpawnInfoU5BU5D_t77013569;
// PlanarStream/StreamObject[]
struct StreamObjectU5BU5D_t2900140239;
// PlanarStream/StreamObject
struct StreamObject_t1307730122;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void PlanarStream/Axis::.ctor(UnityEngine.Vector2,System.Boolean)
extern "C"  void Axis__ctor_m538348412 (Axis_t1057766848 * __this, Vector2_t2243707579  ___directionVector0, bool ___initSecondary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlanarStream/AxisDirection PlanarStream/Axis::GetDirection(System.Int32)
extern "C"  AxisDirection_t4117240815 * Axis_GetDirection_m2119219003 (Axis_t1057766848 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::Clear()
extern "C"  void Axis_Clear_m4286708618 (Axis_t1057766848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::Add(PlanarStream/SpawnInfo[],PlanarStream/StreamObject[])
extern "C"  void Axis_Add_m2174618018 (Axis_t1057766848 * __this, SpawnInfoU5BU5D_t77013569* ___infos0, StreamObjectU5BU5D_t2900140239* ___streamObjects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::Update(System.Single,System.Single)
extern "C"  void Axis_Update_m1541320708 (Axis_t1057766848 * __this, float ___minCoord0, float ___maxCoord1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::Update(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Axis_Update_m4166889060 (Axis_t1057766848 * __this, Vector2_t2243707579  ___p00, Vector2_t2243707579  ___p11, Vector2_t2243707579  ___p22, Vector2_t2243707579  ___p33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::UpdateSecondary(System.Int32,System.Single,System.Single)
extern "C"  void Axis_UpdateSecondary_m2728589285 (Axis_t1057766848 * __this, int32_t ___i0, float ___minCoord1, float ___maxCoord2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::EnterAll()
extern "C"  void Axis_EnterAll_m2369188322 (Axis_t1057766848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::ExitAll()
extern "C"  void Axis_ExitAll_m579239088 (Axis_t1057766848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/Axis::EnforceAll()
extern "C"  void Axis_EnforceAll_m849008522 (Axis_t1057766848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlanarStream/StreamObject PlanarStream/Axis::FindStreamObject(UnityEngine.Transform)
extern "C"  StreamObject_t1307730122 * Axis_FindStreamObject_m914374225 (Axis_t1057766848 * __this, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
