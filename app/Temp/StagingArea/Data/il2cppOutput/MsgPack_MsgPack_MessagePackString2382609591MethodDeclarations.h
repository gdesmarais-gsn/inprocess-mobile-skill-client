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

// MsgPack.MessagePackString
struct MessagePackString_t2382609591;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_MessagePackString2382609591.h"

// System.Void MsgPack.MessagePackString::.ctor(System.String)
extern "C"  void MessagePackString__ctor_m1794564514 (MessagePackString_t2382609591 * __this, String_t* ___decoded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackString::.ctor(System.Byte[],System.Boolean)
extern "C"  void MessagePackString__ctor_m3223620266 (MessagePackString_t2382609591 * __this, ByteU5BU5D_t3397334013* ___encoded0, bool ___isBinary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackString::EncodeIfNeeded()
extern "C"  void MessagePackString_EncodeIfNeeded_m2971479090 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackString::DecodeIfNeeded()
extern "C"  void MessagePackString_DecodeIfNeeded_m3326772306 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackString::TryGetString()
extern "C"  String_t* MessagePackString_TryGetString_m2730822499 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackString::GetString()
extern "C"  String_t* MessagePackString_GetString_m319775444 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MsgPack.MessagePackString::UnsafeGetBuffer()
extern "C"  ByteU5BU5D_t3397334013* MessagePackString_UnsafeGetBuffer_m730622148 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackString::UnsafeGetString()
extern "C"  String_t* MessagePackString_UnsafeGetString_m2809546474 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MsgPack.MessagePackString::GetBytes()
extern "C"  ByteU5BU5D_t3397334013* MessagePackString_GetBytes_m2041866261 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.MessagePackString::GetUnderlyingType()
extern "C"  Type_t * MessagePackString_GetUnderlyingType_m2763335881 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackString::ToString()
extern "C"  String_t* MessagePackString_ToString_m3754591553 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.MessagePackString::GetHashCode()
extern "C"  int32_t MessagePackString_GetHashCode_m2382995433 (MessagePackString_t2382609591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackString::Equals(System.Object)
extern "C"  bool MessagePackString_Equals_m2406843823 (MessagePackString_t2382609591 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackString::EqualsEncoded(MsgPack.MessagePackString,MsgPack.MessagePackString)
extern "C"  bool MessagePackString_EqualsEncoded_m1275877243 (Il2CppObject * __this /* static, unused */, MessagePackString_t2382609591 * ___left0, MessagePackString_t2382609591 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackString::SlowEquals(System.Byte[],System.Byte[])
extern "C"  bool MessagePackString_SlowEquals_m4081069470 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___x0, ByteU5BU5D_t3397334013* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackString::.cctor()
extern "C"  void MessagePackString__cctor_m2988412597 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
