﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Boolean>>,System.Attribute>
struct Dictionary_2_t875568911;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Boolean>>,System.Attribute>
struct  ValueCollection_t3873596050  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t875568911 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3873596050, ___dictionary_0)); }
	inline Dictionary_2_t875568911 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t875568911 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t875568911 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
