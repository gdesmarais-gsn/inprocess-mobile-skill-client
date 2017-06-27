#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;

#include "MsgPack_MsgPack_Serialization_NonGenericMessagePac1046258720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.NullableMessagePackSerializer
struct  NullableMessagePackSerializer_t1470292499  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.NullableMessagePackSerializer::_valueSerializer
	Il2CppObject * ____valueSerializer_4;

public:
	inline static int32_t get_offset_of__valueSerializer_4() { return static_cast<int32_t>(offsetof(NullableMessagePackSerializer_t1470292499, ____valueSerializer_4)); }
	inline Il2CppObject * get__valueSerializer_4() const { return ____valueSerializer_4; }
	inline Il2CppObject ** get_address_of__valueSerializer_4() { return &____valueSerializer_4; }
	inline void set__valueSerializer_4(Il2CppObject * value)
	{
		____valueSerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&____valueSerializer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
