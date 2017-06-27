#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Int32,System.Object>
struct Func_2_t2241269688;

#include "MsgPack_MsgPack_Serialization_CollectionSerializer1516787527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionDictionaryMessagePackSerializer
struct  ReflectionDictionaryMessagePackSerializer_t3862436041  : public UnityDictionaryMessagePackSerializer_t1516787527
{
public:
	// System.Func`2<System.Int32,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionDictionaryMessagePackSerializer::_factory
	Func_2_t2241269688 * ____factory_10;

public:
	inline static int32_t get_offset_of__factory_10() { return static_cast<int32_t>(offsetof(ReflectionDictionaryMessagePackSerializer_t3862436041, ____factory_10)); }
	inline Func_2_t2241269688 * get__factory_10() const { return ____factory_10; }
	inline Func_2_t2241269688 ** get_address_of__factory_10() { return &____factory_10; }
	inline void set__factory_10(Func_2_t2241269688 * value)
	{
		____factory_10 = value;
		Il2CppCodeGenWriteBarrier(&____factory_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
