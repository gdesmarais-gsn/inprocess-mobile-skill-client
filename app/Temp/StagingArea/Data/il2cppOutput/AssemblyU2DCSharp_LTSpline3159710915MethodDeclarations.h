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

// LTSpline
struct LTSpline_t3159710915;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void LTSpline::.ctor(UnityEngine.Vector3[])
extern "C"  void LTSpline__ctor_m2763586153 (LTSpline_t3159710915 * __this, Vector3U5BU5D_t1172311765* ___pts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::.ctor(UnityEngine.Vector3[],System.Boolean)
extern "C"  void LTSpline__ctor_m3208199032 (LTSpline_t3159710915 * __this, Vector3U5BU5D_t1172311765* ___pts0, bool ___constantSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::init(UnityEngine.Vector3[],System.Boolean)
extern "C"  void LTSpline_init_m2016733404 (LTSpline_t3159710915 * __this, Vector3U5BU5D_t1172311765* ___pts0, bool ___constantSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTSpline::map(System.Single)
extern "C"  Vector3_t2243707580  LTSpline_map_m2441240937 (LTSpline_t3159710915 * __this, float ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTSpline::interp(System.Single)
extern "C"  Vector3_t2243707580  LTSpline_interp_m736746397 (LTSpline_t3159710915 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTSpline::ratioAtPoint(UnityEngine.Vector3)
extern "C"  float LTSpline_ratioAtPoint_m1282456969 (LTSpline_t3159710915 * __this, Vector3_t2243707580  ___pt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTSpline::point(System.Single)
extern "C"  Vector3_t2243707580  LTSpline_point_m3469148601 (LTSpline_t3159710915 * __this, float ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::place2d(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_place2d_m161834325 (LTSpline_t3159710915 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::placeLocal2d(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_placeLocal2d_m4293015396 (LTSpline_t3159710915 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::place(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_place_m1406293963 (LTSpline_t3159710915 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::place(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTSpline_place_m4201857016 (LTSpline_t3159710915 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, Vector3_t2243707580  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::placeLocal(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_placeLocal_m3950901958 (LTSpline_t3159710915 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::placeLocal(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTSpline_placeLocal_m2360825079 (LTSpline_t3159710915 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, Vector3_t2243707580  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::gizmoDraw(System.Single)
extern "C"  void LTSpline_gizmoDraw_m3703192817 (LTSpline_t3159710915 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::drawGizmo(UnityEngine.Color)
extern "C"  void LTSpline_drawGizmo_m2318913144 (LTSpline_t3159710915 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::drawGizmo(UnityEngine.Transform[],UnityEngine.Color)
extern "C"  void LTSpline_drawGizmo_m4131217467 (Il2CppObject * __this /* static, unused */, TransformU5BU5D_t3764228911* ___arr0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::drawLine(UnityEngine.Transform[],System.Single,UnityEngine.Color)
extern "C"  void LTSpline_drawLine_m2262363854 (Il2CppObject * __this /* static, unused */, TransformU5BU5D_t3764228911* ___arr0, float ___width1, Color_t2020392075  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::drawLinesGLLines(UnityEngine.Material,UnityEngine.Color,System.Single)
extern "C"  void LTSpline_drawLinesGLLines_m745682888 (LTSpline_t3159710915 * __this, Material_t193706927 * ___outlineMaterial0, Color_t2020392075  ___color1, float ___width2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] LTSpline::generateVectors()
extern "C"  Vector3U5BU5D_t1172311765* LTSpline_generateVectors_m303066463 (LTSpline_t3159710915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::.cctor()
extern "C"  void LTSpline__cctor_m2205333277 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
