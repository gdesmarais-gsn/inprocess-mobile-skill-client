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

// PatchRenderer
struct PatchRenderer_t1440106585;
// UnityEngine.Transform
struct Transform_t3275118058;
// BezierPatchGrid
struct BezierPatchGrid_t4132944383;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Material
struct Material_t193706927;
// Stm.V1_0.Dispatcher
struct Dispatcher_t2840725577;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_BezierPatchGrid4132944383.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher2840725577.h"

// System.Void PatchRenderer::.ctor()
extern "C"  void PatchRenderer__ctor_m2529872048 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::OnBecameVisible()
extern "C"  void PatchRenderer_OnBecameVisible_m1583886408 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::OnBecameInvisible()
extern "C"  void PatchRenderer_OnBecameInvisible_m2469616881 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::Awake()
extern "C"  void PatchRenderer_Awake_m4128709465 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::GetGridsAndSort()
extern "C"  void PatchRenderer_GetGridsAndSort_m3128320082 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PatchRenderer::GetLocalZOffsetFromPatchRenderer(UnityEngine.Transform)
extern "C"  float PatchRenderer_GetLocalZOffsetFromPatchRenderer_m3917492374 (PatchRenderer_t1440106585 * __this, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PatchRenderer::GridSorter(BezierPatchGrid,BezierPatchGrid)
extern "C"  int32_t PatchRenderer_GridSorter_m3514754267 (PatchRenderer_t1440106585 * __this, BezierPatchGrid_t4132944383 * ___a0, BezierPatchGrid_t4132944383 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::Start()
extern "C"  void PatchRenderer_Start_m168111648 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::RunDoUpdate()
extern "C"  void PatchRenderer_RunDoUpdate_m3052379447 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::OnEnable()
extern "C"  void PatchRenderer_OnEnable_m3506916640 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::OnDestroy()
extern "C"  void PatchRenderer_OnDestroy_m1453018111 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::InitRenderer()
extern "C"  void PatchRenderer_InitRenderer_m2472029283 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PatchRenderer::UpdateMaterial(UnityEngine.Material)
extern "C"  Il2CppObject * PatchRenderer_UpdateMaterial_m3445073376 (PatchRenderer_t1440106585 * __this, Material_t193706927 * ___material0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PatchRenderer::get_NumMaterials()
extern "C"  int32_t PatchRenderer_get_NumMaterials_m3557606097 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::InitializeMeshComponents()
extern "C"  void PatchRenderer_InitializeMeshComponents_m650107615 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::InitializeMesh()
extern "C"  void PatchRenderer_InitializeMesh_m205517195 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PatchRenderer::DoUpdate()
extern "C"  Il2CppObject * PatchRenderer_DoUpdate_m922383150 (PatchRenderer_t1440106585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::UpdateMesh(System.Boolean)
extern "C"  void PatchRenderer_UpdateMesh_m4179829257 (PatchRenderer_t1440106585 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::RecalculateBounds(Stm.V1_0.Dispatcher)
extern "C"  void PatchRenderer_RecalculateBounds_m2974080547 (PatchRenderer_t1440106585 * __this, Dispatcher_t2840725577 * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatchRenderer::RecalculateBounds(System.Boolean)
extern "C"  void PatchRenderer_RecalculateBounds_m884534513 (PatchRenderer_t1440106585 * __this, bool ___onlyIfPivotChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
