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

// PlanarStream/AxisDirection
struct AxisDirection_t4117240815;
// PlanarStream/SpawnInfo[]
struct SpawnInfoU5BU5D_t77013569;
// PlanarStream/StreamObject[]
struct StreamObjectU5BU5D_t2900140239;
// PlanarStream/AxisEntry[]
struct AxisEntryU5BU5D_t2077722733;
// PlanarStream/StreamObject
struct StreamObject_t1307730122;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_PlanarStream_AxisEntry2134574852.h"
#include "AssemblyU2DCSharp_PlanarStream_AxisDirection4117240815.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void PlanarStream/AxisDirection::.ctor(System.Boolean)
extern "C"  void AxisDirection__ctor_m1350335249 (AxisDirection_t4117240815 * __this, bool ___forward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::AdvanceEdge(System.Single)
extern "C"  void AxisDirection_AdvanceEdge_m2425857836 (AxisDirection_t4117240815 * __this, float ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::AdvanceEdgeSecondary(System.Single,System.Int32,System.Int32,System.Int32)
extern "C"  void AxisDirection_AdvanceEdgeSecondary_m74361657 (AxisDirection_t4117240815 * __this, float ___coord0, int32_t ___limit1, int32_t ___increment2, int32_t ___mask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::Clear()
extern "C"  void AxisDirection_Clear_m1927978039 (AxisDirection_t4117240815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::Add(PlanarStream/SpawnInfo[],PlanarStream/StreamObject[],UnityEngine.Vector3)
extern "C"  void AxisDirection_Add_m2975088782 (AxisDirection_t4117240815 * __this, SpawnInfoU5BU5D_t77013569* ___infos0, StreamObjectU5BU5D_t2900140239* ___streamObjects1, Vector3_t2243707580  ___vector2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlanarStream/AxisDirection::EdgeCompare(PlanarStream/AxisEntry,PlanarStream/AxisEntry)
extern "C"  int32_t AxisDirection_EdgeCompare_m2508983524 (Il2CppObject * __this /* static, unused */, AxisEntry_t2134574852  ___a0, AxisEntry_t2134574852  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::FixupSubAxisAfterAdd(PlanarStream/AxisDirection)
extern "C"  void AxisDirection_FixupSubAxisAfterAdd_m4106034127 (AxisDirection_t4117240815 * __this, AxisDirection_t4117240815 * ___underlying0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::AddRange(PlanarStream/AxisEntry[]&,PlanarStream/AxisEntry[])
extern "C"  void AxisDirection_AddRange_m319937072 (Il2CppObject * __this /* static, unused */, AxisEntryU5BU5D_t2077722733** ___array0, AxisEntryU5BU5D_t2077722733* ___newElements1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::EnterAll()
extern "C"  void AxisDirection_EnterAll_m3864945887 (AxisDirection_t4117240815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::ExitAll()
extern "C"  void AxisDirection_ExitAll_m1245633619 (AxisDirection_t4117240815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/AxisDirection::EnforceAll()
extern "C"  void AxisDirection_EnforceAll_m1213492661 (AxisDirection_t4117240815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlanarStream/StreamObject PlanarStream/AxisDirection::FindStreamObject(UnityEngine.Transform)
extern "C"  StreamObject_t1307730122 * AxisDirection_FindStreamObject_m4167742110 (AxisDirection_t4117240815 * __this, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
