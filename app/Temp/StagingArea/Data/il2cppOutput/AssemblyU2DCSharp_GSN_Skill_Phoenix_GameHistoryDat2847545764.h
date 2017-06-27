#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData>
struct List_1_t2065092575;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GameHistoryDataEvent
struct  GameHistoryDataEvent_t2847545764  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData> GSN.Skill.Phoenix.GameHistoryDataEvent::closedSupportedTournaments
	List_1_t2065092575 * ___closedSupportedTournaments_0;
	// System.Boolean GSN.Skill.Phoenix.GameHistoryDataEvent::moreAvailable
	bool ___moreAvailable_1;

public:
	inline static int32_t get_offset_of_closedSupportedTournaments_0() { return static_cast<int32_t>(offsetof(GameHistoryDataEvent_t2847545764, ___closedSupportedTournaments_0)); }
	inline List_1_t2065092575 * get_closedSupportedTournaments_0() const { return ___closedSupportedTournaments_0; }
	inline List_1_t2065092575 ** get_address_of_closedSupportedTournaments_0() { return &___closedSupportedTournaments_0; }
	inline void set_closedSupportedTournaments_0(List_1_t2065092575 * value)
	{
		___closedSupportedTournaments_0 = value;
		Il2CppCodeGenWriteBarrier(&___closedSupportedTournaments_0, value);
	}

	inline static int32_t get_offset_of_moreAvailable_1() { return static_cast<int32_t>(offsetof(GameHistoryDataEvent_t2847545764, ___moreAvailable_1)); }
	inline bool get_moreAvailable_1() const { return ___moreAvailable_1; }
	inline bool* get_address_of_moreAvailable_1() { return &___moreAvailable_1; }
	inline void set_moreAvailable_1(bool value)
	{
		___moreAvailable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
