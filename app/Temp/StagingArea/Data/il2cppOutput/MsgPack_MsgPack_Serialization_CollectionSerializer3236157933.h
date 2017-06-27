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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer4066395016.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializer
struct  UnityEnumerableMessagePackSerializer_t3236157933  : public UnityEnumerableMessagePackSerializerBase_t4066395016
{
public:
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializer::_getCount
	MethodInfo_t * ____getCount_5;

public:
	inline static int32_t get_offset_of__getCount_5() { return static_cast<int32_t>(offsetof(UnityEnumerableMessagePackSerializer_t3236157933, ____getCount_5)); }
	inline MethodInfo_t * get__getCount_5() const { return ____getCount_5; }
	inline MethodInfo_t ** get_address_of__getCount_5() { return &____getCount_5; }
	inline void set__getCount_5(MethodInfo_t * value)
	{
		____getCount_5 = value;
		Il2CppCodeGenWriteBarrier(&____getCount_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
