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

// GizmoHelper
struct GizmoHelper_t1203638586;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GizmoHelper::.ctor()
extern "C"  void GizmoHelper__ctor_m350043547 (GizmoHelper_t1203638586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawCircleX(System.Single,System.Single,System.Single)
extern "C"  void GizmoHelper_DrawCircleX_m945854752 (Il2CppObject * __this /* static, unused */, float ___radius0, float ___startDegrees1, float ___endDegrees2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawCircleY(System.Single,System.Single,System.Single)
extern "C"  void GizmoHelper_DrawCircleY_m809478885 (Il2CppObject * __this /* static, unused */, float ___radius0, float ___startDegrees1, float ___endDegrees2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawCircleZ(System.Single,System.Single,System.Single)
extern "C"  void GizmoHelper_DrawCircleZ_m3018852266 (Il2CppObject * __this /* static, unused */, float ___radius0, float ___startDegrees1, float ___endDegrees2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawRectY(UnityEngine.Rect)
extern "C"  void GizmoHelper_DrawRectY_m3890777473 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawRectZ(UnityEngine.Rect)
extern "C"  void GizmoHelper_DrawRectZ_m3744340924 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawArrowXZ(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void GizmoHelper_DrawArrowXZ_m1671746497 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___direction1, float ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawArrowXY(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void GizmoHelper_DrawArrowXY_m1227751218 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___direction1, float ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawArrowCapXY(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void GizmoHelper_DrawArrowCapXY_m3955616928 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___direction1, float ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawLineViewSpace(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void GizmoHelper_DrawLineViewSpace_m161581829 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___aView0, Vector3_t2243707580  ___bView1, Vector3_t2243707580  ___worldRefPoint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawLineViewSpace(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void GizmoHelper_DrawLineViewSpace_m4218269762 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___aView0, Vector3_t2243707580  ___bView1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 GizmoHelper::LocalToWorldNoScale(UnityEngine.Transform)
extern "C"  Matrix4x4_t2933234003  GizmoHelper_LocalToWorldNoScale_m2296911396 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GizmoHelper::DrawText(UnityEngine.Vector3,System.String)
extern "C"  void GizmoHelper_DrawText_m2081550753 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
