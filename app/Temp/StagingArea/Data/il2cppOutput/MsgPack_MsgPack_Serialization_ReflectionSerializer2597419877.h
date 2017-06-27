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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer3141818323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericListMessagePackSerializer
struct  ReflectionNonGenericListMessagePackSerializer_t2597419877  : public UnityNonGenericListMessagePackSerializer_t3141818323
{
public:
	// System.Func`2<System.Int32,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericListMessagePackSerializer::_factory
	Func_2_t2241269688 * ____factory_5;

public:
	inline static int32_t get_offset_of__factory_5() { return static_cast<int32_t>(offsetof(ReflectionNonGenericListMessagePackSerializer_t2597419877, ____factory_5)); }
	inline Func_2_t2241269688 * get__factory_5() const { return ____factory_5; }
	inline Func_2_t2241269688 ** get_address_of__factory_5() { return &____factory_5; }
	inline void set__factory_5(Func_2_t2241269688 * value)
	{
		____factory_5 = value;
		Il2CppCodeGenWriteBarrier(&____factory_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
