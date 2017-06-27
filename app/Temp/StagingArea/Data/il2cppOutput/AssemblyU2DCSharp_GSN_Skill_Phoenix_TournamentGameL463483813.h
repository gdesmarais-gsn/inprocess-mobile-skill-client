#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentListEvent/TournamentData>
struct List_1_t4278685683;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentList2843107239.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.TournamentGameListEvent
struct  TournamentGameListEvent_t463483813  : public TournamentListEvent_t2843107239
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentListEvent/TournamentData> GSN.Skill.Phoenix.TournamentGameListEvent::data
	List_1_t4278685683 * ___data_0;
	// System.Int32 GSN.Skill.Phoenix.TournamentGameListEvent::numCashGamesPlays
	int32_t ___numCashGamesPlays_1;
	// System.Int32 GSN.Skill.Phoenix.TournamentGameListEvent::numSpecificGamePlays
	int32_t ___numSpecificGamePlays_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(TournamentGameListEvent_t463483813, ___data_0)); }
	inline List_1_t4278685683 * get_data_0() const { return ___data_0; }
	inline List_1_t4278685683 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(List_1_t4278685683 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_numCashGamesPlays_1() { return static_cast<int32_t>(offsetof(TournamentGameListEvent_t463483813, ___numCashGamesPlays_1)); }
	inline int32_t get_numCashGamesPlays_1() const { return ___numCashGamesPlays_1; }
	inline int32_t* get_address_of_numCashGamesPlays_1() { return &___numCashGamesPlays_1; }
	inline void set_numCashGamesPlays_1(int32_t value)
	{
		___numCashGamesPlays_1 = value;
	}

	inline static int32_t get_offset_of_numSpecificGamePlays_2() { return static_cast<int32_t>(offsetof(TournamentGameListEvent_t463483813, ___numSpecificGamePlays_2)); }
	inline int32_t get_numSpecificGamePlays_2() const { return ___numSpecificGamePlays_2; }
	inline int32_t* get_address_of_numSpecificGamePlays_2() { return &___numSpecificGamePlays_2; }
	inline void set_numSpecificGamePlays_2(int32_t value)
	{
		___numSpecificGamePlays_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
