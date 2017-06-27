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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.String GSN.Skill.Utils.StringExtensions::ToOrdinal(System.Int64)
extern "C"  String_t* StringExtensions_ToOrdinal_m990091645 (Il2CppObject * __this /* static, unused */, int64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToOrdinal(System.Int32)
extern "C"  String_t* StringExtensions_ToOrdinal_m183522756 (Il2CppObject * __this /* static, unused */, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ReplaceRegisterTradmark(System.String)
extern "C"  String_t* StringExtensions_ReplaceRegisterTradmark_m1298280946 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::CharAt(System.String,System.Int32)
extern "C"  String_t* StringExtensions_CharAt_m2136659737 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Utils.StringExtensions::CharCodeAt(System.String,System.Int32)
extern "C"  int32_t StringExtensions_CharCodeAt_m2080248243 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::Substring(System.String,System.Int32,System.Int32)
extern "C"  String_t* StringExtensions_Substring_m1048201452 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endindex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::Substr(System.String,System.Int32,System.Int32)
extern "C"  String_t* StringExtensions_Substr_m236161906 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::StripCarriageReturn(System.String)
extern "C"  String_t* StringExtensions_StripCarriageReturn_m3241635371 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::StripHtmlUrl(System.String)
extern "C"  String_t* StringExtensions_StripHtmlUrl_m3023428919 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::StripHTMLTags(System.String)
extern "C"  String_t* StringExtensions_StripHTMLTags_m3414110533 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::Truncate(System.String,System.Int32)
extern "C"  String_t* StringExtensions_Truncate_m1466951176 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t ___maxChars1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::TimeFormatMSFromSeconds(System.Int32)
extern "C"  String_t* StringExtensions_TimeFormatMSFromSeconds_m4165019555 (Il2CppObject * __this /* static, unused */, int32_t ___totalSeconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::GetHexString(System.Byte[])
extern "C"  String_t* StringExtensions_GetHexString_m4057654006 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.StringExtensions::HexToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* StringExtensions_HexToBytes_m3612836975 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Utils.StringExtensions::CompareWithNumericSearch(System.String,System.String,System.Boolean)
extern "C"  int32_t StringExtensions_CompareWithNumericSearch_m238037779 (Il2CppObject * __this /* static, unused */, String_t* ___s10, String_t* ___s21, bool ___ignoreCase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToColor(System.String,System.String)
extern "C"  String_t* StringExtensions_ToColor_m1867276457 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToColor(System.String,System.Int32)
extern "C"  String_t* StringExtensions_ToColor_m644344658 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToRed(System.String)
extern "C"  String_t* StringExtensions_ToRed_m3515343041 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToGreen(System.String)
extern "C"  String_t* StringExtensions_ToGreen_m2953377709 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToBlue(System.String)
extern "C"  String_t* StringExtensions_ToBlue_m3280647012 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToYellow(System.String)
extern "C"  String_t* StringExtensions_ToYellow_m1751175068 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToCyan(System.String)
extern "C"  String_t* StringExtensions_ToCyan_m1989604615 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToMagenta(System.String)
extern "C"  String_t* StringExtensions_ToMagenta_m2423352999 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToOrange(System.String)
extern "C"  String_t* StringExtensions_ToOrange_m1444798130 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToSpringGreen(System.String)
extern "C"  String_t* StringExtensions_ToSpringGreen_m2869734530 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToViolet(System.String)
extern "C"  String_t* StringExtensions_ToViolet_m1781649575 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToCanary(System.String)
extern "C"  String_t* StringExtensions_ToCanary_m1717622332 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToRoyalBlue(System.String)
extern "C"  String_t* StringExtensions_ToRoyalBlue_m2170436685 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.StringExtensions::ToPink(System.String)
extern "C"  String_t* StringExtensions_ToPink_m4274491012 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Utils.StringExtensions::<CompareWithNumericSearch>m__0(System.String)
extern "C"  bool StringExtensions_U3CCompareWithNumericSearchU3Em__0_m3349086031 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Utils.StringExtensions::<CompareWithNumericSearch>m__1(System.String)
extern "C"  bool StringExtensions_U3CCompareWithNumericSearchU3Em__1_m434846318 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Utils.StringExtensions::<CompareWithNumericSearch>m__2(System.String)
extern "C"  bool StringExtensions_U3CCompareWithNumericSearchU3Em__2_m2378291085 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Utils.StringExtensions::<CompareWithNumericSearch>m__3(System.String)
extern "C"  bool StringExtensions_U3CCompareWithNumericSearchU3Em__3_m3759018668 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
