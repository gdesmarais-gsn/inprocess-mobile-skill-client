#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent
struct  DealCardsEvent_t2531298357 
{
public:
	// System.String GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent::deck
	String_t* ___deck_0;

public:
	inline static int32_t get_offset_of_deck_0() { return static_cast<int32_t>(offsetof(DealCardsEvent_t2531298357, ___deck_0)); }
	inline String_t* get_deck_0() const { return ___deck_0; }
	inline String_t** get_address_of_deck_0() { return &___deck_0; }
	inline void set_deck_0(String_t* value)
	{
		___deck_0 = value;
		Il2CppCodeGenWriteBarrier(&___deck_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent
struct DealCardsEvent_t2531298357_marshaled_pinvoke
{
	char* ___deck_0;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent
struct DealCardsEvent_t2531298357_marshaled_com
{
	Il2CppChar* ___deck_0;
};
