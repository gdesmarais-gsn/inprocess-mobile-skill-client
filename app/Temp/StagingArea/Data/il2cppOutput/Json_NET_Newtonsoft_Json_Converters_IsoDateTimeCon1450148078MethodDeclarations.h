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

// Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t1450148078;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
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
#include "mscorlib_System_Globalization_DateTimeStyles370343085.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::.ctor()
extern "C"  void IsoDateTimeConverter__ctor_m3150528016 (IsoDateTimeConverter_t1450148078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeStyles Newtonsoft.Json.Converters.IsoDateTimeConverter::get_DateTimeStyles()
extern "C"  int32_t IsoDateTimeConverter_get_DateTimeStyles_m1502568424 (IsoDateTimeConverter_t1450148078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeStyles(System.Globalization.DateTimeStyles)
extern "C"  void IsoDateTimeConverter_set_DateTimeStyles_m3227166601 (IsoDateTimeConverter_t1450148078 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.IsoDateTimeConverter::get_DateTimeFormat()
extern "C"  String_t* IsoDateTimeConverter_get_DateTimeFormat_m2938704830 (IsoDateTimeConverter_t1450148078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeFormat(System.String)
extern "C"  void IsoDateTimeConverter_set_DateTimeFormat_m869344505 (IsoDateTimeConverter_t1450148078 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.Converters.IsoDateTimeConverter::get_Culture()
extern "C"  CultureInfo_t3500843524 * IsoDateTimeConverter_get_Culture_m1108075618 (IsoDateTimeConverter_t1450148078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_Culture(System.Globalization.CultureInfo)
extern "C"  void IsoDateTimeConverter_set_Culture_m878980811 (IsoDateTimeConverter_t1450148078 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void IsoDateTimeConverter_WriteJson_m1220366218 (IsoDateTimeConverter_t1450148078 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.IsoDateTimeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * IsoDateTimeConverter_ReadJson_m873659835 (IsoDateTimeConverter_t1450148078 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t1719617802 * ___serializer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
