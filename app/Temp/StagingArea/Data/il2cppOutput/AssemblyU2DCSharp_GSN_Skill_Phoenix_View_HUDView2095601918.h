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
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.HUDView
struct  HUDView_t2095601918  : public BaseView_t2538946938
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.HUDView::_rewardsPointsBalance
	TextMeshProUGUI_t934157183 * ____rewardsPointsBalance_5;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.HUDView::_cashBalance
	TextMeshProUGUI_t934157183 * ____cashBalance_6;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.HUDView::_depositButton
	Button_t2872111280 * ____depositButton_7;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.HUDView::_rewardsButton
	Button_t2872111280 * ____rewardsButton_8;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.HUDView::_profileButton
	Button_t2872111280 * ____profileButton_9;
	// System.Int32 GSN.Skill.Phoenix.View.HUDView::_currentRewardsPoints
	int32_t ____currentRewardsPoints_10;
	// System.Decimal GSN.Skill.Phoenix.View.HUDView::_currentCashBalance
	Decimal_t724701077  ____currentCashBalance_11;

public:
	inline static int32_t get_offset_of__rewardsPointsBalance_5() { return static_cast<int32_t>(offsetof(HUDView_t2095601918, ____rewardsPointsBalance_5)); }
	inline TextMeshProUGUI_t934157183 * get__rewardsPointsBalance_5() const { return ____rewardsPointsBalance_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__rewardsPointsBalance_5() { return &____rewardsPointsBalance_5; }
	inline void set__rewardsPointsBalance_5(TextMeshProUGUI_t934157183 * value)
	{
		____rewardsPointsBalance_5 = value;
		Il2CppCodeGenWriteBarrier(&____rewardsPointsBalance_5, value);
	}

	inline static int32_t get_offset_of__cashBalance_6() { return static_cast<int32_t>(offsetof(HUDView_t2095601918, ____cashBalance_6)); }
	inline TextMeshProUGUI_t934157183 * get__cashBalance_6() const { return ____cashBalance_6; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__cashBalance_6() { return &____cashBalance_6; }
	inline void set__cashBalance_6(TextMeshProUGUI_t934157183 * value)
	{
		____cashBalance_6 = value;
		Il2CppCodeGenWriteBarrier(&____cashBalance_6, value);
	}

	inline static int32_t get_offset_of__depositButton_7() { return static_cast<int32_t>(offsetof(HUDView_t2095601918, ____depositButton_7)); }
	inline Button_t2872111280 * get__depositButton_7() const { return ____depositButton_7; }
	inline Button_t2872111280 ** get_address_of__depositButton_7() { return &____depositButton_7; }
	inline void set__depositButton_7(Button_t2872111280 * value)
	{
		____depositButton_7 = value;
		Il2CppCodeGenWriteBarrier(&____depositButton_7, value);
	}

	inline static int32_t get_offset_of__rewardsButton_8() { return static_cast<int32_t>(offsetof(HUDView_t2095601918, ____rewardsButton_8)); }
	inline Button_t2872111280 * get__rewardsButton_8() const { return ____rewardsButton_8; }
	inline Button_t2872111280 ** get_address_of__rewardsButton_8() { return &____rewardsButton_8; }
	inline void set__rewardsButton_8(Button_t2872111280 * value)
	{
		____rewardsButton_8 = value;
		Il2CppCodeGenWriteBarrier(&____rewardsButton_8, value);
	}

	inline static int32_t get_offset_of__profileButton_9() { return static_cast<int32_t>(offsetof(HUDView_t2095601918, ____profileButton_9)); }
	inline Button_t2872111280 * get__profileButton_9() const { return ____profileButton_9; }
	inline Button_t2872111280 ** get_address_of__profileButton_9() { return &____profileButton_9; }
	inline void set__profileButton_9(Button_t2872111280 * value)
	{
		____profileButton_9 = value;
		Il2CppCodeGenWriteBarrier(&____profileButton_9, value);
	}

	inline static int32_t get_offset_of__currentRewardsPoints_10() { return static_cast<int32_t>(offsetof(HUDView_t2095601918, ____currentRewardsPoints_10)); }
	inline int32_t get__currentRewardsPoints_10() const { return ____currentRewardsPoints_10; }
	inline int32_t* get_address_of__currentRewardsPoints_10() { return &____currentRewardsPoints_10; }
	inline void set__currentRewardsPoints_10(int32_t value)
	{
		____currentRewardsPoints_10 = value;
	}

	inline static int32_t get_offset_of__currentCashBalance_11() { return static_cast<int32_t>(offsetof(HUDView_t2095601918, ____currentCashBalance_11)); }
	inline Decimal_t724701077  get__currentCashBalance_11() const { return ____currentCashBalance_11; }
	inline Decimal_t724701077 * get_address_of__currentCashBalance_11() { return &____currentCashBalance_11; }
	inline void set__currentCashBalance_11(Decimal_t724701077  value)
	{
		____currentCashBalance_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
