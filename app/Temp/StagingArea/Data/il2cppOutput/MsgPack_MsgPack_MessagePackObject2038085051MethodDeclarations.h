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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.IList`1<MsgPack.MessagePackObject>
struct IList_1_t2579025652;
// MsgPack.MessagePackObjectDictionary
struct MessagePackObjectDictionary_t4175726983;
// MsgPack.MessagePackString
struct MessagePackString_t2382609591;
// System.Object
struct Il2CppObject;
// MsgPack.MessagePackObject/ValueTypeCode
struct ValueTypeCode_t533787052;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Type
struct Type_t;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.PackingOptions
struct PackingOptions_t1268727809;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.IEnumerable`1<MsgPack.MessagePackObject>
struct IEnumerable_1_t2330212096;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "MsgPack_MsgPack_MessagePackExtendedTypeObject1459807206.h"
#include "mscorlib_System_String2029220233.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary4175726983.h"
#include "MsgPack_MsgPack_MessagePackString2382609591.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_MessagePackObject_ValueTypeCode533787052.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_PackingOptions1268727809.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22208478405.h"

// System.Boolean MsgPack.MessagePackObject::AsBoolean()
extern "C"  bool MessagePackObject_AsBoolean_m3936155088 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte MsgPack.MessagePackObject::AsByte()
extern "C"  uint8_t MessagePackObject_AsByte_m1670061898 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte MsgPack.MessagePackObject::AsSByte()
extern "C"  int8_t MessagePackObject_AsSByte_m3083685462 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 MsgPack.MessagePackObject::AsInt16()
extern "C"  int16_t MessagePackObject_AsInt16_m4235069744 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 MsgPack.MessagePackObject::AsUInt16()
extern "C"  uint16_t MessagePackObject_AsUInt16_m2462230698 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.MessagePackObject::AsInt32()
extern "C"  int32_t MessagePackObject_AsInt32_m1546251732 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MsgPack.MessagePackObject::AsUInt32()
extern "C"  uint32_t MessagePackObject_AsUInt32_m2723366442 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.MessagePackObject::AsInt64()
extern "C"  int64_t MessagePackObject_AsInt64_m2116700102 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 MsgPack.MessagePackObject::AsUInt64()
extern "C"  uint64_t MessagePackObject_AsUInt64_m2040115370 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MsgPack.MessagePackObject::AsSingle()
extern "C"  float MessagePackObject_AsSingle_m2427749162 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double MsgPack.MessagePackObject::AsDouble()
extern "C"  double MessagePackObject_AsDouble_m117126698 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackObject::AsString()
extern "C"  String_t* MessagePackObject_AsString_m2410857322 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MsgPack.MessagePackObject::AsBinary()
extern "C"  ByteU5BU5D_t3397334013* MessagePackObject_AsBinary_m554072015 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackExtendedTypeObject MsgPack.MessagePackObject::AsMessagePackExtendedTypeObject()
extern "C"  MessagePackExtendedTypeObject_t1459807206  MessagePackObject_AsMessagePackExtendedTypeObject_m2115778085 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Boolean)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m3815417892 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Byte)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m1581011368 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.SByte)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m2852357929 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Int16)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m967517530 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.UInt16)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m3906642729 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Int32)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m1249842528 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.UInt32)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m1937274327 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Int64)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m268611573 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.UInt64)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m2743843344 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Single)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m3509556226 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Double)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m1711089189 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.String)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m1541819385 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(System.Byte[])
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m2838404280 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.MessagePackObject::op_Implicit(MsgPack.MessagePackExtendedTypeObject)
extern "C"  MessagePackObject_t2038085051  MessagePackObject_op_Implicit_m4190108745 (Il2CppObject * __this /* static, unused */, MessagePackExtendedTypeObject_t1459807206  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  bool MessagePackObject_op_Explicit_m2188997233 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  uint8_t MessagePackObject_op_Explicit_m118705043 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  int8_t MessagePackObject_op_Explicit_m1413843888 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  int16_t MessagePackObject_op_Explicit_m4199979693 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  uint16_t MessagePackObject_op_Explicit_m377774740 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  int32_t MessagePackObject_op_Explicit_m2554521563 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  uint32_t MessagePackObject_op_Explicit_m3587519758 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  int64_t MessagePackObject_op_Explicit_m620017756 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  float MessagePackObject_op_Explicit_m182988135 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double MsgPack.MessagePackObject::op_Explicit(MsgPack.MessagePackObject)
extern "C"  double MessagePackObject_op_Explicit_m2613976818 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::get_IsNil()
extern "C"  bool MessagePackObject_get_IsNil_m3458955312 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::.ctor(System.Collections.Generic.IList`1<MsgPack.MessagePackObject>)
extern "C"  void MessagePackObject__ctor_m1924105190 (MessagePackObject_t2038085051 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::.ctor(System.Collections.Generic.IList`1<MsgPack.MessagePackObject>,System.Boolean)
extern "C"  void MessagePackObject__ctor_m1046893735 (MessagePackObject_t2038085051 * __this, Il2CppObject* ___value0, bool ___isImmutable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::.ctor(MsgPack.MessagePackObjectDictionary)
extern "C"  void MessagePackObject__ctor_m2333084719 (MessagePackObject_t2038085051 * __this, MessagePackObjectDictionary_t4175726983 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::.ctor(MsgPack.MessagePackObjectDictionary,System.Boolean)
extern "C"  void MessagePackObject__ctor_m887148208 (MessagePackObject_t2038085051 * __this, MessagePackObjectDictionary_t4175726983 * ___value0, bool ___isImmutable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::.ctor(MsgPack.MessagePackString)
extern "C"  void MessagePackObject__ctor_m562024227 (MessagePackObject_t2038085051 * __this, MessagePackString_t2382609591 * ___messagePackString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::Equals(System.Object)
extern "C"  bool MessagePackObject_Equals_m3509466011 (MessagePackObject_t2038085051 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::Equals(MsgPack.MessagePackObject)
extern "C"  bool MessagePackObject_Equals_m2648132742 (MessagePackObject_t2038085051 * __this, MessagePackObject_t2038085051  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::EqualsWhenValueType(MsgPack.MessagePackObject,MsgPack.MessagePackObject/ValueTypeCode,MsgPack.MessagePackObject/ValueTypeCode)
extern "C"  bool MessagePackObject_EqualsWhenValueType_m872380087 (MessagePackObject_t2038085051 * __this, MessagePackObject_t2038085051  ___other0, ValueTypeCode_t533787052 * ___valueTypeCode1, ValueTypeCode_t533787052 * ___otherValuetypeCode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::IntegerIntegerEquals(System.UInt64,MsgPack.MessagePackObject/ValueTypeCode,System.UInt64,MsgPack.MessagePackObject/ValueTypeCode)
extern "C"  bool MessagePackObject_IntegerIntegerEquals_m4067641421 (Il2CppObject * __this /* static, unused */, uint64_t ___left0, ValueTypeCode_t533787052 * ___leftTypeCode1, uint64_t ___right2, ValueTypeCode_t533787052 * ___rightTypeCode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::IntegerSingleEquals(MsgPack.MessagePackObject,MsgPack.MessagePackObject)
extern "C"  bool MessagePackObject_IntegerSingleEquals_m1512667361 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___integer0, MessagePackObject_t2038085051  ___real1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::IntegerDoubleEquals(MsgPack.MessagePackObject,MsgPack.MessagePackObject)
extern "C"  bool MessagePackObject_IntegerDoubleEquals_m1037855088 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___integer0, MessagePackObject_t2038085051  ___real1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.MessagePackObject::GetHashCode()
extern "C"  int32_t MessagePackObject_GetHashCode_m3295859789 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackObject::ToString()
extern "C"  String_t* MessagePackObject_ToString_m2223544061 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::ToString(System.Text.StringBuilder,System.Boolean)
extern "C"  void MessagePackObject_ToString_m2141444027 (MessagePackObject_t2038085051 * __this, StringBuilder_t1221177846 * ___buffer0, bool ___isJson1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::ToStringBinary(System.Text.StringBuilder,System.Boolean,MsgPack.MessagePackString)
extern "C"  void MessagePackObject_ToStringBinary_m2866734573 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___buffer0, bool ___isJson1, MessagePackString_t2382609591 * ___asBinary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> MsgPack.MessagePackObject::IsTypeOf(System.Type)
extern "C"  Nullable_1_t2088641033  MessagePackObject_IsTypeOf_m3020342299 (MessagePackObject_t2038085051 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::get_IsRaw()
extern "C"  bool MessagePackObject_get_IsRaw_m1005778213 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::get_IsList()
extern "C"  bool MessagePackObject_get_IsList_m113837307 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::get_IsArray()
extern "C"  bool MessagePackObject_get_IsArray_m1422436758 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::get_IsDictionary()
extern "C"  bool MessagePackObject_get_IsDictionary_m4269315253 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::get_IsMap()
extern "C"  bool MessagePackObject_get_IsMap_m1005754269 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.MessagePackObject::get_UnderlyingType()
extern "C"  Type_t * MessagePackObject_get_UnderlyingType_m4168863304 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::PackToMessage(MsgPack.Packer,MsgPack.PackingOptions)
extern "C"  void MessagePackObject_PackToMessage_m2384093678 (MessagePackObject_t2038085051 * __this, Packer_t1439452732 * ___packer0, PackingOptions_t1268727809 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackObject::AsString(System.Text.Encoding)
extern "C"  String_t* MessagePackObject_AsString_m3786293135 (MessagePackObject_t2038085051 * __this, Encoding_t663144255 * ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackObject::AsStringUtf8()
extern "C"  String_t* MessagePackObject_AsStringUtf8_m928923331 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackObject::AsStringUtf16()
extern "C"  String_t* MessagePackObject_AsStringUtf16_m1204454106 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] MsgPack.MessagePackObject::AsCharArray()
extern "C"  CharU5BU5D_t1328083999* MessagePackObject_AsCharArray_m2603505919 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<MsgPack.MessagePackObject> MsgPack.MessagePackObject::AsEnumerable()
extern "C"  Il2CppObject* MessagePackObject_AsEnumerable_m2758231059 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<MsgPack.MessagePackObject> MsgPack.MessagePackObject::AsList()
extern "C"  Il2CppObject* MessagePackObject_AsList_m1188955787 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObjectDictionary MsgPack.MessagePackObject::AsDictionary()
extern "C"  MessagePackObjectDictionary_t4175726983 * MessagePackObject_AsDictionary_m1804755940 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObject::ToObject()
extern "C"  Il2CppObject * MessagePackObject_ToObject_m4186527101 (MessagePackObject_t2038085051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::op_Equality(MsgPack.MessagePackObject,MsgPack.MessagePackObject)
extern "C"  bool MessagePackObject_op_Equality_m3590442910 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___left0, MessagePackObject_t2038085051  ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject::op_Inequality(MsgPack.MessagePackObject,MsgPack.MessagePackObject)
extern "C"  bool MessagePackObject_op_Inequality_m2531262129 (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___left0, MessagePackObject_t2038085051  ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.MessagePackObject::<GetHashCode>b__0(System.Int32,MsgPack.MessagePackObject)
extern "C"  int32_t MessagePackObject_U3CGetHashCodeU3Eb__0_m1682010377 (Il2CppObject * __this /* static, unused */, int32_t ___hash0, MessagePackObject_t2038085051  ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.MessagePackObject::<GetHashCode>b__1(System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>)
extern "C"  int32_t MessagePackObject_U3CGetHashCodeU3Eb__1_m2361842702 (Il2CppObject * __this /* static, unused */, int32_t ___hash0, KeyValuePair_2_t2208478405  ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject::.cctor()
extern "C"  void MessagePackObject__cctor_m1304319433 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
