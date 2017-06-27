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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer3842043703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericDictionaryMessagePackSerializer
struct  ReflectionNonGenericDictionaryMessagePackSerializer_t2871816727  : public UnityNonGenericDictionaryMessagePackSerializer_t3842043703
{
public:
	// System.Func`2<System.Int32,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericDictionaryMessagePackSerializer::_factory
	Func_2_t2241269688 * ____factory_6;

public:
	inline static int32_t get_offset_of__factory_6() { return static_cast<int32_t>(offsetof(ReflectionNonGenericDictionaryMessagePackSerializer_t2871816727, ____factory_6)); }
	inline Func_2_t2241269688 * get__factory_6() const { return ____factory_6; }
	inline Func_2_t2241269688 ** get_address_of__factory_6() { return &____factory_6; }
	inline void set__factory_6(Func_2_t2241269688 * value)
	{
		____factory_6 = value;
		Il2CppCodeGenWriteBarrier(&____factory_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
