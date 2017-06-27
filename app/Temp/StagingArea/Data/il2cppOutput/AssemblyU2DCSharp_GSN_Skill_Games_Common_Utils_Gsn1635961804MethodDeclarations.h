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

// GSN.Skill.Games.Common.Utils.GsnRational
struct GsnRational_t1635961804;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Gsn1635961804.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.GsnRational::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GsnRational__ctor_m453791957 (GsnRational_t1635961804 * __this, int32_t ___integer0, int32_t ___numerator1, int32_t ___denominator2, int32_t ___maxDenom3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GsnRational::GreatestCommonDivisor(System.Int32,System.Int32)
extern "C"  int32_t GsnRational_GreatestCommonDivisor_m1444719125 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::simplify()
extern "C"  void GsnRational_simplify_m509528742 (GsnRational_t1635961804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::Negate()
extern "C"  void GsnRational_Negate_m2818940405 (GsnRational_t1635961804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::Assign(GSN.Skill.Games.Common.Utils.GsnRational)
extern "C"  void GsnRational_Assign_m330734546 (GsnRational_t1635961804 * __this, GsnRational_t1635961804 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::AssignFromFraction(System.Int32,System.Int32)
extern "C"  void GsnRational_AssignFromFraction_m3378096210 (GsnRational_t1635961804 * __this, int32_t ___n0, int32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::AssignFromParts(System.Int32,System.Int32,System.Int32)
extern "C"  void GsnRational_AssignFromParts_m1622437679 (GsnRational_t1635961804 * __this, int32_t ___i0, int32_t ___n1, int32_t ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GsnRational::Compare(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t GsnRational_Compare_m3263710701 (GsnRational_t1635961804 * __this, int32_t ___i0, int32_t ___n1, int32_t ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::Add(GSN.Skill.Games.Common.Utils.GsnRational)
extern "C"  void GsnRational_Add_m3142365792 (GsnRational_t1635961804 * __this, GsnRational_t1635961804 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::Subtract(GSN.Skill.Games.Common.Utils.GsnRational)
extern "C"  void GsnRational_Subtract_m2756873823 (GsnRational_t1635961804 * __this, GsnRational_t1635961804 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.GsnRational::isDigit(System.String)
extern "C"  bool GsnRational_isDigit_m2674484232 (GsnRational_t1635961804 * __this, String_t* ___chr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.GsnRational::isWhiteSpace(System.String)
extern "C"  bool GsnRational_isWhiteSpace_m3595266044 (GsnRational_t1635961804 * __this, String_t* ___chr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::AssignFromString(System.String)
extern "C"  void GsnRational_AssignFromString_m3173134597 (GsnRational_t1635961804 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::Reciprocal()
extern "C"  void GsnRational_Reciprocal_m2034399955 (GsnRational_t1635961804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::MulInt(System.Int32)
extern "C"  void GsnRational_MulInt_m812153479 (GsnRational_t1635961804 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::DivInt(System.Int32)
extern "C"  void GsnRational_DivInt_m3889087552 (GsnRational_t1635961804 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::Multiply(GSN.Skill.Games.Common.Utils.GsnRational)
extern "C"  void GsnRational_Multiply_m2842164151 (GsnRational_t1635961804 * __this, GsnRational_t1635961804 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRational::Divide(GSN.Skill.Games.Common.Utils.GsnRational)
extern "C"  void GsnRational_Divide_m3440702954 (GsnRational_t1635961804 * __this, GsnRational_t1635961804 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GsnRational::GetRoundedProduct(System.Int32)
extern "C"  int32_t GsnRational_GetRoundedProduct_m1317540330 (GsnRational_t1635961804 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GsnRational::GetRoundedDivisionOf(System.Int32)
extern "C"  int32_t GsnRational_GetRoundedDivisionOf_m4166509083 (GsnRational_t1635961804 * __this, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GsnRational::GetLShiftedInt(System.Int32)
extern "C"  int32_t GsnRational_GetLShiftedInt_m479379172 (GsnRational_t1635961804 * __this, int32_t ___sh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GsnRational::GetRounded()
extern "C"  int32_t GsnRational_GetRounded_m3625747698 (GsnRational_t1635961804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnRational::ToString()
extern "C"  String_t* GsnRational_ToString_m2934138932 (GsnRational_t1635961804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.GsnRational::IsZero()
extern "C"  bool GsnRational_IsZero_m895394013 (GsnRational_t1635961804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
