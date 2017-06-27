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

// Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>
struct CustomCreationConverter_1_t4070253483;
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

// System.Void Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::.ctor()
extern "C"  void CustomCreationConverter_1__ctor_m2646953683_gshared (CustomCreationConverter_1_t4070253483 * __this, const MethodInfo* method);
#define CustomCreationConverter_1__ctor_m2646953683(__this, method) ((  void (*) (CustomCreationConverter_1_t4070253483 *, const MethodInfo*))CustomCreationConverter_1__ctor_m2646953683_gshared)(__this, method)
// System.Void Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void CustomCreationConverter_1_WriteJson_m356609187_gshared (CustomCreationConverter_1_t4070253483 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method);
#define CustomCreationConverter_1_WriteJson_m356609187(__this, ___writer0, ___value1, ___serializer2, method) ((  void (*) (CustomCreationConverter_1_t4070253483 *, JsonWriter_t1973729997 *, Il2CppObject *, JsonSerializer_t1719617802 *, const MethodInfo*))CustomCreationConverter_1_WriteJson_m356609187_gshared)(__this, ___writer0, ___value1, ___serializer2, method)
// System.Object Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * CustomCreationConverter_1_ReadJson_m3542379362_gshared (CustomCreationConverter_1_t4070253483 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t1719617802 * ___serializer3, const MethodInfo* method);
#define CustomCreationConverter_1_ReadJson_m3542379362(__this, ___reader0, ___objectType1, ___existingValue2, ___serializer3, method) ((  Il2CppObject * (*) (CustomCreationConverter_1_t4070253483 *, JsonReader_t3154730733 *, Type_t *, Il2CppObject *, JsonSerializer_t1719617802 *, const MethodInfo*))CustomCreationConverter_1_ReadJson_m3542379362_gshared)(__this, ___reader0, ___objectType1, ___existingValue2, ___serializer3, method)
// System.Boolean Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::CanConvert(System.Type)
extern "C"  bool CustomCreationConverter_1_CanConvert_m1949499203_gshared (CustomCreationConverter_1_t4070253483 * __this, Type_t * ___objectType0, const MethodInfo* method);
#define CustomCreationConverter_1_CanConvert_m1949499203(__this, ___objectType0, method) ((  bool (*) (CustomCreationConverter_1_t4070253483 *, Type_t *, const MethodInfo*))CustomCreationConverter_1_CanConvert_m1949499203_gshared)(__this, ___objectType0, method)
// System.Boolean Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::get_CanWrite()
extern "C"  bool CustomCreationConverter_1_get_CanWrite_m665941431_gshared (CustomCreationConverter_1_t4070253483 * __this, const MethodInfo* method);
#define CustomCreationConverter_1_get_CanWrite_m665941431(__this, method) ((  bool (*) (CustomCreationConverter_1_t4070253483 *, const MethodInfo*))CustomCreationConverter_1_get_CanWrite_m665941431_gshared)(__this, method)
