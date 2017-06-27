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

// MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer
struct  UnityNonGenericDictionaryMessagePackSerializer_t3842043703  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::_keySerializer
	Il2CppObject * ____keySerializer_4;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::_valueSerializer
	Il2CppObject * ____valueSerializer_5;

public:
	inline static int32_t get_offset_of__keySerializer_4() { return static_cast<int32_t>(offsetof(UnityNonGenericDictionaryMessagePackSerializer_t3842043703, ____keySerializer_4)); }
	inline Il2CppObject * get__keySerializer_4() const { return ____keySerializer_4; }
	inline Il2CppObject ** get_address_of__keySerializer_4() { return &____keySerializer_4; }
	inline void set__keySerializer_4(Il2CppObject * value)
	{
		____keySerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&____keySerializer_4, value);
	}

	inline static int32_t get_offset_of__valueSerializer_5() { return static_cast<int32_t>(offsetof(UnityNonGenericDictionaryMessagePackSerializer_t3842043703, ____valueSerializer_5)); }
	inline Il2CppObject * get__valueSerializer_5() const { return ____valueSerializer_5; }
	inline Il2CppObject ** get_address_of__valueSerializer_5() { return &____valueSerializer_5; }
	inline void set__valueSerializer_5(Il2CppObject * value)
	{
		____valueSerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____valueSerializer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
