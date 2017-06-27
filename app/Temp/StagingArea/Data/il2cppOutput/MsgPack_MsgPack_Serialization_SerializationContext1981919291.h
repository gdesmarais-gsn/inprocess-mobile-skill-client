#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.SerializationContext/SerializerGetter
struct SerializerGetter_t1981919291;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Reflection.MethodInfo>
struct Dictionary_2_t1254411424;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.SerializationContext/SerializerGetter
struct  SerializerGetter_t1981919291  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Reflection.MethodInfo> MsgPack.Serialization.SerializationContext/SerializerGetter::_cache
	Dictionary_2_t1254411424 * ____cache_1;

public:
	inline static int32_t get_offset_of__cache_1() { return static_cast<int32_t>(offsetof(SerializerGetter_t1981919291, ____cache_1)); }
	inline Dictionary_2_t1254411424 * get__cache_1() const { return ____cache_1; }
	inline Dictionary_2_t1254411424 ** get_address_of__cache_1() { return &____cache_1; }
	inline void set__cache_1(Dictionary_2_t1254411424 * value)
	{
		____cache_1 = value;
		Il2CppCodeGenWriteBarrier(&____cache_1, value);
	}
};

struct SerializerGetter_t1981919291_StaticFields
{
public:
	// MsgPack.Serialization.SerializationContext/SerializerGetter MsgPack.Serialization.SerializationContext/SerializerGetter::Instance
	SerializerGetter_t1981919291 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SerializerGetter_t1981919291_StaticFields, ___Instance_0)); }
	inline SerializerGetter_t1981919291 * get_Instance_0() const { return ___Instance_0; }
	inline SerializerGetter_t1981919291 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(SerializerGetter_t1981919291 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
