#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.MessagePackSerializer`1<System.Object>
struct MessagePackSerializer_1_t2184892949;

#include "MsgPack_MsgPack_Serialization_MessagePackSerialize2184892949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.CollectionSerializers.EnumerableMessagePackSerializerBase`2<System.Object,System.Object>
struct  EnumerableMessagePackSerializerBase_2_t1174916576  : public MessagePackSerializer_1_t2184892949
{
public:
	// MsgPack.Serialization.MessagePackSerializer`1<TItem> MsgPack.Serialization.CollectionSerializers.EnumerableMessagePackSerializerBase`2::_itemSerializer
	MessagePackSerializer_1_t2184892949 * ____itemSerializer_3;

public:
	inline static int32_t get_offset_of__itemSerializer_3() { return static_cast<int32_t>(offsetof(EnumerableMessagePackSerializerBase_2_t1174916576, ____itemSerializer_3)); }
	inline MessagePackSerializer_1_t2184892949 * get__itemSerializer_3() const { return ____itemSerializer_3; }
	inline MessagePackSerializer_1_t2184892949 ** get_address_of__itemSerializer_3() { return &____itemSerializer_3; }
	inline void set__itemSerializer_3(MessagePackSerializer_1_t2184892949 * value)
	{
		____itemSerializer_3 = value;
		Il2CppCodeGenWriteBarrier(&____itemSerializer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
