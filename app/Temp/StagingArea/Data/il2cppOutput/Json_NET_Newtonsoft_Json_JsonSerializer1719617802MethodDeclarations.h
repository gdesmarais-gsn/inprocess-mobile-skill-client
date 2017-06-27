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

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1956922769;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t2044502214;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t3315164788;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t842388167;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Type
struct Type_t;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t2505001351;
// Newtonsoft.Json.Serialization.ErrorEventArgs
struct ErrorEventArgs_t3365615597;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3985864818.h"
#include "Json_NET_Newtonsoft_Json_Formatting4009318759.h"
#include "Json_NET_Newtonsoft_Json_FloatFormatHandling898035958.h"
#include "Json_NET_Newtonsoft_Json_TypeNameHandling1331513094.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "Json_NET_Newtonsoft_Json_PreserveReferencesHandlin3019117943.h"
#include "Json_NET_Newtonsoft_Json_ReferenceLoopHandling1017855894.h"
#include "Json_NET_Newtonsoft_Json_FloatParseHandling1928971464.h"
#include "Json_NET_Newtonsoft_Json_MissingMemberHandling367517353.h"
#include "Json_NET_Newtonsoft_Json_NullValueHandling3618095365.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_ObjectCreationHandling3720134651.h"
#include "Json_NET_Newtonsoft_Json_ConstructorHandling4150360451.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializerSettings842388167.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "Json_NET_Newtonsoft_Json_Serialization_ErrorEventA3365615597.h"

// System.Void Newtonsoft.Json.JsonSerializer::.ctor()
extern "C"  void JsonSerializer__ctor_m3876429941 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::add_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializer_add_Error_m1183371131 (JsonSerializer_t1719617802 * __this, EventHandler_1_t1956922769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::remove_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializer_remove_Error_m4005149874 (JsonSerializer_t1719617802 * __this, EventHandler_1_t1956922769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::get_ReferenceResolver()
extern "C"  Il2CppObject * JsonSerializer_get_ReferenceResolver_m2972404149 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ReferenceResolver(Newtonsoft.Json.Serialization.IReferenceResolver)
extern "C"  void JsonSerializer_set_ReferenceResolver_m2166247618 (JsonSerializer_t1719617802 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::get_Binder()
extern "C"  SerializationBinder_t3985864818 * JsonSerializer_get_Binder_m1610162480 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_Binder(System.Runtime.Serialization.SerializationBinder)
extern "C"  void JsonSerializer_set_Binder_m535808811 (JsonSerializer_t1719617802 * __this, SerializationBinder_t3985864818 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonSerializer::get_Formatting()
extern "C"  int32_t JsonSerializer_get_Formatting_m2815814188 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_Formatting(Newtonsoft.Json.Formatting)
extern "C"  void JsonSerializer_set_Formatting_m3327725523 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonSerializer::get_FloatFormatHandling()
extern "C"  int32_t JsonSerializer_get_FloatFormatHandling_m3717501594 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_FloatFormatHandling(Newtonsoft.Json.FloatFormatHandling)
extern "C"  void JsonSerializer_set_FloatFormatHandling_m2895604403 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::get_TypeNameHandling()
extern "C"  int32_t JsonSerializer_get_TypeNameHandling_m2429402126 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_TypeNameHandling(Newtonsoft.Json.TypeNameHandling)
extern "C"  void JsonSerializer_set_TypeNameHandling_m2025415735 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::get_TypeNameAssemblyFormat()
extern "C"  int32_t JsonSerializer_get_TypeNameAssemblyFormat_m4037145124 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_TypeNameAssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void JsonSerializer_set_TypeNameAssemblyFormat_m3882121323 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::get_PreserveReferencesHandling()
extern "C"  int32_t JsonSerializer_get_PreserveReferencesHandling_m2715866636 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_PreserveReferencesHandling(Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  void JsonSerializer_set_PreserveReferencesHandling_m4013629491 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::get_ReferenceLoopHandling()
extern "C"  int32_t JsonSerializer_get_ReferenceLoopHandling_m4263864986 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ReferenceLoopHandling(Newtonsoft.Json.ReferenceLoopHandling)
extern "C"  void JsonSerializer_set_ReferenceLoopHandling_m3998241363 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonSerializer::get_FloatParseHandling()
extern "C"  int32_t JsonSerializer_get_FloatParseHandling_m1836364506 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_FloatParseHandling(Newtonsoft.Json.FloatParseHandling)
extern "C"  void JsonSerializer_set_FloatParseHandling_m1990266063 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::get_MissingMemberHandling()
extern "C"  int32_t JsonSerializer_get_MissingMemberHandling_m1396682682 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
extern "C"  void JsonSerializer_set_MissingMemberHandling_m3102525171 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::get_NullValueHandling()
extern "C"  int32_t JsonSerializer_get_NullValueHandling_m1125062010 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
extern "C"  void JsonSerializer_set_NullValueHandling_m3067204211 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::get_DefaultValueHandling()
extern "C"  int32_t JsonSerializer_get_DefaultValueHandling_m575512268 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_DefaultValueHandling(Newtonsoft.Json.DefaultValueHandling)
extern "C"  void JsonSerializer_set_DefaultValueHandling_m3965827075 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::get_ObjectCreationHandling()
extern "C"  int32_t JsonSerializer_get_ObjectCreationHandling_m2949326356 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ObjectCreationHandling(Newtonsoft.Json.ObjectCreationHandling)
extern "C"  void JsonSerializer_set_ObjectCreationHandling_m3424353851 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::get_ConstructorHandling()
extern "C"  int32_t JsonSerializer_get_ConstructorHandling_m1519385434 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ConstructorHandling(Newtonsoft.Json.ConstructorHandling)
extern "C"  void JsonSerializer_set_ConstructorHandling_m2964705779 (JsonSerializer_t1719617802 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::get_Converters()
extern "C"  JsonConverterCollection_t3315164788 * JsonSerializer_get_Converters_m2732568789 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::get_ContractResolver()
extern "C"  Il2CppObject * JsonSerializer_get_ContractResolver_m1340890273 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSerializer_set_ContractResolver_m1070492560 (JsonSerializer_t1719617802 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::get_Context()
extern "C"  StreamingContext_t1417235061  JsonSerializer_get_Context_m4007400600 (JsonSerializer_t1719617802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_Context(System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonSerializer_set_Context_m3218163685 (JsonSerializer_t1719617802 * __this, StreamingContext_t1417235061  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.JsonSerializer::Create(Newtonsoft.Json.JsonSerializerSettings)
extern "C"  JsonSerializer_t1719617802 * JsonSerializer_Create_m3378529679 (Il2CppObject * __this /* static, unused */, JsonSerializerSettings_t842388167 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.JsonSerializer::Create()
extern "C"  JsonSerializer_t1719617802 * JsonSerializer_Create_m1820086225 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.JsonSerializer::CreateDefault()
extern "C"  JsonSerializer_t1719617802 * JsonSerializer_CreateDefault_m4176068688 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.JsonSerializer::CreateDefault(Newtonsoft.Json.JsonSerializerSettings)
extern "C"  JsonSerializer_t1719617802 * JsonSerializer_CreateDefault_m2741454502 (Il2CppObject * __this /* static, unused */, JsonSerializerSettings_t842388167 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::ApplySerializerSettings(Newtonsoft.Json.JsonSerializer,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  void JsonSerializer_ApplySerializerSettings_m2928728217 (Il2CppObject * __this /* static, unused */, JsonSerializer_t1719617802 * ___serializer0, JsonSerializerSettings_t842388167 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Populate(System.IO.TextReader,System.Object)
extern "C"  void JsonSerializer_Populate_m1041392606 (JsonSerializer_t1719617802 * __this, TextReader_t1561828458 * ___reader0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Populate(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializer_Populate_m1885866391 (JsonSerializer_t1719617802 * __this, JsonReader_t3154730733 * ___reader0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::PopulateInternal(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializer_PopulateInternal_m4024802948 (JsonSerializer_t1719617802 * __this, JsonReader_t3154730733 * ___reader0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::Deserialize(Newtonsoft.Json.JsonReader)
extern "C"  Il2CppObject * JsonSerializer_Deserialize_m699531045 (JsonSerializer_t1719617802 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::Deserialize(System.IO.TextReader,System.Type)
extern "C"  Il2CppObject * JsonSerializer_Deserialize_m3230945619 (JsonSerializer_t1719617802 * __this, TextReader_t1561828458 * ___reader0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::Deserialize(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializer_Deserialize_m2752925048 (JsonSerializer_t1719617802 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::DeserializeInternal(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializer_DeserializeInternal_m2456198329 (JsonSerializer_t1719617802 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(System.IO.TextWriter,System.Object)
extern "C"  void JsonSerializer_Serialize_m1572873706 (JsonSerializer_t1719617802 * __this, TextWriter_t4027217640 * ___textWriter0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializer_Serialize_m452394573 (JsonSerializer_t1719617802 * __this, JsonWriter_t1973729997 * ___jsonWriter0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::SerializeInternal(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializer_SerializeInternal_m2683556656 (JsonSerializer_t1719617802 * __this, JsonWriter_t1973729997 * ___jsonWriter0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.JsonSerializer::GetMatchingConverter(System.Type)
extern "C"  JsonConverter_t1964060750 * JsonSerializer_GetMatchingConverter_m1766299655 (JsonSerializer_t1719617802 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.JsonSerializer::GetMatchingConverter(System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>,System.Type)
extern "C"  JsonConverter_t1964060750 * JsonSerializer_GetMatchingConverter_m975449491 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___converters0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::OnError(Newtonsoft.Json.Serialization.ErrorEventArgs)
extern "C"  void JsonSerializer_OnError_m2826156384 (JsonSerializer_t1719617802 * __this, ErrorEventArgs_t3365615597 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
