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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer3141818323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.AbstractNonGenericListMessagePackSerializer
struct  AbstractNonGenericListMessagePackSerializer_t582739518  : public UnityNonGenericListMessagePackSerializer_t3141818323
{
public:
	// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory MsgPack.Serialization.DefaultSerializers.AbstractNonGenericListMessagePackSerializer::_concreteCollectionInstanceFactory
	Il2CppObject * ____concreteCollectionInstanceFactory_5;
	// MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer MsgPack.Serialization.DefaultSerializers.AbstractNonGenericListMessagePackSerializer::_polymorphicDeserializer
	Il2CppObject * ____polymorphicDeserializer_6;

public:
	inline static int32_t get_offset_of__concreteCollectionInstanceFactory_5() { return static_cast<int32_t>(offsetof(AbstractNonGenericListMessagePackSerializer_t582739518, ____concreteCollectionInstanceFactory_5)); }
	inline Il2CppObject * get__concreteCollectionInstanceFactory_5() const { return ____concreteCollectionInstanceFactory_5; }
	inline Il2CppObject ** get_address_of__concreteCollectionInstanceFactory_5() { return &____concreteCollectionInstanceFactory_5; }
	inline void set__concreteCollectionInstanceFactory_5(Il2CppObject * value)
	{
		____concreteCollectionInstanceFactory_5 = value;
		Il2CppCodeGenWriteBarrier(&____concreteCollectionInstanceFactory_5, value);
	}

	inline static int32_t get_offset_of__polymorphicDeserializer_6() { return static_cast<int32_t>(offsetof(AbstractNonGenericListMessagePackSerializer_t582739518, ____polymorphicDeserializer_6)); }
	inline Il2CppObject * get__polymorphicDeserializer_6() const { return ____polymorphicDeserializer_6; }
	inline Il2CppObject ** get_address_of__polymorphicDeserializer_6() { return &____polymorphicDeserializer_6; }
	inline void set__polymorphicDeserializer_6(Il2CppObject * value)
	{
		____polymorphicDeserializer_6 = value;
		Il2CppCodeGenWriteBarrier(&____polymorphicDeserializer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
