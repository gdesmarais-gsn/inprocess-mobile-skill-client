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

// GSN.Skill.Games.Tripeaks.BeginUndoStep
struct  BeginUndoStep_t4074255339 
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.BeginUndoStep::stateTimeMS
	int32_t ___stateTimeMS_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.BeginUndoStep::accumulatedPauseTime
	int32_t ___accumulatedPauseTime_1;

public:
	inline static int32_t get_offset_of_stateTimeMS_0() { return static_cast<int32_t>(offsetof(BeginUndoStep_t4074255339, ___stateTimeMS_0)); }
	inline int32_t get_stateTimeMS_0() const { return ___stateTimeMS_0; }
	inline int32_t* get_address_of_stateTimeMS_0() { return &___stateTimeMS_0; }
	inline void set_stateTimeMS_0(int32_t value)
	{
		___stateTimeMS_0 = value;
	}

	inline static int32_t get_offset_of_accumulatedPauseTime_1() { return static_cast<int32_t>(offsetof(BeginUndoStep_t4074255339, ___accumulatedPauseTime_1)); }
	inline int32_t get_accumulatedPauseTime_1() const { return ___accumulatedPauseTime_1; }
	inline int32_t* get_address_of_accumulatedPauseTime_1() { return &___accumulatedPauseTime_1; }
	inline void set_accumulatedPauseTime_1(int32_t value)
	{
		___accumulatedPauseTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
