#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>
struct List_1_t4087109391;
// GSN.Skill.Games.Tripeaks.TikiCardData
struct TikiCardData_t3556096769;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.PlayfieldModelData
struct  PlayfieldModelData_t1827511723  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData> GSN.Skill.Games.Tripeaks.PlayfieldModelData::cards
	List_1_t4087109391 * ___cards_0;
	// GSN.Skill.Games.Tripeaks.TikiCardData GSN.Skill.Games.Tripeaks.PlayfieldModelData::redData
	TikiCardData_t3556096769 * ___redData_1;
	// GSN.Skill.Games.Tripeaks.TikiCardData GSN.Skill.Games.Tripeaks.PlayfieldModelData::blackData
	TikiCardData_t3556096769 * ___blackData_2;
	// GSN.Skill.Games.Tripeaks.TikiCardData GSN.Skill.Games.Tripeaks.PlayfieldModelData::goldenData
	TikiCardData_t3556096769 * ___goldenData_3;
	// GSN.Skill.Games.Tripeaks.TikiCardData GSN.Skill.Games.Tripeaks.PlayfieldModelData::volcanoData
	TikiCardData_t3556096769 * ___volcanoData_4;
	// GSN.Skill.Games.Tripeaks.TikiCardData GSN.Skill.Games.Tripeaks.PlayfieldModelData::flowerData
	TikiCardData_t3556096769 * ___flowerData_5;

public:
	inline static int32_t get_offset_of_cards_0() { return static_cast<int32_t>(offsetof(PlayfieldModelData_t1827511723, ___cards_0)); }
	inline List_1_t4087109391 * get_cards_0() const { return ___cards_0; }
	inline List_1_t4087109391 ** get_address_of_cards_0() { return &___cards_0; }
	inline void set_cards_0(List_1_t4087109391 * value)
	{
		___cards_0 = value;
		Il2CppCodeGenWriteBarrier(&___cards_0, value);
	}

	inline static int32_t get_offset_of_redData_1() { return static_cast<int32_t>(offsetof(PlayfieldModelData_t1827511723, ___redData_1)); }
	inline TikiCardData_t3556096769 * get_redData_1() const { return ___redData_1; }
	inline TikiCardData_t3556096769 ** get_address_of_redData_1() { return &___redData_1; }
	inline void set_redData_1(TikiCardData_t3556096769 * value)
	{
		___redData_1 = value;
		Il2CppCodeGenWriteBarrier(&___redData_1, value);
	}

	inline static int32_t get_offset_of_blackData_2() { return static_cast<int32_t>(offsetof(PlayfieldModelData_t1827511723, ___blackData_2)); }
	inline TikiCardData_t3556096769 * get_blackData_2() const { return ___blackData_2; }
	inline TikiCardData_t3556096769 ** get_address_of_blackData_2() { return &___blackData_2; }
	inline void set_blackData_2(TikiCardData_t3556096769 * value)
	{
		___blackData_2 = value;
		Il2CppCodeGenWriteBarrier(&___blackData_2, value);
	}

	inline static int32_t get_offset_of_goldenData_3() { return static_cast<int32_t>(offsetof(PlayfieldModelData_t1827511723, ___goldenData_3)); }
	inline TikiCardData_t3556096769 * get_goldenData_3() const { return ___goldenData_3; }
	inline TikiCardData_t3556096769 ** get_address_of_goldenData_3() { return &___goldenData_3; }
	inline void set_goldenData_3(TikiCardData_t3556096769 * value)
	{
		___goldenData_3 = value;
		Il2CppCodeGenWriteBarrier(&___goldenData_3, value);
	}

	inline static int32_t get_offset_of_volcanoData_4() { return static_cast<int32_t>(offsetof(PlayfieldModelData_t1827511723, ___volcanoData_4)); }
	inline TikiCardData_t3556096769 * get_volcanoData_4() const { return ___volcanoData_4; }
	inline TikiCardData_t3556096769 ** get_address_of_volcanoData_4() { return &___volcanoData_4; }
	inline void set_volcanoData_4(TikiCardData_t3556096769 * value)
	{
		___volcanoData_4 = value;
		Il2CppCodeGenWriteBarrier(&___volcanoData_4, value);
	}

	inline static int32_t get_offset_of_flowerData_5() { return static_cast<int32_t>(offsetof(PlayfieldModelData_t1827511723, ___flowerData_5)); }
	inline TikiCardData_t3556096769 * get_flowerData_5() const { return ___flowerData_5; }
	inline TikiCardData_t3556096769 ** get_address_of_flowerData_5() { return &___flowerData_5; }
	inline void set_flowerData_5(TikiCardData_t3556096769 * value)
	{
		___flowerData_5 = value;
		Il2CppCodeGenWriteBarrier(&___flowerData_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
