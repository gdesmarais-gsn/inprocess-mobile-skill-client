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
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter
struct  ReflectionSerializerNilImplicationHandlerParameter_t3591379922  : public Il2CppObject
{
public:
	// System.Type MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter::_itemType
	Type_t * ____itemType_0;
	// System.String MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter::_memberName
	String_t* ____memberName_1;

public:
	inline static int32_t get_offset_of__itemType_0() { return static_cast<int32_t>(offsetof(ReflectionSerializerNilImplicationHandlerParameter_t3591379922, ____itemType_0)); }
	inline Type_t * get__itemType_0() const { return ____itemType_0; }
	inline Type_t ** get_address_of__itemType_0() { return &____itemType_0; }
	inline void set__itemType_0(Type_t * value)
	{
		____itemType_0 = value;
		Il2CppCodeGenWriteBarrier(&____itemType_0, value);
	}

	inline static int32_t get_offset_of__memberName_1() { return static_cast<int32_t>(offsetof(ReflectionSerializerNilImplicationHandlerParameter_t3591379922, ____memberName_1)); }
	inline String_t* get__memberName_1() const { return ____memberName_1; }
	inline String_t** get_address_of__memberName_1() { return &____memberName_1; }
	inline void set__memberName_1(String_t* value)
	{
		____memberName_1 = value;
		Il2CppCodeGenWriteBarrier(&____memberName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
