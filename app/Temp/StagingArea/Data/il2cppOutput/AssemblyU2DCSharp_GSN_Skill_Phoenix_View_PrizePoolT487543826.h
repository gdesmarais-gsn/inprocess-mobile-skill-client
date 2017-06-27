#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseView2538946938.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.PrizePoolTile
struct  PrizePoolTile_t487543826  : public BaseView_t2538946938
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PrizePoolTile::_place
	TextMeshProUGUI_t934157183 * ____place_5;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PrizePoolTile::_prize
	TextMeshProUGUI_t934157183 * ____prize_6;

public:
	inline static int32_t get_offset_of__place_5() { return static_cast<int32_t>(offsetof(PrizePoolTile_t487543826, ____place_5)); }
	inline TextMeshProUGUI_t934157183 * get__place_5() const { return ____place_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__place_5() { return &____place_5; }
	inline void set__place_5(TextMeshProUGUI_t934157183 * value)
	{
		____place_5 = value;
		Il2CppCodeGenWriteBarrier(&____place_5, value);
	}

	inline static int32_t get_offset_of__prize_6() { return static_cast<int32_t>(offsetof(PrizePoolTile_t487543826, ____prize_6)); }
	inline TextMeshProUGUI_t934157183 * get__prize_6() const { return ____prize_6; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__prize_6() { return &____prize_6; }
	inline void set__prize_6(TextMeshProUGUI_t934157183 * value)
	{
		____prize_6 = value;
		Il2CppCodeGenWriteBarrier(&____prize_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
