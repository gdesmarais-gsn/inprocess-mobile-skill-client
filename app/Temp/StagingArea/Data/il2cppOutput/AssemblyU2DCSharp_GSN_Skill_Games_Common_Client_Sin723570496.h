#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Game.GsnFramePump
struct GsnFramePump_t2543118307;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Singleton`1<GSN.Skill.Games.Common.Client.Game.GsnFramePump>
struct  Singleton_1_t723570496  : public Il2CppObject
{
public:

public:
};

struct Singleton_1_t723570496_StaticFields
{
public:
	// T GSN.Skill.Games.Common.Client.Singleton`1::_instance
	GsnFramePump_t2543118307 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Singleton_1_t723570496_StaticFields, ____instance_0)); }
	inline GsnFramePump_t2543118307 * get__instance_0() const { return ____instance_0; }
	inline GsnFramePump_t2543118307 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(GsnFramePump_t2543118307 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
