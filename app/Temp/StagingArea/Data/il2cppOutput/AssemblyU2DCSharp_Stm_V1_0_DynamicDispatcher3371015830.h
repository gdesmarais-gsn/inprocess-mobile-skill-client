#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>
struct Dictionary_2_t4146355935;

#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher2840725577.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_0.DynamicDispatcher
struct  DynamicDispatcher_t3371015830  : public Dispatcher_t2840725577
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Stm.V1_0.DynamicDispatcher/CallbackAndCallee> Stm.V1_0.DynamicDispatcher::mRegistry
	Dictionary_2_t4146355935 * ___mRegistry_3;
	// System.Int32 Stm.V1_0.DynamicDispatcher::dynDispRecursionCount
	int32_t ___dynDispRecursionCount_4;

public:
	inline static int32_t get_offset_of_mRegistry_3() { return static_cast<int32_t>(offsetof(DynamicDispatcher_t3371015830, ___mRegistry_3)); }
	inline Dictionary_2_t4146355935 * get_mRegistry_3() const { return ___mRegistry_3; }
	inline Dictionary_2_t4146355935 ** get_address_of_mRegistry_3() { return &___mRegistry_3; }
	inline void set_mRegistry_3(Dictionary_2_t4146355935 * value)
	{
		___mRegistry_3 = value;
		Il2CppCodeGenWriteBarrier(&___mRegistry_3, value);
	}

	inline static int32_t get_offset_of_dynDispRecursionCount_4() { return static_cast<int32_t>(offsetof(DynamicDispatcher_t3371015830, ___dynDispRecursionCount_4)); }
	inline int32_t get_dynDispRecursionCount_4() const { return ___dynDispRecursionCount_4; }
	inline int32_t* get_address_of_dynDispRecursionCount_4() { return &___dynDispRecursionCount_4; }
	inline void set_dynDispRecursionCount_4(int32_t value)
	{
		___dynDispRecursionCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
