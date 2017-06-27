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

// MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer
struct  UnityCollectionMessagePackSerializer_t4230566959  : public UnityEnumerableMessagePackSerializerBase_t4066395016
{
public:
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer::_getCount
	MethodInfo_t * ____getCount_5;
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer::_add
	MethodInfo_t * ____add_6;

public:
	inline static int32_t get_offset_of__getCount_5() { return static_cast<int32_t>(offsetof(UnityCollectionMessagePackSerializer_t4230566959, ____getCount_5)); }
	inline MethodInfo_t * get__getCount_5() const { return ____getCount_5; }
	inline MethodInfo_t ** get_address_of__getCount_5() { return &____getCount_5; }
	inline void set__getCount_5(MethodInfo_t * value)
	{
		____getCount_5 = value;
		Il2CppCodeGenWriteBarrier(&____getCount_5, value);
	}

	inline static int32_t get_offset_of__add_6() { return static_cast<int32_t>(offsetof(UnityCollectionMessagePackSerializer_t4230566959, ____add_6)); }
	inline MethodInfo_t * get__add_6() const { return ____add_6; }
	inline MethodInfo_t ** get_address_of__add_6() { return &____add_6; }
	inline void set__add_6(MethodInfo_t * value)
	{
		____add_6 = value;
		Il2CppCodeGenWriteBarrier(&____add_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
