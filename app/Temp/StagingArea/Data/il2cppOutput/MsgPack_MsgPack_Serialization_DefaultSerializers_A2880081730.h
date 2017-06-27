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

#include "MsgPack_MsgPack_Serialization_CollectionSerializer3652935795.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.AbstractNonGenericCollectionMessagePackSerializer
struct  AbstractNonGenericCollectionMessagePackSerializer_t2880081730  : public UnityNonGenericCollectionMessagePackSerializer_t3652935795
{
public:
	// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory MsgPack.Serialization.DefaultSerializers.AbstractNonGenericCollectionMessagePackSerializer::_concreteCollectionInstanceFactory
	Il2CppObject * ____concreteCollectionInstanceFactory_5;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.AbstractNonGenericCollectionMessagePackSerializer::_concreteSerializer
	Il2CppObject * ____concreteSerializer_6;

public:
	inline static int32_t get_offset_of__concreteCollectionInstanceFactory_5() { return static_cast<int32_t>(offsetof(AbstractNonGenericCollectionMessagePackSerializer_t2880081730, ____concreteCollectionInstanceFactory_5)); }
	inline Il2CppObject * get__concreteCollectionInstanceFactory_5() const { return ____concreteCollectionInstanceFactory_5; }
	inline Il2CppObject ** get_address_of__concreteCollectionInstanceFactory_5() { return &____concreteCollectionInstanceFactory_5; }
	inline void set__concreteCollectionInstanceFactory_5(Il2CppObject * value)
	{
		____concreteCollectionInstanceFactory_5 = value;
		Il2CppCodeGenWriteBarrier(&____concreteCollectionInstanceFactory_5, value);
	}

	inline static int32_t get_offset_of__concreteSerializer_6() { return static_cast<int32_t>(offsetof(AbstractNonGenericCollectionMessagePackSerializer_t2880081730, ____concreteSerializer_6)); }
	inline Il2CppObject * get__concreteSerializer_6() const { return ____concreteSerializer_6; }
	inline Il2CppObject ** get_address_of__concreteSerializer_6() { return &____concreteSerializer_6; }
	inline void set__concreteSerializer_6(Il2CppObject * value)
	{
		____concreteSerializer_6 = value;
		Il2CppCodeGenWriteBarrier(&____concreteSerializer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
