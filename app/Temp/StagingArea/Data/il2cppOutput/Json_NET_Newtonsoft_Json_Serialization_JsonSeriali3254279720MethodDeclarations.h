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

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t3254279720;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// System.Type
struct Type_t;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t27144642;
// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct JsonFormatterConverter_t3196859494;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t3573211912;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t1593229298;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t1324248768;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t2091736265;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Serialization.JsonProperty,System.Object>
struct IDictionary_2_t796248930;
// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Dictionary_2_t327917146;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonContrac1566984540.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonPropert2712067825.h"
#include "Json_NET_Newtonsoft_Json_JsonConverter1964060750.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonDiction3573211912.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonArrayCo2625589241.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonISeriali122701872.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonObjectC2091736265.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonSerializ220200932.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalReader__ctor_m2180237984 (JsonSerializerInternalReader_t3254279720 * __this, JsonSerializer_t1719617802 * ___serializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::Populate(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializerInternalReader_Populate_m3870912981 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetContractSafe(System.Type)
extern "C"  JsonContract_t1566984540 * JsonSerializerInternalReader_GetContractSafe_m254035439 (JsonSerializerInternalReader_t3254279720 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetContractSafe(System.Type,System.Object)
extern "C"  JsonContract_t1566984540 * JsonSerializerInternalReader_GetContractSafe_m934511177 (JsonSerializerInternalReader_t3254279720 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::Deserialize(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializerInternalReader_Deserialize_m3323856224 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t27144642 * JsonSerializerInternalReader_GetInternalSerializer_m114415324 (JsonSerializerInternalReader_t3254279720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonFormatterConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetFormatterConverter()
extern "C"  JsonFormatterConverter_t3196859494 * JsonSerializerInternalReader_GetFormatterConverter_m1555207501 (JsonSerializerInternalReader_t3254279720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJToken(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JToken_t2552644013 * JsonSerializerInternalReader_CreateJToken_m2865593010 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonContract_t1566984540 * ___contract1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJObject(Newtonsoft.Json.JsonReader)
extern "C"  JToken_t2552644013 * JsonSerializerInternalReader_CreateJObject_m4223610887 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueProperty(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.Boolean,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueProperty_m3025381379 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonProperty_t2712067825 * ___property1, Il2CppObject * ___target2, bool ___gottenCurrentValue3, Il2CppObject * ___currentValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueNonProperty(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueNonProperty_m2601058753 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueInternal(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueInternal_m2937784246 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, JsonProperty_t2712067825 * ___member3, Il2CppObject * ___existingValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetConverter(Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.JsonConverter)
extern "C"  JsonConverter_t1964060750 * JsonSerializerInternalReader_GetConverter_m444751907 (JsonSerializerInternalReader_t3254279720 * __this, JsonContract_t1566984540 * ___contract0, JsonConverter_t1964060750 * ___memberConverter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObject(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObject_m2034994357 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, JsonProperty_t2712067825 * ___member3, Il2CppObject * ___existingValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureArrayContract(System.Type,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JsonArrayContract_t2625589241 * JsonSerializerInternalReader_EnsureArrayContract_m2728887019 (JsonSerializerInternalReader_t3254279720 * __this, Type_t * ___objectType0, JsonContract_t1566984540 * ___contract1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CheckedRead(Newtonsoft.Json.JsonReader)
extern "C"  void JsonSerializerInternalReader_CheckedRead_m3578805140 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateList(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateList_m2021871032 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, JsonProperty_t2712067825 * ___member3, Il2CppObject * ___existingValue4, String_t* ___reference5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasDefinedType(System.Type)
extern "C"  bool JsonSerializerInternalReader_HasDefinedType_m125665371 (JsonSerializerInternalReader_t3254279720 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureType(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * JsonSerializerInternalReader_EnsureType_m950042715 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___value0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader::FormatValueForPrint(System.Object)
extern "C"  String_t* JsonSerializerInternalReader_FormatValueForPrint_m1560634556 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializerInternalReader_SetPropertyValue_m3439257633 (JsonSerializerInternalReader_t3254279720 * __this, JsonProperty_t2712067825 * ___property0, JsonReader_t3154730733 * ___reader1, Il2CppObject * ___target2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalReader_HasFlag_m4002222253 (JsonSerializerInternalReader_t3254279720 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ShouldSetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalReader_ShouldSetPropertyValue_m3097568326 (JsonSerializerInternalReader_t3254279720 * __this, JsonProperty_t2712067825 * ___property0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateAndPopulateDictionary(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateAndPopulateDictionary_m4066543434 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonDictionaryContract_t3573211912 * ___contract1, String_t* ___id2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateDictionary(Newtonsoft.Json.Utilities.IWrappedDictionary,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateDictionary_m4101415792 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___dictionary0, JsonReader_t3154730733 * ___reader1, JsonDictionaryContract_t3573211912 * ___contract2, String_t* ___id3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateAndPopulateList(Newtonsoft.Json.JsonReader,System.String,Newtonsoft.Json.Serialization.JsonArrayContract)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateAndPopulateList_m1591598165 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, String_t* ___reference1, JsonArrayContract_t2625589241 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadForTypeArrayHack(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  bool JsonSerializerInternalReader_ReadForTypeArrayHack_m1847807439 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateList(Newtonsoft.Json.Utilities.IWrappedCollection,Newtonsoft.Json.JsonReader,System.String,Newtonsoft.Json.Serialization.JsonArrayContract)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateList_m2953175427 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___wrappedList0, JsonReader_t3154730733 * ___reader1, String_t* ___reference2, JsonArrayContract_t2625589241 * ___contract3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateISerializable(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonISerializableContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateISerializable_m3851208399 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonISerializableContract_t122701872 * ___contract1, String_t* ___id2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateAndPopulateObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateAndPopulateObject_m2312055434 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonObjectContract_t2091736265 * ___contract1, String_t* ___id2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObjectFromNonDefaultConstructor(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.Reflection.ConstructorInfo,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor_m2173584105 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonObjectContract_t2091736265 * ___contract1, ConstructorInfo_t2851816542 * ___constructorInfo2, String_t* ___id3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Serialization.JsonProperty,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ResolvePropertyAndConstructorValues(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject* JsonSerializerInternalReader_ResolvePropertyAndConstructorValues_m2063041481 (JsonSerializerInternalReader_t3254279720 * __this, JsonObjectContract_t2091736265 * ___contract0, JsonReader_t3154730733 * ___reader1, Type_t * ___objectType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadForType(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.JsonConverter)
extern "C"  bool JsonSerializerInternalReader_ReadForType_m1129621034 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___t1, JsonConverter_t1964060750 * ___propertyConverter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateObject(System.Object,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateObject_m1579964835 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___newObject0, JsonReader_t3154730733 * ___reader1, JsonObjectContract_t2091736265 * ___contract2, String_t* ___id3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyPresence(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>)
extern "C"  void JsonSerializerInternalReader_SetPropertyPresence_m3906252166 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonProperty_t2712067825 * ___property1, Dictionary_2_t327917146 * ___requiredProperties2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HandleError(Newtonsoft.Json.JsonReader,System.Int32)
extern "C"  void JsonSerializerInternalReader_HandleError_m961759724 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, int32_t ___initialDepth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<CreateObjectFromNonDefaultConstructor>m__0(System.Reflection.ParameterInfo)
extern "C"  ParameterInfo_t2249040075 * JsonSerializerInternalReader_U3CCreateObjectFromNonDefaultConstructorU3Em__0_m825926962 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<CreateObjectFromNonDefaultConstructor>m__1(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject * JsonSerializerInternalReader_U3CCreateObjectFromNonDefaultConstructorU3Em__1_m417502258 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<PopulateObject>m__2(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  JsonProperty_t2712067825 * JsonSerializerInternalReader_U3CPopulateObjectU3Em__2_m368115152 (Il2CppObject * __this /* static, unused */, JsonProperty_t2712067825 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<PopulateObject>m__3(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  int32_t JsonSerializerInternalReader_U3CPopulateObjectU3Em__3_m3503576623 (Il2CppObject * __this /* static, unused */, JsonProperty_t2712067825 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
