#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Stm.V1_0.Dispatcher/Event[]
struct EventU5BU5D_t2896497059;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_0.Dispatcher
struct  Dispatcher_t2840725577  : public MonoBehaviour_t1158329972
{
public:
	// Stm.V1_0.Dispatcher/Event[] Stm.V1_0.Dispatcher::defaultEvents
	EventU5BU5D_t2896497059* ___defaultEvents_2;

public:
	inline static int32_t get_offset_of_defaultEvents_2() { return static_cast<int32_t>(offsetof(Dispatcher_t2840725577, ___defaultEvents_2)); }
	inline EventU5BU5D_t2896497059* get_defaultEvents_2() const { return ___defaultEvents_2; }
	inline EventU5BU5D_t2896497059** get_address_of_defaultEvents_2() { return &___defaultEvents_2; }
	inline void set_defaultEvents_2(EventU5BU5D_t2896497059* value)
	{
		___defaultEvents_2 = value;
		Il2CppCodeGenWriteBarrier(&___defaultEvents_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
