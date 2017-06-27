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

// GSN.Skill.Games.Common.Events.ScoreUpdateEvent
struct  ScoreUpdateEvent_t1883954053 
{
public:
	// System.Int32 GSN.Skill.Games.Common.Events.ScoreUpdateEvent::score
	int32_t ___score_0;

public:
	inline static int32_t get_offset_of_score_0() { return static_cast<int32_t>(offsetof(ScoreUpdateEvent_t1883954053, ___score_0)); }
	inline int32_t get_score_0() const { return ___score_0; }
	inline int32_t* get_address_of_score_0() { return &___score_0; }
	inline void set_score_0(int32_t value)
	{
		___score_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
