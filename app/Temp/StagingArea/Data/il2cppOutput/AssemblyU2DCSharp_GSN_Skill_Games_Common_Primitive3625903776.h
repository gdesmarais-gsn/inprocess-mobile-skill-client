#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck
struct GsnCardDeck_t1784400993;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile
struct  GsnCardPile_t3625903776  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::_deck
	GsnCardDeck_t1784400993 * ____deck_0;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::_cards
	List_1_t1440998580 * ____cards_1;
	// System.Boolean GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::_sortAscending
	bool ____sortAscending_2;
	// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::<pileID>k__BackingField
	int32_t ___U3CpileIDU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__deck_0() { return static_cast<int32_t>(offsetof(GsnCardPile_t3625903776, ____deck_0)); }
	inline GsnCardDeck_t1784400993 * get__deck_0() const { return ____deck_0; }
	inline GsnCardDeck_t1784400993 ** get_address_of__deck_0() { return &____deck_0; }
	inline void set__deck_0(GsnCardDeck_t1784400993 * value)
	{
		____deck_0 = value;
		Il2CppCodeGenWriteBarrier(&____deck_0, value);
	}

	inline static int32_t get_offset_of__cards_1() { return static_cast<int32_t>(offsetof(GsnCardPile_t3625903776, ____cards_1)); }
	inline List_1_t1440998580 * get__cards_1() const { return ____cards_1; }
	inline List_1_t1440998580 ** get_address_of__cards_1() { return &____cards_1; }
	inline void set__cards_1(List_1_t1440998580 * value)
	{
		____cards_1 = value;
		Il2CppCodeGenWriteBarrier(&____cards_1, value);
	}

	inline static int32_t get_offset_of__sortAscending_2() { return static_cast<int32_t>(offsetof(GsnCardPile_t3625903776, ____sortAscending_2)); }
	inline bool get__sortAscending_2() const { return ____sortAscending_2; }
	inline bool* get_address_of__sortAscending_2() { return &____sortAscending_2; }
	inline void set__sortAscending_2(bool value)
	{
		____sortAscending_2 = value;
	}

	inline static int32_t get_offset_of_U3CpileIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GsnCardPile_t3625903776, ___U3CpileIDU3Ek__BackingField_3)); }
	inline int32_t get_U3CpileIDU3Ek__BackingField_3() const { return ___U3CpileIDU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CpileIDU3Ek__BackingField_3() { return &___U3CpileIDU3Ek__BackingField_3; }
	inline void set_U3CpileIDU3Ek__BackingField_3(int32_t value)
	{
		___U3CpileIDU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
