#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentList2843107239.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentListE614597255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.TournamentDetailsReadyEvent
struct  TournamentDetailsReadyEvent_t760686096  : public TournamentListEvent_t2843107239
{
public:
	// GSN.Skill.Phoenix.TournamentListEvent/TournamentData GSN.Skill.Phoenix.TournamentDetailsReadyEvent::details
	TournamentData_t614597255  ___details_0;
	// System.Int32 GSN.Skill.Phoenix.TournamentDetailsReadyEvent::totalCashGamePlays
	int32_t ___totalCashGamePlays_1;
	// System.Int32 GSN.Skill.Phoenix.TournamentDetailsReadyEvent::totalSpecificGamePlays
	int32_t ___totalSpecificGamePlays_2;

public:
	inline static int32_t get_offset_of_details_0() { return static_cast<int32_t>(offsetof(TournamentDetailsReadyEvent_t760686096, ___details_0)); }
	inline TournamentData_t614597255  get_details_0() const { return ___details_0; }
	inline TournamentData_t614597255 * get_address_of_details_0() { return &___details_0; }
	inline void set_details_0(TournamentData_t614597255  value)
	{
		___details_0 = value;
	}

	inline static int32_t get_offset_of_totalCashGamePlays_1() { return static_cast<int32_t>(offsetof(TournamentDetailsReadyEvent_t760686096, ___totalCashGamePlays_1)); }
	inline int32_t get_totalCashGamePlays_1() const { return ___totalCashGamePlays_1; }
	inline int32_t* get_address_of_totalCashGamePlays_1() { return &___totalCashGamePlays_1; }
	inline void set_totalCashGamePlays_1(int32_t value)
	{
		___totalCashGamePlays_1 = value;
	}

	inline static int32_t get_offset_of_totalSpecificGamePlays_2() { return static_cast<int32_t>(offsetof(TournamentDetailsReadyEvent_t760686096, ___totalSpecificGamePlays_2)); }
	inline int32_t get_totalSpecificGamePlays_2() const { return ___totalSpecificGamePlays_2; }
	inline int32_t* get_address_of_totalSpecificGamePlays_2() { return &___totalSpecificGamePlays_2; }
	inline void set_totalSpecificGamePlays_2(int32_t value)
	{
		___totalSpecificGamePlays_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
