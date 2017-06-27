#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Events.EventDispatcher/ListenerCollection>
struct Dictionary_2_t1817230497;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Events.EventDispatcher/Scope
struct  Scope_t1375325630  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Events.EventDispatcher/ListenerCollection> GSN.Skill.Events.EventDispatcher/Scope::listenerMap
	Dictionary_2_t1817230497 * ___listenerMap_0;

public:
	inline static int32_t get_offset_of_listenerMap_0() { return static_cast<int32_t>(offsetof(Scope_t1375325630, ___listenerMap_0)); }
	inline Dictionary_2_t1817230497 * get_listenerMap_0() const { return ___listenerMap_0; }
	inline Dictionary_2_t1817230497 ** get_address_of_listenerMap_0() { return &___listenerMap_0; }
	inline void set_listenerMap_0(Dictionary_2_t1817230497 * value)
	{
		___listenerMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___listenerMap_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
