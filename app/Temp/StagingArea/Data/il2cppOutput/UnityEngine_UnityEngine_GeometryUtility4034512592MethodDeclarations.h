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

// UnityEngine.Plane[]
struct PlaneU5BU5D_t3244817925;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
extern "C"  PlaneU5BU5D_t3244817925* GeometryUtility_CalculateFrustumPlanes_m2614810500 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4)
extern "C"  PlaneU5BU5D_t3244817925* GeometryUtility_CalculateFrustumPlanes_m3000775308 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___worldToProjectionMatrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4)
extern "C"  void GeometryUtility_Internal_ExtractPlanes_m1465139830 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t3244817925* ___planes0, Matrix4x4_t2933234003  ___worldToProjectionMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::INTERNAL_CALL_Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4&)
extern "C"  void GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m3275443675 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t3244817925* ___planes0, Matrix4x4_t2933234003 * ___worldToProjectionMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
extern "C"  bool GeometryUtility_TestPlanesAABB_m2579165957 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t3244817925* ___planes0, Bounds_t3033363703  ___bounds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::INTERNAL_CALL_TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds&)
extern "C"  bool GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m3851140546 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t3244817925* ___planes0, Bounds_t3033363703 * ___bounds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
