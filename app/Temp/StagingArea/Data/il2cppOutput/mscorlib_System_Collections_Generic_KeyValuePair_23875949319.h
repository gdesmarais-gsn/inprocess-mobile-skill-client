#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Stm_V1_0_DynamicDispatcher_Callb2231576673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>
struct  KeyValuePair_2_t3875949319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Il2CppObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	CallbackAndCallee_t2231576673  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3875949319, ___key_0)); }
	inline Il2CppObject * get_key_0() const { return ___key_0; }
	inline Il2CppObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Il2CppObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3875949319, ___value_1)); }
	inline CallbackAndCallee_t2231576673  get_value_1() const { return ___value_1; }
	inline CallbackAndCallee_t2231576673 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(CallbackAndCallee_t2231576673  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
