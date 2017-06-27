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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Object
struct Il2CppObject;
// MsgPack.MessagePackExtendedTypeObject
struct MessagePackExtendedTypeObject_t1459807206;
struct MessagePackExtendedTypeObject_t1459807206_marshaled_pinvoke;
struct MessagePackExtendedTypeObject_t1459807206_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackExtendedTypeObject1459807206.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Object2689449295.h"

// System.Byte MsgPack.MessagePackExtendedTypeObject::get_TypeCode()
extern "C"  uint8_t MessagePackExtendedTypeObject_get_TypeCode_m592299647 (MessagePackExtendedTypeObject_t1459807206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MsgPack.MessagePackExtendedTypeObject::get_Body()
extern "C"  ByteU5BU5D_t3397334013* MessagePackExtendedTypeObject_get_Body_m1598062840 (MessagePackExtendedTypeObject_t1459807206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackExtendedTypeObject::get_IsValid()
extern "C"  bool MessagePackExtendedTypeObject_get_IsValid_m2624334450 (MessagePackExtendedTypeObject_t1459807206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackExtendedTypeObject::.ctor(System.Byte[],System.Byte)
extern "C"  void MessagePackExtendedTypeObject__ctor_m285406459 (MessagePackExtendedTypeObject_t1459807206 * __this, ByteU5BU5D_t3397334013* ___body0, uint8_t ___unpackedTypeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackExtendedTypeObject::.ctor(System.Byte,System.Byte[])
extern "C"  void MessagePackExtendedTypeObject__ctor_m153335963 (MessagePackExtendedTypeObject_t1459807206 * __this, uint8_t ___typeCode0, ByteU5BU5D_t3397334013* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackExtendedTypeObject MsgPack.MessagePackExtendedTypeObject::Unpack(System.Byte,System.Byte[])
extern "C"  MessagePackExtendedTypeObject_t1459807206  MessagePackExtendedTypeObject_Unpack_m105029064 (Il2CppObject * __this /* static, unused */, uint8_t ___typeCode0, ByteU5BU5D_t3397334013* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackExtendedTypeObject::ToString()
extern "C"  String_t* MessagePackExtendedTypeObject_ToString_m932149930 (MessagePackExtendedTypeObject_t1459807206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackExtendedTypeObject::ToString(System.Text.StringBuilder,System.Boolean)
extern "C"  void MessagePackExtendedTypeObject_ToString_m1939876876 (MessagePackExtendedTypeObject_t1459807206 * __this, StringBuilder_t1221177846 * ___buffer0, bool ___isJson1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.MessagePackExtendedTypeObject::GetHashCode()
extern "C"  int32_t MessagePackExtendedTypeObject_GetHashCode_m1799713634 (MessagePackExtendedTypeObject_t1459807206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackExtendedTypeObject::Equals(System.Object)
extern "C"  bool MessagePackExtendedTypeObject_Equals_m221261954 (MessagePackExtendedTypeObject_t1459807206 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackExtendedTypeObject::Equals(MsgPack.MessagePackExtendedTypeObject)
extern "C"  bool MessagePackExtendedTypeObject_Equals_m921054950 (MessagePackExtendedTypeObject_t1459807206 * __this, MessagePackExtendedTypeObject_t1459807206  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackExtendedTypeObject::op_Equality(MsgPack.MessagePackExtendedTypeObject,MsgPack.MessagePackExtendedTypeObject)
extern "C"  bool MessagePackExtendedTypeObject_op_Equality_m2716360569 (Il2CppObject * __this /* static, unused */, MessagePackExtendedTypeObject_t1459807206  ___left0, MessagePackExtendedTypeObject_t1459807206  ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MessagePackExtendedTypeObject_t1459807206;
struct MessagePackExtendedTypeObject_t1459807206_marshaled_pinvoke;

extern "C" void MessagePackExtendedTypeObject_t1459807206_marshal_pinvoke(const MessagePackExtendedTypeObject_t1459807206& unmarshaled, MessagePackExtendedTypeObject_t1459807206_marshaled_pinvoke& marshaled);
extern "C" void MessagePackExtendedTypeObject_t1459807206_marshal_pinvoke_back(const MessagePackExtendedTypeObject_t1459807206_marshaled_pinvoke& marshaled, MessagePackExtendedTypeObject_t1459807206& unmarshaled);
extern "C" void MessagePackExtendedTypeObject_t1459807206_marshal_pinvoke_cleanup(MessagePackExtendedTypeObject_t1459807206_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MessagePackExtendedTypeObject_t1459807206;
struct MessagePackExtendedTypeObject_t1459807206_marshaled_com;

extern "C" void MessagePackExtendedTypeObject_t1459807206_marshal_com(const MessagePackExtendedTypeObject_t1459807206& unmarshaled, MessagePackExtendedTypeObject_t1459807206_marshaled_com& marshaled);
extern "C" void MessagePackExtendedTypeObject_t1459807206_marshal_com_back(const MessagePackExtendedTypeObject_t1459807206_marshaled_com& marshaled, MessagePackExtendedTypeObject_t1459807206& unmarshaled);
extern "C" void MessagePackExtendedTypeObject_t1459807206_marshal_com_cleanup(MessagePackExtendedTypeObject_t1459807206_marshaled_com& marshaled);
