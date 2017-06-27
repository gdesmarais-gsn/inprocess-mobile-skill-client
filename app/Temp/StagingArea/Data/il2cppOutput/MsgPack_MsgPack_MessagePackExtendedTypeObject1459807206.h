#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackExtendedTypeObject
struct  MessagePackExtendedTypeObject_t1459807206 
{
public:
	// System.Byte MsgPack.MessagePackExtendedTypeObject::_typeCode
	uint8_t ____typeCode_0;
	// System.Byte[] MsgPack.MessagePackExtendedTypeObject::_body
	ByteU5BU5D_t3397334013* ____body_1;

public:
	inline static int32_t get_offset_of__typeCode_0() { return static_cast<int32_t>(offsetof(MessagePackExtendedTypeObject_t1459807206, ____typeCode_0)); }
	inline uint8_t get__typeCode_0() const { return ____typeCode_0; }
	inline uint8_t* get_address_of__typeCode_0() { return &____typeCode_0; }
	inline void set__typeCode_0(uint8_t value)
	{
		____typeCode_0 = value;
	}

	inline static int32_t get_offset_of__body_1() { return static_cast<int32_t>(offsetof(MessagePackExtendedTypeObject_t1459807206, ____body_1)); }
	inline ByteU5BU5D_t3397334013* get__body_1() const { return ____body_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__body_1() { return &____body_1; }
	inline void set__body_1(ByteU5BU5D_t3397334013* value)
	{
		____body_1 = value;
		Il2CppCodeGenWriteBarrier(&____body_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MsgPack.MessagePackExtendedTypeObject
struct MessagePackExtendedTypeObject_t1459807206_marshaled_pinvoke
{
	uint8_t ____typeCode_0;
	uint8_t* ____body_1;
};
// Native definition for COM marshalling of MsgPack.MessagePackExtendedTypeObject
struct MessagePackExtendedTypeObject_t1459807206_marshaled_com
{
	uint8_t ____typeCode_0;
	uint8_t* ____body_1;
};
