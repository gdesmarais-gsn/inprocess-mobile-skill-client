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

// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct JsonFormatterConverter_t3196859494;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_TypeCode2536926201.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Void Newtonsoft.Json.Serialization.JsonFormatterConverter::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonFormatterConverter__ctor_m3196365944 (JsonFormatterConverter_t3196859494 * __this, JsonSerializer_t1719617802 * ___serializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonFormatterConverter::Convert(System.Object,System.Type)
extern "C"  Il2CppObject * JsonFormatterConverter_Convert_m3155860122 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonFormatterConverter::Convert(System.Object,System.TypeCode)
extern "C"  Il2CppObject * JsonFormatterConverter_Convert_m1982368119 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, int32_t ___typeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonFormatterConverter::ToBoolean(System.Object)
extern "C"  bool JsonFormatterConverter_ToBoolean_m1075494150 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Newtonsoft.Json.Serialization.JsonFormatterConverter::ToByte(System.Object)
extern "C"  uint8_t JsonFormatterConverter_ToByte_m1635367370 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.Serialization.JsonFormatterConverter::ToChar(System.Object)
extern "C"  Il2CppChar JsonFormatterConverter_ToChar_m1191829334 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Serialization.JsonFormatterConverter::ToDateTime(System.Object)
extern "C"  DateTime_t693205669  JsonFormatterConverter_ToDateTime_m1148938848 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal Newtonsoft.Json.Serialization.JsonFormatterConverter::ToDecimal(System.Object)
extern "C"  Decimal_t724701077  JsonFormatterConverter_ToDecimal_m1866011206 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Newtonsoft.Json.Serialization.JsonFormatterConverter::ToDouble(System.Object)
extern "C"  double JsonFormatterConverter_ToDouble_m992905968 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt16(System.Object)
extern "C"  int16_t JsonFormatterConverter_ToInt16_m2752323526 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt32(System.Object)
extern "C"  int32_t JsonFormatterConverter_ToInt32_m2713482630 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt64(System.Object)
extern "C"  int64_t JsonFormatterConverter_ToInt64_m1865980582 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Newtonsoft.Json.Serialization.JsonFormatterConverter::ToSByte(System.Object)
extern "C"  int8_t JsonFormatterConverter_ToSByte_m1689207142 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Newtonsoft.Json.Serialization.JsonFormatterConverter::ToSingle(System.Object)
extern "C"  float JsonFormatterConverter_ToSingle_m848385386 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonFormatterConverter::ToString(System.Object)
extern "C"  String_t* JsonFormatterConverter_ToString_m1707716656 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToUInt16(System.Object)
extern "C"  uint16_t JsonFormatterConverter_ToUInt16_m2732938080 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToUInt32(System.Object)
extern "C"  uint32_t JsonFormatterConverter_ToUInt32_m2683451076 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToUInt64(System.Object)
extern "C"  uint64_t JsonFormatterConverter_ToUInt64_m3382032598 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
