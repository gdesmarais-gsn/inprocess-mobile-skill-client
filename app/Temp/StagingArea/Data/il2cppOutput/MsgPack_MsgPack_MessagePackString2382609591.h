#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.DecoderFallbackException
struct DecoderFallbackException_t561423693;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_MessagePackString_BinaryType4241219091.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackString
struct  MessagePackString_t2382609591  : public Il2CppObject
{
public:
	// System.Byte[] MsgPack.MessagePackString::_encoded
	ByteU5BU5D_t3397334013* ____encoded_1;
	// System.String MsgPack.MessagePackString::_decoded
	String_t* ____decoded_2;
	// System.Text.DecoderFallbackException MsgPack.MessagePackString::_decodingError
	DecoderFallbackException_t561423693 * ____decodingError_3;
	// MsgPack.MessagePackString/BinaryType MsgPack.MessagePackString::_type
	int32_t ____type_4;

public:
	inline static int32_t get_offset_of__encoded_1() { return static_cast<int32_t>(offsetof(MessagePackString_t2382609591, ____encoded_1)); }
	inline ByteU5BU5D_t3397334013* get__encoded_1() const { return ____encoded_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__encoded_1() { return &____encoded_1; }
	inline void set__encoded_1(ByteU5BU5D_t3397334013* value)
	{
		____encoded_1 = value;
		Il2CppCodeGenWriteBarrier(&____encoded_1, value);
	}

	inline static int32_t get_offset_of__decoded_2() { return static_cast<int32_t>(offsetof(MessagePackString_t2382609591, ____decoded_2)); }
	inline String_t* get__decoded_2() const { return ____decoded_2; }
	inline String_t** get_address_of__decoded_2() { return &____decoded_2; }
	inline void set__decoded_2(String_t* value)
	{
		____decoded_2 = value;
		Il2CppCodeGenWriteBarrier(&____decoded_2, value);
	}

	inline static int32_t get_offset_of__decodingError_3() { return static_cast<int32_t>(offsetof(MessagePackString_t2382609591, ____decodingError_3)); }
	inline DecoderFallbackException_t561423693 * get__decodingError_3() const { return ____decodingError_3; }
	inline DecoderFallbackException_t561423693 ** get_address_of__decodingError_3() { return &____decodingError_3; }
	inline void set__decodingError_3(DecoderFallbackException_t561423693 * value)
	{
		____decodingError_3 = value;
		Il2CppCodeGenWriteBarrier(&____decodingError_3, value);
	}

	inline static int32_t get_offset_of__type_4() { return static_cast<int32_t>(offsetof(MessagePackString_t2382609591, ____type_4)); }
	inline int32_t get__type_4() const { return ____type_4; }
	inline int32_t* get_address_of__type_4() { return &____type_4; }
	inline void set__type_4(int32_t value)
	{
		____type_4 = value;
	}
};

struct MessagePackString_t2382609591_StaticFields
{
public:
	// System.Text.DecoderFallbackException MsgPack.MessagePackString::IsBinary
	DecoderFallbackException_t561423693 * ___IsBinary_0;

public:
	inline static int32_t get_offset_of_IsBinary_0() { return static_cast<int32_t>(offsetof(MessagePackString_t2382609591_StaticFields, ___IsBinary_0)); }
	inline DecoderFallbackException_t561423693 * get_IsBinary_0() const { return ___IsBinary_0; }
	inline DecoderFallbackException_t561423693 ** get_address_of_IsBinary_0() { return &___IsBinary_0; }
	inline void set_IsBinary_0(DecoderFallbackException_t561423693 * value)
	{
		___IsBinary_0 = value;
		Il2CppCodeGenWriteBarrier(&___IsBinary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
