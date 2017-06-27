#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerHelper/<>c__DisplayClass6
struct  U3CU3Ec__DisplayClass6_t406949275  : public Il2CppObject
{
public:
	// System.Reflection.PropertyInfo MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerHelper/<>c__DisplayClass6::property
	PropertyInfo_t * ___property_0;
	// System.Reflection.MethodInfo MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerHelper/<>c__DisplayClass6::setter
	MethodInfo_t * ___setter_1;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_t406949275, ___property_0)); }
	inline PropertyInfo_t * get_property_0() const { return ___property_0; }
	inline PropertyInfo_t ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(PropertyInfo_t * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier(&___property_0, value);
	}

	inline static int32_t get_offset_of_setter_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_t406949275, ___setter_1)); }
	inline MethodInfo_t * get_setter_1() const { return ___setter_1; }
	inline MethodInfo_t ** get_address_of_setter_1() { return &___setter_1; }
	inline void set_setter_1(MethodInfo_t * value)
	{
		___setter_1 = value;
		Il2CppCodeGenWriteBarrier(&___setter_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
