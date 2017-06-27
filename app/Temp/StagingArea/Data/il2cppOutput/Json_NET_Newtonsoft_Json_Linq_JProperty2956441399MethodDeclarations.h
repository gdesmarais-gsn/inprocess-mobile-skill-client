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

// Newtonsoft.Json.Linq.JProperty
struct JProperty_t2956441399;
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
#include "Json_NET_Newtonsoft_Json_Linq_JProperty2956441399.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JProperty__ctor_m3412054796 (JProperty_t2956441399 * __this, JProperty_t2956441399 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String)
extern "C"  void JProperty__ctor_m4292978604 (JProperty_t2956441399 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object[])
extern "C"  void JProperty__ctor_m4207062602 (JProperty_t2956441399 * __this, String_t* ___name0, ObjectU5BU5D_t3614634134* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object)
extern "C"  void JProperty__ctor_m1405364062 (JProperty_t2956441399 * __this, String_t* ___name0, Il2CppObject * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty::get_ChildrenTokens()
extern "C"  Il2CppObject* JProperty_get_ChildrenTokens_m3361650644 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
extern "C"  String_t* JProperty_get_Name_m1687057879 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
extern "C"  JToken_t2552644013 * JProperty_get_Value_m1504522811 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::set_Value(Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_set_Value_m30784786 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::GetItem(System.Int32)
extern "C"  JToken_t2552644013 * JProperty_GetItem_m1334534499 (JProperty_t2956441399 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::SetItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_SetItem_m3149901052 (JProperty_t2956441399 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::RemoveItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_RemoveItem_m1676970169 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::RemoveItemAt(System.Int32)
extern "C"  void JProperty_RemoveItemAt_m838145343 (JProperty_t2956441399 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_InsertItem_m716897313 (JProperty_t2956441399 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::ContainsItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_ContainsItem_m2039950456 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::ClearItems()
extern "C"  void JProperty_ClearItems_m2489008735 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_DeepEquals_m4282730049 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::CloneToken()
extern "C"  JToken_t2552644013 * JProperty_CloneToken_m3407603017 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JProperty::get_Type()
extern "C"  int32_t JProperty_get_Type_m3424829376 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JProperty_WriteTo_m3245491807 (JProperty_t2956441399 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JProperty::GetDeepHashCode()
extern "C"  int32_t JProperty_GetDeepHashCode_m3372288775 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JProperty::Load(Newtonsoft.Json.JsonReader)
extern "C"  JProperty_t2956441399 * JProperty_Load_m3703886849 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
