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

// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t711291442;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t2844771058;
// System.String
struct String_t;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// Newtonsoft.Json.Linq.JValue
struct JValue_t300956845;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t28167840;
// Newtonsoft.Json.Linq.IJEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IJEnumerable_1_t2511655056;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t445311913;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JContainer3538280255.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JEnumerable_1_gen3820937473.h"
#include "Json_NET_Newtonsoft_Json_Formatting4009318759.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen2304312229.h"
#include "mscorlib_System_Nullable_1_gen3544916222.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen1172263229.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.Linq.JToken::.ctor()
extern "C"  void JToken__ctor_m2145289922 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::get_EqualityComparer()
extern "C"  JTokenEqualityComparer_t711291442 * JToken_get_EqualityComparer_m1090754886 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::get_Parent()
extern "C"  JContainer_t3538280255 * JToken_get_Parent_m685392672 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::set_Parent(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JToken_set_Parent_m2295524459 (JToken_t2552644013 * __this, JContainer_t3538280255 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Root()
extern "C"  JToken_t2552644013 * JToken_get_Root_m2886329890 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::DeepEquals(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  bool JToken_DeepEquals_m161385447 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___t10, JToken_t2552644013 * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Next()
extern "C"  JToken_t2552644013 * JToken_get_Next_m2048849243 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::set_Next(Newtonsoft.Json.Linq.JToken)
extern "C"  void JToken_set_Next_m1860243914 (JToken_t2552644013 * __this, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Previous()
extern "C"  JToken_t2552644013 * JToken_get_Previous_m4263357285 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::set_Previous(Newtonsoft.Json.Linq.JToken)
extern "C"  void JToken_set_Previous_m176298006 (JToken_t2552644013 * __this, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::AddAfterSelf(System.Object)
extern "C"  void JToken_AddAfterSelf_m1421100499 (JToken_t2552644013 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::AddBeforeSelf(System.Object)
extern "C"  void JToken_AddBeforeSelf_m1289280968 (JToken_t2552644013 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JToken::Ancestors()
extern "C"  Il2CppObject* JToken_Ancestors_m1945412534 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JToken::AfterSelf()
extern "C"  Il2CppObject* JToken_AfterSelf_m1332735220 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JToken::BeforeSelf()
extern "C"  Il2CppObject* JToken_BeforeSelf_m2415790931 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Item(System.Object)
extern "C"  JToken_t2552644013 * JToken_get_Item_m2998749419 (JToken_t2552644013 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::set_Item(System.Object,Newtonsoft.Json.Linq.JToken)
extern "C"  void JToken_set_Item_m1088061354 (JToken_t2552644013 * __this, Il2CppObject * ___key0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_First()
extern "C"  JToken_t2552644013 * JToken_get_First_m3963733806 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Last()
extern "C"  JToken_t2552644013 * JToken_get_Last_m1724565846 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JToken::Children()
extern "C"  JEnumerable_1_t3820937473  JToken_Children_m3459131552 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::Remove()
extern "C"  void JToken_Remove_m599027916 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::Replace(Newtonsoft.Json.Linq.JToken)
extern "C"  void JToken_Replace_m2492031220 (JToken_t2552644013 * __this, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JToken::ToString()
extern "C"  String_t* JToken_ToString_m2948776599 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JToken::ToString(Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonConverter[])
extern "C"  String_t* JToken_ToString_m3783833386 (JToken_t2552644013 * __this, int32_t ___formatting0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JToken::EnsureValue(Newtonsoft.Json.Linq.JToken)
extern "C"  JValue_t300956845 * JToken_EnsureValue_m2550630254 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JToken::GetType(Newtonsoft.Json.Linq.JToken)
extern "C"  String_t* JToken_GetType_m1012196445 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::IsNullable(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JToken_IsNullable_m3276622429 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::ValidateFloat(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  bool JToken_ValidateFloat_m890477559 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___o0, bool ___nullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::ValidateInteger(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  bool JToken_ValidateInteger_m1853969301 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___o0, bool ___nullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::ValidateDate(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  bool JToken_ValidateDate_m3057246855 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___o0, bool ___nullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::ValidateBoolean(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  bool JToken_ValidateBoolean_m4110976999 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___o0, bool ___nullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::ValidateString(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JToken_ValidateString_m1444561229 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::ValidateBytes(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JToken_ValidateBytes_m3956128701 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JToken_op_Explicit_m1990003396 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  DateTimeOffset_t1362988906  JToken_op_Explicit_m3719961756 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t2088641033  JToken_op_Explicit_m1066354433 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  int64_t JToken_op_Explicit_m1027816589 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t3251239280  JToken_op_Explicit_m469322348 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t3921022517  JToken_op_Explicit_m4204946261 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t3282734688  JToken_op_Explicit_m805448330 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t2341081996  JToken_op_Explicit_m4066395928 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JToken_op_Explicit_m1174351336 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  int16_t JToken_op_Explicit_m23340506 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  uint16_t JToken_op_Explicit_m2664041781 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t334943763  JToken_op_Explicit_m4261321187 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int16> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t2304312229  JToken_op_Explicit_m1812748189 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt16> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t3544916222  JToken_op_Explicit_m2876958758 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  DateTime_t693205669  JToken_op_Explicit_m1265517997 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t3467111648  JToken_op_Explicit_m732258274 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t339576247  JToken_op_Explicit_m181637983 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Decimal_t724701077  JToken_op_Explicit_m358739695 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt32> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t412748336  JToken_op_Explicit_m2885258516 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt64> Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  Nullable_1_t1172263229  JToken_op_Explicit_m3348417261 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  double JToken_op_Explicit_m1152219801 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  float JToken_op_Explicit_m3648154842 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  String_t* JToken_op_Explicit_m3524167013 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  uint32_t JToken_op_Explicit_m734966623 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  uint64_t JToken_op_Explicit_m416517316 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
extern "C"  ByteU5BU5D_t3397334013* JToken_op_Explicit_m236954780 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Boolean)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m232928221 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.DateTimeOffset)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m487849401 (Il2CppObject * __this /* static, unused */, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.Boolean>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m1830406074 (Il2CppObject * __this /* static, unused */, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Int64)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m3390419048 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.DateTime>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m1989645805 (Il2CppObject * __this /* static, unused */, Nullable_1_t3251239280  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.DateTimeOffset>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m3193572130 (Il2CppObject * __this /* static, unused */, Nullable_1_t3921022517  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.Decimal>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m3161013111 (Il2CppObject * __this /* static, unused */, Nullable_1_t3282734688  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.Double>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m3398772329 (Il2CppObject * __this /* static, unused */, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Int16)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m2227619865 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.UInt16)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m2704365540 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Int32)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m4196988267 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.Int32>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m2043938842 (Il2CppObject * __this /* static, unused */, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.DateTime)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m3911198942 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.Int64>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m1761613933 (Il2CppObject * __this /* static, unused */, Nullable_1_t3467111648  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.Single>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m2635251016 (Il2CppObject * __this /* static, unused */, Nullable_1_t339576247  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Decimal)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m4287122968 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.Int16>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m1479288900 (Il2CppObject * __this /* static, unused */, Nullable_1_t2304312229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.UInt16>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m3734807221 (Il2CppObject * __this /* static, unused */, Nullable_1_t3544916222  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.UInt32>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m2047763623 (Il2CppObject * __this /* static, unused */, Nullable_1_t412748336  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Nullable`1<System.UInt64>)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m259963674 (Il2CppObject * __this /* static, unused */, Nullable_1_t1172263229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Double)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m1778728546 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Single)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m1649986231 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.String)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m3191297678 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.UInt32)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m2422040542 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.UInt64)
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m237604209 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Byte[])
extern "C"  JToken_t2552644013 * JToken_op_Implicit_m1356760681 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JToken::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * JToken_System_Collections_IEnumerable_GetEnumerator_m2166443577 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JToken::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
extern "C"  Il2CppObject* JToken_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m1381171844 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.IJEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JToken::Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item(System.Object)
extern "C"  Il2CppObject* JToken_Newtonsoft_Json_Linq_IJEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_get_Item_m301567976 (JToken_t2552644013 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReader Newtonsoft.Json.Linq.JToken::CreateReader()
extern "C"  JsonReader_t3154730733 * JToken_CreateReader_m182465268 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObjectInternal(System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  JToken_t2552644013 * JToken_FromObjectInternal_m477503398 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, JsonSerializer_t1719617802 * ___jsonSerializer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObject(System.Object)
extern "C"  JToken_t2552644013 * JToken_FromObject_m1919219384 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  JToken_t2552644013 * JToken_FromObject_m1023161983 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, JsonSerializer_t1719617802 * ___jsonSerializer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::ReadFrom(Newtonsoft.Json.JsonReader)
extern "C"  JToken_t2552644013 * JToken_ReadFrom_m1619701555 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::Parse(System.String)
extern "C"  JToken_t2552644013 * JToken_Parse_m2164569782 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::Load(Newtonsoft.Json.JsonReader)
extern "C"  JToken_t2552644013 * JToken_Load_m547360669 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::SetLineInfo(Newtonsoft.Json.IJsonLineInfo)
extern "C"  void JToken_SetLineInfo_m1279794342 (JToken_t2552644013 * __this, Il2CppObject * ___lineInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JToken::SetLineInfo(System.Int32,System.Int32)
extern "C"  void JToken_SetLineInfo_m1005201084 (JToken_t2552644013 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JToken::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool JToken_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m708351490 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JToken::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t JToken_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m1529177600 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JToken::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t JToken_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m2534628470 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::SelectToken(System.String)
extern "C"  JToken_t2552644013 * JToken_SelectToken_m3479829776 (JToken_t2552644013 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::SelectToken(System.String,System.Boolean)
extern "C"  JToken_t2552644013 * JToken_SelectToken_m3631315743 (JToken_t2552644013 * __this, String_t* ___path0, bool ___errorWhenNoMatch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JToken::System.ICloneable.Clone()
extern "C"  Il2CppObject * JToken_System_ICloneable_Clone_m3988217787 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::DeepClone()
extern "C"  JToken_t2552644013 * JToken_DeepClone_m2215893624 (JToken_t2552644013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
