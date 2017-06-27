#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "MsgPack_MsgPack_Serialization_NonGenericMessagePac1046258720.h"
#include "MsgPack_MsgPack_Serialization_EnumSerializationMet2904312576.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.UnityEnumMessagePackSerializer
struct  UnityEnumMessagePackSerializer_t2656163460  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// System.Type MsgPack.Serialization.UnityEnumMessagePackSerializer::_underlyingType
	Type_t * ____underlyingType_4;
	// MsgPack.Serialization.EnumSerializationMethod MsgPack.Serialization.UnityEnumMessagePackSerializer::_serializationMethod
	int32_t ____serializationMethod_5;

public:
	inline static int32_t get_offset_of__underlyingType_4() { return static_cast<int32_t>(offsetof(UnityEnumMessagePackSerializer_t2656163460, ____underlyingType_4)); }
	inline Type_t * get__underlyingType_4() const { return ____underlyingType_4; }
	inline Type_t ** get_address_of__underlyingType_4() { return &____underlyingType_4; }
	inline void set__underlyingType_4(Type_t * value)
	{
		____underlyingType_4 = value;
		Il2CppCodeGenWriteBarrier(&____underlyingType_4, value);
	}

	inline static int32_t get_offset_of__serializationMethod_5() { return static_cast<int32_t>(offsetof(UnityEnumMessagePackSerializer_t2656163460, ____serializationMethod_5)); }
	inline int32_t get__serializationMethod_5() const { return ____serializationMethod_5; }
	inline int32_t* get_address_of__serializationMethod_5() { return &____serializationMethod_5; }
	inline void set__serializationMethod_5(int32_t value)
	{
		____serializationMethod_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
