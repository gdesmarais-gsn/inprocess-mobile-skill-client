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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer4230566959.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.AbstractCollectionMessagePackSerializer
struct  AbstractCollectionMessagePackSerializer_t2380864482  : public UnityCollectionMessagePackSerializer_t4230566959
{
public:
	// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory MsgPack.Serialization.DefaultSerializers.AbstractCollectionMessagePackSerializer::_concreteCollectionInstanceFactory
	Il2CppObject * ____concreteCollectionInstanceFactory_7;
	// MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer MsgPack.Serialization.DefaultSerializers.AbstractCollectionMessagePackSerializer::_polymorphicDeserializer
	Il2CppObject * ____polymorphicDeserializer_8;

public:
	inline static int32_t get_offset_of__concreteCollectionInstanceFactory_7() { return static_cast<int32_t>(offsetof(AbstractCollectionMessagePackSerializer_t2380864482, ____concreteCollectionInstanceFactory_7)); }
	inline Il2CppObject * get__concreteCollectionInstanceFactory_7() const { return ____concreteCollectionInstanceFactory_7; }
	inline Il2CppObject ** get_address_of__concreteCollectionInstanceFactory_7() { return &____concreteCollectionInstanceFactory_7; }
	inline void set__concreteCollectionInstanceFactory_7(Il2CppObject * value)
	{
		____concreteCollectionInstanceFactory_7 = value;
		Il2CppCodeGenWriteBarrier(&____concreteCollectionInstanceFactory_7, value);
	}

	inline static int32_t get_offset_of__polymorphicDeserializer_8() { return static_cast<int32_t>(offsetof(AbstractCollectionMessagePackSerializer_t2380864482, ____polymorphicDeserializer_8)); }
	inline Il2CppObject * get__polymorphicDeserializer_8() const { return ____polymorphicDeserializer_8; }
	inline Il2CppObject ** get_address_of__polymorphicDeserializer_8() { return &____polymorphicDeserializer_8; }
	inline void set__polymorphicDeserializer_8(Il2CppObject * value)
	{
		____polymorphicDeserializer_8 = value;
		Il2CppCodeGenWriteBarrier(&____polymorphicDeserializer_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
