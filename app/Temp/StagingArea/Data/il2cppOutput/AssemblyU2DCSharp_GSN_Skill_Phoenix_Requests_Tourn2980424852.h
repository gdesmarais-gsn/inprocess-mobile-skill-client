#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/UserPlayData
struct  UserPlayData_t2980424852 
{
public:
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/UserPlayData::total_cash_games_played
	int32_t ___total_cash_games_played_0;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/UserPlayData::total_game_specific_games_played
	int32_t ___total_game_specific_games_played_1;

public:
	inline static int32_t get_offset_of_total_cash_games_played_0() { return static_cast<int32_t>(offsetof(UserPlayData_t2980424852, ___total_cash_games_played_0)); }
	inline int32_t get_total_cash_games_played_0() const { return ___total_cash_games_played_0; }
	inline int32_t* get_address_of_total_cash_games_played_0() { return &___total_cash_games_played_0; }
	inline void set_total_cash_games_played_0(int32_t value)
	{
		___total_cash_games_played_0 = value;
	}

	inline static int32_t get_offset_of_total_game_specific_games_played_1() { return static_cast<int32_t>(offsetof(UserPlayData_t2980424852, ___total_game_specific_games_played_1)); }
	inline int32_t get_total_game_specific_games_played_1() const { return ___total_game_specific_games_played_1; }
	inline int32_t* get_address_of_total_game_specific_games_played_1() { return &___total_game_specific_games_played_1; }
	inline void set_total_game_specific_games_played_1(int32_t value)
	{
		___total_game_specific_games_played_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
