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

// Newtonsoft.Json.Linq.JArray
struct JArray_t1483708661;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.String
struct String_t;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1832626432;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JArray1483708661.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

// System.Void Newtonsoft.Json.Linq.JArray::.ctor()
extern "C"  void JArray__ctor_m507093478 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(Newtonsoft.Json.Linq.JArray)
extern "C"  void JArray__ctor_m3972772188 (JArray_t1483708661 * __this, JArray_t1483708661 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(System.Object[])
extern "C"  void JArray__ctor_m3334152926 (JArray_t1483708661 * __this, ObjectU5BU5D_t3614634134* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(System.Object)
extern "C"  void JArray__ctor_m10785678 (JArray_t1483708661 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::get_ChildrenTokens()
extern "C"  Il2CppObject* JArray_get_ChildrenTokens_m1360611480 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JArray::get_Type()
extern "C"  int32_t JArray_get_Type_m3252741158 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_DeepEquals_m1373546483 (JArray_t1483708661 * __this, JToken_t2552644013 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::CloneToken()
extern "C"  JToken_t2552644013 * JArray_CloneToken_m1413606995 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
extern "C"  JArray_t1483708661 * JArray_Load_m4084820381 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Parse(System.String)
extern "C"  JArray_t1483708661 * JArray_Parse_m3328717110 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::FromObject(System.Object)
extern "C"  JArray_t1483708661 * JArray_FromObject_m514259128 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  JArray_t1483708661 * JArray_FromObject_m1139961727 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, JsonSerializer_t1719617802 * ___jsonSerializer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JArray_WriteTo_m339974001 (JArray_t1483708661 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::get_Item(System.Object)
extern "C"  JToken_t2552644013 * JArray_get_Item_m3867553853 (JArray_t1483708661 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::set_Item(System.Object,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_set_Item_m1414972794 (JArray_t1483708661 * __this, Il2CppObject * ___key0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::get_Item(System.Int32)
extern "C"  JToken_t2552644013 * JArray_get_Item_m3147360544 (JArray_t1483708661 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_set_Item_m3923211009 (JArray_t1483708661 * __this, int32_t ___index0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JArray::IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JArray_IndexOf_m2219189621 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Insert_m3568091280 (JArray_t1483708661 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::RemoveAt(System.Int32)
extern "C"  void JArray_RemoveAt_m2514367324 (JArray_t1483708661 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Add_m496569 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Clear()
extern "C"  void JArray_Clear_m3089770159 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Contains_m3049454623 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JArray_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_CopyTo_m3947993503 (JArray_t1483708661 * __this, JTokenU5BU5D_t1832626432* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly()
extern "C"  bool JArray_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_get_IsReadOnly_m796812961 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Remove_m97306918 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JArray::GetDeepHashCode()
extern "C"  int32_t JArray_GetDeepHashCode_m575351865 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
