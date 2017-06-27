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

#include "mscorlib_System_Attribute542643598.h"
#include "MsgPack_MsgPack_Serialization_NilImplication418432652.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.MessagePackMemberAttribute
struct  MessagePackMemberAttribute_t1681615454  : public Attribute_t542643598
{
public:
	// System.Int32 MsgPack.Serialization.MessagePackMemberAttribute::_id
	int32_t ____id_0;
	// System.String MsgPack.Serialization.MessagePackMemberAttribute::_name
	String_t* ____name_1;
	// MsgPack.Serialization.NilImplication MsgPack.Serialization.MessagePackMemberAttribute::_nilImplication
	int32_t ____nilImplication_2;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(MessagePackMemberAttribute_t1681615454, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(MessagePackMemberAttribute_t1681615454, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__nilImplication_2() { return static_cast<int32_t>(offsetof(MessagePackMemberAttribute_t1681615454, ____nilImplication_2)); }
	inline int32_t get__nilImplication_2() const { return ____nilImplication_2; }
	inline int32_t* get_address_of__nilImplication_2() { return &____nilImplication_2; }
	inline void set__nilImplication_2(int32_t value)
	{
		____nilImplication_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
