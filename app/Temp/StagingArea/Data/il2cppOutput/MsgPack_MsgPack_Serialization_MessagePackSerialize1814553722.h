#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2470011401.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>
struct  MessagePackSerializer_1_t1814553722  : public Il2CppObject
{
public:
	// System.Nullable`1<MsgPack.PackerCompatibilityOptions> MsgPack.Serialization.MessagePackSerializer`1::_packerCompatibilityOptionsForCompatibility
	Nullable_1_t2470011401  ____packerCompatibilityOptionsForCompatibility_1;
	// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1::_ownerContext
	SerializationContext_t1484625559 * ____ownerContext_2;

public:
	inline static int32_t get_offset_of__packerCompatibilityOptionsForCompatibility_1() { return static_cast<int32_t>(offsetof(MessagePackSerializer_1_t1814553722, ____packerCompatibilityOptionsForCompatibility_1)); }
	inline Nullable_1_t2470011401  get__packerCompatibilityOptionsForCompatibility_1() const { return ____packerCompatibilityOptionsForCompatibility_1; }
	inline Nullable_1_t2470011401 * get_address_of__packerCompatibilityOptionsForCompatibility_1() { return &____packerCompatibilityOptionsForCompatibility_1; }
	inline void set__packerCompatibilityOptionsForCompatibility_1(Nullable_1_t2470011401  value)
	{
		____packerCompatibilityOptionsForCompatibility_1 = value;
	}

	inline static int32_t get_offset_of__ownerContext_2() { return static_cast<int32_t>(offsetof(MessagePackSerializer_1_t1814553722, ____ownerContext_2)); }
	inline SerializationContext_t1484625559 * get__ownerContext_2() const { return ____ownerContext_2; }
	inline SerializationContext_t1484625559 ** get_address_of__ownerContext_2() { return &____ownerContext_2; }
	inline void set__ownerContext_2(SerializationContext_t1484625559 * value)
	{
		____ownerContext_2 = value;
		Il2CppCodeGenWriteBarrier(&____ownerContext_2, value);
	}
};

struct MessagePackSerializer_1_t1814553722_StaticFields
{
public:
	// System.Boolean MsgPack.Serialization.MessagePackSerializer`1::_isNullable
	bool ____isNullable_0;

public:
	inline static int32_t get_offset_of__isNullable_0() { return static_cast<int32_t>(offsetof(MessagePackSerializer_1_t1814553722_StaticFields, ____isNullable_0)); }
	inline bool get__isNullable_0() const { return ____isNullable_0; }
	inline bool* get_address_of__isNullable_0() { return &____isNullable_0; }
	inline void set__isNullable_0(bool value)
	{
		____isNullable_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
