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

// QuadNode
struct QuadNode_t1281127455;
// QuadRenderer
struct QuadRenderer_t4156594076;
// QuadNodeQuad
struct QuadNodeQuad_t2537774660;
// Stm.V1_0.Dispatcher
struct Dispatcher_t2840725577;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_QuadNode_Quadrant1009356312.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_QuadNodeQuad2537774660.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher2840725577.h"

// System.Void QuadNode::.ctor()
extern "C"  void QuadNode__ctor_m1177410942 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QuadNode::get_dirty()
extern "C"  bool QuadNode_get_dirty_m2820110545 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::set_dirty(System.Boolean)
extern "C"  void QuadNode_set_dirty_m4155677632 (QuadNode_t1281127455 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// QuadRenderer QuadNode::get_QuadRenderer()
extern "C"  QuadRenderer_t4156594076 * QuadNode_get_QuadRenderer_m737976470 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::AwakePart1()
extern "C"  void QuadNode_AwakePart1_m1253814125 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::Awake()
extern "C"  void QuadNode_Awake_m543158235 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::Start()
extern "C"  void QuadNode_Start_m3304640778 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// QuadNodeQuad QuadNode::GetQuad(System.Int32,System.Int32)
extern "C"  QuadNodeQuad_t2537774660 * QuadNode_GetQuad_m224468460 (QuadNode_t1281127455 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// QuadNode/Quadrant QuadNode::GetNeighborInfo(System.Int32,System.Int32)
extern "C"  int32_t QuadNode_GetNeighborInfo_m1440838749 (QuadNode_t1281127455 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QuadNode::GetWidth()
extern "C"  int32_t QuadNode_GetWidth_m3379130826 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QuadNode::GetHeight()
extern "C"  int32_t QuadNode_GetHeight_m3950455245 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNode::LocalValueAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  QuadNode_LocalValueAt_m2143701636 (QuadNode_t1281127455 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNode::LocalValueAt(QuadNodeQuad,System.Single,System.Single)
extern "C"  Vector2_t2243707579  QuadNode_LocalValueAt_m2839131418 (QuadNode_t1281127455 * __this, QuadNodeQuad_t2537774660 * ___quad0, float ___u1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 QuadNode::WorldValueAt(System.Single,System.Single)
extern "C"  Vector3_t2243707580  QuadNode_WorldValueAt_m460296188 (QuadNode_t1281127455 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 QuadNode::WorldValueAt(QuadNodeQuad,System.Single,System.Single)
extern "C"  Vector3_t2243707580  QuadNode_WorldValueAt_m4286508666 (QuadNode_t1281127455 * __this, QuadNodeQuad_t2537774660 * ___quad0, float ___u1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNode::TexCoordsAt(System.Single,System.Single)
extern "C"  Vector2_t2243707579  QuadNode_TexCoordsAt_m2240474811 (QuadNode_t1281127455 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNode::InverseLocalValueAt(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  QuadNode_InverseLocalValueAt_m3225138854 (QuadNode_t1281127455 * __this, Vector2_t2243707579  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNode::InverseWorldValueAt(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  QuadNode_InverseWorldValueAt_m1780426352 (QuadNode_t1281127455 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 QuadNode::InverseTexCoordsAt(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  QuadNode_InverseTexCoordsAt_m4100618355 (QuadNode_t1281127455 * __this, Vector2_t2243707579  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::GetTesselationStep(System.Single&,System.Single&)
extern "C"  void QuadNode_GetTesselationStep_m944694975 (QuadNode_t1281127455 * __this, float* ___du0, float* ___dv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::Enable(Stm.V1_0.Dispatcher)
extern "C"  void QuadNode_Enable_m1192713340 (QuadNode_t1281127455 * __this, Dispatcher_t2840725577 * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::Disable(Stm.V1_0.Dispatcher)
extern "C"  void QuadNode_Disable_m598682459 (QuadNode_t1281127455 * __this, Dispatcher_t2840725577 * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::OnEnable()
extern "C"  void QuadNode_OnEnable_m1302031562 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuadNode::OnDisable()
extern "C"  void QuadNode_OnDisable_m3313451255 (QuadNode_t1281127455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
