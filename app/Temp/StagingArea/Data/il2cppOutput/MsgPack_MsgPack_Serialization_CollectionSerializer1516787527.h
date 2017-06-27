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

// MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer
struct  UnityDictionaryMessagePackSerializer_t1516787527  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::_keySerializer
	Il2CppObject * ____keySerializer_4;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::_valueSerializer
	Il2CppObject * ____valueSerializer_5;
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::_add
	MethodInfo_t * ____add_6;
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::_getCount
	MethodInfo_t * ____getCount_7;
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::_getKey
	MethodInfo_t * ____getKey_8;
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::_getValue
	MethodInfo_t * ____getValue_9;

public:
	inline static int32_t get_offset_of__keySerializer_4() { return static_cast<int32_t>(offsetof(UnityDictionaryMessagePackSerializer_t1516787527, ____keySerializer_4)); }
	inline Il2CppObject * get__keySerializer_4() const { return ____keySerializer_4; }
	inline Il2CppObject ** get_address_of__keySerializer_4() { return &____keySerializer_4; }
	inline void set__keySerializer_4(Il2CppObject * value)
	{
		____keySerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&____keySerializer_4, value);
	}

	inline static int32_t get_offset_of__valueSerializer_5() { return static_cast<int32_t>(offsetof(UnityDictionaryMessagePackSerializer_t1516787527, ____valueSerializer_5)); }
	inline Il2CppObject * get__valueSerializer_5() const { return ____valueSerializer_5; }
	inline Il2CppObject ** get_address_of__valueSerializer_5() { return &____valueSerializer_5; }
	inline void set__valueSerializer_5(Il2CppObject * value)
	{
		____valueSerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____valueSerializer_5, value);
	}

	inline static int32_t get_offset_of__add_6() { return static_cast<int32_t>(offsetof(UnityDictionaryMessagePackSerializer_t1516787527, ____add_6)); }
	inline MethodInfo_t * get__add_6() const { return ____add_6; }
	inline MethodInfo_t ** get_address_of__add_6() { return &____add_6; }
	inline void set__add_6(MethodInfo_t * value)
	{
		____add_6 = value;
		Il2CppCodeGenWriteBarrier(&____add_6, value);
	}

	inline static int32_t get_offset_of__getCount_7() { return static_cast<int32_t>(offsetof(UnityDictionaryMessagePackSerializer_t1516787527, ____getCount_7)); }
	inline MethodInfo_t * get__getCount_7() const { return ____getCount_7; }
	inline MethodInfo_t ** get_address_of__getCount_7() { return &____getCount_7; }
	inline void set__getCount_7(MethodInfo_t * value)
	{
		____getCount_7 = value;
		Il2CppCodeGenWriteBarrier(&____getCount_7, value);
	}

	inline static int32_t get_offset_of__getKey_8() { return static_cast<int32_t>(offsetof(UnityDictionaryMessagePackSerializer_t1516787527, ____getKey_8)); }
	inline MethodInfo_t * get__getKey_8() const { return ____getKey_8; }
	inline MethodInfo_t ** get_address_of__getKey_8() { return &____getKey_8; }
	inline void set__getKey_8(MethodInfo_t * value)
	{
		____getKey_8 = value;
		Il2CppCodeGenWriteBarrier(&____getKey_8, value);
	}

	inline static int32_t get_offset_of__getValue_9() { return static_cast<int32_t>(offsetof(UnityDictionaryMessagePackSerializer_t1516787527, ____getValue_9)); }
	inline MethodInfo_t * get__getValue_9() const { return ____getValue_9; }
	inline MethodInfo_t ** get_address_of__getValue_9() { return &____getValue_9; }
	inline void set__getValue_9(MethodInfo_t * value)
	{
		____getValue_9 = value;
		Il2CppCodeGenWriteBarrier(&____getValue_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
