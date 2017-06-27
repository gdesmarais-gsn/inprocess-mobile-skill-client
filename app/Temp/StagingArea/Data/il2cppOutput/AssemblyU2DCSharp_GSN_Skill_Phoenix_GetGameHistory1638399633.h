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

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GameHistoryDat2847545764.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GetGameHistorySuccessEvent
struct  GetGameHistorySuccessEvent_t1638399633  : public GameHistoryDataEvent_t2847545764
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData> GSN.Skill.Phoenix.GetGameHistorySuccessEvent::unplayedUnsupportedTournaments
	List_1_t2065092575 * ___unplayedUnsupportedTournaments_2;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData> GSN.Skill.Phoenix.GetGameHistorySuccessEvent::unplayedSupportedTournaments
	List_1_t2065092575 * ___unplayedSupportedTournaments_3;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData> GSN.Skill.Phoenix.GetGameHistorySuccessEvent::openSupportedTournaments
	List_1_t2065092575 * ___openSupportedTournaments_4;

public:
	inline static int32_t get_offset_of_unplayedUnsupportedTournaments_2() { return static_cast<int32_t>(offsetof(GetGameHistorySuccessEvent_t1638399633, ___unplayedUnsupportedTournaments_2)); }
	inline List_1_t2065092575 * get_unplayedUnsupportedTournaments_2() const { return ___unplayedUnsupportedTournaments_2; }
	inline List_1_t2065092575 ** get_address_of_unplayedUnsupportedTournaments_2() { return &___unplayedUnsupportedTournaments_2; }
	inline void set_unplayedUnsupportedTournaments_2(List_1_t2065092575 * value)
	{
		___unplayedUnsupportedTournaments_2 = value;
		Il2CppCodeGenWriteBarrier(&___unplayedUnsupportedTournaments_2, value);
	}

	inline static int32_t get_offset_of_unplayedSupportedTournaments_3() { return static_cast<int32_t>(offsetof(GetGameHistorySuccessEvent_t1638399633, ___unplayedSupportedTournaments_3)); }
	inline List_1_t2065092575 * get_unplayedSupportedTournaments_3() const { return ___unplayedSupportedTournaments_3; }
	inline List_1_t2065092575 ** get_address_of_unplayedSupportedTournaments_3() { return &___unplayedSupportedTournaments_3; }
	inline void set_unplayedSupportedTournaments_3(List_1_t2065092575 * value)
	{
		___unplayedSupportedTournaments_3 = value;
		Il2CppCodeGenWriteBarrier(&___unplayedSupportedTournaments_3, value);
	}

	inline static int32_t get_offset_of_openSupportedTournaments_4() { return static_cast<int32_t>(offsetof(GetGameHistorySuccessEvent_t1638399633, ___openSupportedTournaments_4)); }
	inline List_1_t2065092575 * get_openSupportedTournaments_4() const { return ___openSupportedTournaments_4; }
	inline List_1_t2065092575 ** get_address_of_openSupportedTournaments_4() { return &___openSupportedTournaments_4; }
	inline void set_openSupportedTournaments_4(List_1_t2065092575 * value)
	{
		___openSupportedTournaments_4 = value;
		Il2CppCodeGenWriteBarrier(&___openSupportedTournaments_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
