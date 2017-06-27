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

// Newtonsoft.Json.Linq.JValue
struct JValue_t300956845;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// System.IFormatProvider
struct IFormatProvider_t2849799027;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Json_NET_Newtonsoft_Json_Linq_JValue300956845.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Guid2533601593.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_Nullable_1_gen3865860824.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object,Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JValue__ctor_m2238964702 (JValue_t300956845 * __this, Il2CppObject * ___value0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(Newtonsoft.Json.Linq.JValue)
extern "C"  void JValue__ctor_m2545762724 (JValue_t300956845 * __this, JValue_t300956845 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Int64)
extern "C"  void JValue__ctor_m684656126 (JValue_t300956845 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.UInt64)
extern "C"  void JValue__ctor_m500736047 (JValue_t300956845 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Double)
extern "C"  void JValue__ctor_m3278579168 (JValue_t300956845 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.DateTime)
extern "C"  void JValue__ctor_m1387655428 (JValue_t300956845 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Boolean)
extern "C"  void JValue__ctor_m1754538631 (JValue_t300956845 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.String)
extern "C"  void JValue__ctor_m213850072 (JValue_t300956845 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Guid)
extern "C"  void JValue__ctor_m328410040 (JValue_t300956845 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Uri)
extern "C"  void JValue__ctor_m2748657817 (JValue_t300956845 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.TimeSpan)
extern "C"  void JValue__ctor_m1706525044 (JValue_t300956845 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object)
extern "C"  void JValue__ctor_m2281692290 (JValue_t300956845 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JValue_DeepEquals_m73554073 (JValue_t300956845 * __this, JToken_t2552644013 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::get_HasValues()
extern "C"  bool JValue_get_HasValues_m1390784915 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::Compare(Newtonsoft.Json.Linq.JTokenType,System.Object,System.Object)
extern "C"  int32_t JValue_Compare_m3501564195 (Il2CppObject * __this /* static, unused */, int32_t ___valueType0, Il2CppObject * ___objA1, Il2CppObject * ___objB2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareFloat(System.Object,System.Object)
extern "C"  int32_t JValue_CompareFloat_m894116873 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objA0, Il2CppObject * ___objB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JValue::CloneToken()
extern "C"  JToken_t2552644013 * JValue_CloneToken_m3987448525 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateComment(System.String)
extern "C"  JValue_t300956845 * JValue_CreateComment_m3479671524 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateString(System.String)
extern "C"  JValue_t300956845 * JValue_CreateString_m2538132416 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>,System.Object)
extern "C"  int32_t JValue_GetValueType_m570190357 (Il2CppObject * __this /* static, unused */, Nullable_1_t3865860824  ___current0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetStringValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>)
extern "C"  int32_t JValue_GetStringValueType_m1421346220 (Il2CppObject * __this /* static, unused */, Nullable_1_t3865860824  ___current0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::get_Type()
extern "C"  int32_t JValue_get_Type_m3911372714 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JValue::get_Value()
extern "C"  Il2CppObject * JValue_get_Value_m3286776519 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::set_Value(System.Object)
extern "C"  void JValue_set_Value_m1882203388 (JValue_t300956845 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JValue_WriteTo_m4182910383 (JValue_t300956845 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::GetDeepHashCode()
extern "C"  int32_t JValue_GetDeepHashCode_m1788218911 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::ValuesEquals(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_ValuesEquals_m172096483 (Il2CppObject * __this /* static, unused */, JValue_t300956845 * ___v10, JValue_t300956845 * ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_Equals_m2782390461 (JValue_t300956845 * __this, JValue_t300956845 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(System.Object)
extern "C"  bool JValue_Equals_m1812849961 (JValue_t300956845 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::GetHashCode()
extern "C"  int32_t JValue_GetHashCode_m3997343775 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString()
extern "C"  String_t* JValue_ToString_m3336446351 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.String)
extern "C"  String_t* JValue_ToString_m3001228221 (JValue_t300956845 * __this, String_t* ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m2300227283 (JValue_t300956845 * __this, Il2CppObject * ___formatProvider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m1990971937 (JValue_t300956845 * __this, String_t* ___format0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t JValue_System_IComparable_CompareTo_m1889973580 (JValue_t300956845 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareTo(Newtonsoft.Json.Linq.JValue)
extern "C"  int32_t JValue_CompareTo_m501764926 (JValue_t300956845 * __this, JValue_t300956845 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
