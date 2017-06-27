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
// MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer
struct IPolymorphicDeserializer_t3222652928;

#include "MsgPack_MsgPack_Serialization_CollectionSerializer1516787527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.AbstractDictionaryMessagePackSerializer
struct  AbstractDictionaryMessagePackSerializer_t2071025354  : public UnityDictionaryMessagePackSerializer_t1516787527
{
public:
	// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory MsgPack.Serialization.DefaultSerializers.AbstractDictionaryMessagePackSerializer::_concreteCollectionInstanceFactory
	Il2CppObject * ____concreteCollectionInstanceFactory_10;
	// MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer MsgPack.Serialization.DefaultSerializers.AbstractDictionaryMessagePackSerializer::_polymorphicDeserializer
	Il2CppObject * ____polymorphicDeserializer_11;

public:
	inline static int32_t get_offset_of__concreteCollectionInstanceFactory_10() { return static_cast<int32_t>(offsetof(AbstractDictionaryMessagePackSerializer_t2071025354, ____concreteCollectionInstanceFactory_10)); }
	inline Il2CppObject * get__concreteCollectionInstanceFactory_10() const { return ____concreteCollectionInstanceFactory_10; }
	inline Il2CppObject ** get_address_of__concreteCollectionInstanceFactory_10() { return &____concreteCollectionInstanceFactory_10; }
	inline void set__concreteCollectionInstanceFactory_10(Il2CppObject * value)
	{
		____concreteCollectionInstanceFactory_10 = value;
		Il2CppCodeGenWriteBarrier(&____concreteCollectionInstanceFactory_10, value);
	}

	inline static int32_t get_offset_of__polymorphicDeserializer_11() { return static_cast<int32_t>(offsetof(AbstractDictionaryMessagePackSerializer_t2071025354, ____polymorphicDeserializer_11)); }
	inline Il2CppObject * get__polymorphicDeserializer_11() const { return ____polymorphicDeserializer_11; }
	inline Il2CppObject ** get_address_of__polymorphicDeserializer_11() { return &____polymorphicDeserializer_11; }
	inline void set__polymorphicDeserializer_11(Il2CppObject * value)
	{
		____polymorphicDeserializer_11 = value;
		Il2CppCodeGenWriteBarrier(&____polymorphicDeserializer_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
