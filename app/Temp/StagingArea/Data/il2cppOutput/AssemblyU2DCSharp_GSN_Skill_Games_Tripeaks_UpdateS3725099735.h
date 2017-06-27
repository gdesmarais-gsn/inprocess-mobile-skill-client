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

// GSN.Skill.Games.Tripeaks.UpdateScoreEvent
struct  UpdateScoreEvent_t3725099735 
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.UpdateScoreEvent::score
	int32_t ___score_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.UpdateScoreEvent::pointsEarned
	int32_t ___pointsEarned_1;
	// System.Int32 GSN.Skill.Games.Tripeaks.UpdateScoreEvent::streakCount
	int32_t ___streakCount_2;
	// System.Int32 GSN.Skill.Games.Tripeaks.UpdateScoreEvent::cardID
	int32_t ___cardID_3;

public:
	inline static int32_t get_offset_of_score_0() { return static_cast<int32_t>(offsetof(UpdateScoreEvent_t3725099735, ___score_0)); }
	inline int32_t get_score_0() const { return ___score_0; }
	inline int32_t* get_address_of_score_0() { return &___score_0; }
	inline void set_score_0(int32_t value)
	{
		___score_0 = value;
	}

	inline static int32_t get_offset_of_pointsEarned_1() { return static_cast<int32_t>(offsetof(UpdateScoreEvent_t3725099735, ___pointsEarned_1)); }
	inline int32_t get_pointsEarned_1() const { return ___pointsEarned_1; }
	inline int32_t* get_address_of_pointsEarned_1() { return &___pointsEarned_1; }
	inline void set_pointsEarned_1(int32_t value)
	{
		___pointsEarned_1 = value;
	}

	inline static int32_t get_offset_of_streakCount_2() { return static_cast<int32_t>(offsetof(UpdateScoreEvent_t3725099735, ___streakCount_2)); }
	inline int32_t get_streakCount_2() const { return ___streakCount_2; }
	inline int32_t* get_address_of_streakCount_2() { return &___streakCount_2; }
	inline void set_streakCount_2(int32_t value)
	{
		___streakCount_2 = value;
	}

	inline static int32_t get_offset_of_cardID_3() { return static_cast<int32_t>(offsetof(UpdateScoreEvent_t3725099735, ___cardID_3)); }
	inline int32_t get_cardID_3() const { return ___cardID_3; }
	inline int32_t* get_address_of_cardID_3() { return &___cardID_3; }
	inline void set_cardID_3(int32_t value)
	{
		___cardID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
