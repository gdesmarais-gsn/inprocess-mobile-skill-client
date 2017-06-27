#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory
struct ICollectionInstanceFactory_t3704555280;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;

#include "MsgPack_MsgPack_Serialization_CollectionSerializer3236157933.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.AbstractEnumerableMessagePackSerializer
struct  AbstractEnumerableMessagePackSerializer_t1115660484  : public UnityEnumerableMessagePackSerializer_t3236157933
{
public:
	// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory MsgPack.Serialization.DefaultSerializers.AbstractEnumerableMessagePackSerializer::_concreteCollectionInstanceFactory
	Il2CppObject * ____concreteCollectionInstanceFactory_6;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.AbstractEnumerableMessagePackSerializer::_concreteSerializer
	Il2CppObject * ____concreteSerializer_7;

public:
	inline static int32_t get_offset_of__concreteCollectionInstanceFactory_6() { return static_cast<int32_t>(offsetof(AbstractEnumerableMessagePackSerializer_t1115660484, ____concreteCollectionInstanceFactory_6)); }
	inline Il2CppObject * get__concreteCollectionInstanceFactory_6() const { return ____concreteCollectionInstanceFactory_6; }
	inline Il2CppObject ** get_address_of__concreteCollectionInstanceFactory_6() { return &____concreteCollectionInstanceFactory_6; }
	inline void set__concreteCollectionInstanceFactory_6(Il2CppObject * value)
	{
		____concreteCollectionInstanceFactory_6 = value;
		Il2CppCodeGenWriteBarrier(&____concreteCollectionInstanceFactory_6, value);
	}

	inline static int32_t get_offset_of__concreteSerializer_7() { return static_cast<int32_t>(offsetof(AbstractEnumerableMessagePackSerializer_t1115660484, ____concreteSerializer_7)); }
	inline Il2CppObject * get__concreteSerializer_7() const { return ____concreteSerializer_7; }
	inline Il2CppObject ** get_address_of__concreteSerializer_7() { return &____concreteSerializer_7; }
	inline void set__concreteSerializer_7(Il2CppObject * value)
	{
		____concreteSerializer_7 = value;
		Il2CppCodeGenWriteBarrier(&____concreteSerializer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
