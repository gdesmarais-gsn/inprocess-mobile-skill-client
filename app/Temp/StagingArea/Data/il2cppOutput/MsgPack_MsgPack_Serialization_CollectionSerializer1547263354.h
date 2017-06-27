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

// MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>
struct  DictionaryMessagePackSerializerBase_3_t1547263354  : public MessagePackSerializer_1_t2184892949
{
public:
	// MsgPack.Serialization.MessagePackSerializer`1<TKey> MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3::_keySerializer
	MessagePackSerializer_1_t2184892949 * ____keySerializer_3;
	// MsgPack.Serialization.MessagePackSerializer`1<TValue> MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3::_valueSerializer
	MessagePackSerializer_1_t2184892949 * ____valueSerializer_4;

public:
	inline static int32_t get_offset_of__keySerializer_3() { return static_cast<int32_t>(offsetof(DictionaryMessagePackSerializerBase_3_t1547263354, ____keySerializer_3)); }
	inline MessagePackSerializer_1_t2184892949 * get__keySerializer_3() const { return ____keySerializer_3; }
	inline MessagePackSerializer_1_t2184892949 ** get_address_of__keySerializer_3() { return &____keySerializer_3; }
	inline void set__keySerializer_3(MessagePackSerializer_1_t2184892949 * value)
	{
		____keySerializer_3 = value;
		Il2CppCodeGenWriteBarrier(&____keySerializer_3, value);
	}

	inline static int32_t get_offset_of__valueSerializer_4() { return static_cast<int32_t>(offsetof(DictionaryMessagePackSerializerBase_3_t1547263354, ____valueSerializer_4)); }
	inline MessagePackSerializer_1_t2184892949 * get__valueSerializer_4() const { return ____valueSerializer_4; }
	inline MessagePackSerializer_1_t2184892949 ** get_address_of__valueSerializer_4() { return &____valueSerializer_4; }
	inline void set__valueSerializer_4(MessagePackSerializer_1_t2184892949 * value)
	{
		____valueSerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&____valueSerializer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
