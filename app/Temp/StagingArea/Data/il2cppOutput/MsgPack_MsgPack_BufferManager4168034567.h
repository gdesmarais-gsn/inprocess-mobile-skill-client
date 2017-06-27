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
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.BufferManager
struct  BufferManager_t4168034567  : public Il2CppObject
{
public:

public:
};

struct BufferManager_t4168034567_ThreadStaticFields
{
public:
	// System.Byte[] MsgPack.BufferManager::_byteBuffer
	ByteU5BU5D_t3397334013* ____byteBuffer_0;
	// System.Char[] MsgPack.BufferManager::_charBuffer
	CharU5BU5D_t1328083999* ____charBuffer_1;

public:
	inline static int32_t get_offset_of__byteBuffer_0() { return static_cast<int32_t>(offsetof(BufferManager_t4168034567_ThreadStaticFields, ____byteBuffer_0)); }
	inline ByteU5BU5D_t3397334013* get__byteBuffer_0() const { return ____byteBuffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__byteBuffer_0() { return &____byteBuffer_0; }
	inline void set__byteBuffer_0(ByteU5BU5D_t3397334013* value)
	{
		____byteBuffer_0 = value;
		Il2CppCodeGenWriteBarrier(&____byteBuffer_0, value);
	}

	inline static int32_t get_offset_of__charBuffer_1() { return static_cast<int32_t>(offsetof(BufferManager_t4168034567_ThreadStaticFields, ____charBuffer_1)); }
	inline CharU5BU5D_t1328083999* get__charBuffer_1() const { return ____charBuffer_1; }
	inline CharU5BU5D_t1328083999** get_address_of__charBuffer_1() { return &____charBuffer_1; }
	inline void set__charBuffer_1(CharU5BU5D_t1328083999* value)
	{
		____charBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&____charBuffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
