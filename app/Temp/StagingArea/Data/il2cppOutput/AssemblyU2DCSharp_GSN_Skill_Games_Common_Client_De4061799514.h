#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu/<StartGame>c__AnonStorey3
struct  U3CStartGameU3Ec__AnonStorey3_t4061799514  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.IGameSession GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu/<StartGame>c__AnonStorey3::session
	Il2CppObject * ___session_0;

public:
	inline static int32_t get_offset_of_session_0() { return static_cast<int32_t>(offsetof(U3CStartGameU3Ec__AnonStorey3_t4061799514, ___session_0)); }
	inline Il2CppObject * get_session_0() const { return ___session_0; }
	inline Il2CppObject ** get_address_of_session_0() { return &___session_0; }
	inline void set_session_0(Il2CppObject * value)
	{
		___session_0 = value;
		Il2CppCodeGenWriteBarrier(&___session_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
