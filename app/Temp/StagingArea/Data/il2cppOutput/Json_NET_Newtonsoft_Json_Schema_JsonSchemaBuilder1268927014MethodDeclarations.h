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

// Newtonsoft.Json.Schema.JsonSchemaBuilder
struct JsonSchemaBuilder_t1268927014;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t3305548243;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaResolver3305548243.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchema3772113849.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen5811492.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaType1742745177.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::.ctor(Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  void JsonSchemaBuilder__ctor_m3507034557 (JsonSchemaBuilder_t1268927014 * __this, JsonSchemaResolver_t3305548243 * ___resolver0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::Push(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaBuilder_Push_m2234842333 (JsonSchemaBuilder_t1268927014 * __this, JsonSchema_t3772113849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::Pop()
extern "C"  JsonSchema_t3772113849 * JsonSchemaBuilder_Pop_m3836724111 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::get_CurrentSchema()
extern "C"  JsonSchema_t3772113849 * JsonSchemaBuilder_get_CurrentSchema_m3124912145 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::Parse(Newtonsoft.Json.JsonReader)
extern "C"  JsonSchema_t3772113849 * JsonSchemaBuilder_Parse_m323474031 (JsonSchemaBuilder_t1268927014 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::BuildSchema()
extern "C"  JsonSchema_t3772113849 * JsonSchemaBuilder_BuildSchema_m2426169079 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessSchemaProperty(System.String)
extern "C"  void JsonSchemaBuilder_ProcessSchemaProperty_m1268811273 (JsonSchemaBuilder_t1268927014 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessExtends()
extern "C"  void JsonSchemaBuilder_ProcessExtends_m4054242608 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessEnum()
extern "C"  void JsonSchemaBuilder_ProcessEnum_m3725413984 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessOptions()
extern "C"  void JsonSchemaBuilder_ProcessOptions_m3717043201 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessDefault()
extern "C"  void JsonSchemaBuilder_ProcessDefault_m1298101552 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessIdentity()
extern "C"  void JsonSchemaBuilder_ProcessIdentity_m4282742791 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessAdditionalProperties()
extern "C"  void JsonSchemaBuilder_ProcessAdditionalProperties_m942574085 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessPatternProperties()
extern "C"  void JsonSchemaBuilder_ProcessPatternProperties_m2005428058 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessItems()
extern "C"  void JsonSchemaBuilder_ProcessItems_m2413853151 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessProperties()
extern "C"  void JsonSchemaBuilder_ProcessProperties_m255355704 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessType()
extern "C"  Nullable_1_t5811492  JsonSchemaBuilder_ProcessType_m1351287782 (JsonSchemaBuilder_t1268927014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaBuilder::MapType(System.String)
extern "C"  int32_t JsonSchemaBuilder_MapType_m4032037278 (Il2CppObject * __this /* static, unused */, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaBuilder::MapType(Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  String_t* JsonSchemaBuilder_MapType_m3582754718 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
