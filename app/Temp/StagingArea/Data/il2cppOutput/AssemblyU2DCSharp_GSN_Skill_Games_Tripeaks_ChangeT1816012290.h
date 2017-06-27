#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_CardTyp2845949242.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.ChangeTypeUndoStep
struct  ChangeTypeUndoStep_t1816012290 
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.ChangeTypeUndoStep::cardIndex
	int32_t ___cardIndex_0;
	// GSN.Skill.Games.Tripeaks.CardType GSN.Skill.Games.Tripeaks.ChangeTypeUndoStep::cardType
	int32_t ___cardType_1;

public:
	inline static int32_t get_offset_of_cardIndex_0() { return static_cast<int32_t>(offsetof(ChangeTypeUndoStep_t1816012290, ___cardIndex_0)); }
	inline int32_t get_cardIndex_0() const { return ___cardIndex_0; }
	inline int32_t* get_address_of_cardIndex_0() { return &___cardIndex_0; }
	inline void set_cardIndex_0(int32_t value)
	{
		___cardIndex_0 = value;
	}

	inline static int32_t get_offset_of_cardType_1() { return static_cast<int32_t>(offsetof(ChangeTypeUndoStep_t1816012290, ___cardType_1)); }
	inline int32_t get_cardType_1() const { return ___cardType_1; }
	inline int32_t* get_address_of_cardType_1() { return &___cardType_1; }
	inline void set_cardType_1(int32_t value)
	{
		___cardType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
