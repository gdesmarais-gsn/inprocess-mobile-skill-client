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
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "MsgPack_MsgPack_Serialization_NonGenericMessagePac1046258720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_Dictionary_2MessagePackSerializer
struct  System_Collections_Generic_Dictionary_2MessagePackSerializer_t1488757429  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_Dictionary_2MessagePackSerializer::_keySerializer
	Il2CppObject * ____keySerializer_4;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_Dictionary_2MessagePackSerializer::_valueSerializer
	Il2CppObject * ____valueSerializer_5;
	// System.Type MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_Dictionary_2MessagePackSerializer::_keyType
	Type_t * ____keyType_6;
	// System.Reflection.ConstructorInfo MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_Dictionary_2MessagePackSerializer::_constructor
	ConstructorInfo_t2851816542 * ____constructor_7;
	// System.Reflection.MethodInfo MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_Dictionary_2MessagePackSerializer::_add
	MethodInfo_t * ____add_8;

public:
	inline static int32_t get_offset_of__keySerializer_4() { return static_cast<int32_t>(offsetof(System_Collections_Generic_Dictionary_2MessagePackSerializer_t1488757429, ____keySerializer_4)); }
	inline Il2CppObject * get__keySerializer_4() const { return ____keySerializer_4; }
	inline Il2CppObject ** get_address_of__keySerializer_4() { return &____keySerializer_4; }
	inline void set__keySerializer_4(Il2CppObject * value)
	{
		____keySerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&____keySerializer_4, value);
	}

	inline static int32_t get_offset_of__valueSerializer_5() { return static_cast<int32_t>(offsetof(System_Collections_Generic_Dictionary_2MessagePackSerializer_t1488757429, ____valueSerializer_5)); }
	inline Il2CppObject * get__valueSerializer_5() const { return ____valueSerializer_5; }
	inline Il2CppObject ** get_address_of__valueSerializer_5() { return &____valueSerializer_5; }
	inline void set__valueSerializer_5(Il2CppObject * value)
	{
		____valueSerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____valueSerializer_5, value);
	}

	inline static int32_t get_offset_of__keyType_6() { return static_cast<int32_t>(offsetof(System_Collections_Generic_Dictionary_2MessagePackSerializer_t1488757429, ____keyType_6)); }
	inline Type_t * get__keyType_6() const { return ____keyType_6; }
	inline Type_t ** get_address_of__keyType_6() { return &____keyType_6; }
	inline void set__keyType_6(Type_t * value)
	{
		____keyType_6 = value;
		Il2CppCodeGenWriteBarrier(&____keyType_6, value);
	}

	inline static int32_t get_offset_of__constructor_7() { return static_cast<int32_t>(offsetof(System_Collections_Generic_Dictionary_2MessagePackSerializer_t1488757429, ____constructor_7)); }
	inline ConstructorInfo_t2851816542 * get__constructor_7() const { return ____constructor_7; }
	inline ConstructorInfo_t2851816542 ** get_address_of__constructor_7() { return &____constructor_7; }
	inline void set__constructor_7(ConstructorInfo_t2851816542 * value)
	{
		____constructor_7 = value;
		Il2CppCodeGenWriteBarrier(&____constructor_7, value);
	}

	inline static int32_t get_offset_of__add_8() { return static_cast<int32_t>(offsetof(System_Collections_Generic_Dictionary_2MessagePackSerializer_t1488757429, ____add_8)); }
	inline MethodInfo_t * get__add_8() const { return ____add_8; }
	inline MethodInfo_t ** get_address_of__add_8() { return &____add_8; }
	inline void set__add_8(MethodInfo_t * value)
	{
		____add_8 = value;
		Il2CppCodeGenWriteBarrier(&____add_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
