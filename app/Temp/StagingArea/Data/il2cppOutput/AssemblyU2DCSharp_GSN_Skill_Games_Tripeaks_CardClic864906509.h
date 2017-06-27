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

// GSN.Skill.Games.Tripeaks.CardClickResultEvent
struct  CardClickResultEvent_t864906509 
{
public:
	// System.Boolean GSN.Skill.Games.Tripeaks.CardClickResultEvent::goodMove
	bool ___goodMove_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.CardClickResultEvent::cardID
	int32_t ___cardID_1;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.CardClickResultEvent::missedCards
	List_1_t1440998580 * ___missedCards_2;
	// System.Int32 GSN.Skill.Games.Tripeaks.CardClickResultEvent::streakLevel
	int32_t ___streakLevel_3;

public:
	inline static int32_t get_offset_of_goodMove_0() { return static_cast<int32_t>(offsetof(CardClickResultEvent_t864906509, ___goodMove_0)); }
	inline bool get_goodMove_0() const { return ___goodMove_0; }
	inline bool* get_address_of_goodMove_0() { return &___goodMove_0; }
	inline void set_goodMove_0(bool value)
	{
		___goodMove_0 = value;
	}

	inline static int32_t get_offset_of_cardID_1() { return static_cast<int32_t>(offsetof(CardClickResultEvent_t864906509, ___cardID_1)); }
	inline int32_t get_cardID_1() const { return ___cardID_1; }
	inline int32_t* get_address_of_cardID_1() { return &___cardID_1; }
	inline void set_cardID_1(int32_t value)
	{
		___cardID_1 = value;
	}

	inline static int32_t get_offset_of_missedCards_2() { return static_cast<int32_t>(offsetof(CardClickResultEvent_t864906509, ___missedCards_2)); }
	inline List_1_t1440998580 * get_missedCards_2() const { return ___missedCards_2; }
	inline List_1_t1440998580 ** get_address_of_missedCards_2() { return &___missedCards_2; }
	inline void set_missedCards_2(List_1_t1440998580 * value)
	{
		___missedCards_2 = value;
		Il2CppCodeGenWriteBarrier(&___missedCards_2, value);
	}

	inline static int32_t get_offset_of_streakLevel_3() { return static_cast<int32_t>(offsetof(CardClickResultEvent_t864906509, ___streakLevel_3)); }
	inline int32_t get_streakLevel_3() const { return ___streakLevel_3; }
	inline int32_t* get_address_of_streakLevel_3() { return &___streakLevel_3; }
	inline void set_streakLevel_3(int32_t value)
	{
		___streakLevel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Tripeaks.CardClickResultEvent
struct CardClickResultEvent_t864906509_marshaled_pinvoke
{
	int32_t ___goodMove_0;
	int32_t ___cardID_1;
	List_1_t1440998580 * ___missedCards_2;
	int32_t ___streakLevel_3;
};
// Native definition for COM marshalling of GSN.Skill.Games.Tripeaks.CardClickResultEvent
struct CardClickResultEvent_t864906509_marshaled_com
{
	int32_t ___goodMove_0;
	int32_t ___cardID_1;
	List_1_t1440998580 * ___missedCards_2;
	int32_t ___streakLevel_3;
};
