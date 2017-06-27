#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2825504181;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2572051853;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.DynamicValueProvider
struct  DynamicValueProvider_t1562203361  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo Newtonsoft.Json.Serialization.DynamicValueProvider::_memberInfo
	MemberInfo_t * ____memberInfo_0;
	// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DynamicValueProvider::_getter
	Func_2_t2825504181 * ____getter_1;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DynamicValueProvider::_setter
	Action_2_t2572051853 * ____setter_2;

public:
	inline static int32_t get_offset_of__memberInfo_0() { return static_cast<int32_t>(offsetof(DynamicValueProvider_t1562203361, ____memberInfo_0)); }
	inline MemberInfo_t * get__memberInfo_0() const { return ____memberInfo_0; }
	inline MemberInfo_t ** get_address_of__memberInfo_0() { return &____memberInfo_0; }
	inline void set__memberInfo_0(MemberInfo_t * value)
	{
		____memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&____memberInfo_0, value);
	}

	inline static int32_t get_offset_of__getter_1() { return static_cast<int32_t>(offsetof(DynamicValueProvider_t1562203361, ____getter_1)); }
	inline Func_2_t2825504181 * get__getter_1() const { return ____getter_1; }
	inline Func_2_t2825504181 ** get_address_of__getter_1() { return &____getter_1; }
	inline void set__getter_1(Func_2_t2825504181 * value)
	{
		____getter_1 = value;
		Il2CppCodeGenWriteBarrier(&____getter_1, value);
	}

	inline static int32_t get_offset_of__setter_2() { return static_cast<int32_t>(offsetof(DynamicValueProvider_t1562203361, ____setter_2)); }
	inline Action_2_t2572051853 * get__setter_2() const { return ____setter_2; }
	inline Action_2_t2572051853 ** get_address_of__setter_2() { return &____setter_2; }
	inline void set__setter_2(Action_2_t2572051853 * value)
	{
		____setter_2 = value;
		Il2CppCodeGenWriteBarrier(&____setter_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
