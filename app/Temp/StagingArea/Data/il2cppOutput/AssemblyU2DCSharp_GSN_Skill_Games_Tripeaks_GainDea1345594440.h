#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.GainDealCardsEvent
struct  GainDealCardsEvent_t1345594440 
{
public:
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.GainDealCardsEvent::newDealCards
	List_1_t1440998580 * ___newDealCards_0;

public:
	inline static int32_t get_offset_of_newDealCards_0() { return static_cast<int32_t>(offsetof(GainDealCardsEvent_t1345594440, ___newDealCards_0)); }
	inline List_1_t1440998580 * get_newDealCards_0() const { return ___newDealCards_0; }
	inline List_1_t1440998580 ** get_address_of_newDealCards_0() { return &___newDealCards_0; }
	inline void set_newDealCards_0(List_1_t1440998580 * value)
	{
		___newDealCards_0 = value;
		Il2CppCodeGenWriteBarrier(&___newDealCards_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Tripeaks.GainDealCardsEvent
struct GainDealCardsEvent_t1345594440_marshaled_pinvoke
{
	List_1_t1440998580 * ___newDealCards_0;
};
// Native definition for COM marshalling of GSN.Skill.Games.Tripeaks.GainDealCardsEvent
struct GainDealCardsEvent_t1345594440_marshaled_com
{
	List_1_t1440998580 * ___newDealCards_0;
};
