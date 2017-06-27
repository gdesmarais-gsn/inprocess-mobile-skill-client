#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.MessagePackSerializer`1<System.Int32>
struct MessagePackSerializer_1_t1567321102;

#include "MsgPack_MsgPack_Serialization_MessagePackSerializerP92845713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.Polymorphic.PolymorphicSerializerProvider`1<System.Int32>
struct  PolymorphicSerializerProvider_1_t227475625  : public MessagePackSerializerProvider_t92845713
{
public:
	// MsgPack.Serialization.MessagePackSerializer`1<T> MsgPack.Serialization.Polymorphic.PolymorphicSerializerProvider`1::_defaultSerializer
	MessagePackSerializer_1_t1567321102 * ____defaultSerializer_0;

public:
	inline static int32_t get_offset_of__defaultSerializer_0() { return static_cast<int32_t>(offsetof(PolymorphicSerializerProvider_1_t227475625, ____defaultSerializer_0)); }
	inline MessagePackSerializer_1_t1567321102 * get__defaultSerializer_0() const { return ____defaultSerializer_0; }
	inline MessagePackSerializer_1_t1567321102 ** get_address_of__defaultSerializer_0() { return &____defaultSerializer_0; }
	inline void set__defaultSerializer_0(MessagePackSerializer_1_t1567321102 * value)
	{
		____defaultSerializer_0 = value;
		Il2CppCodeGenWriteBarrier(&____defaultSerializer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
