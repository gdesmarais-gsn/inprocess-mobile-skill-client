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

// Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2484172789;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"

// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor()
extern "C"  void StringBuffer__ctor_m953106788 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Int32)
extern "C"  void StringBuffer__ctor_m1362714841 (StringBuffer_t2484172789 * __this, int32_t ___initalSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m2321155444 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m681272417 (StringBuffer_t2484172789 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(System.Char)
extern "C"  void StringBuffer_Append_m559351089 (StringBuffer_t2484172789 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear()
extern "C"  void StringBuffer_Clear_m751477361 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(System.Int32)
extern "C"  void StringBuffer_EnsureSize_m2111409124 (StringBuffer_t2484172789 * __this, int32_t ___appendLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m537636859 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m3317777967 (StringBuffer_t2484172789 * __this, int32_t ___start0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::GetInternalBuffer()
extern "C"  CharU5BU5D_t1328083999* StringBuffer_GetInternalBuffer_m2045574399 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.cctor()
extern "C"  void StringBuffer__cctor_m1115501891 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
