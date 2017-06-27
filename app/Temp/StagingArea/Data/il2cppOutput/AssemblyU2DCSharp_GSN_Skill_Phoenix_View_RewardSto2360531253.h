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
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseView2538946938.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.RewardStoreItemTile
struct  RewardStoreItemTile_t2360531253  : public BaseView_t2538946938
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.RewardStoreItemTile::_gameCreditAmount
	TextMeshProUGUI_t934157183 * ____gameCreditAmount_5;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.RewardStoreItemTile::_rewardsPointsFee
	TextMeshProUGUI_t934157183 * ____rewardsPointsFee_6;
	// System.Int32 GSN.Skill.Phoenix.View.RewardStoreItemTile::_rewardID
	int32_t ____rewardID_7;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.RewardStoreItemTile::_button
	Button_t2872111280 * ____button_8;

public:
	inline static int32_t get_offset_of__gameCreditAmount_5() { return static_cast<int32_t>(offsetof(RewardStoreItemTile_t2360531253, ____gameCreditAmount_5)); }
	inline TextMeshProUGUI_t934157183 * get__gameCreditAmount_5() const { return ____gameCreditAmount_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__gameCreditAmount_5() { return &____gameCreditAmount_5; }
	inline void set__gameCreditAmount_5(TextMeshProUGUI_t934157183 * value)
	{
		____gameCreditAmount_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameCreditAmount_5, value);
	}

	inline static int32_t get_offset_of__rewardsPointsFee_6() { return static_cast<int32_t>(offsetof(RewardStoreItemTile_t2360531253, ____rewardsPointsFee_6)); }
	inline TextMeshProUGUI_t934157183 * get__rewardsPointsFee_6() const { return ____rewardsPointsFee_6; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__rewardsPointsFee_6() { return &____rewardsPointsFee_6; }
	inline void set__rewardsPointsFee_6(TextMeshProUGUI_t934157183 * value)
	{
		____rewardsPointsFee_6 = value;
		Il2CppCodeGenWriteBarrier(&____rewardsPointsFee_6, value);
	}

	inline static int32_t get_offset_of__rewardID_7() { return static_cast<int32_t>(offsetof(RewardStoreItemTile_t2360531253, ____rewardID_7)); }
	inline int32_t get__rewardID_7() const { return ____rewardID_7; }
	inline int32_t* get_address_of__rewardID_7() { return &____rewardID_7; }
	inline void set__rewardID_7(int32_t value)
	{
		____rewardID_7 = value;
	}

	inline static int32_t get_offset_of__button_8() { return static_cast<int32_t>(offsetof(RewardStoreItemTile_t2360531253, ____button_8)); }
	inline Button_t2872111280 * get__button_8() const { return ____button_8; }
	inline Button_t2872111280 ** get_address_of__button_8() { return &____button_8; }
	inline void set__button_8(Button_t2872111280 * value)
	{
		____button_8 = value;
		Il2CppCodeGenWriteBarrier(&____button_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
