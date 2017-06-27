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
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// System.Action`3<MsgPack.Packer,System.Object,MsgPack.Serialization.IMessagePackSingleObjectSerializer>
struct Action_3_t3707266295;
// System.Func`4<MsgPack.Unpacker,System.Type,MsgPack.Serialization.IMessagePackSingleObjectSerializer,System.Object>
struct Func_4_t1777065393;

#include "MsgPack_MsgPack_Serialization_NonGenericMessagePac1046258720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.System_ArraySegment_1MessagePackSerializer
struct  System_ArraySegment_1MessagePackSerializer_t1042567044  : public NonGenericMessagePackSerializer_t1046258720
{
public:
	// System.Type MsgPack.Serialization.DefaultSerializers.System_ArraySegment_1MessagePackSerializer::_elementType
	Type_t * ____elementType_4;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.System_ArraySegment_1MessagePackSerializer::_itemSerializer
	Il2CppObject * ____itemSerializer_5;
	// System.Action`3<MsgPack.Packer,System.Object,MsgPack.Serialization.IMessagePackSingleObjectSerializer> MsgPack.Serialization.DefaultSerializers.System_ArraySegment_1MessagePackSerializer::_packing
	Action_3_t3707266295 * ____packing_6;
	// System.Func`4<MsgPack.Unpacker,System.Type,MsgPack.Serialization.IMessagePackSingleObjectSerializer,System.Object> MsgPack.Serialization.DefaultSerializers.System_ArraySegment_1MessagePackSerializer::_unpacking
	Func_4_t1777065393 * ____unpacking_7;

public:
	inline static int32_t get_offset_of__elementType_4() { return static_cast<int32_t>(offsetof(System_ArraySegment_1MessagePackSerializer_t1042567044, ____elementType_4)); }
	inline Type_t * get__elementType_4() const { return ____elementType_4; }
	inline Type_t ** get_address_of__elementType_4() { return &____elementType_4; }
	inline void set__elementType_4(Type_t * value)
	{
		____elementType_4 = value;
		Il2CppCodeGenWriteBarrier(&____elementType_4, value);
	}

	inline static int32_t get_offset_of__itemSerializer_5() { return static_cast<int32_t>(offsetof(System_ArraySegment_1MessagePackSerializer_t1042567044, ____itemSerializer_5)); }
	inline Il2CppObject * get__itemSerializer_5() const { return ____itemSerializer_5; }
	inline Il2CppObject ** get_address_of__itemSerializer_5() { return &____itemSerializer_5; }
	inline void set__itemSerializer_5(Il2CppObject * value)
	{
		____itemSerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____itemSerializer_5, value);
	}

	inline static int32_t get_offset_of__packing_6() { return static_cast<int32_t>(offsetof(System_ArraySegment_1MessagePackSerializer_t1042567044, ____packing_6)); }
	inline Action_3_t3707266295 * get__packing_6() const { return ____packing_6; }
	inline Action_3_t3707266295 ** get_address_of__packing_6() { return &____packing_6; }
	inline void set__packing_6(Action_3_t3707266295 * value)
	{
		____packing_6 = value;
		Il2CppCodeGenWriteBarrier(&____packing_6, value);
	}

	inline static int32_t get_offset_of__unpacking_7() { return static_cast<int32_t>(offsetof(System_ArraySegment_1MessagePackSerializer_t1042567044, ____unpacking_7)); }
	inline Func_4_t1777065393 * get__unpacking_7() const { return ____unpacking_7; }
	inline Func_4_t1777065393 ** get_address_of__unpacking_7() { return &____unpacking_7; }
	inline void set__unpacking_7(Func_4_t1777065393 * value)
	{
		____unpacking_7 = value;
		Il2CppCodeGenWriteBarrier(&____unpacking_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
