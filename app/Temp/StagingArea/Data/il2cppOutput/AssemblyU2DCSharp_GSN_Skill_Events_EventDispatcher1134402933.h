#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Events.EventDispatcher/Scope>
struct Dictionary_2_t383151265;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Events.EventDispatcher
struct  EventDispatcher_t1134402933  : public Il2CppObject
{
public:

public:
};

struct EventDispatcher_t1134402933_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Events.EventDispatcher/Scope> GSN.Skill.Events.EventDispatcher::s_scopes
	Dictionary_2_t383151265 * ___s_scopes_0;

public:
	inline static int32_t get_offset_of_s_scopes_0() { return static_cast<int32_t>(offsetof(EventDispatcher_t1134402933_StaticFields, ___s_scopes_0)); }
	inline Dictionary_2_t383151265 * get_s_scopes_0() const { return ___s_scopes_0; }
	inline Dictionary_2_t383151265 ** get_address_of_s_scopes_0() { return &___s_scopes_0; }
	inline void set_s_scopes_0(Dictionary_2_t383151265 * value)
	{
		___s_scopes_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_scopes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
