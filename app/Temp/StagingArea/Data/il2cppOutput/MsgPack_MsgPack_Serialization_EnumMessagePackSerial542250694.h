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
// System.Object
struct Il2CppObject;

#include "MsgPack_MsgPack_Serialization_MessagePackSerializerP92845713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.EnumMessagePackSerializerProvider
struct  EnumMessagePackSerializerProvider_t542250694  : public MessagePackSerializerProvider_t92845713
{
public:
	// System.Type MsgPack.Serialization.EnumMessagePackSerializerProvider::_enumType
	Type_t * ____enumType_0;
	// System.Object MsgPack.Serialization.EnumMessagePackSerializerProvider::_serializerForName
	Il2CppObject * ____serializerForName_1;
	// System.Object MsgPack.Serialization.EnumMessagePackSerializerProvider::_serializerForIntegral
	Il2CppObject * ____serializerForIntegral_2;

public:
	inline static int32_t get_offset_of__enumType_0() { return static_cast<int32_t>(offsetof(EnumMessagePackSerializerProvider_t542250694, ____enumType_0)); }
	inline Type_t * get__enumType_0() const { return ____enumType_0; }
	inline Type_t ** get_address_of__enumType_0() { return &____enumType_0; }
	inline void set__enumType_0(Type_t * value)
	{
		____enumType_0 = value;
		Il2CppCodeGenWriteBarrier(&____enumType_0, value);
	}

	inline static int32_t get_offset_of__serializerForName_1() { return static_cast<int32_t>(offsetof(EnumMessagePackSerializerProvider_t542250694, ____serializerForName_1)); }
	inline Il2CppObject * get__serializerForName_1() const { return ____serializerForName_1; }
	inline Il2CppObject ** get_address_of__serializerForName_1() { return &____serializerForName_1; }
	inline void set__serializerForName_1(Il2CppObject * value)
	{
		____serializerForName_1 = value;
		Il2CppCodeGenWriteBarrier(&____serializerForName_1, value);
	}

	inline static int32_t get_offset_of__serializerForIntegral_2() { return static_cast<int32_t>(offsetof(EnumMessagePackSerializerProvider_t542250694, ____serializerForIntegral_2)); }
	inline Il2CppObject * get__serializerForIntegral_2() const { return ____serializerForIntegral_2; }
	inline Il2CppObject ** get_address_of__serializerForIntegral_2() { return &____serializerForIntegral_2; }
	inline void set__serializerForIntegral_2(Il2CppObject * value)
	{
		____serializerForIntegral_2 = value;
		Il2CppCodeGenWriteBarrier(&____serializerForIntegral_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
