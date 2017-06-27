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
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "MsgPack_MsgPack_Serialization_NonGenericMessagePac1046258720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_KeyValuePair_2MessagePackSerializer
struct  System_Collections_Generic_KeyValuePair_2MessagePackSerializer_t1860510343  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_KeyValuePair_2MessagePackSerializer::_keySerializer
	Il2CppObject * ____keySerializer_4;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_KeyValuePair_2MessagePackSerializer::_valueSerializer
	Il2CppObject * ____valueSerializer_5;
	// System.Reflection.MethodInfo MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_KeyValuePair_2MessagePackSerializer::_getKey
	MethodInfo_t * ____getKey_6;
	// System.Reflection.MethodInfo MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_KeyValuePair_2MessagePackSerializer::_getValue
	MethodInfo_t * ____getValue_7;

public:
	inline static int32_t get_offset_of__keySerializer_4() { return static_cast<int32_t>(offsetof(System_Collections_Generic_KeyValuePair_2MessagePackSerializer_t1860510343, ____keySerializer_4)); }
	inline Il2CppObject * get__keySerializer_4() const { return ____keySerializer_4; }
	inline Il2CppObject ** get_address_of__keySerializer_4() { return &____keySerializer_4; }
	inline void set__keySerializer_4(Il2CppObject * value)
	{
		____keySerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&____keySerializer_4, value);
	}

	inline static int32_t get_offset_of__valueSerializer_5() { return static_cast<int32_t>(offsetof(System_Collections_Generic_KeyValuePair_2MessagePackSerializer_t1860510343, ____valueSerializer_5)); }
	inline Il2CppObject * get__valueSerializer_5() const { return ____valueSerializer_5; }
	inline Il2CppObject ** get_address_of__valueSerializer_5() { return &____valueSerializer_5; }
	inline void set__valueSerializer_5(Il2CppObject * value)
	{
		____valueSerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____valueSerializer_5, value);
	}

	inline static int32_t get_offset_of__getKey_6() { return static_cast<int32_t>(offsetof(System_Collections_Generic_KeyValuePair_2MessagePackSerializer_t1860510343, ____getKey_6)); }
	inline MethodInfo_t * get__getKey_6() const { return ____getKey_6; }
	inline MethodInfo_t ** get_address_of__getKey_6() { return &____getKey_6; }
	inline void set__getKey_6(MethodInfo_t * value)
	{
		____getKey_6 = value;
		Il2CppCodeGenWriteBarrier(&____getKey_6, value);
	}

	inline static int32_t get_offset_of__getValue_7() { return static_cast<int32_t>(offsetof(System_Collections_Generic_KeyValuePair_2MessagePackSerializer_t1860510343, ____getValue_7)); }
	inline MethodInfo_t * get__getValue_7() const { return ____getValue_7; }
	inline MethodInfo_t ** get_address_of__getValue_7() { return &____getValue_7; }
	inline void set__getValue_7(MethodInfo_t * value)
	{
		____getValue_7 = value;
		Il2CppCodeGenWriteBarrier(&____getValue_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
