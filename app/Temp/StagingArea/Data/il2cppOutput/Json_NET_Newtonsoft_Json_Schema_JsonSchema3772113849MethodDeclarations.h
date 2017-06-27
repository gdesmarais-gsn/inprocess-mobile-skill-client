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

// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t18087154;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>
struct IDictionary_2_t3685976532;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String>
struct IDictionary_2_t2133323376;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t3305548243;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen5811492.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchema3772113849.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaResolver3305548243.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

// System.Void Newtonsoft.Json.Schema.JsonSchema::.ctor()
extern "C"  void JsonSchema__ctor_m1406776167 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Id()
extern "C"  String_t* JsonSchema_get_Id_m2283159134 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Id(System.String)
extern "C"  void JsonSchema_set_Id_m2938586121 (JsonSchema_t3772113849 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Title()
extern "C"  String_t* JsonSchema_get_Title_m3214084763 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Title(System.String)
extern "C"  void JsonSchema_set_Title_m1774367226 (JsonSchema_t3772113849 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_Required()
extern "C"  Nullable_1_t2088641033  JsonSchema_get_Required_m1717278858 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Required(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_Required_m2304808341 (JsonSchema_t3772113849 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_ReadOnly()
extern "C"  Nullable_1_t2088641033  JsonSchema_get_ReadOnly_m233156941 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_ReadOnly(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_ReadOnly_m864624380 (JsonSchema_t3772113849 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_Hidden()
extern "C"  Nullable_1_t2088641033  JsonSchema_get_Hidden_m1743940981 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Hidden(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_Hidden_m3877038682 (JsonSchema_t3772113849 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_Transient()
extern "C"  Nullable_1_t2088641033  JsonSchema_get_Transient_m4043093607 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Transient(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_Transient_m1472310750 (JsonSchema_t3772113849 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Description()
extern "C"  String_t* JsonSchema_get_Description_m3145425337 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Description(System.String)
extern "C"  void JsonSchema_set_Description_m1964455510 (JsonSchema_t3772113849 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchema::get_Type()
extern "C"  Nullable_1_t5811492  JsonSchema_get_Type_m2261219897 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Type(System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType>)
extern "C"  void JsonSchema_set_Type_m2051121556 (JsonSchema_t3772113849 * __this, Nullable_1_t5811492  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Pattern()
extern "C"  String_t* JsonSchema_get_Pattern_m680240235 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Pattern(System.String)
extern "C"  void JsonSchema_set_Pattern_m1685896710 (JsonSchema_t3772113849 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MinimumLength()
extern "C"  Nullable_1_t334943763  JsonSchema_get_MinimumLength_m2546581779 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MinimumLength(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MinimumLength_m2933651624 (JsonSchema_t3772113849 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MaximumLength()
extern "C"  Nullable_1_t334943763  JsonSchema_get_MaximumLength_m3845798625 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MaximumLength(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MaximumLength_m715579938 (JsonSchema_t3772113849 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::get_DivisibleBy()
extern "C"  Nullable_1_t2341081996  JsonSchema_get_DivisibleBy_m3241935304 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_DivisibleBy(System.Nullable`1<System.Double>)
extern "C"  void JsonSchema_set_DivisibleBy_m1435702817 (JsonSchema_t3772113849 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::get_Minimum()
extern "C"  Nullable_1_t2341081996  JsonSchema_get_Minimum_m1800575250 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Minimum(System.Nullable`1<System.Double>)
extern "C"  void JsonSchema_set_Minimum_m2725733803 (JsonSchema_t3772113849 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::get_Maximum()
extern "C"  Nullable_1_t2341081996  JsonSchema_get_Maximum_m1739711152 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Maximum(System.Nullable`1<System.Double>)
extern "C"  void JsonSchema_set_Maximum_m99693477 (JsonSchema_t3772113849 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_ExclusiveMinimum()
extern "C"  Nullable_1_t2088641033  JsonSchema_get_ExclusiveMinimum_m197981987 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_ExclusiveMinimum(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_ExclusiveMinimum_m2709737934 (JsonSchema_t3772113849 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_ExclusiveMaximum()
extern "C"  Nullable_1_t2088641033  JsonSchema_get_ExclusiveMaximum_m3784063481 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_ExclusiveMaximum(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_ExclusiveMaximum_m4029740324 (JsonSchema_t3772113849 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MinimumItems()
extern "C"  Nullable_1_t334943763  JsonSchema_get_MinimumItems_m552790877 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MinimumItems(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MinimumItems_m2542933630 (JsonSchema_t3772113849 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MaximumItems()
extern "C"  Nullable_1_t334943763  JsonSchema_get_MaximumItems_m122243287 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MaximumItems(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MaximumItems_m1512635180 (JsonSchema_t3772113849 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::get_Items()
extern "C"  Il2CppObject* JsonSchema_get_Items_m978423089 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Items(System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchema_set_Items_m4118550196 (JsonSchema_t3772113849 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::get_Properties()
extern "C"  Il2CppObject* JsonSchema_get_Properties_m943571229 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Properties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchema_set_Properties_m4082607592 (JsonSchema_t3772113849 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::get_AdditionalProperties()
extern "C"  JsonSchema_t3772113849 * JsonSchema_get_AdditionalProperties_m139362702 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_AdditionalProperties(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchema_set_AdditionalProperties_m1481952511 (JsonSchema_t3772113849 * __this, JsonSchema_t3772113849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::get_PatternProperties()
extern "C"  Il2CppObject* JsonSchema_get_PatternProperties_m2618453973 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_PatternProperties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchema_set_PatternProperties_m2120786872 (JsonSchema_t3772113849 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchema::get_AllowAdditionalProperties()
extern "C"  bool JsonSchema_get_AllowAdditionalProperties_m1443255619 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_AllowAdditionalProperties(System.Boolean)
extern "C"  void JsonSchema_set_AllowAdditionalProperties_m975563262 (JsonSchema_t3772113849 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Requires()
extern "C"  String_t* JsonSchema_get_Requires_m2169435873 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Requires(System.String)
extern "C"  void JsonSchema_set_Requires_m1412366758 (JsonSchema_t3772113849 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Newtonsoft.Json.Schema.JsonSchema::get_Identity()
extern "C"  Il2CppObject* JsonSchema_get_Identity_m3275576154 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Identity(System.Collections.Generic.IList`1<System.String>)
extern "C"  void JsonSchema_set_Identity_m222422517 (JsonSchema_t3772113849 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Schema.JsonSchema::get_Enum()
extern "C"  Il2CppObject* JsonSchema_get_Enum_m216463103 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Enum(System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>)
extern "C"  void JsonSchema_set_Enum_m822610640 (JsonSchema_t3772113849 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String> Newtonsoft.Json.Schema.JsonSchema::get_Options()
extern "C"  Il2CppObject* JsonSchema_get_Options_m3721199195 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Options(System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String>)
extern "C"  void JsonSchema_set_Options_m4126763430 (JsonSchema_t3772113849 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchema::get_Disallow()
extern "C"  Nullable_1_t5811492  JsonSchema_get_Disallow_m857173778 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Disallow(System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType>)
extern "C"  void JsonSchema_set_Disallow_m1966151625 (JsonSchema_t3772113849 * __this, Nullable_1_t5811492  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Schema.JsonSchema::get_Default()
extern "C"  JToken_t2552644013 * JsonSchema_get_Default_m740681794 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Default(Newtonsoft.Json.Linq.JToken)
extern "C"  void JsonSchema_set_Default_m3780877599 (JsonSchema_t3772113849 * __this, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::get_Extends()
extern "C"  JsonSchema_t3772113849 * JsonSchema_get_Extends_m3583624545 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Extends(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchema_set_Extends_m2814380440 (JsonSchema_t3772113849 * __this, JsonSchema_t3772113849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Format()
extern "C"  String_t* JsonSchema_get_Format_m3177427236 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Format(System.String)
extern "C"  void JsonSchema_set_Format_m1337070543 (JsonSchema_t3772113849 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_InternalId()
extern "C"  String_t* JsonSchema_get_InternalId_m3960450725 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Read(Newtonsoft.Json.JsonReader)
extern "C"  JsonSchema_t3772113849 * JsonSchema_Read_m4048747901 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Read(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  JsonSchema_t3772113849 * JsonSchema_Read_m4231551838 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, JsonSchemaResolver_t3305548243 * ___resolver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Parse(System.String)
extern "C"  JsonSchema_t3772113849 * JsonSchema_Parse_m806699926 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Parse(System.String,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  JsonSchema_t3772113849 * JsonSchema_Parse_m2541758117 (Il2CppObject * __this /* static, unused */, String_t* ___json0, JsonSchemaResolver_t3305548243 * ___resolver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::WriteTo(Newtonsoft.Json.JsonWriter)
extern "C"  void JsonSchema_WriteTo_m703203697 (JsonSchema_t3772113849 * __this, JsonWriter_t1973729997 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  void JsonSchema_WriteTo_m1615388238 (JsonSchema_t3772113849 * __this, JsonWriter_t1973729997 * ___writer0, JsonSchemaResolver_t3305548243 * ___resolver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::ToString()
extern "C"  String_t* JsonSchema_ToString_m19479030 (JsonSchema_t3772113849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
