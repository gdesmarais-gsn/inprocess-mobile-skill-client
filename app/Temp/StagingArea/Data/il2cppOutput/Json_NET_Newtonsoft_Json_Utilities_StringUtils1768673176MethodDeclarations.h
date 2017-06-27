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
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Newtonsoft.Json.Utilities.StringUtils/ActionLine
struct ActionLine_t3198721076;
// System.IO.StringWriter
struct StringWriter_t4139609088;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "Json_NET_Newtonsoft_Json_Utilities_StringUtils_Act3198721076.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m2558683389 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::ContainsWhiteSpace(System.String)
extern "C"  bool StringUtils_ContainsWhiteSpace_m1489487713 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsWhiteSpace(System.String)
extern "C"  bool StringUtils_IsWhiteSpace_m4005812168 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::EnsureEndsWith(System.String,System.String)
extern "C"  String_t* StringUtils_EnsureEndsWith_m2578443886 (Il2CppObject * __this /* static, unused */, String_t* ___target0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsNullOrEmptyOrWhiteSpace(System.String)
extern "C"  bool StringUtils_IsNullOrEmptyOrWhiteSpace_m3427567132 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::IfNotNullOrEmpty(System.String,System.Action`1<System.String>)
extern "C"  void StringUtils_IfNotNullOrEmpty_m55732532 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Action_1_t1831019615 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::IfNotNullOrEmpty(System.String,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  void StringUtils_IfNotNullOrEmpty_m78928652 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Action_1_t1831019615 * ___trueAction1, Action_1_t1831019615 * ___falseAction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Indent(System.String,System.Int32)
extern "C"  String_t* StringUtils_Indent_m1241116121 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___indentation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Indent(System.String,System.Int32,System.Char)
extern "C"  String_t* StringUtils_Indent_m1428677508 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___indentation1, Il2CppChar ___indentChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::ActionTextReaderLine(System.IO.TextReader,System.IO.TextWriter,Newtonsoft.Json.Utilities.StringUtils/ActionLine)
extern "C"  void StringUtils_ActionTextReaderLine_m2098003147 (Il2CppObject * __this /* static, unused */, TextReader_t1561828458 * ___textReader0, TextWriter_t4027217640 * ___textWriter1, ActionLine_t3198721076 * ___lineAction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::NumberLines(System.String)
extern "C"  String_t* StringUtils_NumberLines_m2510455948 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::NullEmptyString(System.String)
extern "C"  String_t* StringUtils_NullEmptyString_m4249270023 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::ReplaceNewLines(System.String,System.String)
extern "C"  String_t* StringUtils_ReplaceNewLines_m5753591 (Il2CppObject * __this /* static, unused */, String_t* ___s0, String_t* ___replacement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Truncate(System.String,System.Int32)
extern "C"  String_t* StringUtils_Truncate_m341311587 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___maximumLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Truncate(System.String,System.Int32,System.String)
extern "C"  String_t* StringUtils_Truncate_m774596001 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___maximumLength1, String_t* ___suffix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t4139609088 * StringUtils_CreateStringWriter_m2270902292 (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.StringUtils::GetLength(System.String)
extern "C"  Nullable_1_t334943763  StringUtils_GetLength_m2754251976 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char)
extern "C"  String_t* StringUtils_ToCharAsUnicode_m1172457875 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m960074739 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, CharU5BU5D_t1328083999* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::WriteCharAsUnicode(System.IO.TextWriter,System.Char)
extern "C"  void StringUtils_WriteCharAsUnicode_m268110337 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, Il2CppChar ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCamelCase(System.String)
extern "C"  String_t* StringUtils_ToCamelCase_m929496833 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsHighSurrogate(System.Char)
extern "C"  bool StringUtils_IsHighSurrogate_m2564859254 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsLowSurrogate(System.Char)
extern "C"  bool StringUtils_IsLowSurrogate_m1247724896 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
