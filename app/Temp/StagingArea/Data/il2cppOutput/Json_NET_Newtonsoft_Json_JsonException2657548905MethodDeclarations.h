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

// Newtonsoft.Json.JsonException
struct JsonException_t2657548905;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t445311913;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Newtonsoft.Json.JsonException::.ctor()
extern "C"  void JsonException__ctor_m3893736214 (JsonException_t2657548905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String)
extern "C"  void JsonException__ctor_m544089868 (JsonException_t2657548905 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String,System.Exception)
extern "C"  void JsonException__ctor_m3619192164 (JsonException_t2657548905 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonException::FormatMessage(Newtonsoft.Json.IJsonLineInfo,System.String,System.String)
extern "C"  String_t* JsonException_FormatMessage_m3509647461 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo0, String_t* ___path1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonException Newtonsoft.Json.JsonException::Create(Newtonsoft.Json.IJsonLineInfo,System.String,System.String)
extern "C"  JsonException_t2657548905 * JsonException_Create_m4100652963 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo0, String_t* ___path1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
