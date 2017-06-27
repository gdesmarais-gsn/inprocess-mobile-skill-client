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

// PlanarWindows
struct PlanarWindows_t308604901;
// PlanarWindows/WallOrWindow
struct WallOrWindow_t346663157;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlanarWindows_WallOrWindow346663157.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// System.Void PlanarWindows::.ctor()
extern "C"  void PlanarWindows__ctor_m3343448676 (PlanarWindows_t308604901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarWindows::Awake()
extern "C"  void PlanarWindows_Awake_m165009493 (PlanarWindows_t308604901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarWindows::OnDestroy()
extern "C"  void PlanarWindows_OnDestroy_m1853146787 (PlanarWindows_t308604901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlanarWindows::CompareWows(PlanarWindows/WallOrWindow,PlanarWindows/WallOrWindow)
extern "C"  int32_t PlanarWindows_CompareWows_m3285040301 (Il2CppObject * __this /* static, unused */, WallOrWindow_t346663157 * ___a0, WallOrWindow_t346663157 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarWindows::SortWows()
extern "C"  void PlanarWindows_SortWows_m2573836322 (PlanarWindows_t308604901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlanarWindows::GetViewportRays(UnityEngine.Ray&,UnityEngine.Ray&,UnityEngine.Ray&,UnityEngine.Ray&,UnityEngine.Ray&,UnityEngine.Ray&,UnityEngine.Ray&,UnityEngine.Ray&,System.Single)
extern "C"  bool PlanarWindows_GetViewportRays_m2202427262 (Il2CppObject * __this /* static, unused */, Ray_t2469606224 * ___bottomLeftWorldRay_initial0, Ray_t2469606224 * ___bottomRightWorldRay_initial1, Ray_t2469606224 * ___topLeftWorldRay_initial2, Ray_t2469606224 * ___topRightWorldRay_initial3, Ray_t2469606224 * ___bottomLeftWorldRay_output4, Ray_t2469606224 * ___bottomRightWorldRay_output5, Ray_t2469606224 * ___topLeftWorldRay_output6, Ray_t2469606224 * ___topRightWorldRay_output7, float ___maxZ8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
