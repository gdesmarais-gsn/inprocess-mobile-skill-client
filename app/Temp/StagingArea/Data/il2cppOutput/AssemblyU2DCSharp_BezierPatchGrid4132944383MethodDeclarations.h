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

// BezierPatchGrid
struct BezierPatchGrid_t4132944383;
// BezierPatchQuad
struct BezierPatchQuad_t3561387740;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BezierPatchGrid_Quadrant2487840324.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_BezierPatchQuad3561387740.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void BezierPatchGrid::.ctor()
extern "C"  void BezierPatchGrid__ctor_m1353290378 (BezierPatchGrid_t4132944383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPatchGrid::AwakePart1()
extern "C"  void BezierPatchGrid_AwakePart1_m3922271929 (BezierPatchGrid_t4132944383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPatchGrid::Awake()
extern "C"  void BezierPatchGrid_Awake_m1015444555 (BezierPatchGrid_t4132944383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BezierPatchQuad BezierPatchGrid::GetQuad(System.Int32,System.Int32)
extern "C"  BezierPatchQuad_t3561387740 * BezierPatchGrid_GetQuad_m1274192892 (BezierPatchGrid_t4132944383 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BezierPatchGrid/Quadrant BezierPatchGrid::GetNeighborInfo(System.Int32,System.Int32)
extern "C"  int32_t BezierPatchGrid_GetNeighborInfo_m549916585 (BezierPatchGrid_t4132944383 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierPatchGrid::GetWidth()
extern "C"  int32_t BezierPatchGrid_GetWidth_m3280991830 (BezierPatchGrid_t4132944383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierPatchGrid::GetHeight()
extern "C"  int32_t BezierPatchGrid_GetHeight_m2098556005 (BezierPatchGrid_t4132944383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchGrid::LocalValueAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchGrid_LocalValueAt_m2990190458 (BezierPatchGrid_t4132944383 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPatchGrid::EnableQuads(System.Boolean)
extern "C"  void BezierPatchGrid_EnableQuads_m3750432394 (BezierPatchGrid_t4132944383 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchGrid::LocalValueAt(BezierPatchQuad,System.Single,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchGrid_LocalValueAt_m4094178234 (BezierPatchGrid_t4132944383 * __this, BezierPatchQuad_t3561387740 * ___quad0, float ___u1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPatchGrid::WorldValueAt(System.Single,System.Single)
extern "C"  Vector3_t2243707580  BezierPatchGrid_WorldValueAt_m2146201736 (BezierPatchGrid_t4132944383 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPatchGrid::WorldValueAt(BezierPatchQuad,System.Single,System.Single)
extern "C"  Vector3_t2243707580  BezierPatchGrid_WorldValueAt_m201106568 (BezierPatchGrid_t4132944383 * __this, BezierPatchQuad_t3561387740 * ___quad0, float ___u1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchGrid::TexCoordsAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchGrid_TexCoordsAt_m3678271471 (BezierPatchGrid_t4132944383 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchGrid::InverseLocalValueAt(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  BezierPatchGrid_InverseLocalValueAt_m1176796488 (BezierPatchGrid_t4132944383 * __this, Vector2_t2243707579  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchGrid::InverseWorldValueAt(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  BezierPatchGrid_InverseWorldValueAt_m2767803882 (BezierPatchGrid_t4132944383 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchGrid::InverseTexCoordsAt(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  BezierPatchGrid_InverseTexCoordsAt_m3710651943 (BezierPatchGrid_t4132944383 * __this, Vector2_t2243707579  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPatchGrid::GetTesselationStep(System.Single&,System.Single&)
extern "C"  void BezierPatchGrid_GetTesselationStep_m1574906847 (BezierPatchGrid_t4132944383 * __this, float* ___du0, float* ___dv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
