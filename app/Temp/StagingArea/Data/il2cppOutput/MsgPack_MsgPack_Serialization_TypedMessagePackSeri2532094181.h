#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory
struct ICollectionInstanceFactory_t3704555280;

#include "MsgPack_MsgPack_Serialization_MessagePackSerialize1567321102.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>
struct  TypedMessagePackSerializerWrapper_1_t2532094181  : public MessagePackSerializer_1_t1567321102
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.TypedMessagePackSerializerWrapper`1::_underlyingSerializer
	Il2CppObject * ____underlyingSerializer_3;
	// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory MsgPack.Serialization.TypedMessagePackSerializerWrapper`1::_underlyingFactory
	Il2CppObject * ____underlyingFactory_4;

public:
	inline static int32_t get_offset_of__underlyingSerializer_3() { return static_cast<int32_t>(offsetof(TypedMessagePackSerializerWrapper_1_t2532094181, ____underlyingSerializer_3)); }
	inline Il2CppObject * get__underlyingSerializer_3() const { return ____underlyingSerializer_3; }
	inline Il2CppObject ** get_address_of__underlyingSerializer_3() { return &____underlyingSerializer_3; }
	inline void set__underlyingSerializer_3(Il2CppObject * value)
	{
		____underlyingSerializer_3 = value;
		Il2CppCodeGenWriteBarrier(&____underlyingSerializer_3, value);
	}

	inline static int32_t get_offset_of__underlyingFactory_4() { return static_cast<int32_t>(offsetof(TypedMessagePackSerializerWrapper_1_t2532094181, ____underlyingFactory_4)); }
	inline Il2CppObject * get__underlyingFactory_4() const { return ____underlyingFactory_4; }
	inline Il2CppObject ** get_address_of__underlyingFactory_4() { return &____underlyingFactory_4; }
	inline void set__underlyingFactory_4(Il2CppObject * value)
	{
		____underlyingFactory_4 = value;
		Il2CppCodeGenWriteBarrier(&____underlyingFactory_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
