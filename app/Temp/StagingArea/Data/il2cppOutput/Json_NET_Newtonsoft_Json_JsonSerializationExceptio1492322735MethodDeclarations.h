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

// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t1492322735;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t445311913;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.JsonSerializationException::.ctor()
extern "C"  void JsonSerializationException__ctor_m2223556982 (JsonSerializationException_t1492322735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m2070216380 (JsonSerializationException_t1492322735 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String,System.Exception)
extern "C"  void JsonSerializationException__ctor_m3753306684 (JsonSerializationException_t1492322735 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String)
extern "C"  JsonSerializationException_t1492322735 * JsonSerializationException_Create_m4004765805 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String,System.Exception)
extern "C"  JsonSerializationException_t1492322735 * JsonSerializationException_Create_m4154195125 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, Exception_t1927440687 * ___ex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.IJsonLineInfo,System.String,System.String,System.Exception)
extern "C"  JsonSerializationException_t1492322735 * JsonSerializationException_Create_m3299210395 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo0, String_t* ___path1, String_t* ___message2, Exception_t1927440687 * ___ex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
