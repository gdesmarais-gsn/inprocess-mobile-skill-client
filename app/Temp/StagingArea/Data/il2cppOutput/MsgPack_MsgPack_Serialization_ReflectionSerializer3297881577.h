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

#include "MsgPack_MsgPack_Serialization_CollectionSerializers186213429.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer
struct  ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577  : public UnityNonGenericEnumerableMessagePackSerializer_t186213429
{
public:
	// System.Func`2<System.Int32,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer::_factory
	Func_2_t2241269688 * ____factory_5;
	// System.Action`2<System.Object,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer::_addItem
	Action_2_t2572051853 * ____addItem_6;

public:
	inline static int32_t get_offset_of__factory_5() { return static_cast<int32_t>(offsetof(ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577, ____factory_5)); }
	inline Func_2_t2241269688 * get__factory_5() const { return ____factory_5; }
	inline Func_2_t2241269688 ** get_address_of__factory_5() { return &____factory_5; }
	inline void set__factory_5(Func_2_t2241269688 * value)
	{
		____factory_5 = value;
		Il2CppCodeGenWriteBarrier(&____factory_5, value);
	}

	inline static int32_t get_offset_of__addItem_6() { return static_cast<int32_t>(offsetof(ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577, ____addItem_6)); }
	inline Action_2_t2572051853 * get__addItem_6() const { return ____addItem_6; }
	inline Action_2_t2572051853 ** get_address_of__addItem_6() { return &____addItem_6; }
	inline void set__addItem_6(Action_2_t2572051853 * value)
	{
		____addItem_6 = value;
		Il2CppCodeGenWriteBarrier(&____addItem_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
