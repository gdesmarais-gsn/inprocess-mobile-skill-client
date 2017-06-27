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

// GSN.Skill.Games.Common.Utils.JsonCreationConverter`1<System.Object>
struct JsonCreationConverter_1_t1816848400;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

// System.Void GSN.Skill.Games.Common.Utils.JsonCreationConverter`1<System.Object>::.ctor()
extern "C"  void JsonCreationConverter_1__ctor_m2990030213_gshared (JsonCreationConverter_1_t1816848400 * __this, const MethodInfo* method);
#define JsonCreationConverter_1__ctor_m2990030213(__this, method) ((  void (*) (JsonCreationConverter_1_t1816848400 *, const MethodInfo*))JsonCreationConverter_1__ctor_m2990030213_gshared)(__this, method)
// System.Boolean GSN.Skill.Games.Common.Utils.JsonCreationConverter`1<System.Object>::CanConvert(System.Type)
extern "C"  bool JsonCreationConverter_1_CanConvert_m4105786593_gshared (JsonCreationConverter_1_t1816848400 * __this, Type_t * ___objectType0, const MethodInfo* method);
#define JsonCreationConverter_1_CanConvert_m4105786593(__this, ___objectType0, method) ((  bool (*) (JsonCreationConverter_1_t1816848400 *, Type_t *, const MethodInfo*))JsonCreationConverter_1_CanConvert_m4105786593_gshared)(__this, ___objectType0, method)
// System.Object GSN.Skill.Games.Common.Utils.JsonCreationConverter`1<System.Object>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * JsonCreationConverter_1_ReadJson_m89195966_gshared (JsonCreationConverter_1_t1816848400 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t1719617802 * ___serializer3, const MethodInfo* method);
#define JsonCreationConverter_1_ReadJson_m89195966(__this, ___reader0, ___objectType1, ___existingValue2, ___serializer3, method) ((  Il2CppObject * (*) (JsonCreationConverter_1_t1816848400 *, JsonReader_t3154730733 *, Type_t *, Il2CppObject *, JsonSerializer_t1719617802 *, const MethodInfo*))JsonCreationConverter_1_ReadJson_m89195966_gshared)(__this, ___reader0, ___objectType1, ___existingValue2, ___serializer3, method)
// System.Void GSN.Skill.Games.Common.Utils.JsonCreationConverter`1<System.Object>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonCreationConverter_1_WriteJson_m2559134605_gshared (JsonCreationConverter_1_t1816848400 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method);
#define JsonCreationConverter_1_WriteJson_m2559134605(__this, ___writer0, ___value1, ___serializer2, method) ((  void (*) (JsonCreationConverter_1_t1816848400 *, JsonWriter_t1973729997 *, Il2CppObject *, JsonSerializer_t1719617802 *, const MethodInfo*))JsonCreationConverter_1_WriteJson_m2559134605_gshared)(__this, ___writer0, ___value1, ___serializer2, method)
