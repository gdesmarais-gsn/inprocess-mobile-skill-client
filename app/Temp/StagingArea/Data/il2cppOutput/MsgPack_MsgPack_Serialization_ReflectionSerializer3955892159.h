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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer4230566959.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionCollectionMessagePackSerializer
struct  ReflectionCollectionMessagePackSerializer_t3955892159  : public UnityCollectionMessagePackSerializer_t4230566959
{
public:
	// System.Func`2<System.Int32,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionCollectionMessagePackSerializer::_factory
	Func_2_t2241269688 * ____factory_7;

public:
	inline static int32_t get_offset_of__factory_7() { return static_cast<int32_t>(offsetof(ReflectionCollectionMessagePackSerializer_t3955892159, ____factory_7)); }
	inline Func_2_t2241269688 * get__factory_7() const { return ____factory_7; }
	inline Func_2_t2241269688 ** get_address_of__factory_7() { return &____factory_7; }
	inline void set__factory_7(Func_2_t2241269688 * value)
	{
		____factory_7 = value;
		Il2CppCodeGenWriteBarrier(&____factory_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
