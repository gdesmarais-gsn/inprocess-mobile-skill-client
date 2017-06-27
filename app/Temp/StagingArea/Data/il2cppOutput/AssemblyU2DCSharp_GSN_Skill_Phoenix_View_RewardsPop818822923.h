#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_PopupView1248909057.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.RewardsPopupView
struct  RewardsPopupView_t818822923  : public PopupView_t1248909057
{
public:
	// UnityEngine.Transform GSN.Skill.Phoenix.View.RewardsPopupView::_rewardListParent
	Transform_t3275118058 * ____rewardListParent_11;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.RewardsPopupView::_closeButton
	Button_t2872111280 * ____closeButton_12;
	// System.Int32 GSN.Skill.Phoenix.View.RewardsPopupView::MAX_REWARDS_ITEMS
	int32_t ___MAX_REWARDS_ITEMS_14;

public:
	inline static int32_t get_offset_of__rewardListParent_11() { return static_cast<int32_t>(offsetof(RewardsPopupView_t818822923, ____rewardListParent_11)); }
	inline Transform_t3275118058 * get__rewardListParent_11() const { return ____rewardListParent_11; }
	inline Transform_t3275118058 ** get_address_of__rewardListParent_11() { return &____rewardListParent_11; }
	inline void set__rewardListParent_11(Transform_t3275118058 * value)
	{
		____rewardListParent_11 = value;
		Il2CppCodeGenWriteBarrier(&____rewardListParent_11, value);
	}

	inline static int32_t get_offset_of__closeButton_12() { return static_cast<int32_t>(offsetof(RewardsPopupView_t818822923, ____closeButton_12)); }
	inline Button_t2872111280 * get__closeButton_12() const { return ____closeButton_12; }
	inline Button_t2872111280 ** get_address_of__closeButton_12() { return &____closeButton_12; }
	inline void set__closeButton_12(Button_t2872111280 * value)
	{
		____closeButton_12 = value;
		Il2CppCodeGenWriteBarrier(&____closeButton_12, value);
	}

	inline static int32_t get_offset_of_MAX_REWARDS_ITEMS_14() { return static_cast<int32_t>(offsetof(RewardsPopupView_t818822923, ___MAX_REWARDS_ITEMS_14)); }
	inline int32_t get_MAX_REWARDS_ITEMS_14() const { return ___MAX_REWARDS_ITEMS_14; }
	inline int32_t* get_address_of_MAX_REWARDS_ITEMS_14() { return &___MAX_REWARDS_ITEMS_14; }
	inline void set_MAX_REWARDS_ITEMS_14(int32_t value)
	{
		___MAX_REWARDS_ITEMS_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
