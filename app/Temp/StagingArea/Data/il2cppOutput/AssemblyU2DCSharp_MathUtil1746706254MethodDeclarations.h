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

// MathUtil
struct MathUtil_t1746706254;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void MathUtil::.ctor()
extern "C"  void MathUtil__ctor_m1306120635 (MathUtil_t1746706254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Abs(System.Single)
extern "C"  float MathUtil_Abs_m3021399408 (Il2CppObject * __this /* static, unused */, float ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Dist(System.Single,System.Single)
extern "C"  float MathUtil_Dist_m1055636139 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::NearEqual(System.Single,System.Single,System.Single)
extern "C"  bool MathUtil_NearEqual_m2227834338 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___epsilon2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::NearZero(System.Single,System.Single)
extern "C"  bool MathUtil_NearZero_m1032567401 (Il2CppObject * __this /* static, unused */, float ___x0, float ___epsilon1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Lerp(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_Lerp_m4259243471 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MathUtil::LerpLong(System.Int64,System.Int64,System.Double)
extern "C"  int64_t MathUtil_LerpLong_m3100829949 (Il2CppObject * __this /* static, unused */, int64_t ___from0, int64_t ___to1, double ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_InverseLerp_m4263130419 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Rescale(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float MathUtil_Rescale_m1166725191 (Il2CppObject * __this /* static, unused */, float ___value0, float ___sourceFrom1, float ___sourceTo2, float ___destFrom3, float ___destTo4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Clamp(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_Clamp_m3662438399 (Il2CppObject * __this /* static, unused */, float ___value0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Clamp01(System.Single)
extern "C"  float MathUtil_Clamp01_m2216933344 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Wrap01(System.Single)
extern "C"  float MathUtil_Wrap01_m3333124817 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Wrap0N(System.Single,System.Single)
extern "C"  float MathUtil_Wrap0N_m1646254279 (Il2CppObject * __this /* static, unused */, float ___value0, float ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::DistWrapped01(System.Single,System.Single)
extern "C"  float MathUtil_DistWrapped01_m1226601599 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::DistWrapped0N(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_DistWrapped0N_m4045586289 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::DiffWrappedPlusMinusHalf(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_DiffWrappedPlusMinusHalf_m2142744885 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::DiffWrappedPlusMinusHalf(System.Single,System.Single)
extern "C"  float MathUtil_DiffWrappedPlusMinusHalf_m2243205408 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::LerpClamped(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_LerpClamped_m3341657977 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::InverseLerpClamped(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_InverseLerpClamped_m406174789 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::RescaleClamped(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float MathUtil_RescaleClamped_m3737165457 (Il2CppObject * __this /* static, unused */, float ___value0, float ___sourceFrom1, float ___sourceTo2, float ___destFrom3, float ___destTo4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::InRange(System.Single,System.Single,System.Single)
extern "C"  bool MathUtil_InRange_m429842788 (Il2CppObject * __this /* static, unused */, float ___value0, float ___from1, float ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::InWrappedRange(System.Single,System.Single,System.Single)
extern "C"  bool MathUtil_InWrappedRange_m1607000011 (Il2CppObject * __this /* static, unused */, float ___value0, float ___from1, float ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::RangesOverlap(System.Single,System.Single,System.Single,System.Single)
extern "C"  bool MathUtil_RangesOverlap_m1632884560 (Il2CppObject * __this /* static, unused */, float ___aFrom0, float ___aTo1, float ___bFrom2, float ___bTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::WrappedRangesOverlap(System.Single,System.Single,System.Single,System.Single)
extern "C"  bool MathUtil_WrappedRangesOverlap_m686895533 (Il2CppObject * __this /* static, unused */, float ___aFrom0, float ___aTo1, float ___bFrom2, float ___bTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Max(System.Single,System.Single)
extern "C"  float MathUtil_Max_m4186686333 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Min(System.Single,System.Single)
extern "C"  float MathUtil_Min_m4097950663 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Round(System.Single)
extern "C"  float MathUtil_Round_m2346282576 (Il2CppObject * __this /* static, unused */, float ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float MathUtil_Cross_m3126541971 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___a0, Vector2_t2243707579  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MathUtil::CrossWithZ(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  MathUtil_CrossWithZ_m1936387772 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtil::DivideToScalar(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float MathUtil_DivideToScalar_m3142281303 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___num0, Vector2_t2243707579  ___denom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MathUtil::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  MathUtil_Lerp_m2154068636 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___from0, Vector2_t2243707579  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtil_Lerp_m2153907579 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::Clamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  MathUtil_Clamp_m2372207007 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___value0, Vector3_t2243707580  ___min1, Vector3_t2243707580  ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::Clamp01(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  MathUtil_Clamp01_m4126162112 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  MathUtil_Max_m1876920901 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___value10, Vector3_t2243707580  ___value21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  MathUtil_Min_m754418779 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___value10, Vector3_t2243707580  ___value21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::LerpClamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtil_LerpClamped_m4046067353 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::Rescale(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtil_Rescale_m3543663840 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___value0, float ___dist1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MathUtil::Rescale(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  MathUtil_Rescale_m3378695168 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___value0, float ___dist1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MathUtil::DivideXYZ(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  MathUtil_DivideXYZ_m2721526005 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___numer0, Vector3_t2243707580  ___denom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 MathUtil::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t2243707581  MathUtil_Lerp_m3484004822 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___from0, Vector4_t2243707581  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::Equals(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool MathUtil_Equals_m1211916900 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___a0, Color_t2020392075  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtil::EqualsRGB(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool MathUtil_EqualsRGB_m1512473015 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___a0, Color_t2020392075  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::Scale(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2020392075  MathUtil_Scale_m4212271508 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___a0, Color_t2020392075  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::ScaleRGB(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2020392075  MathUtil_ScaleRGB_m1677770313 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___a0, Color_t2020392075  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::Scale(UnityEngine.Color,System.Single)
extern "C"  Color_t2020392075  MathUtil_Scale_m2039885021 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::ScaleRGB(UnityEngine.Color,System.Single)
extern "C"  Color_t2020392075  MathUtil_ScaleRGB_m3263711682 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2020392075  MathUtil_Lerp_m1741246476 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___from0, Color_t2020392075  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::LerpRGB(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2020392075  MathUtil_LerpRGB_m2716347275 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___from0, Color_t2020392075  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::LerpClamped(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2020392075  MathUtil_LerpClamped_m4052882546 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___from0, Color_t2020392075  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MathUtil::LerpClampedRGB(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2020392075  MathUtil_LerpClampedRGB_m2249428833 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___from0, Color_t2020392075  ___to1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MathUtil::Abs(System.Int32)
extern "C"  int32_t MathUtil_Abs_m2987462142 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MathUtil::Dist(System.Int32,System.Int32)
extern "C"  int32_t MathUtil_Dist_m3761662659 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MathUtil::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t MathUtil_Clamp_m2313359795 (Il2CppObject * __this /* static, unused */, int32_t ___value0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MathUtil::Max(System.Int32,System.Int32)
extern "C"  int32_t MathUtil_Max_m1065488001 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MathUtil::Min(System.Int32,System.Int32)
extern "C"  int32_t MathUtil_Min_m2838961967 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MathUtil::Wrap0N(System.Int32,System.Int32)
extern "C"  int32_t MathUtil_Wrap0N_m3359296863 (Il2CppObject * __this /* static, unused */, int32_t ___value0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MathUtil::Max(System.Int64,System.Int64)
extern "C"  int64_t MathUtil_Max_m3880752496 (Il2CppObject * __this /* static, unused */, int64_t ___a0, int64_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MathUtil::LCM(System.Int32,System.Int32)
extern "C"  int32_t MathUtil_LCM_m1217949119 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
