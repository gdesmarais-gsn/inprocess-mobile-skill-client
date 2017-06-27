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
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter
struct  ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000  : public Il2CppObject
{
public:
	// System.Type MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter::_itemType
	Type_t * ____itemType_0;
	// System.Action`1<System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter::_store
	Action_1_t2491248677 * ____store_1;
	// System.String MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter::MemberName
	String_t* ___MemberName_2;
	// System.Type MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter::DeclaringType
	Type_t * ___DeclaringType_3;

public:
	inline static int32_t get_offset_of__itemType_0() { return static_cast<int32_t>(offsetof(ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000, ____itemType_0)); }
	inline Type_t * get__itemType_0() const { return ____itemType_0; }
	inline Type_t ** get_address_of__itemType_0() { return &____itemType_0; }
	inline void set__itemType_0(Type_t * value)
	{
		____itemType_0 = value;
		Il2CppCodeGenWriteBarrier(&____itemType_0, value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000, ____store_1)); }
	inline Action_1_t2491248677 * get__store_1() const { return ____store_1; }
	inline Action_1_t2491248677 ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Action_1_t2491248677 * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier(&____store_1, value);
	}

	inline static int32_t get_offset_of_MemberName_2() { return static_cast<int32_t>(offsetof(ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000, ___MemberName_2)); }
	inline String_t* get_MemberName_2() const { return ___MemberName_2; }
	inline String_t** get_address_of_MemberName_2() { return &___MemberName_2; }
	inline void set_MemberName_2(String_t* value)
	{
		___MemberName_2 = value;
		Il2CppCodeGenWriteBarrier(&___MemberName_2, value);
	}

	inline static int32_t get_offset_of_DeclaringType_3() { return static_cast<int32_t>(offsetof(ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000, ___DeclaringType_3)); }
	inline Type_t * get_DeclaringType_3() const { return ___DeclaringType_3; }
	inline Type_t ** get_address_of_DeclaringType_3() { return &___DeclaringType_3; }
	inline void set_DeclaringType_3(Type_t * value)
	{
		___DeclaringType_3 = value;
		Il2CppCodeGenWriteBarrier(&___DeclaringType_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
