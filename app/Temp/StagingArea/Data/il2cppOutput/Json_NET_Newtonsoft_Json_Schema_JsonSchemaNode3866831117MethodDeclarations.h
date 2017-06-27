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

// Newtonsoft.Json.Schema.JsonSchemaNode
struct JsonSchemaNode_t3866831117;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// System.String
struct String_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema>
struct ReadOnlyCollection_1_t3957899541;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>
struct Dictionary_2_t1486643083;
// System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode>
struct List_1_t3235952249;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEnumerable_1_t4064240894;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchema3772113849.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaNode3866831117.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::.ctor(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaNode__ctor_m911653262 (JsonSchemaNode_t3866831117 * __this, JsonSchema_t3772113849 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::.ctor(Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaNode__ctor_m3873575983 (JsonSchemaNode_t3866831117 * __this, JsonSchemaNode_t3866831117 * ___source0, JsonSchema_t3772113849 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::get_Id()
extern "C"  String_t* JsonSchemaNode_get_Id_m855940102 (JsonSchemaNode_t3866831117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Id(System.String)
extern "C"  void JsonSchemaNode_set_Id_m3200262885 (JsonSchemaNode_t3866831117 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchemaNode::get_Schemas()
extern "C"  ReadOnlyCollection_1_t3957899541 * JsonSchemaNode_get_Schemas_m2519502069 (JsonSchemaNode_t3866831117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Schemas(System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchemaNode_set_Schemas_m2157168994 (JsonSchemaNode_t3866831117 * __this, ReadOnlyCollection_1_t3957899541 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::get_Properties()
extern "C"  Dictionary_2_t1486643083 * JsonSchemaNode_get_Properties_m2156827982 (JsonSchemaNode_t3866831117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Properties(System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaNode_set_Properties_m3360228887 (JsonSchemaNode_t3866831117 * __this, Dictionary_2_t1486643083 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::get_PatternProperties()
extern "C"  Dictionary_2_t1486643083 * JsonSchemaNode_get_PatternProperties_m742512548 (JsonSchemaNode_t3866831117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_PatternProperties(System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaNode_set_PatternProperties_m3355893251 (JsonSchemaNode_t3866831117 * __this, Dictionary_2_t1486643083 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::get_Items()
extern "C"  List_1_t3235952249 * JsonSchemaNode_get_Items_m3634048370 (JsonSchemaNode_t3866831117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Items(System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaNode_set_Items_m589959307 (JsonSchemaNode_t3866831117 * __this, List_1_t3235952249 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaNode::get_AdditionalProperties()
extern "C"  JsonSchemaNode_t3866831117 * JsonSchemaNode_get_AdditionalProperties_m2912938446 (JsonSchemaNode_t3866831117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_AdditionalProperties(Newtonsoft.Json.Schema.JsonSchemaNode)
extern "C"  void JsonSchemaNode_set_AdditionalProperties_m2321142783 (JsonSchemaNode_t3866831117 * __this, JsonSchemaNode_t3866831117 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaNode::Combine(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  JsonSchemaNode_t3866831117 * JsonSchemaNode_Combine_m875926601 (JsonSchemaNode_t3866831117 * __this, JsonSchema_t3772113849 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::GetId(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  String_t* JsonSchemaNode_GetId_m182449787 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___schemata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::<GetId>m__0(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  String_t* JsonSchemaNode_U3CGetIdU3Em__0_m2588122335 (Il2CppObject * __this /* static, unused */, JsonSchema_t3772113849 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::<GetId>m__1(System.String)
extern "C"  String_t* JsonSchemaNode_U3CGetIdU3Em__1_m1520622877 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
