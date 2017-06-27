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

// Newtonsoft.Json.Schema.JsonSchemaGenerator
struct JsonSchemaGenerator_t2411843860;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema
struct TypeSchema_t460462092;
// System.Type
struct Type_t;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t3305548243;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t2091736265;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Schema_UndefinedSchemaIdH4037327541.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaGenerator460462092.h"
#include "mscorlib_System_Type1303803226.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaResolver3305548243.h"
#include "Json_NET_Newtonsoft_Json_Required2961887721.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaType1742745177.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonObjectC2091736265.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonISeriali122701872.h"
#include "mscorlib_System_Nullable_1_gen5811492.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::.ctor()
extern "C"  void JsonSchemaGenerator__ctor_m502882290 (JsonSchemaGenerator_t2411843860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.UndefinedSchemaIdHandling Newtonsoft.Json.Schema.JsonSchemaGenerator::get_UndefinedSchemaIdHandling()
extern "C"  int32_t JsonSchemaGenerator_get_UndefinedSchemaIdHandling_m1249689598 (JsonSchemaGenerator_t2411843860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::set_UndefinedSchemaIdHandling(Newtonsoft.Json.Schema.UndefinedSchemaIdHandling)
extern "C"  void JsonSchemaGenerator_set_UndefinedSchemaIdHandling_m3139799221 (JsonSchemaGenerator_t2411843860 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Schema.JsonSchemaGenerator::get_ContractResolver()
extern "C"  Il2CppObject * JsonSchemaGenerator_get_ContractResolver_m154293302 (JsonSchemaGenerator_t2411843860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSchemaGenerator_set_ContractResolver_m2517580043 (JsonSchemaGenerator_t2411843860 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::get_CurrentSchema()
extern "C"  JsonSchema_t3772113849 * JsonSchemaGenerator_get_CurrentSchema_m102393803 (JsonSchemaGenerator_t2411843860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::Push(Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema)
extern "C"  void JsonSchemaGenerator_Push_m1664223362 (JsonSchemaGenerator_t2411843860 * __this, TypeSchema_t460462092 * ___typeSchema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Pop()
extern "C"  TypeSchema_t460462092 * JsonSchemaGenerator_Pop_m1536281786 (JsonSchemaGenerator_t2411843860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type)
extern "C"  JsonSchema_t3772113849 * JsonSchemaGenerator_Generate_m42230246 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  JsonSchema_t3772113849 * JsonSchemaGenerator_Generate_m1231207253 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, JsonSchemaResolver_t3305548243 * ___resolver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type,System.Boolean)
extern "C"  JsonSchema_t3772113849 * JsonSchemaGenerator_Generate_m1626205557 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, bool ___rootSchemaNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type,Newtonsoft.Json.Schema.JsonSchemaResolver,System.Boolean)
extern "C"  JsonSchema_t3772113849 * JsonSchemaGenerator_Generate_m4208017382 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, JsonSchemaResolver_t3305548243 * ___resolver1, bool ___rootSchemaNullable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaGenerator::GetTitle(System.Type)
extern "C"  String_t* JsonSchemaGenerator_GetTitle_m2702316696 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaGenerator::GetDescription(System.Type)
extern "C"  String_t* JsonSchemaGenerator_GetDescription_m1273729280 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaGenerator::GetTypeId(System.Type,System.Boolean)
extern "C"  String_t* JsonSchemaGenerator_GetTypeId_m2879316880 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, bool ___explicitOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::GenerateInternal(System.Type,Newtonsoft.Json.Required,System.Boolean)
extern "C"  JsonSchema_t3772113849 * JsonSchemaGenerator_GenerateInternal_m1477720972 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, int32_t ___valueRequired1, bool ___required2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaGenerator::AddNullType(Newtonsoft.Json.Schema.JsonSchemaType,Newtonsoft.Json.Required)
extern "C"  int32_t JsonSchemaGenerator_AddNullType_m4095439015 (JsonSchemaGenerator_t2411843860 * __this, int32_t ___type0, int32_t ___valueRequired1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaGenerator::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSchemaGenerator_HasFlag_m279349922 (JsonSchemaGenerator_t2411843860 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::GenerateObjectSchema(System.Type,Newtonsoft.Json.Serialization.JsonObjectContract)
extern "C"  void JsonSchemaGenerator_GenerateObjectSchema_m3596100922 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, JsonObjectContract_t2091736265 * ___contract1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::GenerateISerializableContract(System.Type,Newtonsoft.Json.Serialization.JsonISerializableContract)
extern "C"  void JsonSchemaGenerator_GenerateISerializableContract_m2115363755 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, JsonISerializableContract_t122701872 * ___contract1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaGenerator::HasFlag(System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType>,Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  bool JsonSchemaGenerator_HasFlag_m2058651927 (Il2CppObject * __this /* static, unused */, Nullable_1_t5811492  ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaGenerator::GetJsonSchemaType(System.Type,Newtonsoft.Json.Required)
extern "C"  int32_t JsonSchemaGenerator_GetJsonSchemaType_m1222273532 (JsonSchemaGenerator_t2411843860 * __this, Type_t * ___type0, int32_t ___valueRequired1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
