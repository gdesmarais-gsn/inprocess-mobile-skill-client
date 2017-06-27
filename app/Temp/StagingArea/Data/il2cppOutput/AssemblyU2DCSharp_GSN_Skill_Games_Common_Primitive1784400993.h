#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Primitive.Card.GsnCard>
struct List_1_t151565892;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck
struct  GsnCardDeck_t1784400993  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Primitive.Card.GsnCard> GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::_cards
	List_1_t151565892 * ____cards_0;

public:
	inline static int32_t get_offset_of__cards_0() { return static_cast<int32_t>(offsetof(GsnCardDeck_t1784400993, ____cards_0)); }
	inline List_1_t151565892 * get__cards_0() const { return ____cards_0; }
	inline List_1_t151565892 ** get_address_of__cards_0() { return &____cards_0; }
	inline void set__cards_0(List_1_t151565892 * value)
	{
		____cards_0 = value;
		Il2CppCodeGenWriteBarrier(&____cards_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
