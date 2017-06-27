#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Stm.V1_0.IDynamicActor
struct IDynamicActor_t2843518033;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_0.Dispatcher/<Awake>c__AnonStorey0
struct  U3CAwakeU3Ec__AnonStorey0_t1030536730  : public Il2CppObject
{
public:
	// Stm.V1_0.IDynamicActor Stm.V1_0.Dispatcher/<Awake>c__AnonStorey0::actor
	Il2CppObject * ___actor_0;

public:
	inline static int32_t get_offset_of_actor_0() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t1030536730, ___actor_0)); }
	inline Il2CppObject * get_actor_0() const { return ___actor_0; }
	inline Il2CppObject ** get_address_of_actor_0() { return &___actor_0; }
	inline void set_actor_0(Il2CppObject * value)
	{
		___actor_0 = value;
		Il2CppCodeGenWriteBarrier(&___actor_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
