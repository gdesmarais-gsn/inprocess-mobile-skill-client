#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Client.Session.GameSession
struct GameSession_t3448824060;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.GameSession/<StartGame>c__AnonStorey2
struct  U3CStartGameU3Ec__AnonStorey2_t2695894550  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Games.Common.Client.Session.GameSession/<StartGame>c__AnonStorey2::doneAction
	Action_t3226471752 * ___doneAction_0;
	// GSN.Skill.Games.Common.Client.Session.GameSession GSN.Skill.Games.Common.Client.Session.GameSession/<StartGame>c__AnonStorey2::$this
	GameSession_t3448824060 * ___U24this_1;

public:
	inline static int32_t get_offset_of_doneAction_0() { return static_cast<int32_t>(offsetof(U3CStartGameU3Ec__AnonStorey2_t2695894550, ___doneAction_0)); }
	inline Action_t3226471752 * get_doneAction_0() const { return ___doneAction_0; }
	inline Action_t3226471752 ** get_address_of_doneAction_0() { return &___doneAction_0; }
	inline void set_doneAction_0(Action_t3226471752 * value)
	{
		___doneAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartGameU3Ec__AnonStorey2_t2695894550, ___U24this_1)); }
	inline GameSession_t3448824060 * get_U24this_1() const { return ___U24this_1; }
	inline GameSession_t3448824060 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GameSession_t3448824060 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
