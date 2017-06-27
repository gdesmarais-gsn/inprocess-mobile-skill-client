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

// BezierPatchQuad
struct BezierPatchQuad_t3561387740;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void BezierPatchQuad::.ctor()
extern "C"  void BezierPatchQuad__ctor_m1753615171 (BezierPatchQuad_t3561387740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchQuad::ValueAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchQuad_ValueAt_m2953980110 (BezierPatchQuad_t3561387740 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchQuad::InverseValueAt(UnityEngine.Vector2,System.Single&)
extern "C"  Vector2_t2243707579  BezierPatchQuad_InverseValueAt_m3302696533 (BezierPatchQuad_t3561387740 * __this, Vector2_t2243707579  ___pos0, float* ___errorAmount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchQuad::UDerivAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchQuad_UDerivAt_m2626173300 (BezierPatchQuad_t3561387740 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchQuad::VDerivAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchQuad_VDerivAt_m3062625123 (BezierPatchQuad_t3561387740 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchQuad::TexCoordsAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  BezierPatchQuad_TexCoordsAt_m4112526456 (BezierPatchQuad_t3561387740 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BezierPatchQuad::InverseTexCoordsAt(UnityEngine.Vector2,System.Single&)
extern "C"  Vector2_t2243707579  BezierPatchQuad_InverseTexCoordsAt_m3004959373 (BezierPatchQuad_t3561387740 * __this, Vector2_t2243707579  ___uv0, float* ___errorAmount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
