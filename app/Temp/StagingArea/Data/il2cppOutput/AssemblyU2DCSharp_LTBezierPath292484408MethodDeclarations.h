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

// LTBezierPath
struct LTBezierPath_t292484408;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void LTBezierPath::.ctor()
extern "C"  void LTBezierPath__ctor_m2525128421 (LTBezierPath_t292484408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::.ctor(UnityEngine.Vector3[])
extern "C"  void LTBezierPath__ctor_m3789810376 (LTBezierPath_t292484408 * __this, Vector3U5BU5D_t1172311765* ___pts_0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::setPoints(UnityEngine.Vector3[])
extern "C"  void LTBezierPath_setPoints_m612676135 (LTBezierPath_t292484408 * __this, Vector3U5BU5D_t1172311765* ___pts_0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTBezierPath::get_distance()
extern "C"  float LTBezierPath_get_distance_m2735490901 (LTBezierPath_t292484408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTBezierPath::point(System.Single)
extern "C"  Vector3_t2243707580  LTBezierPath_point_m1205442872 (LTBezierPath_t292484408 * __this, float ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place2d(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_place2d_m2284084244 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal2d(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_placeLocal2d_m3345392575 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_place_m2368293974 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTBezierPath_place_m3752921789 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, Vector3_t2243707580  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_placeLocal_m3849375873 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTBezierPath_placeLocal_m2358999510 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, Vector3_t2243707580  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTBezierPath::getRationInOneRange(System.Single)
extern "C"  float LTBezierPath_getRationInOneRange_m4285138371 (LTBezierPath_t292484408 * __this, float ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::gizmoDraw(System.Single)
extern "C"  void LTBezierPath_gizmoDraw_m2152198960 (LTBezierPath_t292484408 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
