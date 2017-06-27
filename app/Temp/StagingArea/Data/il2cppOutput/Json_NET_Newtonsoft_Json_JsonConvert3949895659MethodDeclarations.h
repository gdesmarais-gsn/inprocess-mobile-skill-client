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

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_t2796780849;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Enum
struct Enum_t2459695545;
// System.Uri
struct Uri_t19570940;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t842388167;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_FloatFormatHandling898035958.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "mscorlib_System_Enum2459695545.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Guid2533601593.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_TypeCode2536926201.h"
#include "mscorlib_System_Type1303803226.h"
#include "Json_NET_Newtonsoft_Json_Formatting4009318759.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializerSettings842388167.h"

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::get_DefaultSettings()
extern "C"  Func_1_t2796780849 * JsonConvert_get_DefaultSettings_m1170637258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::set_DefaultSettings(System.Func`1<Newtonsoft.Json.JsonSerializerSettings>)
extern "C"  void JsonConvert_set_DefaultSettings_m2102391685 (Il2CppObject * __this /* static, unused */, Func_1_t2796780849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Single,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m1434984143 (Il2CppObject * __this /* static, unused */, float ___value0, int32_t ___floatFormatHandling1, Il2CppChar ___quoteChar2, bool ___nullable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureFloatFormat(System.Double,System.String,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_EnsureFloatFormat_m3053722549 (Il2CppObject * __this /* static, unused */, double ___value0, String_t* ___text1, int32_t ___floatFormatHandling2, Il2CppChar ___quoteChar3, bool ___nullable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.DateTime)
extern "C"  String_t* JsonConvert_ToString_m1546045407 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.DateTimeOffset)
extern "C"  String_t* JsonConvert_ToString_m1911711488 (Il2CppObject * __this /* static, unused */, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.JsonConvert::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t3430258949  JsonConvert_GetUtcOffset_m1358253906 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::WriteDateTimeString(System.IO.TextWriter,System.DateTime)
extern "C"  void JsonConvert_WriteDateTimeString_m3028791788 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, DateTime_t693205669  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::WriteDateTimeString(System.IO.TextWriter,System.DateTime,System.TimeSpan,System.DateTimeKind)
extern "C"  void JsonConvert_WriteDateTimeString_m912593566 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, DateTime_t693205669  ___value1, TimeSpan_t3430258949  ___offset2, int32_t ___kind3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ToUniversalTicks(System.DateTime)
extern "C"  int64_t JsonConvert_ToUniversalTicks_m2578814585 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t JsonConvert_ToUniversalTicks_m734306095 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t JsonConvert_ConvertDateTimeToJavaScriptTicks_m1817584547 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ConvertDateTimeToJavaScriptTicks(System.DateTime)
extern "C"  int64_t JsonConvert_ConvertDateTimeToJavaScriptTicks_m431729497 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t JsonConvert_ConvertDateTimeToJavaScriptTicks_m2626836990 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, bool ___convertToUtc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t JsonConvert_UniversialTicksToJavaScriptTicks_m2019637737 (Il2CppObject * __this /* static, unused */, int64_t ___universialTicks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.JsonConvert::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t693205669  JsonConvert_ConvertJavaScriptTicksToDateTime_m2578351481 (Il2CppObject * __this /* static, unused */, int64_t ___javaScriptTicks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m979132832 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Char)
extern "C"  String_t* JsonConvert_ToString_m3736703646 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Enum)
extern "C"  String_t* JsonConvert_ToString_m3501431161 (Il2CppObject * __this /* static, unused */, Enum_t2459695545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Int32)
extern "C"  String_t* JsonConvert_ToString_m2837005200 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Int16)
extern "C"  String_t* JsonConvert_ToString_m2554680194 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.UInt16)
extern "C"  String_t* JsonConvert_ToString_m3939615035 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.UInt32)
extern "C"  String_t* JsonConvert_ToString_m1970246501 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Int64)
extern "C"  String_t* JsonConvert_ToString_m3542817699 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.UInt64)
extern "C"  String_t* JsonConvert_ToString_m2776815720 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Single)
extern "C"  String_t* JsonConvert_ToString_m1227593634 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Double)
extern "C"  String_t* JsonConvert_ToString_m631307411 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Double,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m1219544650 (Il2CppObject * __this /* static, unused */, double ___value0, int32_t ___floatFormatHandling1, Il2CppChar ___quoteChar2, bool ___nullable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.Double,System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m1535868121 (Il2CppObject * __this /* static, unused */, double ___value0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m3446509231 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Byte)
extern "C"  String_t* JsonConvert_ToString_m543926376 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.SByte)
extern "C"  String_t* JsonConvert_ToString_m665242995 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Decimal)
extern "C"  String_t* JsonConvert_ToString_m3615641993 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Guid)
extern "C"  String_t* JsonConvert_ToString_m59834513 (Il2CppObject * __this /* static, unused */, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.TimeSpan)
extern "C"  String_t* JsonConvert_ToString_m4012356639 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Uri)
extern "C"  String_t* JsonConvert_ToString_m473924438 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String)
extern "C"  String_t* JsonConvert_ToString_m2529855531 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String,System.Char)
extern "C"  String_t* JsonConvert_ToString_m2680848114 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___delimter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Object)
extern "C"  String_t* JsonConvert_ToString_m791068863 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonConvert::IsJsonPrimitiveTypeCode(System.TypeCode)
extern "C"  bool JsonConvert_IsJsonPrimitiveTypeCode_m1275361336 (Il2CppObject * __this /* static, unused */, int32_t ___typeCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonConvert::IsJsonPrimitiveType(System.Type)
extern "C"  bool JsonConvert_IsJsonPrimitiveType_m2332586360 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonConvert::IsJsonPrimitive(System.Object)
extern "C"  bool JsonConvert_IsJsonPrimitive_m1151464287 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
extern "C"  String_t* JsonConvert_SerializeObject_m3842390300 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.Formatting)
extern "C"  String_t* JsonConvert_SerializeObject_m2028422960 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___formatting1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonConverter[])
extern "C"  String_t* JsonConvert_SerializeObject_m936114099 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonConverter[])
extern "C"  String_t* JsonConvert_SerializeObject_m202064291 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___formatting1, JsonConverterU5BU5D_t3128012475* ___converters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  String_t* JsonConvert_SerializeObject_m3785691952 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___formatting1, JsonSerializerSettings_t842388167 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  String_t* JsonConvert_SerializeObject_m2993279844 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, JsonSerializerSettings_t842388167 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m569081927 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m625565177 (Il2CppObject * __this /* static, unused */, String_t* ___value0, JsonSerializerSettings_t842388167 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m2831183684 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonConverter[])
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m686175249 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Type_t * ___type1, JsonConverterU5BU5D_t3128012475* ___converters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m3972188248 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Type_t * ___type1, JsonSerializerSettings_t842388167 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::PopulateObject(System.String,System.Object)
extern "C"  void JsonConvert_PopulateObject_m3548928257 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::PopulateObject(System.String,System.Object,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  void JsonConvert_PopulateObject_m2534156247 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppObject * ___target1, JsonSerializerSettings_t842388167 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::.cctor()
extern "C"  void JsonConvert__cctor_m293474377 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
