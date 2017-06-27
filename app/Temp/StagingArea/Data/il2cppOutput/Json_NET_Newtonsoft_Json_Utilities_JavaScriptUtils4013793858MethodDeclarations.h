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

// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m4192282918 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, String_t* ___value1, Il2CppChar ___delimiter2, bool ___appendDelimiters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m3198688614 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String,System.Char,System.Boolean)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m2409616744 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___delimiter1, bool ___appendDelimiters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
