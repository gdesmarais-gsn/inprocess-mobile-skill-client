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

// Newtonsoft.Json.Linq.JConstructor
struct JConstructor_t3123819808;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JConstructor3123819808.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor()
extern "C"  void JConstructor__ctor_m285559191 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(Newtonsoft.Json.Linq.JConstructor)
extern "C"  void JConstructor__ctor_m3587440278 (JConstructor_t3123819808 * __this, JConstructor_t3123819808 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String,System.Object[])
extern "C"  void JConstructor__ctor_m1918071097 (JConstructor_t3123819808 * __this, String_t* ___name0, ObjectU5BU5D_t3614634134* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String,System.Object)
extern "C"  void JConstructor__ctor_m3257129811 (JConstructor_t3123819808 * __this, String_t* ___name0, Il2CppObject * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String)
extern "C"  void JConstructor__ctor_m2253574953 (JConstructor_t3123819808 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JConstructor::get_ChildrenTokens()
extern "C"  Il2CppObject* JConstructor_get_ChildrenTokens_m2496312647 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JConstructor::get_Name()
extern "C"  String_t* JConstructor_get_Name_m3629882468 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::set_Name(System.String)
extern "C"  void JConstructor_set_Name_m2937941491 (JConstructor_t3123819808 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JConstructor::get_Type()
extern "C"  int32_t JConstructor_get_Type_m4012860599 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JConstructor::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JConstructor_DeepEquals_m4223557320 (JConstructor_t3123819808 * __this, JToken_t2552644013 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JConstructor::CloneToken()
extern "C"  JToken_t2552644013 * JConstructor_CloneToken_m3880259492 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JConstructor_WriteTo_m403655872 (JConstructor_t3123819808 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JConstructor::get_Item(System.Object)
extern "C"  JToken_t2552644013 * JConstructor_get_Item_m2762866604 (JConstructor_t3123819808 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::set_Item(System.Object,Newtonsoft.Json.Linq.JToken)
extern "C"  void JConstructor_set_Item_m3515092107 (JConstructor_t3123819808 * __this, Il2CppObject * ___key0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JConstructor::GetDeepHashCode()
extern "C"  int32_t JConstructor_GetDeepHashCode_m178867534 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JConstructor Newtonsoft.Json.Linq.JConstructor::Load(Newtonsoft.Json.JsonReader)
extern "C"  JConstructor_t3123819808 * JConstructor_Load_m3969603069 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
