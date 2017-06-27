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

// OBB2D
struct OBB2D_t437233951;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OBB2D437233951.h"

// System.Void OBB2D::.ctor(UnityEngine.Vector2,System.Single,System.Single,System.Single)
extern "C"  void OBB2D__ctor_m3016645183 (OBB2D_t437233951 * __this, Vector2_t2243707579  ___center0, float ___w1, float ___h2, float ___angle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OBB2D::overlaps(OBB2D)
extern "C"  bool OBB2D_overlaps_m1612461427 (OBB2D_t437233951 * __this, OBB2D_t437233951 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OBB2D::overlaps1Way(OBB2D)
extern "C"  bool OBB2D_overlaps1Way_m3191666317 (OBB2D_t437233951 * __this, OBB2D_t437233951 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OBB2D::computeAxes()
extern "C"  void OBB2D_computeAxes_m2346311198 (OBB2D_t437233951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OBB2D::OnDrawGizmos()
extern "C"  void OBB2D_OnDrawGizmos_m48752196 (OBB2D_t437233951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
