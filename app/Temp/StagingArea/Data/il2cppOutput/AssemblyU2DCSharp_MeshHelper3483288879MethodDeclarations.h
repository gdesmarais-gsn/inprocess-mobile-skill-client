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

// MeshHelper
struct MeshHelper_t3483288879;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// Parametric
struct Parametric_t3945418262;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Parametric3945418262.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"

// System.Void MeshHelper::.ctor()
extern "C"  void MeshHelper__ctor_m955488312 (MeshHelper_t3483288879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh MeshHelper::ExtrudeSpline(Parametric,UnityEngine.Transform,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  Mesh_t1356156583 * MeshHelper_ExtrudeSpline_m3329515918 (Il2CppObject * __this /* static, unused */, Parametric_t3945418262 * ___spline0, Transform_t3275118058 * ___root1, int32_t ___resolutionAlong2, int32_t ___resolutionAround3, float ___radius4, float ___uStart5, float ___uEnd6, bool ___flipNormals7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeshHelper::DelayDestroy(UnityEngine.Object)
extern "C"  void MeshHelper_DelayDestroy_m1367357463 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MeshHelper::DoDelayDestroy(UnityEngine.Object)
extern "C"  Il2CppObject * MeshHelper_DoDelayDestroy_m3232107544 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
