#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;
// MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>
struct MessagePackSerializer_1_t1533528705;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.MessagePackSerializer
struct  MessagePackSerializer_t477885944  : public Il2CppObject
{
public:

public:
};

struct MessagePackSerializer_t477885944_StaticFields
{
public:
	// System.Reflection.MethodInfo MsgPack.Serialization.MessagePackSerializer::CreateInternal_2
	MethodInfo_t * ___CreateInternal_2_0;
	// MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject> MsgPack.Serialization.MessagePackSerializer::_singleTonMpoDeserializer
	MessagePackSerializer_1_t1533528705 * ____singleTonMpoDeserializer_1;

public:
	inline static int32_t get_offset_of_CreateInternal_2_0() { return static_cast<int32_t>(offsetof(MessagePackSerializer_t477885944_StaticFields, ___CreateInternal_2_0)); }
	inline MethodInfo_t * get_CreateInternal_2_0() const { return ___CreateInternal_2_0; }
	inline MethodInfo_t ** get_address_of_CreateInternal_2_0() { return &___CreateInternal_2_0; }
	inline void set_CreateInternal_2_0(MethodInfo_t * value)
	{
		___CreateInternal_2_0 = value;
		Il2CppCodeGenWriteBarrier(&___CreateInternal_2_0, value);
	}

	inline static int32_t get_offset_of__singleTonMpoDeserializer_1() { return static_cast<int32_t>(offsetof(MessagePackSerializer_t477885944_StaticFields, ____singleTonMpoDeserializer_1)); }
	inline MessagePackSerializer_1_t1533528705 * get__singleTonMpoDeserializer_1() const { return ____singleTonMpoDeserializer_1; }
	inline MessagePackSerializer_1_t1533528705 ** get_address_of__singleTonMpoDeserializer_1() { return &____singleTonMpoDeserializer_1; }
	inline void set__singleTonMpoDeserializer_1(MessagePackSerializer_1_t1533528705 * value)
	{
		____singleTonMpoDeserializer_1 = value;
		Il2CppCodeGenWriteBarrier(&____singleTonMpoDeserializer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
