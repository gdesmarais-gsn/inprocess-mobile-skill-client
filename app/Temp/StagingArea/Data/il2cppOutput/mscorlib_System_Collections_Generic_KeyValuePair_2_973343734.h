#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo[],System.Boolean>
struct  KeyValuePair_2_t973343734 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	MemberInfoU5BU5D_t4238939941* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t973343734, ___key_0)); }
	inline MemberInfoU5BU5D_t4238939941* get_key_0() const { return ___key_0; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(MemberInfoU5BU5D_t4238939941* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t973343734, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
