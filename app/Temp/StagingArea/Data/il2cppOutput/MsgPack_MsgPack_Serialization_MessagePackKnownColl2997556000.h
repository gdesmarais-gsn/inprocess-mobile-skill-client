#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.MessagePackKnownCollectionItemTypeAttribute
struct  MessagePackKnownCollectionItemTypeAttribute_t2997556000  : public Attribute_t542643598
{
public:
	// System.String MsgPack.Serialization.MessagePackKnownCollectionItemTypeAttribute::<TypeCode>k__BackingField
	String_t* ___U3CTypeCodeU3Ek__BackingField_0;
	// System.Type MsgPack.Serialization.MessagePackKnownCollectionItemTypeAttribute::<BindingType>k__BackingField
	Type_t * ___U3CBindingTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessagePackKnownCollectionItemTypeAttribute_t2997556000, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTypeCodeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CBindingTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessagePackKnownCollectionItemTypeAttribute_t2997556000, ___U3CBindingTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CBindingTypeU3Ek__BackingField_1() const { return ___U3CBindingTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CBindingTypeU3Ek__BackingField_1() { return &___U3CBindingTypeU3Ek__BackingField_1; }
	inline void set_U3CBindingTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CBindingTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBindingTypeU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
