﻿#pragma once

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

// GSN.Skill.Games.Tripeaks.ModifyScoreUndoStep
struct  ModifyScoreUndoStep_t483283180 
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.ModifyScoreUndoStep::streakPoints
	int32_t ___streakPoints_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.ModifyScoreUndoStep::cardID
	int32_t ___cardID_1;

public:
	inline static int32_t get_offset_of_streakPoints_0() { return static_cast<int32_t>(offsetof(ModifyScoreUndoStep_t483283180, ___streakPoints_0)); }
	inline int32_t get_streakPoints_0() const { return ___streakPoints_0; }
	inline int32_t* get_address_of_streakPoints_0() { return &___streakPoints_0; }
	inline void set_streakPoints_0(int32_t value)
	{
		___streakPoints_0 = value;
	}

	inline static int32_t get_offset_of_cardID_1() { return static_cast<int32_t>(offsetof(ModifyScoreUndoStep_t483283180, ___cardID_1)); }
	inline int32_t get_cardID_1() const { return ___cardID_1; }
	inline int32_t* get_address_of_cardID_1() { return &___cardID_1; }
	inline void set_cardID_1(int32_t value)
	{
		___cardID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
