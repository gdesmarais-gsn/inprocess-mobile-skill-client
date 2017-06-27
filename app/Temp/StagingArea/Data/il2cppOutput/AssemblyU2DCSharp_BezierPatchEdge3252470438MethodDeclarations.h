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

// BezierPatchEdge
struct BezierPatchEdge_t3252470438;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_BezierPatchEdge3252470438.h"

// System.Void BezierPatchEdge::.ctor()
extern "C"  void BezierPatchEdge__ctor_m3859243341 (BezierPatchEdge_t3252470438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchEdge::ValueAt(System.Single)
extern "C"  Vector2_t2243707579  BezierPatchEdge_ValueAt_m707410697 (BezierPatchEdge_t3252470438 * __this, float ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchEdge::ValueAtInterpolated(System.Single,BezierPatchEdge,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchEdge_ValueAtInterpolated_m1546289061 (BezierPatchEdge_t3252470438 * __this, float ___u0, BezierPatchEdge_t3252470438 * ___other1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchEdge::DerivAt(System.Single)
extern "C"  Vector2_t2243707579  BezierPatchEdge_DerivAt_m1103186060 (BezierPatchEdge_t3252470438 * __this, float ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchEdge::DerivAtInterpolated(System.Single,BezierPatchEdge,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchEdge_DerivAtInterpolated_m692009874 (BezierPatchEdge_t3252470438 * __this, float ___u0, BezierPatchEdge_t3252470438 * ___other1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BezierPatchEdge::Equals(BezierPatchEdge)
extern "C"  bool BezierPatchEdge_Equals_m3130857598 (BezierPatchEdge_t3252470438 * __this, BezierPatchEdge_t3252470438 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BezierPatchEdge::MergeTogether(BezierPatchEdge)
extern "C"  bool BezierPatchEdge_MergeTogether_m3645840929 (BezierPatchEdge_t3252470438 * __this, BezierPatchEdge_t3252470438 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPatchEdge::SmoothCrease(System.Boolean,BezierPatchEdge,System.Boolean)
extern "C"  void BezierPatchEdge_SmoothCrease_m12471130 (BezierPatchEdge_t3252470438 * __this, bool ___atEnd0, BezierPatchEdge_t3252470438 * ___other1, bool ___otherAtEnd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
