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

// Newtonsoft.Json.Schema.ValidationEventArgs
struct ValidationEventArgs_t130261338;
// Newtonsoft.Json.Schema.JsonSchemaException
struct JsonSchemaException_t3555037192;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaExceptio3555037192.h"

// System.Void Newtonsoft.Json.Schema.ValidationEventArgs::.ctor(Newtonsoft.Json.Schema.JsonSchemaException)
extern "C"  void ValidationEventArgs__ctor_m3069126582 (ValidationEventArgs_t130261338 * __this, JsonSchemaException_t3555037192 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaException Newtonsoft.Json.Schema.ValidationEventArgs::get_Exception()
extern "C"  JsonSchemaException_t3555037192 * ValidationEventArgs_get_Exception_m2233585437 (ValidationEventArgs_t130261338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.ValidationEventArgs::get_Message()
extern "C"  String_t* ValidationEventArgs_get_Message_m3140003285 (ValidationEventArgs_t130261338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
