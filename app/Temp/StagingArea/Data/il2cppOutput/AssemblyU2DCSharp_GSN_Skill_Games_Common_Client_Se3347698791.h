#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStageRequestData
struct TriPeaksStageRequestData_t4037673254;
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

// GSN.Skill.Games.Common.Client.Session.GameSession/<JoinTournament>c__AnonStorey0
struct  U3CJoinTournamentU3Ec__AnonStorey0_t3347698791  : public Il2CppObject
{
public:
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStageRequestData GSN.Skill.Games.Common.Client.Session.GameSession/<JoinTournament>c__AnonStorey0::joinGame
	TriPeaksStageRequestData_t4037673254 * ___joinGame_0;
	// System.Action GSN.Skill.Games.Common.Client.Session.GameSession/<JoinTournament>c__AnonStorey0::doneAction
	Action_t3226471752 * ___doneAction_1;
	// GSN.Skill.Games.Common.Client.Session.GameSession GSN.Skill.Games.Common.Client.Session.GameSession/<JoinTournament>c__AnonStorey0::$this
	GameSession_t3448824060 * ___U24this_2;

public:
	inline static int32_t get_offset_of_joinGame_0() { return static_cast<int32_t>(offsetof(U3CJoinTournamentU3Ec__AnonStorey0_t3347698791, ___joinGame_0)); }
	inline TriPeaksStageRequestData_t4037673254 * get_joinGame_0() const { return ___joinGame_0; }
	inline TriPeaksStageRequestData_t4037673254 ** get_address_of_joinGame_0() { return &___joinGame_0; }
	inline void set_joinGame_0(TriPeaksStageRequestData_t4037673254 * value)
	{
		___joinGame_0 = value;
		Il2CppCodeGenWriteBarrier(&___joinGame_0, value);
	}

	inline static int32_t get_offset_of_doneAction_1() { return static_cast<int32_t>(offsetof(U3CJoinTournamentU3Ec__AnonStorey0_t3347698791, ___doneAction_1)); }
	inline Action_t3226471752 * get_doneAction_1() const { return ___doneAction_1; }
	inline Action_t3226471752 ** get_address_of_doneAction_1() { return &___doneAction_1; }
	inline void set_doneAction_1(Action_t3226471752 * value)
	{
		___doneAction_1 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CJoinTournamentU3Ec__AnonStorey0_t3347698791, ___U24this_2)); }
	inline GameSession_t3448824060 * get_U24this_2() const { return ___U24this_2; }
	inline GameSession_t3448824060 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(GameSession_t3448824060 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
