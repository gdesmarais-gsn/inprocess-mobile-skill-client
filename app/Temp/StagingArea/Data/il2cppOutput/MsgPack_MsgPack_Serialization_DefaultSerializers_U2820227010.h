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
// System.Type
struct Type_t;

#include "MsgPack_MsgPack_Serialization_NonGenericMessagePac1046258720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer
struct  UnityMultidimensionalArraySerializer_t2820227010  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::_itemSerializer
	Il2CppObject * ____itemSerializer_4;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::_int32ArraySerializer
	Il2CppObject * ____int32ArraySerializer_5;
	// System.Type MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::_itemType
	Type_t * ____itemType_6;

public:
	inline static int32_t get_offset_of__itemSerializer_4() { return static_cast<int32_t>(offsetof(UnityMultidimensionalArraySerializer_t2820227010, ____itemSerializer_4)); }
	inline Il2CppObject * get__itemSerializer_4() const { return ____itemSerializer_4; }
	inline Il2CppObject ** get_address_of__itemSerializer_4() { return &____itemSerializer_4; }
	inline void set__itemSerializer_4(Il2CppObject * value)
	{
		____itemSerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&____itemSerializer_4, value);
	}

	inline static int32_t get_offset_of__int32ArraySerializer_5() { return static_cast<int32_t>(offsetof(UnityMultidimensionalArraySerializer_t2820227010, ____int32ArraySerializer_5)); }
	inline Il2CppObject * get__int32ArraySerializer_5() const { return ____int32ArraySerializer_5; }
	inline Il2CppObject ** get_address_of__int32ArraySerializer_5() { return &____int32ArraySerializer_5; }
	inline void set__int32ArraySerializer_5(Il2CppObject * value)
	{
		____int32ArraySerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____int32ArraySerializer_5, value);
	}

	inline static int32_t get_offset_of__itemType_6() { return static_cast<int32_t>(offsetof(UnityMultidimensionalArraySerializer_t2820227010, ____itemType_6)); }
	inline Type_t * get__itemType_6() const { return ____itemType_6; }
	inline Type_t ** get_address_of__itemType_6() { return &____itemType_6; }
	inline void set__itemType_6(Type_t * value)
	{
		____itemType_6 = value;
		Il2CppCodeGenWriteBarrier(&____itemType_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
