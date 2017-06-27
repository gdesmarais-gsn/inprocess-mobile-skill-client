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
// System.Action`2<System.Object,System.Object>
struct Action_2_t2572051853;

#include "MsgPack_MsgPack_Serialization_CollectionSerializer3236157933.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionEnumerableMessagePackSerializer
struct  ReflectionEnumerableMessagePackSerializer_t2809224003  : public UnityEnumerableMessagePackSerializer_t3236157933
{
public:
	// System.Func`2<System.Int32,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionEnumerableMessagePackSerializer::_factory
	Func_2_t2241269688 * ____factory_6;
	// System.Action`2<System.Object,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionEnumerableMessagePackSerializer::_addItem
	Action_2_t2572051853 * ____addItem_7;

public:
	inline static int32_t get_offset_of__factory_6() { return static_cast<int32_t>(offsetof(ReflectionEnumerableMessagePackSerializer_t2809224003, ____factory_6)); }
	inline Func_2_t2241269688 * get__factory_6() const { return ____factory_6; }
	inline Func_2_t2241269688 ** get_address_of__factory_6() { return &____factory_6; }
	inline void set__factory_6(Func_2_t2241269688 * value)
	{
		____factory_6 = value;
		Il2CppCodeGenWriteBarrier(&____factory_6, value);
	}

	inline static int32_t get_offset_of__addItem_7() { return static_cast<int32_t>(offsetof(ReflectionEnumerableMessagePackSerializer_t2809224003, ____addItem_7)); }
	inline Action_2_t2572051853 * get__addItem_7() const { return ____addItem_7; }
	inline Action_2_t2572051853 ** get_address_of__addItem_7() { return &____addItem_7; }
	inline void set__addItem_7(Action_2_t2572051853 * value)
	{
		____addItem_7 = value;
		Il2CppCodeGenWriteBarrier(&____addItem_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
