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

// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t1731902491;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchema3772113849.h"
#include "Json_NET_Newtonsoft_Json_Schema_ValidationEventHan1731902491.h"

// System.Boolean Newtonsoft.Json.Schema.SchemaExtensions::IsValid(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  bool SchemaExtensions_IsValid_m3718815296 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___source0, JsonSchema_t3772113849 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.SchemaExtensions::Validate(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void SchemaExtensions_Validate_m2035134612 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___source0, JsonSchema_t3772113849 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.SchemaExtensions::Validate(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Schema.JsonSchema,Newtonsoft.Json.Schema.ValidationEventHandler)
extern "C"  void SchemaExtensions_Validate_m2872301123 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___source0, JsonSchema_t3772113849 * ___schema1, ValidationEventHandler_t1731902491 * ___validationEventHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
