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

// System.Net.Mime.ContentDisposition
struct ContentDisposition_t1586505162;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1070889667;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Mime_ContentDisposition1586505162.h"

// System.Void System.Net.Mime.ContentDisposition::.ctor()
extern "C"  void ContentDisposition__ctor_m827627838 (ContentDisposition_t1586505162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::.ctor(System.String)
extern "C"  void ContentDisposition__ctor_m3310007416 (ContentDisposition_t1586505162 * __this, String_t* ___disposition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::Parse(System.String)
extern "C"  void ContentDisposition_Parse_m1651999699 (ContentDisposition_t1586505162 * __this, String_t* ___pair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::get_DispositionType()
extern "C"  String_t* ContentDisposition_get_DispositionType_m2777487627 (ContentDisposition_t1586505162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_FileName(System.String)
extern "C"  void ContentDisposition_set_FileName_m3887554106 (ContentDisposition_t1586505162 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentDisposition::get_Parameters()
extern "C"  StringDictionary_t1070889667 * ContentDisposition_get_Parameters_m787345056 (ContentDisposition_t1586505162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_Size(System.Int64)
extern "C"  void ContentDisposition_set_Size_m184954272 (ContentDisposition_t1586505162 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Object)
extern "C"  bool ContentDisposition_Equals_m1406739893 (ContentDisposition_t1586505162 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Net.Mime.ContentDisposition)
extern "C"  bool ContentDisposition_Equals_m1473758477 (ContentDisposition_t1586505162 * __this, ContentDisposition_t1586505162 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentDisposition::GetHashCode()
extern "C"  int32_t ContentDisposition_GetHashCode_m1116106451 (ContentDisposition_t1586505162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::ToString()
extern "C"  String_t* ContentDisposition_ToString_m3358291143 (ContentDisposition_t1586505162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
