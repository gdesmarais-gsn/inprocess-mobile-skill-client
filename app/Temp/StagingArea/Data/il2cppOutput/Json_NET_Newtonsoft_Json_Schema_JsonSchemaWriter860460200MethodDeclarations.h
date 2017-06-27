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

// Newtonsoft.Json.Schema.JsonSchemaWriter
struct JsonSchemaWriter_t860460200;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t3305548243;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>
struct IDictionary_2_t3685976532;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaResolver3305548243.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchema3772113849.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaType1742745177.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::.ctor(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  void JsonSchemaWriter__ctor_m1438819755 (JsonSchemaWriter_t860460200 * __this, JsonWriter_t1973729997 * ___writer0, JsonSchemaResolver_t3305548243 * ___resolver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::ReferenceOrWriteSchema(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaWriter_ReferenceOrWriteSchema_m316332827 (JsonSchemaWriter_t860460200 * __this, JsonSchema_t3772113849 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteSchema(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaWriter_WriteSchema_m426214537 (JsonSchemaWriter_t860460200 * __this, JsonSchema_t3772113849 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteSchemaDictionaryIfNotNull(Newtonsoft.Json.JsonWriter,System.String,System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchemaWriter_WriteSchemaDictionaryIfNotNull_m2863247570 (JsonSchemaWriter_t860460200 * __this, JsonWriter_t1973729997 * ___writer0, String_t* ___propertyName1, Il2CppObject* ___properties2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteItems(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaWriter_WriteItems_m3112539772 (JsonSchemaWriter_t860460200 * __this, JsonSchema_t3772113849 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteType(System.String,Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  void JsonSchemaWriter_WriteType_m950576100 (JsonSchemaWriter_t860460200 * __this, String_t* ___propertyName0, JsonWriter_t1973729997 * ___writer1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WritePropertyIfNotNull(Newtonsoft.Json.JsonWriter,System.String,System.Object)
extern "C"  void JsonSchemaWriter_WritePropertyIfNotNull_m4018503503 (JsonSchemaWriter_t860460200 * __this, JsonWriter_t1973729997 * ___writer0, String_t* ___propertyName1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaWriter::<WriteType>m__0(Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  bool JsonSchemaWriter_U3CWriteTypeU3Em__0_m3970367327 (Il2CppObject * __this /* static, unused */, int32_t ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
