#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t1664964607;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "MsgPack_MsgPack_Serialization_NonGenericMessagePac1046258720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer
struct  System_Collections_Generic_List_1MessagePackSerializer_t1522264518  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::_itemSerializer
	Il2CppObject * ____itemSerializer_5;
	// System.Reflection.ConstructorInfo MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::_constructor
	ConstructorInfo_t2851816542 * ____constructor_6;
	// System.Reflection.MethodInfo MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::_add
	MethodInfo_t * ____add_7;

public:
	inline static int32_t get_offset_of__itemSerializer_5() { return static_cast<int32_t>(offsetof(System_Collections_Generic_List_1MessagePackSerializer_t1522264518, ____itemSerializer_5)); }
	inline Il2CppObject * get__itemSerializer_5() const { return ____itemSerializer_5; }
	inline Il2CppObject ** get_address_of__itemSerializer_5() { return &____itemSerializer_5; }
	inline void set__itemSerializer_5(Il2CppObject * value)
	{
		____itemSerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____itemSerializer_5, value);
	}

	inline static int32_t get_offset_of__constructor_6() { return static_cast<int32_t>(offsetof(System_Collections_Generic_List_1MessagePackSerializer_t1522264518, ____constructor_6)); }
	inline ConstructorInfo_t2851816542 * get__constructor_6() const { return ____constructor_6; }
	inline ConstructorInfo_t2851816542 ** get_address_of__constructor_6() { return &____constructor_6; }
	inline void set__constructor_6(ConstructorInfo_t2851816542 * value)
	{
		____constructor_6 = value;
		Il2CppCodeGenWriteBarrier(&____constructor_6, value);
	}

	inline static int32_t get_offset_of__add_7() { return static_cast<int32_t>(offsetof(System_Collections_Generic_List_1MessagePackSerializer_t1522264518, ____add_7)); }
	inline MethodInfo_t * get__add_7() const { return ____add_7; }
	inline MethodInfo_t ** get_address_of__add_7() { return &____add_7; }
	inline void set__add_7(MethodInfo_t * value)
	{
		____add_7 = value;
		Il2CppCodeGenWriteBarrier(&____add_7, value);
	}
};

struct System_Collections_Generic_List_1MessagePackSerializer_t1522264518_StaticFields
{
public:
	// System.Type[] MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::ConstructorWithCapacityParameterTypes
	TypeU5BU5D_t1664964607* ___ConstructorWithCapacityParameterTypes_4;

public:
	inline static int32_t get_offset_of_ConstructorWithCapacityParameterTypes_4() { return static_cast<int32_t>(offsetof(System_Collections_Generic_List_1MessagePackSerializer_t1522264518_StaticFields, ___ConstructorWithCapacityParameterTypes_4)); }
	inline TypeU5BU5D_t1664964607* get_ConstructorWithCapacityParameterTypes_4() const { return ___ConstructorWithCapacityParameterTypes_4; }
	inline TypeU5BU5D_t1664964607** get_address_of_ConstructorWithCapacityParameterTypes_4() { return &___ConstructorWithCapacityParameterTypes_4; }
	inline void set_ConstructorWithCapacityParameterTypes_4(TypeU5BU5D_t1664964607* value)
	{
		___ConstructorWithCapacityParameterTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&___ConstructorWithCapacityParameterTypes_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
