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

// GSN.Skill.Games.Tripeaks.AdvanceTurnCardUndoStep
struct  AdvanceTurnCardUndoStep_t4144436193 
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.AdvanceTurnCardUndoStep::cardID
	int32_t ___cardID_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.AdvanceTurnCardUndoStep::activationCounter
	int32_t ___activationCounter_1;

public:
	inline static int32_t get_offset_of_cardID_0() { return static_cast<int32_t>(offsetof(AdvanceTurnCardUndoStep_t4144436193, ___cardID_0)); }
	inline int32_t get_cardID_0() const { return ___cardID_0; }
	inline int32_t* get_address_of_cardID_0() { return &___cardID_0; }
	inline void set_cardID_0(int32_t value)
	{
		___cardID_0 = value;
	}

	inline static int32_t get_offset_of_activationCounter_1() { return static_cast<int32_t>(offsetof(AdvanceTurnCardUndoStep_t4144436193, ___activationCounter_1)); }
	inline int32_t get_activationCounter_1() const { return ___activationCounter_1; }
	inline int32_t* get_address_of_activationCounter_1() { return &___activationCounter_1; }
	inline void set_activationCounter_1(int32_t value)
	{
		___activationCounter_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
