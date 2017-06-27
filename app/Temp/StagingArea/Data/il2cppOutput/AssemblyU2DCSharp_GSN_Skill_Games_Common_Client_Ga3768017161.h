#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.UIStartScreenBase
struct UIStartScreenBase_t566610785;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.StandardViewMode
struct  StandardViewMode_t3768017161  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Client.UIStartScreenBase GSN.Skill.Games.Common.Client.Game.StandardViewMode::_startScreen
	UIStartScreenBase_t566610785 * ____startScreen_0;

public:
	inline static int32_t get_offset_of__startScreen_0() { return static_cast<int32_t>(offsetof(StandardViewMode_t3768017161, ____startScreen_0)); }
	inline UIStartScreenBase_t566610785 * get__startScreen_0() const { return ____startScreen_0; }
	inline UIStartScreenBase_t566610785 ** get_address_of__startScreen_0() { return &____startScreen_0; }
	inline void set__startScreen_0(UIStartScreenBase_t566610785 * value)
	{
		____startScreen_0 = value;
		Il2CppCodeGenWriteBarrier(&____startScreen_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
