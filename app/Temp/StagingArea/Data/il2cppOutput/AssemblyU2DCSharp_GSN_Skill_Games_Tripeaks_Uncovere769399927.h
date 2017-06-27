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

// GSN.Skill.Games.Tripeaks.UncoveredCardUndoStep
struct  UncoveredCardUndoStep_t769399927 
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.UncoveredCardUndoStep::cardIndex
	int32_t ___cardIndex_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.UncoveredCardUndoStep::cardCovered
	int32_t ___cardCovered_1;

public:
	inline static int32_t get_offset_of_cardIndex_0() { return static_cast<int32_t>(offsetof(UncoveredCardUndoStep_t769399927, ___cardIndex_0)); }
	inline int32_t get_cardIndex_0() const { return ___cardIndex_0; }
	inline int32_t* get_address_of_cardIndex_0() { return &___cardIndex_0; }
	inline void set_cardIndex_0(int32_t value)
	{
		___cardIndex_0 = value;
	}

	inline static int32_t get_offset_of_cardCovered_1() { return static_cast<int32_t>(offsetof(UncoveredCardUndoStep_t769399927, ___cardCovered_1)); }
	inline int32_t get_cardCovered_1() const { return ___cardCovered_1; }
	inline int32_t* get_address_of_cardCovered_1() { return &___cardCovered_1; }
	inline void set_cardCovered_1(int32_t value)
	{
		___cardCovered_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
