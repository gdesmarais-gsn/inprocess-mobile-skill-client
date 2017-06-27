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

// QuadRenderer/VertexBoneInfo
struct VertexBoneInfo_t767890273;
// UnityEngine.Transform
struct Transform_t3275118058;
// QuadRenderer/VertexBoneInfo/Info[]
struct InfoU5BU5D_t3349161671;
// System.String
struct String_t;
// QuadRenderer/VertexBoneInfo/Info
struct Info_t3707275314;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_QuadRenderer_VertexBoneInfo_Info3707275314.h"

// System.Void QuadRenderer/VertexBoneInfo::.ctor()
extern "C"  void VertexBoneInfo__ctor_m193556976 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer/VertexBoneInfo::Clear()
extern "C"  void VertexBoneInfo_Clear_m3977821645 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer/VertexBoneInfo::Add(UnityEngine.Transform,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Transform)
extern "C"  void VertexBoneInfo_Add_m3664689929 (VertexBoneInfo_t767890273 * __this, Transform_t3275118058 * ___bone0, Vector2_t2243707579  ___displacement1, float ___weight22, float ___weightFactor3, Transform_t3275118058 * ___oppositeBone4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer/VertexBoneInfo::Add(UnityEngine.Transform,System.Single)
extern "C"  void VertexBoneInfo_Add_m744011667 (VertexBoneInfo_t767890273 * __this, Transform_t3275118058 * ___bone0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single QuadRenderer/VertexBoneInfo::EvaluWeight(UnityEngine.Vector2)
extern "C"  float VertexBoneInfo_EvaluWeight_m3844938317 (VertexBoneInfo_t767890273 * __this, Vector2_t2243707579  ___diff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// QuadRenderer/VertexBoneInfo/Info[] QuadRenderer/VertexBoneInfo::NormalizeAndGetInfo()
extern "C"  InfoU5BU5D_t3349161671* VertexBoneInfo_NormalizeAndGetInfo_m629728289 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String QuadRenderer/VertexBoneInfo::ToString()
extern "C"  String_t* VertexBoneInfo_ToString_m4006676735 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer/VertexBoneInfo::NormalizeWeight1()
extern "C"  void VertexBoneInfo_NormalizeWeight1_m968523796 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer/VertexBoneInfo::NormalizeWeight2()
extern "C"  void VertexBoneInfo_NormalizeWeight2_m968523895 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer/VertexBoneInfo::FixNegatives()
extern "C"  void VertexBoneInfo_FixNegatives_m3776966059 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer/VertexBoneInfo::NormalizeAndCombine()
extern "C"  void VertexBoneInfo_NormalizeAndCombine_m2541859387 (VertexBoneInfo_t767890273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QuadRenderer/VertexBoneInfo::Sorter(QuadRenderer/VertexBoneInfo/Info,QuadRenderer/VertexBoneInfo/Info)
extern "C"  int32_t VertexBoneInfo_Sorter_m4021699299 (Il2CppObject * __this /* static, unused */, Info_t3707275314 * ___a0, Info_t3707275314 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
