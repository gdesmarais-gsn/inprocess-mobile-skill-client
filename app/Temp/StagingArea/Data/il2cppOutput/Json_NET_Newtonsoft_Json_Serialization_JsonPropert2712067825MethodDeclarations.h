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

// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t561708391;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.Object
struct Il2CppObject;
// System.Predicate`1<System.Object>
struct Predicate_1_t1132419410;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2572051853;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Type1303803226.h"
#include "Json_NET_Newtonsoft_Json_JsonConverter1964060750.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Required2961887721.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen1881161680.h"
#include "mscorlib_System_Nullable_1_gen1720961778.h"
#include "mscorlib_System_Nullable_1_gen3575889505.h"
#include "mscorlib_System_Nullable_1_gen1983200966.h"
#include "mscorlib_System_Nullable_1_gen3889546705.h"

// System.Void Newtonsoft.Json.Serialization.JsonProperty::.ctor()
extern "C"  void JsonProperty__ctor_m2872651740 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonProperty::get_PropertyName()
extern "C"  String_t* JsonProperty_get_PropertyName_m3365501656 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_PropertyName(System.String)
extern "C"  void JsonProperty_set_PropertyName_m2942166561 (JsonProperty_t2712067825 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::get_Order()
extern "C"  Nullable_1_t334943763  JsonProperty_get_Order_m4130341080 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Order(System.Nullable`1<System.Int32>)
extern "C"  void JsonProperty_set_Order_m248355781 (JsonProperty_t2712067825 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonProperty::get_UnderlyingName()
extern "C"  String_t* JsonProperty_get_UnderlyingName_m1059784550 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_UnderlyingName(System.String)
extern "C"  void JsonProperty_set_UnderlyingName_m2254174755 (JsonProperty_t2712067825 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::get_ValueProvider()
extern "C"  Il2CppObject * JsonProperty_get_ValueProvider_m261855522 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ValueProvider(Newtonsoft.Json.Serialization.IValueProvider)
extern "C"  void JsonProperty_set_ValueProvider_m2637975885 (JsonProperty_t2712067825 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonProperty::get_PropertyType()
extern "C"  Type_t * JsonProperty_get_PropertyType_m1816767556 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_PropertyType(System.Type)
extern "C"  void JsonProperty_set_PropertyType_m2899766043 (JsonProperty_t2712067825 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::get_Converter()
extern "C"  JsonConverter_t1964060750 * JsonProperty_get_Converter_m2604023375 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Converter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonProperty_set_Converter_m1516234684 (JsonProperty_t2712067825 * __this, JsonConverter_t1964060750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::get_MemberConverter()
extern "C"  JsonConverter_t1964060750 * JsonProperty_get_MemberConverter_m724342931 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_MemberConverter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonProperty_set_MemberConverter_m1902061978 (JsonProperty_t2712067825 * __this, JsonConverter_t1964060750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::get_Ignored()
extern "C"  bool JsonProperty_get_Ignored_m1932048623 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Ignored(System.Boolean)
extern "C"  void JsonProperty_set_Ignored_m3230844376 (JsonProperty_t2712067825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::get_Readable()
extern "C"  bool JsonProperty_get_Readable_m522514387 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Readable(System.Boolean)
extern "C"  void JsonProperty_set_Readable_m862148538 (JsonProperty_t2712067825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::get_Writable()
extern "C"  bool JsonProperty_get_Writable_m3024142481 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Writable(System.Boolean)
extern "C"  void JsonProperty_set_Writable_m3963031634 (JsonProperty_t2712067825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonProperty::get_DefaultValue()
extern "C"  Il2CppObject * JsonProperty_get_DefaultValue_m4222115786 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_DefaultValue(System.Object)
extern "C"  void JsonProperty_set_DefaultValue_m2952913393 (JsonProperty_t2712067825 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Required Newtonsoft.Json.Serialization.JsonProperty::get_Required()
extern "C"  int32_t JsonProperty_get_Required_m1804314155 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Required(Newtonsoft.Json.Required)
extern "C"  void JsonProperty_set_Required_m2790723406 (JsonProperty_t2712067825 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::get_IsReference()
extern "C"  Nullable_1_t2088641033  JsonProperty_get_IsReference_m2470199255 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_IsReference(System.Nullable`1<System.Boolean>)
extern "C"  void JsonProperty_set_IsReference_m1193785856 (JsonProperty_t2712067825 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::get_NullValueHandling()
extern "C"  Nullable_1_t1881161680  JsonProperty_get_NullValueHandling_m1660088464 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_NullValueHandling(System.Nullable`1<Newtonsoft.Json.NullValueHandling>)
extern "C"  void JsonProperty_set_NullValueHandling_m667965933 (JsonProperty_t2712067825 * __this, Nullable_1_t1881161680  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::get_DefaultValueHandling()
extern "C"  Nullable_1_t1720961778  JsonProperty_get_DefaultValueHandling_m1010899360 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_DefaultValueHandling(System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>)
extern "C"  void JsonProperty_set_DefaultValueHandling_m2487835853 (JsonProperty_t2712067825 * __this, Nullable_1_t1720961778  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::get_ReferenceLoopHandling()
extern "C"  Nullable_1_t3575889505  JsonProperty_get_ReferenceLoopHandling_m1066686714 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ReferenceLoopHandling(System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>)
extern "C"  void JsonProperty_set_ReferenceLoopHandling_m1690575341 (JsonProperty_t2712067825 * __this, Nullable_1_t3575889505  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::get_ObjectCreationHandling()
extern "C"  Nullable_1_t1983200966  JsonProperty_get_ObjectCreationHandling_m2239621856 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ObjectCreationHandling(System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>)
extern "C"  void JsonProperty_set_ObjectCreationHandling_m3018351749 (JsonProperty_t2712067825 * __this, Nullable_1_t1983200966  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::get_TypeNameHandling()
extern "C"  Nullable_1_t3889546705  JsonProperty_get_TypeNameHandling_m838452992 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_TypeNameHandling(System.Nullable`1<Newtonsoft.Json.TypeNameHandling>)
extern "C"  void JsonProperty_set_TypeNameHandling_m1855063021 (JsonProperty_t2712067825 * __this, Nullable_1_t3889546705  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::get_ShouldSerialize()
extern "C"  Predicate_1_t1132419410 * JsonProperty_get_ShouldSerialize_m1483643508 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ShouldSerialize(System.Predicate`1<System.Object>)
extern "C"  void JsonProperty_set_ShouldSerialize_m616702467 (JsonProperty_t2712067825 * __this, Predicate_1_t1132419410 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::get_GetIsSpecified()
extern "C"  Predicate_1_t1132419410 * JsonProperty_get_GetIsSpecified_m953830569 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_GetIsSpecified(System.Predicate`1<System.Object>)
extern "C"  void JsonProperty_set_GetIsSpecified_m2041122300 (JsonProperty_t2712067825 * __this, Predicate_1_t1132419410 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::get_SetIsSpecified()
extern "C"  Action_2_t2572051853 * JsonProperty_get_SetIsSpecified_m1058901815 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_SetIsSpecified(System.Action`2<System.Object,System.Object>)
extern "C"  void JsonProperty_set_SetIsSpecified_m3123783838 (JsonProperty_t2712067825 * __this, Action_2_t2572051853 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonProperty::ToString()
extern "C"  String_t* JsonProperty_ToString_m2950573257 (JsonProperty_t2712067825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
