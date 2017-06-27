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

// Newtonsoft.Json.Schema.JsonSchemaModelBuilder
struct JsonSchemaModelBuilder_t3556688399;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t708894576;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// Newtonsoft.Json.Schema.JsonSchemaNode
struct JsonSchemaNode_t3866831117;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>
struct IDictionary_2_t3685976532;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>
struct IDictionary_2_t3780693800;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchema3772113849.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaNode3866831117.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::.ctor()
extern "C"  void JsonSchemaModelBuilder__ctor_m2882469157 (JsonSchemaModelBuilder_t3556688399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.Schema.JsonSchemaModelBuilder::Build(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  JsonSchemaModel_t708894576 * JsonSchemaModelBuilder_Build_m1062262439 (JsonSchemaModelBuilder_t3556688399 * __this, JsonSchema_t3772113849 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddSchema(Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  JsonSchemaNode_t3866831117 * JsonSchemaModelBuilder_AddSchema_m107053071 (JsonSchemaModelBuilder_t3556688399 * __this, JsonSchemaNode_t3866831117 * ___existingNode0, JsonSchema_t3772113849 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddProperties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>,System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaModelBuilder_AddProperties_m2168865285 (JsonSchemaModelBuilder_t3556688399 * __this, Il2CppObject* ___source0, Il2CppObject* ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddProperty(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>,System.String,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaModelBuilder_AddProperty_m3364028737 (JsonSchemaModelBuilder_t3556688399 * __this, Il2CppObject* ___target0, String_t* ___propertyName1, JsonSchema_t3772113849 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddItem(Newtonsoft.Json.Schema.JsonSchemaNode,System.Int32,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaModelBuilder_AddItem_m3748099110 (JsonSchemaModelBuilder_t3556688399 * __this, JsonSchemaNode_t3866831117 * ___parentNode0, int32_t ___index1, JsonSchema_t3772113849 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddAdditionalProperties(Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaModelBuilder_AddAdditionalProperties_m605669468 (JsonSchemaModelBuilder_t3556688399 * __this, JsonSchemaNode_t3866831117 * ___parentNode0, JsonSchema_t3772113849 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.Schema.JsonSchemaModelBuilder::BuildNodeModel(Newtonsoft.Json.Schema.JsonSchemaNode)
extern "C"  JsonSchemaModel_t708894576 * JsonSchemaModelBuilder_BuildNodeModel_m267600770 (JsonSchemaModelBuilder_t3556688399 * __this, JsonSchemaNode_t3866831117 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
