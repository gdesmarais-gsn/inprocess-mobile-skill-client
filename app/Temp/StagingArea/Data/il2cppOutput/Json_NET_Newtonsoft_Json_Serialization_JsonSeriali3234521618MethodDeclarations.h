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

// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t3234521618;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t27144642;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract
struct JsonPrimitiveContract_t2604782005;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonStringContract
struct JsonStringContract_t2979008531;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t2091736265;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t1324248768;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// System.Runtime.Serialization.ISerializable
struct ISerializable_t1245643778;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t1593229298;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t3573211912;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonPrimiti2604782005.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonPropert2712067825.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonContrac1566984540.h"
#include "mscorlib_System_Nullable_1_gen3575889505.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonStringC2979008531.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonObjectC2091736265.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_PreserveReferencesHandlin3019117943.h"
#include "Json_NET_Newtonsoft_Json_TypeNameHandling1331513094.h"
#include "Json_NET_Newtonsoft_Json_JsonConverter1964060750.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonArrayCo2625589241.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonISeriali122701872.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonDiction3573211912.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalWriter__ctor_m577337020 (JsonSerializerInternalWriter_t3234521618 * __this, JsonSerializer_t1719617802 * ___serializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::get_SerializeStack()
extern "C"  List_1_t2058570427 * JsonSerializerInternalWriter_get_SerializeStack_m513361515 (JsonSerializerInternalWriter_t3234521618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerInternalWriter_Serialize_m1001816785 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___jsonWriter0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t27144642 * JsonSerializerInternalWriter_GetInternalSerializer_m905259180 (JsonSerializerInternalWriter_t3234521618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetContractSafe(System.Object)
extern "C"  JsonContract_t1566984540 * JsonSerializerInternalWriter_GetContractSafe_m492374438 (JsonSerializerInternalWriter_t3234521618 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializePrimitive(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonPrimitiveContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializePrimitive_m1431239505 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonPrimitiveContract_t2604782005 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContract_t1566984540 * ___collectionValueContract4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeValue(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeValue_m999652074 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonContract_t1566984540 * ___valueContract2, JsonProperty_t2712067825 * ___member3, JsonContract_t1566984540 * ___collectionValueContract4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteReference(System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteReference_m2913762893 (JsonSerializerInternalWriter_t3234521618 * __this, Il2CppObject * ___value0, JsonProperty_t2712067825 * ___property1, JsonContract_t1566984540 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteMemberInfoProperty(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_WriteMemberInfoProperty_m3006444674 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___memberValue1, JsonProperty_t2712067825 * ___property2, JsonContract_t1566984540 * ___contract3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::CheckForCircularReference(System.Object,System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalWriter_CheckForCircularReference_m485857027 (JsonSerializerInternalWriter_t3234521618 * __this, Il2CppObject * ___value0, Nullable_1_t3575889505  ___referenceLoopHandling1, JsonContract_t1566984540 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteReference(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerInternalWriter_WriteReference_m624735541 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::TryConvertToString(System.Object,System.Type,System.String&)
extern "C"  bool JsonSerializerInternalWriter_TryConvertToString_m4075321256 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___type1, String_t** ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeString(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonStringContract)
extern "C"  void JsonSerializerInternalWriter_SerializeString_m1668257868 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonStringContract_t2979008531 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeObject(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeObject_m2523184369 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonObjectContract_t2091736265 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContract_t1566984540 * ___collectionValueContract4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteTypeProperty(Newtonsoft.Json.JsonWriter,System.Type)
extern "C"  void JsonSerializerInternalWriter_WriteTypeProperty_m4014290760 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m1142942691 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.PreserveReferencesHandling,Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m13194259 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.TypeNameHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m2383771799 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeConvertable(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter,System.Object,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeConvertable_m1526365176 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverter_t1964060750 * ___converter1, Il2CppObject * ___value2, JsonContract_t1566984540 * ___contract3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeList(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Utilities.IWrappedCollection,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeList_m3486279377 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___values1, JsonArrayContract_t2625589241 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContract_t1566984540 * ___collectionValueContract4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeISerializable(Newtonsoft.Json.JsonWriter,System.Runtime.Serialization.ISerializable,Newtonsoft.Json.Serialization.JsonISerializableContract)
extern "C"  void JsonSerializerInternalWriter_SerializeISerializable_m3129110383 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonISerializableContract_t122701872 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteType(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteType_m2597973060 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___typeNameHandlingFlag0, JsonContract_t1566984540 * ___contract1, JsonProperty_t2712067825 * ___member2, JsonContract_t1566984540 * ___collectionValueContract3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeDictionary(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Utilities.IWrappedDictionary,Newtonsoft.Json.Serialization.JsonDictionaryContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeDictionary_m3941164836 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___values1, JsonDictionaryContract_t3573211912 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContract_t1566984540 * ___collectionValueContract4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetPropertyName(System.Collections.DictionaryEntry)
extern "C"  String_t* JsonSerializerInternalWriter_GetPropertyName_m3582654104 (JsonSerializerInternalWriter_t3234521618 * __this, DictionaryEntry_t3048875398  ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HandleError(Newtonsoft.Json.JsonWriter,System.Int32)
extern "C"  void JsonSerializerInternalWriter_HandleError_m3923502060 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, int32_t ___initialDepth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldSerialize(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_ShouldSerialize_m2023388080 (JsonSerializerInternalWriter_t3234521618 * __this, JsonProperty_t2712067825 * ___property0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::IsSpecified(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_IsSpecified_m3427912115 (JsonSerializerInternalWriter_t3234521618 * __this, JsonProperty_t2712067825 * ___property0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
