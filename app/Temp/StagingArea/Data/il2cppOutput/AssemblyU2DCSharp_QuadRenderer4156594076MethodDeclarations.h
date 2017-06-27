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

// QuadRenderer
struct QuadRenderer_t4156594076;
// UnityEngine.Transform
struct Transform_t3275118058;
// QuadNode
struct QuadNode_t1281127455;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_QuadNode1281127455.h"

// System.Void QuadRenderer::.ctor()
extern "C"  void QuadRenderer__ctor_m2377076503 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::Awake()
extern "C"  void QuadRenderer_Awake_m1749977004 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::GetGridsAndSort()
extern "C"  void QuadRenderer_GetGridsAndSort_m3927914227 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single QuadRenderer::GetLocalZOffsetFromQuadRenderer(UnityEngine.Transform)
extern "C"  float QuadRenderer_GetLocalZOffsetFromQuadRenderer_m3661141626 (QuadRenderer_t4156594076 * __this, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QuadRenderer::GridSorter(QuadNode,QuadNode)
extern "C"  int32_t QuadRenderer_GridSorter_m3326536122 (QuadRenderer_t4156594076 * __this, QuadNode_t1281127455 * ___a0, QuadNode_t1281127455 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::Start()
extern "C"  void QuadRenderer_Start_m615166939 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::OnDestroy()
extern "C"  void QuadRenderer_OnDestroy_m2946566434 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::InitRenderer()
extern "C"  void QuadRenderer_InitRenderer_m319588906 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QuadRenderer::get_NumMaterials()
extern "C"  int32_t QuadRenderer_get_NumMaterials_m2123891150 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::InitializeMeshComponents()
extern "C"  void QuadRenderer_InitializeMeshComponents_m3910612636 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::InitializeMesh()
extern "C"  void QuadRenderer_InitializeMesh_m3339599648 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::UpdateMesh()
extern "C"  void QuadRenderer_UpdateMesh_m1774339969 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::UpdateMesh(System.Boolean)
extern "C"  void QuadRenderer_UpdateMesh_m3954444498 (QuadRenderer_t4156594076 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::RecalculateBounds()
extern "C"  void QuadRenderer_RecalculateBounds_m3076620289 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::RecalculateBounds(System.Boolean)
extern "C"  void QuadRenderer_RecalculateBounds_m3067522976 (QuadRenderer_t4156594076 * __this, bool ___onlyIfPivotChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QuadRenderer::get_dirty()
extern "C"  bool QuadRenderer_get_dirty_m2077112842 (QuadRenderer_t4156594076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::set_dirty(System.Boolean)
extern "C"  void QuadRenderer_set_dirty_m2852303199 (QuadRenderer_t4156594076 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadRenderer::OnUpdateMgrDestroyed()
extern "C"  void QuadRenderer_OnUpdateMgrDestroyed_m4289711850 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator QuadRenderer::DoUpdateDirtyQuads()
extern "C"  Il2CppObject * QuadRenderer_DoUpdateDirtyQuads_m1988321315 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
