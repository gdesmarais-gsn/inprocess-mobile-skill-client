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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 Stm.V1_1.ParseUtils::CountArgs(System.String,System.Int32,System.Int32,System.Char,System.Boolean)
extern "C"  int32_t ParseUtils_CountArgs_m3125951690 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, Il2CppChar ___commaChar3, bool ___assumeMatchingAngledBrackets4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetIdentifierEndIndex(System.String,System.Int32,System.Int32)
extern "C"  int32_t ParseUtils_GetIdentifierEndIndex_m3858906438 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetNumberEndIndex(System.String,System.Int32,System.Int32)
extern "C"  int32_t ParseUtils_GetNumberEndIndex_m2299526300 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetNextTokenStartIndex(System.String,System.Int32,System.Int32)
extern "C"  int32_t ParseUtils_GetNextTokenStartIndex_m655514990 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetBracketEndIndex(System.String,System.Int32,System.Int32,System.Char,System.Char)
extern "C"  int32_t ParseUtils_GetBracketEndIndex_m4232167541 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, Il2CppChar ___bracketStartChar3, Il2CppChar ___bracketEndChar4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::SkipComment(System.String,System.Int32&,System.Int32)
extern "C"  bool ParseUtils_SkipComment_m3399312432 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___startIndex1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetCommaIndex(System.String,System.Int32,System.Int32,System.Char,System.Boolean)
extern "C"  int32_t ParseUtils_GetCommaIndex_m2856364891 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, Il2CppChar ___commaChar3, bool ___assumeMatchingAngledBrackets4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetStringEndIndex(System.String,System.Int32,System.Int32,System.Char)
extern "C"  int32_t ParseUtils_GetStringEndIndex_m2216978727 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, Il2CppChar ___quoteChar3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetRawStringEndIndex(System.String,System.Int32,System.Int32,System.Char)
extern "C"  int32_t ParseUtils_GetRawStringEndIndex_m1828836135 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, Il2CppChar ___quoteChar3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetStatementEndIndex(System.String,System.Int32,System.Int32,System.Char)
extern "C"  int32_t ParseUtils_GetStatementEndIndex_m558748007 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, Il2CppChar ___semicolonChar3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::IsIdentifierChar(System.Char)
extern "C"  bool ParseUtils_IsIdentifierChar_m409620984 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::IsIdentifierStartChar(System.Char)
extern "C"  bool ParseUtils_IsIdentifierStartChar_m1378949712 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::IsNumberChar(System.Char)
extern "C"  bool ParseUtils_IsNumberChar_m1590198230 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::IsNumberPrefixChar(System.Char)
extern "C"  bool ParseUtils_IsNumberPrefixChar_m2959518286 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::IsIdentifierOrDotChar(System.Char)
extern "C"  bool ParseUtils_IsIdentifierOrDotChar_m3076399696 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetNextLineIndex(System.String,System.Int32,System.Int32)
extern "C"  int32_t ParseUtils_GetNextLineIndex_m2611696759 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::StartsWith(System.String,System.Int32,System.Int32,System.String,System.Boolean)
extern "C"  bool ParseUtils_StartsWith_m943290146 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, String_t* ___substr3, bool ___wholeWord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::StartsWithIgnoringCase(System.String,System.Int32,System.Int32,System.String,System.Boolean)
extern "C"  bool ParseUtils_StartsWithIgnoringCase_m2910224485 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, String_t* ___substr3, bool ___wholeWord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::IndexOf(System.String,System.Int32,System.Int32,System.Char)
extern "C"  int32_t ParseUtils_IndexOf_m443321274 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, Il2CppChar ___searchChar3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::IndexOf(System.String,System.Int32,System.Int32,System.String)
extern "C"  int32_t ParseUtils_IndexOf_m2718253923 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, String_t* ___substr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::IndexOfIgnoringCase(System.String,System.Int32,System.Int32,System.String)
extern "C"  int32_t ParseUtils_IndexOfIgnoringCase_m1813869646 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, String_t* ___substr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ParseUtils::GetMultiIdentifierEndIndex(System.String,System.Int32,System.Int32)
extern "C"  int32_t ParseUtils_GetMultiIdentifierEndIndex_m237945075 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___startIndex1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.ParseUtils::UnescapeString(System.String)
extern "C"  String_t* ParseUtils_UnescapeString_m2028052834 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.ParseUtils::UnescapeUnicode(System.String,System.Int32&,System.Int32)
extern "C"  String_t* ParseUtils_UnescapeUnicode_m402983676 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t* ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.ParseUtils::UnescapeUnicodeVariableLength(System.String,System.Int32&)
extern "C"  String_t* ParseUtils_UnescapeUnicodeVariableLength_m2753241693 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ParseUtils::IsHex(System.Char)
extern "C"  bool ParseUtils_IsHex_m3547053236 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
