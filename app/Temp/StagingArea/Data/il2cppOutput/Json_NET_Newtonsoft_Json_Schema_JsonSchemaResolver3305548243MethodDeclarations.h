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

// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t3305548243;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t18087154;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaResolver::.ctor()
extern "C"  void JsonSchemaResolver__ctor_m598885545 (JsonSchemaResolver_t3305548243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchemaResolver::get_LoadedSchemas()
extern "C"  Il2CppObject* JsonSchemaResolver_get_LoadedSchemas_m3290811374 (JsonSchemaResolver_t3305548243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaResolver::set_LoadedSchemas(System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchemaResolver_set_LoadedSchemas_m2607885955 (JsonSchemaResolver_t3305548243 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaResolver::GetSchema(System.String)
extern "C"  JsonSchema_t3772113849 * JsonSchemaResolver_GetSchema_m2494812880 (JsonSchemaResolver_t3305548243 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
