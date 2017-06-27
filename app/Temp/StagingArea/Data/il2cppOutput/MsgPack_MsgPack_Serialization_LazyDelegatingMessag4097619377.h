#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// MsgPack.Serialization.MessagePackSerializer`1<System.Object>
struct MessagePackSerializer_1_t2184892949;

#include "MsgPack_MsgPack_Serialization_MessagePackSerialize2184892949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>
struct  LazyDelegatingMessagePackSerializer_1_t4097619377  : public MessagePackSerializer_1_t2184892949
{
public:
	// System.Object MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1::_providerParameter
	Il2CppObject * ____providerParameter_3;
	// MsgPack.Serialization.MessagePackSerializer`1<T> MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1::_delegated
	MessagePackSerializer_1_t2184892949 * ____delegated_4;

public:
	inline static int32_t get_offset_of__providerParameter_3() { return static_cast<int32_t>(offsetof(LazyDelegatingMessagePackSerializer_1_t4097619377, ____providerParameter_3)); }
	inline Il2CppObject * get__providerParameter_3() const { return ____providerParameter_3; }
	inline Il2CppObject ** get_address_of__providerParameter_3() { return &____providerParameter_3; }
	inline void set__providerParameter_3(Il2CppObject * value)
	{
		____providerParameter_3 = value;
		Il2CppCodeGenWriteBarrier(&____providerParameter_3, value);
	}

	inline static int32_t get_offset_of__delegated_4() { return static_cast<int32_t>(offsetof(LazyDelegatingMessagePackSerializer_1_t4097619377, ____delegated_4)); }
	inline MessagePackSerializer_1_t2184892949 * get__delegated_4() const { return ____delegated_4; }
	inline MessagePackSerializer_1_t2184892949 ** get_address_of__delegated_4() { return &____delegated_4; }
	inline void set__delegated_4(MessagePackSerializer_1_t2184892949 * value)
	{
		____delegated_4 = value;
		Il2CppCodeGenWriteBarrier(&____delegated_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
