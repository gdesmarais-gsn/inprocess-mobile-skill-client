#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2470011401.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.NonGenericMessagePackSerializer
struct  NonGenericMessagePackSerializer_t1046258720  : public Il2CppObject
{
public:
	// System.Type MsgPack.Serialization.NonGenericMessagePackSerializer::_targetType
	Type_t * ____targetType_0;
	// System.Boolean MsgPack.Serialization.NonGenericMessagePackSerializer::_isNullable
	bool ____isNullable_1;
	// System.Nullable`1<MsgPack.PackerCompatibilityOptions> MsgPack.Serialization.NonGenericMessagePackSerializer::_packerCompatibilityOptionsForCompatibility
	Nullable_1_t2470011401  ____packerCompatibilityOptionsForCompatibility_2;
	// MsgPack.Serialization.SerializationContext MsgPack.Serialization.NonGenericMessagePackSerializer::_ownerContext
	SerializationContext_t1484625559 * ____ownerContext_3;

public:
	inline static int32_t get_offset_of__targetType_0() { return static_cast<int32_t>(offsetof(NonGenericMessagePackSerializer_t1046258720, ____targetType_0)); }
	inline Type_t * get__targetType_0() const { return ____targetType_0; }
	inline Type_t ** get_address_of__targetType_0() { return &____targetType_0; }
	inline void set__targetType_0(Type_t * value)
	{
		____targetType_0 = value;
		Il2CppCodeGenWriteBarrier(&____targetType_0, value);
	}

	inline static int32_t get_offset_of__isNullable_1() { return static_cast<int32_t>(offsetof(NonGenericMessagePackSerializer_t1046258720, ____isNullable_1)); }
	inline bool get__isNullable_1() const { return ____isNullable_1; }
	inline bool* get_address_of__isNullable_1() { return &____isNullable_1; }
	inline void set__isNullable_1(bool value)
	{
		____isNullable_1 = value;
	}

	inline static int32_t get_offset_of__packerCompatibilityOptionsForCompatibility_2() { return static_cast<int32_t>(offsetof(NonGenericMessagePackSerializer_t1046258720, ____packerCompatibilityOptionsForCompatibility_2)); }
	inline Nullable_1_t2470011401  get__packerCompatibilityOptionsForCompatibility_2() const { return ____packerCompatibilityOptionsForCompatibility_2; }
	inline Nullable_1_t2470011401 * get_address_of__packerCompatibilityOptionsForCompatibility_2() { return &____packerCompatibilityOptionsForCompatibility_2; }
	inline void set__packerCompatibilityOptionsForCompatibility_2(Nullable_1_t2470011401  value)
	{
		____packerCompatibilityOptionsForCompatibility_2 = value;
	}

	inline static int32_t get_offset_of__ownerContext_3() { return static_cast<int32_t>(offsetof(NonGenericMessagePackSerializer_t1046258720, ____ownerContext_3)); }
	inline SerializationContext_t1484625559 * get__ownerContext_3() const { return ____ownerContext_3; }
	inline SerializationContext_t1484625559 ** get_address_of__ownerContext_3() { return &____ownerContext_3; }
	inline void set__ownerContext_3(SerializationContext_t1484625559 * value)
	{
		____ownerContext_3 = value;
		Il2CppCodeGenWriteBarrier(&____ownerContext_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
