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

// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct SchemaScope_t4218888543;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IList_1_t1249835177;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t708894576;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaModel708894576.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_381019060.h"

// System.Void Newtonsoft.Json.JsonValidatingReader/SchemaScope::.ctor(Newtonsoft.Json.Linq.JTokenType,System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  void SchemaScope__ctor_m2055750732 (SchemaScope_t4218888543 * __this, int32_t ___tokenType0, Il2CppObject* ___schemas1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_CurrentPropertyName()
extern "C"  String_t* SchemaScope_get_CurrentPropertyName_m2282506830 (SchemaScope_t4218888543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader/SchemaScope::set_CurrentPropertyName(System.String)
extern "C"  void SchemaScope_set_CurrentPropertyName_m3624179709 (SchemaScope_t4218888543 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_ArrayItemCount()
extern "C"  int32_t SchemaScope_get_ArrayItemCount_m3608168123 (SchemaScope_t4218888543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader/SchemaScope::set_ArrayItemCount(System.Int32)
extern "C"  void SchemaScope_set_ArrayItemCount_m2034906424 (SchemaScope_t4218888543 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_Schemas()
extern "C"  Il2CppObject* SchemaScope_get_Schemas_m3797417946 (SchemaScope_t4218888543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_RequiredProperties()
extern "C"  Dictionary_2_t1445386684 * SchemaScope_get_RequiredProperties_m3905766963 (SchemaScope_t4218888543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_TokenType()
extern "C"  int32_t SchemaScope_get_TokenType_m4163872860 (SchemaScope_t4218888543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Newtonsoft.Json.JsonValidatingReader/SchemaScope::GetRequiredProperties(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  Il2CppObject* SchemaScope_GetRequiredProperties_m2159771889 (SchemaScope_t4218888543 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::<SchemaScope>m__0(System.String)
extern "C"  String_t* SchemaScope_U3CSchemaScopeU3Em__0_m1393709698 (Il2CppObject * __this /* static, unused */, String_t* ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader/SchemaScope::<SchemaScope>m__1(System.String)
extern "C"  bool SchemaScope_U3CSchemaScopeU3Em__1_m534978766 (Il2CppObject * __this /* static, unused */, String_t* ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader/SchemaScope::<GetRequiredProperties>m__2(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  bool SchemaScope_U3CGetRequiredPropertiesU3Em__2_m4129111337 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t381019060  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::<GetRequiredProperties>m__3(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  String_t* SchemaScope_U3CGetRequiredPropertiesU3Em__3_m1316972297 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t381019060  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
