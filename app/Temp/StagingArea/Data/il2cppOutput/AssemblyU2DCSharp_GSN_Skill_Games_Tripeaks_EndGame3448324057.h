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

// GSN.Skill.Games.Tripeaks.EndGameEvent
struct  EndGameEvent_t3448324057 
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.EndGameEvent::matches
	int32_t ___matches_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.EndGameEvent::streaks
	int32_t ___streaks_1;
	// System.Int32 GSN.Skill.Games.Tripeaks.EndGameEvent::time
	int32_t ___time_2;
	// System.Int32 GSN.Skill.Games.Tripeaks.EndGameEvent::endReason
	int32_t ___endReason_3;

public:
	inline static int32_t get_offset_of_matches_0() { return static_cast<int32_t>(offsetof(EndGameEvent_t3448324057, ___matches_0)); }
	inline int32_t get_matches_0() const { return ___matches_0; }
	inline int32_t* get_address_of_matches_0() { return &___matches_0; }
	inline void set_matches_0(int32_t value)
	{
		___matches_0 = value;
	}

	inline static int32_t get_offset_of_streaks_1() { return static_cast<int32_t>(offsetof(EndGameEvent_t3448324057, ___streaks_1)); }
	inline int32_t get_streaks_1() const { return ___streaks_1; }
	inline int32_t* get_address_of_streaks_1() { return &___streaks_1; }
	inline void set_streaks_1(int32_t value)
	{
		___streaks_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(EndGameEvent_t3448324057, ___time_2)); }
	inline int32_t get_time_2() const { return ___time_2; }
	inline int32_t* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(int32_t value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_endReason_3() { return static_cast<int32_t>(offsetof(EndGameEvent_t3448324057, ___endReason_3)); }
	inline int32_t get_endReason_3() const { return ___endReason_3; }
	inline int32_t* get_address_of_endReason_3() { return &___endReason_3; }
	inline void set_endReason_3(int32_t value)
	{
		___endReason_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
