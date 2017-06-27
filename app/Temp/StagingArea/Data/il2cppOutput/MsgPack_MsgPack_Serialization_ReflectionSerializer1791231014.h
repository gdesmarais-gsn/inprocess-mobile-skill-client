#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter
struct ReflectionSerializerNilImplicationHandlerParameter_t3591379922;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3961629604;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler/<>c__DisplayClass7
struct  U3CU3Ec__DisplayClass7_t1791231014  : public Il2CppObject
{
public:
	// MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler/<>c__DisplayClass7::parameter
	ReflectionSerializerNilImplicationHandlerParameter_t3591379922 * ___parameter_0;
	// System.Func`2<System.Object,System.Boolean> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler/<>c__DisplayClass7::condition
	Func_2_t3961629604 * ___condition_1;

public:
	inline static int32_t get_offset_of_parameter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_t1791231014, ___parameter_0)); }
	inline ReflectionSerializerNilImplicationHandlerParameter_t3591379922 * get_parameter_0() const { return ___parameter_0; }
	inline ReflectionSerializerNilImplicationHandlerParameter_t3591379922 ** get_address_of_parameter_0() { return &___parameter_0; }
	inline void set_parameter_0(ReflectionSerializerNilImplicationHandlerParameter_t3591379922 * value)
	{
		___parameter_0 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_0, value);
	}

	inline static int32_t get_offset_of_condition_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_t1791231014, ___condition_1)); }
	inline Func_2_t3961629604 * get_condition_1() const { return ___condition_1; }
	inline Func_2_t3961629604 ** get_address_of_condition_1() { return &___condition_1; }
	inline void set_condition_1(Func_2_t3961629604 * value)
	{
		___condition_1 = value;
		Il2CppCodeGenWriteBarrier(&___condition_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
