﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Newtonsoft.Json.Converters.KeyValuePairConverter
struct KeyValuePairConverter_t575953290;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Newtonsoft.Json.Converters.KeyValuePairConverter::.ctor()
extern "C"  void KeyValuePairConverter__ctor_m795315890 (KeyValuePairConverter_t575953290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.KeyValuePairConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void KeyValuePairConverter_WriteJson_m633425044 (KeyValuePairConverter_t575953290 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.KeyValuePairConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * KeyValuePairConverter_ReadJson_m2475568029 (KeyValuePairConverter_t575953290 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t1719617802 * ___serializer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.KeyValuePairConverter::CanConvert(System.Type)
extern "C"  bool KeyValuePairConverter_CanConvert_m2516593582 (KeyValuePairConverter_t575953290 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
