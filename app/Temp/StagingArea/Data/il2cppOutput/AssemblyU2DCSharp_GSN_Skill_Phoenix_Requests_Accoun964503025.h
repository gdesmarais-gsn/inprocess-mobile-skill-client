#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Level[]
struct LevelU5BU5D_t2411264445;
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Result
struct  Result_t964503025  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Level[] GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Result::levels
	LevelU5BU5D_t2411264445* ___levels_0;
	// System.Int32 GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Result::end_week
	int32_t ___end_week_1;
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Result::user
	User_t1577144177 * ___user_2;
	// System.Int32 GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Result::games_played
	int32_t ___games_played_3;
	// System.Int32 GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Result::current_level
	int32_t ___current_level_4;
	// System.Int32 GSN.Skill.Phoenix.Requests.Account.WeeklyMilestoneProgressData/Result::begin_week
	int32_t ___begin_week_5;

public:
	inline static int32_t get_offset_of_levels_0() { return static_cast<int32_t>(offsetof(Result_t964503025, ___levels_0)); }
	inline LevelU5BU5D_t2411264445* get_levels_0() const { return ___levels_0; }
	inline LevelU5BU5D_t2411264445** get_address_of_levels_0() { return &___levels_0; }
	inline void set_levels_0(LevelU5BU5D_t2411264445* value)
	{
		___levels_0 = value;
		Il2CppCodeGenWriteBarrier(&___levels_0, value);
	}

	inline static int32_t get_offset_of_end_week_1() { return static_cast<int32_t>(offsetof(Result_t964503025, ___end_week_1)); }
	inline int32_t get_end_week_1() const { return ___end_week_1; }
	inline int32_t* get_address_of_end_week_1() { return &___end_week_1; }
	inline void set_end_week_1(int32_t value)
	{
		___end_week_1 = value;
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(Result_t964503025, ___user_2)); }
	inline User_t1577144177 * get_user_2() const { return ___user_2; }
	inline User_t1577144177 ** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(User_t1577144177 * value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier(&___user_2, value);
	}

	inline static int32_t get_offset_of_games_played_3() { return static_cast<int32_t>(offsetof(Result_t964503025, ___games_played_3)); }
	inline int32_t get_games_played_3() const { return ___games_played_3; }
	inline int32_t* get_address_of_games_played_3() { return &___games_played_3; }
	inline void set_games_played_3(int32_t value)
	{
		___games_played_3 = value;
	}

	inline static int32_t get_offset_of_current_level_4() { return static_cast<int32_t>(offsetof(Result_t964503025, ___current_level_4)); }
	inline int32_t get_current_level_4() const { return ___current_level_4; }
	inline int32_t* get_address_of_current_level_4() { return &___current_level_4; }
	inline void set_current_level_4(int32_t value)
	{
		___current_level_4 = value;
	}

	inline static int32_t get_offset_of_begin_week_5() { return static_cast<int32_t>(offsetof(Result_t964503025, ___begin_week_5)); }
	inline int32_t get_begin_week_5() const { return ___begin_week_5; }
	inline int32_t* get_address_of_begin_week_5() { return &___begin_week_5; }
	inline void set_begin_week_5(int32_t value)
	{
		___begin_week_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
