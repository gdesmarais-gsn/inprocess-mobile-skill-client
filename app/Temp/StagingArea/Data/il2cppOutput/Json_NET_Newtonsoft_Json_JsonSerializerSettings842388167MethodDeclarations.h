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

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t842388167;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t2505001351;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t2044502214;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1956922769;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_ReferenceLoopHandling1017855894.h"
#include "Json_NET_Newtonsoft_Json_MissingMemberHandling367517353.h"
#include "Json_NET_Newtonsoft_Json_ObjectCreationHandling3720134651.h"
#include "Json_NET_Newtonsoft_Json_NullValueHandling3618095365.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_PreserveReferencesHandlin3019117943.h"
#include "Json_NET_Newtonsoft_Json_TypeNameHandling1331513094.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "Json_NET_Newtonsoft_Json_ConstructorHandling4150360451.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3985864818.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "Json_NET_Newtonsoft_Json_Formatting4009318759.h"
#include "Json_NET_Newtonsoft_Json_FloatFormatHandling898035958.h"
#include "Json_NET_Newtonsoft_Json_FloatParseHandling1928971464.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"

// System.Void Newtonsoft.Json.JsonSerializerSettings::.cctor()
extern "C"  void JsonSerializerSettings__cctor_m3068885499 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
extern "C"  void JsonSerializerSettings__ctor_m118886854 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializerSettings::get_ReferenceLoopHandling()
extern "C"  int32_t JsonSerializerSettings_get_ReferenceLoopHandling_m1010863673 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ReferenceLoopHandling(Newtonsoft.Json.ReferenceLoopHandling)
extern "C"  void JsonSerializerSettings_set_ReferenceLoopHandling_m4172262692 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializerSettings::get_MissingMemberHandling()
extern "C"  int32_t JsonSerializerSettings_get_MissingMemberHandling_m1877934425 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
extern "C"  void JsonSerializerSettings_set_MissingMemberHandling_m3918511876 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializerSettings::get_ObjectCreationHandling()
extern "C"  int32_t JsonSerializerSettings_get_ObjectCreationHandling_m2284891177 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ObjectCreationHandling(Newtonsoft.Json.ObjectCreationHandling)
extern "C"  void JsonSerializerSettings_set_ObjectCreationHandling_m3269914548 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializerSettings::get_NullValueHandling()
extern "C"  int32_t JsonSerializerSettings_get_NullValueHandling_m2016069465 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
extern "C"  void JsonSerializerSettings_set_NullValueHandling_m3751290820 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializerSettings::get_DefaultValueHandling()
extern "C"  int32_t JsonSerializerSettings_get_DefaultValueHandling_m60429337 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_DefaultValueHandling(Newtonsoft.Json.DefaultValueHandling)
extern "C"  void JsonSerializerSettings_set_DefaultValueHandling_m4021684244 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::get_Converters()
extern "C"  Il2CppObject* JsonSerializerSettings_get_Converters_m3133363077 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Converters(System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>)
extern "C"  void JsonSerializerSettings_set_Converters_m3923254530 (JsonSerializerSettings_t842388167 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializerSettings::get_PreserveReferencesHandling()
extern "C"  int32_t JsonSerializerSettings_get_PreserveReferencesHandling_m993581369 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_PreserveReferencesHandling(Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  void JsonSerializerSettings_set_PreserveReferencesHandling_m3449058532 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializerSettings::get_TypeNameHandling()
extern "C"  int32_t JsonSerializerSettings_get_TypeNameHandling_m1254467393 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_TypeNameHandling(Newtonsoft.Json.TypeNameHandling)
extern "C"  void JsonSerializerSettings_set_TypeNameHandling_m1830129510 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializerSettings::get_TypeNameAssemblyFormat()
extern "C"  int32_t JsonSerializerSettings_get_TypeNameAssemblyFormat_m2556377657 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_TypeNameAssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void JsonSerializerSettings_set_TypeNameAssemblyFormat_m2781134692 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializerSettings::get_ConstructorHandling()
extern "C"  int32_t JsonSerializerSettings_get_ConstructorHandling_m535273241 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ConstructorHandling(Newtonsoft.Json.ConstructorHandling)
extern "C"  void JsonSerializerSettings_set_ConstructorHandling_m3020511108 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::get_ContractResolver()
extern "C"  Il2CppObject * JsonSerializerSettings_get_ContractResolver_m1375973498 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSerializerSettings_set_ContractResolver_m3930286983 (JsonSerializerSettings_t842388167 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializerSettings::get_ReferenceResolver()
extern "C"  Il2CppObject * JsonSerializerSettings_get_ReferenceResolver_m4019560080 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ReferenceResolver(Newtonsoft.Json.Serialization.IReferenceResolver)
extern "C"  void JsonSerializerSettings_set_ReferenceResolver_m3114105891 (JsonSerializerSettings_t842388167 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializerSettings::get_Binder()
extern "C"  SerializationBinder_t3985864818 * JsonSerializerSettings_get_Binder_m1066924597 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Binder(System.Runtime.Serialization.SerializationBinder)
extern "C"  void JsonSerializerSettings_set_Binder_m1133858644 (JsonSerializerSettings_t842388167 * __this, SerializationBinder_t3985864818 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::get_Error()
extern "C"  EventHandler_1_t1956922769 * JsonSerializerSettings_get_Error_m1617156080 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializerSettings_set_Error_m2152796013 (JsonSerializerSettings_t842388167 * __this, EventHandler_1_t1956922769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::get_Context()
extern "C"  StreamingContext_t1417235061  JsonSerializerSettings_get_Context_m2688067935 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Context(System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonSerializerSettings_set_Context_m596998766 (JsonSerializerSettings_t842388167 * __this, StreamingContext_t1417235061  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonSerializerSettings::get_DateFormatString()
extern "C"  String_t* JsonSerializerSettings_get_DateFormatString_m2048355726 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_DateFormatString(System.String)
extern "C"  void JsonSerializerSettings_set_DateFormatString_m3000312661 (JsonSerializerSettings_t842388167 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::get_MaxDepth()
extern "C"  Nullable_1_t334943763  JsonSerializerSettings_get_MaxDepth_m4206411047 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_MaxDepth(System.Nullable`1<System.Int32>)
extern "C"  void JsonSerializerSettings_set_MaxDepth_m3028025348 (JsonSerializerSettings_t842388167 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonSerializerSettings::get_Formatting()
extern "C"  int32_t JsonSerializerSettings_get_Formatting_m2117913305 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Formatting(Newtonsoft.Json.Formatting)
extern "C"  void JsonSerializerSettings_set_Formatting_m1453340932 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonSerializerSettings::get_FloatFormatHandling()
extern "C"  int32_t JsonSerializerSettings_get_FloatFormatHandling_m1041986649 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_FloatFormatHandling(Newtonsoft.Json.FloatFormatHandling)
extern "C"  void JsonSerializerSettings_set_FloatFormatHandling_m3596837828 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonSerializerSettings::get_FloatParseHandling()
extern "C"  int32_t JsonSerializerSettings_get_FloatParseHandling_m3962023661 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_FloatParseHandling(Newtonsoft.Json.FloatParseHandling)
extern "C"  void JsonSerializerSettings_set_FloatParseHandling_m2394714910 (JsonSerializerSettings_t842388167 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::get_Culture()
extern "C"  CultureInfo_t3500843524 * JsonSerializerSettings_get_Culture_m47567826 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Culture(System.Globalization.CultureInfo)
extern "C"  void JsonSerializerSettings_set_Culture_m682440435 (JsonSerializerSettings_t842388167 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonSerializerSettings::get_CheckAdditionalContent()
extern "C"  bool JsonSerializerSettings_get_CheckAdditionalContent_m1049391171 (JsonSerializerSettings_t842388167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_CheckAdditionalContent(System.Boolean)
extern "C"  void JsonSerializerSettings_set_CheckAdditionalContent_m352856522 (JsonSerializerSettings_t842388167 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
