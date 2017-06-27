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

// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t54762202;
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
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct BidirectionalDictionary_2_t2874502390;
// System.String
struct String_t;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t187433993;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Type1303803226.h"
#include "Json_NET_System_Runtime_Serialization_EnumMemberAtt187433993.h"

// System.Void Newtonsoft.Json.Converters.StringEnumConverter::.ctor()
extern "C"  void StringEnumConverter__ctor_m2614443138 (StringEnumConverter_t54762202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::get_CamelCaseText()
extern "C"  bool StringEnumConverter_get_CamelCaseText_m3019395760 (StringEnumConverter_t54762202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::set_CamelCaseText(System.Boolean)
extern "C"  void StringEnumConverter_set_CamelCaseText_m2556766207 (StringEnumConverter_t54762202 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void StringEnumConverter_WriteJson_m2004550660 (StringEnumConverter_t54762202 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.StringEnumConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * StringEnumConverter_ReadJson_m3065646573 (StringEnumConverter_t54762202 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t1719617802 * ___serializer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String> Newtonsoft.Json.Converters.StringEnumConverter::GetEnumNameMap(System.Type)
extern "C"  BidirectionalDictionary_2_t2874502390 * StringEnumConverter_GetEnumNameMap_m3216309364 (StringEnumConverter_t54762202 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::CanConvert(System.Type)
extern "C"  bool StringEnumConverter_CanConvert_m1593777246 (StringEnumConverter_t54762202 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Converters.StringEnumConverter::<GetEnumNameMap>m__0(System.Runtime.Serialization.EnumMemberAttribute)
extern "C"  String_t* StringEnumConverter_U3CGetEnumNameMapU3Em__0_m2917707118 (Il2CppObject * __this /* static, unused */, EnumMemberAttribute_t187433993 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
