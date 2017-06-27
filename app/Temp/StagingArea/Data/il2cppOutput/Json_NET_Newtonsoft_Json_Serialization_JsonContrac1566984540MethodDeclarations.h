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

// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Func`1<System.Object>
struct Func_1_t348874681;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "Json_NET_Newtonsoft_Json_JsonConverter1964060750.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Json_NET_Newtonsoft_Json_Serialization_ErrorContext615697659.h"

// System.Void Newtonsoft.Json.Serialization.JsonContract::.ctor(System.Type)
extern "C"  void JsonContract__ctor_m3845545526 (JsonContract_t1566984540 * __this, Type_t * ___underlyingType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonContract::get_UnderlyingType()
extern "C"  Type_t * JsonContract_get_UnderlyingType_m533199503 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_UnderlyingType(System.Type)
extern "C"  void JsonContract_set_UnderlyingType_m1726988012 (JsonContract_t1566984540 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonContract::get_CreatedType()
extern "C"  Type_t * JsonContract_get_CreatedType_m2077602864 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_CreatedType(System.Type)
extern "C"  void JsonContract_set_CreatedType_m3061884681 (JsonContract_t1566984540 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonContract::get_IsReference()
extern "C"  Nullable_1_t2088641033  JsonContract_get_IsReference_m1404929812 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_IsReference(System.Nullable`1<System.Boolean>)
extern "C"  void JsonContract_set_IsReference_m2969717433 (JsonContract_t1566984540 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_Converter()
extern "C"  JsonConverter_t1964060750 * JsonContract_get_Converter_m2135765212 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_Converter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_Converter_m3966663037 (JsonContract_t1566984540 * __this, JsonConverter_t1964060750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonContract::get_IsNullable()
extern "C"  bool JsonContract_get_IsNullable_m2690927317 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_InternalConverter()
extern "C"  JsonConverter_t1964060750 * JsonContract_get_InternalConverter_m3202422953 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_InternalConverter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_InternalConverter_m3204905810 (JsonContract_t1566984540 * __this, JsonConverter_t1964060750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnDeserialized()
extern "C"  MethodInfo_t * JsonContract_get_OnDeserialized_m1540765660 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnDeserialized(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnDeserialized_m1963553235 (JsonContract_t1566984540 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnDeserializing()
extern "C"  MethodInfo_t * JsonContract_get_OnDeserializing_m2565761477 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnDeserializing(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnDeserializing_m1874908216 (JsonContract_t1566984540 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnSerialized()
extern "C"  MethodInfo_t * JsonContract_get_OnSerialized_m3430736793 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnSerialized(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnSerialized_m626901674 (JsonContract_t1566984540 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnSerializing()
extern "C"  MethodInfo_t * JsonContract_get_OnSerializing_m2735221240 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnSerializing(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnSerializing_m2598465679 (JsonContract_t1566984540 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreator()
extern "C"  Func_1_t348874681 * JsonContract_get_DefaultCreator_m3790853662 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreator(System.Func`1<System.Object>)
extern "C"  void JsonContract_set_DefaultCreator_m2409523073 (JsonContract_t1566984540 * __this, Func_1_t348874681 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreatorNonPublic()
extern "C"  bool JsonContract_get_DefaultCreatorNonPublic_m2924745639 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreatorNonPublic(System.Boolean)
extern "C"  void JsonContract_set_DefaultCreatorNonPublic_m2618923916 (JsonContract_t1566984540 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract::get_OnError()
extern "C"  MethodInfo_t * JsonContract_get_OnError_m2978972071 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_OnError(System.Reflection.MethodInfo)
extern "C"  void JsonContract_set_OnError_m2063547758 (JsonContract_t1566984540 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerializing_m4175142025 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerialized_m325427356 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserializing_m971528952 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserialized_m1068413357 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnError(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void JsonContract_InvokeOnError_m3866627954 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, ErrorContext_t615697659 * ___errorContext2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
