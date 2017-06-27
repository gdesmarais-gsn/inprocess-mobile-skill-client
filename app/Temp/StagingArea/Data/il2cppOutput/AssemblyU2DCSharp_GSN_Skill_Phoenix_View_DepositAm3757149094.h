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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.UI.Button
struct Button_t2872111280;
// GSN.Skill.Phoenix.View.DepositPopupView
struct DepositPopupView_t87145889;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Pool_Pool3748385124.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetDepositConf1479940912.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.DepositAmountTile
struct  DepositAmountTile_t3757149094  : public PooledGameObject_t3748385124
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.DepositAmountTile::_depositAmount
	TextMeshProUGUI_t934157183 * ____depositAmount_4;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.DepositAmountTile::_gameCredits
	TextMeshProUGUI_t934157183 * ____gameCredits_5;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.DepositAmountTile::_gameCreditsObject
	GameObject_t1756533147 * ____gameCreditsObject_6;
	// UnityEngine.UI.Image GSN.Skill.Phoenix.View.DepositAmountTile::_gameCreditsIcon
	Image_t2042527209 * ____gameCreditsIcon_7;
	// UnityEngine.Sprite[] GSN.Skill.Phoenix.View.DepositAmountTile::_cashIcons
	SpriteU5BU5D_t3359083662* ____cashIcons_8;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.DepositAmountTile::_button
	Button_t2872111280 * ____button_9;
	// GSN.Skill.Phoenix.View.DepositPopupView GSN.Skill.Phoenix.View.DepositAmountTile::_depositPopupView
	DepositPopupView_t87145889 * ____depositPopupView_10;
	// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount GSN.Skill.Phoenix.View.DepositAmountTile::_amount
	DepositAmount_t1479940912  ____amount_11;

public:
	inline static int32_t get_offset_of__depositAmount_4() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____depositAmount_4)); }
	inline TextMeshProUGUI_t934157183 * get__depositAmount_4() const { return ____depositAmount_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__depositAmount_4() { return &____depositAmount_4; }
	inline void set__depositAmount_4(TextMeshProUGUI_t934157183 * value)
	{
		____depositAmount_4 = value;
		Il2CppCodeGenWriteBarrier(&____depositAmount_4, value);
	}

	inline static int32_t get_offset_of__gameCredits_5() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____gameCredits_5)); }
	inline TextMeshProUGUI_t934157183 * get__gameCredits_5() const { return ____gameCredits_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__gameCredits_5() { return &____gameCredits_5; }
	inline void set__gameCredits_5(TextMeshProUGUI_t934157183 * value)
	{
		____gameCredits_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameCredits_5, value);
	}

	inline static int32_t get_offset_of__gameCreditsObject_6() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____gameCreditsObject_6)); }
	inline GameObject_t1756533147 * get__gameCreditsObject_6() const { return ____gameCreditsObject_6; }
	inline GameObject_t1756533147 ** get_address_of__gameCreditsObject_6() { return &____gameCreditsObject_6; }
	inline void set__gameCreditsObject_6(GameObject_t1756533147 * value)
	{
		____gameCreditsObject_6 = value;
		Il2CppCodeGenWriteBarrier(&____gameCreditsObject_6, value);
	}

	inline static int32_t get_offset_of__gameCreditsIcon_7() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____gameCreditsIcon_7)); }
	inline Image_t2042527209 * get__gameCreditsIcon_7() const { return ____gameCreditsIcon_7; }
	inline Image_t2042527209 ** get_address_of__gameCreditsIcon_7() { return &____gameCreditsIcon_7; }
	inline void set__gameCreditsIcon_7(Image_t2042527209 * value)
	{
		____gameCreditsIcon_7 = value;
		Il2CppCodeGenWriteBarrier(&____gameCreditsIcon_7, value);
	}

	inline static int32_t get_offset_of__cashIcons_8() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____cashIcons_8)); }
	inline SpriteU5BU5D_t3359083662* get__cashIcons_8() const { return ____cashIcons_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of__cashIcons_8() { return &____cashIcons_8; }
	inline void set__cashIcons_8(SpriteU5BU5D_t3359083662* value)
	{
		____cashIcons_8 = value;
		Il2CppCodeGenWriteBarrier(&____cashIcons_8, value);
	}

	inline static int32_t get_offset_of__button_9() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____button_9)); }
	inline Button_t2872111280 * get__button_9() const { return ____button_9; }
	inline Button_t2872111280 ** get_address_of__button_9() { return &____button_9; }
	inline void set__button_9(Button_t2872111280 * value)
	{
		____button_9 = value;
		Il2CppCodeGenWriteBarrier(&____button_9, value);
	}

	inline static int32_t get_offset_of__depositPopupView_10() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____depositPopupView_10)); }
	inline DepositPopupView_t87145889 * get__depositPopupView_10() const { return ____depositPopupView_10; }
	inline DepositPopupView_t87145889 ** get_address_of__depositPopupView_10() { return &____depositPopupView_10; }
	inline void set__depositPopupView_10(DepositPopupView_t87145889 * value)
	{
		____depositPopupView_10 = value;
		Il2CppCodeGenWriteBarrier(&____depositPopupView_10, value);
	}

	inline static int32_t get_offset_of__amount_11() { return static_cast<int32_t>(offsetof(DepositAmountTile_t3757149094, ____amount_11)); }
	inline DepositAmount_t1479940912  get__amount_11() const { return ____amount_11; }
	inline DepositAmount_t1479940912 * get_address_of__amount_11() { return &____amount_11; }
	inline void set__amount_11(DepositAmount_t1479940912  value)
	{
		____amount_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
