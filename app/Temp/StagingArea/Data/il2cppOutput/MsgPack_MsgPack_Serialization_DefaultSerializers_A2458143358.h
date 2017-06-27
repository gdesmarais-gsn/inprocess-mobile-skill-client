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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer3842043703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.AbstractNonGenericDictionaryMessagePackSerializer
struct  AbstractNonGenericDictionaryMessagePackSerializer_t2458143358  : public UnityNonGenericDictionaryMessagePackSerializer_t3842043703
{
public:
	// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory MsgPack.Serialization.DefaultSerializers.AbstractNonGenericDictionaryMessagePackSerializer::_concreteCollectionInstanceFactory
	Il2CppObject * ____concreteCollectionInstanceFactory_6;
	// MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer MsgPack.Serialization.DefaultSerializers.AbstractNonGenericDictionaryMessagePackSerializer::_polymorphicDeserializer
	Il2CppObject * ____polymorphicDeserializer_7;

public:
	inline static int32_t get_offset_of__concreteCollectionInstanceFactory_6() { return static_cast<int32_t>(offsetof(AbstractNonGenericDictionaryMessagePackSerializer_t2458143358, ____concreteCollectionInstanceFactory_6)); }
	inline Il2CppObject * get__concreteCollectionInstanceFactory_6() const { return ____concreteCollectionInstanceFactory_6; }
	inline Il2CppObject ** get_address_of__concreteCollectionInstanceFactory_6() { return &____concreteCollectionInstanceFactory_6; }
	inline void set__concreteCollectionInstanceFactory_6(Il2CppObject * value)
	{
		____concreteCollectionInstanceFactory_6 = value;
		Il2CppCodeGenWriteBarrier(&____concreteCollectionInstanceFactory_6, value);
	}

	inline static int32_t get_offset_of__polymorphicDeserializer_7() { return static_cast<int32_t>(offsetof(AbstractNonGenericDictionaryMessagePackSerializer_t2458143358, ____polymorphicDeserializer_7)); }
	inline Il2CppObject * get__polymorphicDeserializer_7() const { return ____polymorphicDeserializer_7; }
	inline Il2CppObject ** get_address_of__polymorphicDeserializer_7() { return &____polymorphicDeserializer_7; }
	inline void set__polymorphicDeserializer_7(Il2CppObject * value)
	{
		____polymorphicDeserializer_7 = value;
		Il2CppCodeGenWriteBarrier(&____polymorphicDeserializer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
