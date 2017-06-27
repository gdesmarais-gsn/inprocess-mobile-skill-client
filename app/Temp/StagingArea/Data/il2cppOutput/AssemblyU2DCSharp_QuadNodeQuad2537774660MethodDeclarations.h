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

// QuadNodeQuad
struct QuadNodeQuad_t2537774660;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void QuadNodeQuad::.ctor()
extern "C"  void QuadNodeQuad__ctor_m2701044195 (QuadNodeQuad_t2537774660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNodeQuad::ValueAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  QuadNodeQuad_ValueAt_m3726575296 (QuadNodeQuad_t2537774660 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNodeQuad::InverseValueAt(UnityEngine.Vector2,System.Single&)
extern "C"  Vector2_t2243707579  QuadNodeQuad_InverseValueAt_m1769691157 (QuadNodeQuad_t2537774660 * __this, Vector2_t2243707579  ___pos0, float* ___errorAmount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNodeQuad::TexCoordsAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  QuadNodeQuad_TexCoordsAt_m152014166 (QuadNodeQuad_t2537774660 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNodeQuad::InverseTexCoordsAt(UnityEngine.Vector2,System.Single&)
extern "C"  Vector2_t2243707579  QuadNodeQuad_InverseTexCoordsAt_m697376461 (QuadNodeQuad_t2537774660 * __this, Vector2_t2243707579  ___uv0, float* ___errorAmount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 QuadNodeQuad::GetBoneBindPos(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  Vector3_t2243707580  QuadNodeQuad_GetBoneBindPos_m1261899902 (QuadNodeQuad_t2537774660 * __this, Transform_t3275118058 * ___vertexBone0, Transform_t3275118058 * ___gridRoot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
