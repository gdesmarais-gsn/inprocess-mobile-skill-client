#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Attribute
struct Attribute_t542643598;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21493988994.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Boolean>>,System.Attribute>
struct  KeyValuePair_2_t2927881429 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	KeyValuePair_2_t1493988994  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Attribute_t542643598 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2927881429, ___key_0)); }
	inline KeyValuePair_2_t1493988994  get_key_0() const { return ___key_0; }
	inline KeyValuePair_2_t1493988994 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(KeyValuePair_2_t1493988994  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2927881429, ___value_1)); }
	inline Attribute_t542643598 * get_value_1() const { return ___value_1; }
	inline Attribute_t542643598 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Attribute_t542643598 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
