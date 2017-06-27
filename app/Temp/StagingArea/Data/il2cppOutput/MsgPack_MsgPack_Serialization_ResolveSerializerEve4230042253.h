#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.IMessagePackSerializer
struct IMessagePackSerializer_t814841293;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ResolveSerializerEventArgs
struct  ResolveSerializerEventArgs_t4230042253  : public EventArgs_t3289624707
{
public:
	// MsgPack.Serialization.IMessagePackSerializer MsgPack.Serialization.ResolveSerializerEventArgs::_foundSerializer
	Il2CppObject * ____foundSerializer_1;
	// MsgPack.Serialization.SerializationContext MsgPack.Serialization.ResolveSerializerEventArgs::<Context>k__BackingField
	SerializationContext_t1484625559 * ___U3CContextU3Ek__BackingField_2;
	// System.Type MsgPack.Serialization.ResolveSerializerEventArgs::<TargetType>k__BackingField
	Type_t * ___U3CTargetTypeU3Ek__BackingField_3;
	// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.ResolveSerializerEventArgs::<PolymorphismSchema>k__BackingField
	PolymorphismSchema_t2690808062 * ___U3CPolymorphismSchemaU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__foundSerializer_1() { return static_cast<int32_t>(offsetof(ResolveSerializerEventArgs_t4230042253, ____foundSerializer_1)); }
	inline Il2CppObject * get__foundSerializer_1() const { return ____foundSerializer_1; }
	inline Il2CppObject ** get_address_of__foundSerializer_1() { return &____foundSerializer_1; }
	inline void set__foundSerializer_1(Il2CppObject * value)
	{
		____foundSerializer_1 = value;
		Il2CppCodeGenWriteBarrier(&____foundSerializer_1, value);
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResolveSerializerEventArgs_t4230042253, ___U3CContextU3Ek__BackingField_2)); }
	inline SerializationContext_t1484625559 * get_U3CContextU3Ek__BackingField_2() const { return ___U3CContextU3Ek__BackingField_2; }
	inline SerializationContext_t1484625559 ** get_address_of_U3CContextU3Ek__BackingField_2() { return &___U3CContextU3Ek__BackingField_2; }
	inline void set_U3CContextU3Ek__BackingField_2(SerializationContext_t1484625559 * value)
	{
		___U3CContextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CContextU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CTargetTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ResolveSerializerEventArgs_t4230042253, ___U3CTargetTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTargetTypeU3Ek__BackingField_3() const { return ___U3CTargetTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTargetTypeU3Ek__BackingField_3() { return &___U3CTargetTypeU3Ek__BackingField_3; }
	inline void set_U3CTargetTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTargetTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetTypeU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CPolymorphismSchemaU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ResolveSerializerEventArgs_t4230042253, ___U3CPolymorphismSchemaU3Ek__BackingField_4)); }
	inline PolymorphismSchema_t2690808062 * get_U3CPolymorphismSchemaU3Ek__BackingField_4() const { return ___U3CPolymorphismSchemaU3Ek__BackingField_4; }
	inline PolymorphismSchema_t2690808062 ** get_address_of_U3CPolymorphismSchemaU3Ek__BackingField_4() { return &___U3CPolymorphismSchemaU3Ek__BackingField_4; }
	inline void set_U3CPolymorphismSchemaU3Ek__BackingField_4(PolymorphismSchema_t2690808062 * value)
	{
		___U3CPolymorphismSchemaU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPolymorphismSchemaU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
