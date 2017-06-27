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

// Interpolator
struct Interpolator_t128803801;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Interpolator_SlopeType3073815131.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void Interpolator::.ctor()
extern "C"  void Interpolator__ctor_m3173814416 (Interpolator_t128803801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Interpolator::.ctor(System.Single,Interpolator/SlopeType,Interpolator/SlopeType,System.Single)
extern "C"  void Interpolator__ctor_m3959734788 (Interpolator_t128803801 * __this, float ___duration0, int32_t ___startSlope1, int32_t ___endSlope2, float ___tInitial3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Interpolator::.ctor(System.Single,Interpolator/SlopeType,Interpolator/SlopeType,System.Single,Interpolator/SlopeType,Interpolator/SlopeType,System.Single)
extern "C"  void Interpolator__ctor_m293590753 (Interpolator_t128803801 * __this, float ___duration0, int32_t ___startSlope1, int32_t ___endSlope2, float ___reverseDuration3, int32_t ___reverseEndSlope4, int32_t ___reverseStartSlope5, float ___tInitial6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Interpolator::Init()
extern "C"  void Interpolator_Init_m2243220356 (Interpolator_t128803801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::Advance(System.Single,System.Single)
extern "C"  float Interpolator_Advance_m251407050 (Interpolator_t128803801 * __this, float ___startValue0, float ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolator::Advance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Interpolator_Advance_m3498926186 (Interpolator_t128803801 * __this, Vector3_t2243707580  ___startValue0, Vector3_t2243707580  ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Interpolator::Advance(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Interpolator_Advance_m276281688 (Interpolator_t128803801 * __this, Quaternion_t4030073918  ___startValue0, Quaternion_t4030073918  ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Interpolator::AdvanceSlerp(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Interpolator_AdvanceSlerp_m2475676290 (Interpolator_t128803801 * __this, Quaternion_t4030073918  ___startValue0, Quaternion_t4030073918  ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Interpolator::Advance(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2020392075  Interpolator_Advance_m1597096871 (Interpolator_t128803801 * __this, Color_t2020392075  ___startValue0, Color_t2020392075  ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Interpolator::Advance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Interpolator_Advance_m2115540745 (Interpolator_t128803801 * __this, Vector2_t2243707579  ___startValue0, Vector2_t2243707579  ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Interpolator::Advance(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t2243707581  Interpolator_Advance_m4269373379 (Interpolator_t128803801 * __this, Vector4_t2243707581  ___startValue0, Vector4_t2243707581  ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolator::AdvanceSlerp(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Interpolator_AdvanceSlerp_m1457832784 (Interpolator_t128803801 * __this, Vector3_t2243707580  ___startValue0, Vector3_t2243707580  ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolator::AdvanceLerpNormalized(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Interpolator_AdvanceLerpNormalized_m1382470858 (Interpolator_t128803801 * __this, Vector3_t2243707580  ___startNormal0, Vector3_t2243707580  ___endNormal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Interpolator::Advance(System.Int32,System.Int32)
extern "C"  int32_t Interpolator_Advance_m596371272 (Interpolator_t128803801 * __this, int32_t ___startValue0, int32_t ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::Advance(System.Single,System.Single,System.Single)
extern "C"  float Interpolator_Advance_m4209973849 (Interpolator_t128803801 * __this, float ___dt0, float ___startValue1, float ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolator::Advance(System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Interpolator_Advance_m1436331465 (Interpolator_t128803801 * __this, float ___dt0, Vector3_t2243707580  ___startValue1, Vector3_t2243707580  ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Interpolator::Advance(System.Single,UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Interpolator_Advance_m1242637171 (Interpolator_t128803801 * __this, float ___dt0, Quaternion_t4030073918  ___startValue1, Quaternion_t4030073918  ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Interpolator::AdvanceSlerp(System.Single,UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Interpolator_AdvanceSlerp_m873922179 (Interpolator_t128803801 * __this, float ___dt0, Quaternion_t4030073918  ___startValue1, Quaternion_t4030073918  ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Interpolator::Advance(System.Single,UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2020392075  Interpolator_Advance_m3200956656 (Interpolator_t128803801 * __this, float ___dt0, Color_t2020392075  ___startValue1, Color_t2020392075  ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Interpolator::Advance(System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Interpolator_Advance_m3498264392 (Interpolator_t128803801 * __this, float ___dt0, Vector2_t2243707579  ___startValue1, Vector2_t2243707579  ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Interpolator::Advance(System.Single,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t2243707581  Interpolator_Advance_m1985205058 (Interpolator_t128803801 * __this, float ___dt0, Vector4_t2243707581  ___startValue1, Vector4_t2243707581  ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolator::AdvanceSlerp(System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Interpolator_AdvanceSlerp_m467514597 (Interpolator_t128803801 * __this, float ___dt0, Vector3_t2243707580  ___startValue1, Vector3_t2243707580  ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolator::AdvanceLerpNormalized(System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Interpolator_AdvanceLerpNormalized_m3557537803 (Interpolator_t128803801 * __this, float ___dt0, Vector3_t2243707580  ___startNormal1, Vector3_t2243707580  ___endNormal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Interpolator::Advance(System.Single,System.Int32,System.Int32)
extern "C"  int32_t Interpolator_Advance_m3537621669 (Interpolator_t128803801 * __this, float ___dt0, int32_t ___startValue1, int32_t ___endValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Interpolator::SetReverse(System.Boolean)
extern "C"  void Interpolator_SetReverse_m2089523077 (Interpolator_t128803801 * __this, bool ___reverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Interpolator::get_AtStart()
extern "C"  bool Interpolator_get_AtStart_m397420738 (Interpolator_t128803801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Interpolator::get_AtEnd()
extern "C"  bool Interpolator_get_AtEnd_m829289455 (Interpolator_t128803801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::SlowToSlow(System.Single)
extern "C"  float Interpolator_SlowToSlow_m242834398 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::SlowToLinear(System.Single)
extern "C"  float Interpolator_SlowToLinear_m3368134442 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::SlowToFast(System.Single)
extern "C"  float Interpolator_SlowToFast_m3974658907 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::LinearToSlow(System.Single)
extern "C"  float Interpolator_LinearToSlow_m942543466 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::LinearToLinear(System.Single)
extern "C"  float Interpolator_LinearToLinear_m3338409886 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::LinearToFast(System.Single)
extern "C"  float Interpolator_LinearToFast_m787791793 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::FastToSlow(System.Single)
extern "C"  float Interpolator_FastToSlow_m3657325307 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::FastToLinear(System.Single)
extern "C"  float Interpolator_FastToLinear_m3098027313 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolator::FastToFast(System.Single)
extern "C"  float Interpolator_FastToFast_m2015971262 (Il2CppObject * __this /* static, unused */, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
