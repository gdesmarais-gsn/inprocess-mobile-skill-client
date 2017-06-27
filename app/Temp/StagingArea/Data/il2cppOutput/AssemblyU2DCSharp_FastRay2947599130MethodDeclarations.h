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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FastRay2947599130.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void FastRay::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void FastRay__ctor_m892736061 (FastRay_t2947599130 * __this, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___alreadyNormalizedDirection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 FastRay::GetPoint(System.Single)
extern "C"  Vector3_t2243707580  FastRay_GetPoint_m2132407290 (FastRay_t2947599130 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FastRay::GetPoint2D(System.Single)
extern "C"  Vector2_t2243707579  FastRay_GetPoint2D_m1617883107 (FastRay_t2947599130 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FastRay::LocalRayCast()
extern "C"  float FastRay_LocalRayCast_m2944208409 (FastRay_t2947599130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
