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

// DynamicSurface
struct DynamicSurface_t3995329488;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void DynamicSurface::.ctor()
extern "C"  void DynamicSurface__ctor_m3171064731 (DynamicSurface_t3995329488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DynamicSurface::WorldToLocalX(System.Single)
extern "C"  float DynamicSurface_WorldToLocalX_m224633402 (DynamicSurface_t3995329488 * __this, float ___worldX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DynamicSurface::LocalToWorldX(System.Single)
extern "C"  float DynamicSurface_LocalToWorldX_m3441764128 (DynamicSurface_t3995329488 * __this, float ___localX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DynamicSurface::LocalToWorldY(System.Single)
extern "C"  float DynamicSurface_LocalToWorldY_m2723354945 (DynamicSurface_t3995329488 * __this, float ___localY0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DynamicSurface::GetWorldYAt(System.Single)
extern "C"  float DynamicSurface_GetWorldYAt_m1528452320 (DynamicSurface_t3995329488 * __this, float ___worldX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DynamicSurface::GetDerivAt(System.Single)
extern "C"  Vector3_t2243707580  DynamicSurface_GetDerivAt_m2539472935 (DynamicSurface_t3995329488 * __this, float ___localX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DynamicSurface::GetNormalAt(System.Single)
extern "C"  Vector3_t2243707580  DynamicSurface_GetNormalAt_m1411844232 (DynamicSurface_t3995329488 * __this, float ___localX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
