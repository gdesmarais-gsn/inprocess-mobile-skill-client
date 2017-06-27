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

// Newtonsoft.Json.JsonConverterAttribute
struct JsonConverterAttribute_t3918837738;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Newtonsoft.Json.JsonConverterAttribute::.ctor(System.Type)
extern "C"  void JsonConverterAttribute__ctor_m906462494 (JsonConverterAttribute_t3918837738 * __this, Type_t * ___converterType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonConverterAttribute::get_ConverterType()
extern "C"  Type_t * JsonConverterAttribute_get_ConverterType_m2262617652 (JsonConverterAttribute_t3918837738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.JsonConverterAttribute::CreateJsonConverterInstance(System.Type)
extern "C"  JsonConverter_t1964060750 * JsonConverterAttribute_CreateJsonConverterInstance_m1806352019 (Il2CppObject * __this /* static, unused */, Type_t * ___converterType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
