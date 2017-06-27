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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Pool_Pool3748385124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.CreditCardTile
struct  CreditCardTile_t1004378135  : public PooledGameObject_t3748385124
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.CreditCardTile::_creditCardText
	TextMeshProUGUI_t934157183 * ____creditCardText_4;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.CreditCardTile::_buttonText
	TextMeshProUGUI_t934157183 * ____buttonText_5;
	// UnityEngine.UI.Image GSN.Skill.Phoenix.View.CreditCardTile::_cardImage
	Image_t2042527209 * ____cardImage_6;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.CreditCardTile::_button
	Button_t2872111280 * ____button_7;
	// System.Action`1<System.Int32> GSN.Skill.Phoenix.View.CreditCardTile::_buttonAction
	Action_1_t1873676830 * ____buttonAction_8;
	// System.Int32 GSN.Skill.Phoenix.View.CreditCardTile::_cardID
	int32_t ____cardID_9;

public:
	inline static int32_t get_offset_of__creditCardText_4() { return static_cast<int32_t>(offsetof(CreditCardTile_t1004378135, ____creditCardText_4)); }
	inline TextMeshProUGUI_t934157183 * get__creditCardText_4() const { return ____creditCardText_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__creditCardText_4() { return &____creditCardText_4; }
	inline void set__creditCardText_4(TextMeshProUGUI_t934157183 * value)
	{
		____creditCardText_4 = value;
		Il2CppCodeGenWriteBarrier(&____creditCardText_4, value);
	}

	inline static int32_t get_offset_of__buttonText_5() { return static_cast<int32_t>(offsetof(CreditCardTile_t1004378135, ____buttonText_5)); }
	inline TextMeshProUGUI_t934157183 * get__buttonText_5() const { return ____buttonText_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__buttonText_5() { return &____buttonText_5; }
	inline void set__buttonText_5(TextMeshProUGUI_t934157183 * value)
	{
		____buttonText_5 = value;
		Il2CppCodeGenWriteBarrier(&____buttonText_5, value);
	}

	inline static int32_t get_offset_of__cardImage_6() { return static_cast<int32_t>(offsetof(CreditCardTile_t1004378135, ____cardImage_6)); }
	inline Image_t2042527209 * get__cardImage_6() const { return ____cardImage_6; }
	inline Image_t2042527209 ** get_address_of__cardImage_6() { return &____cardImage_6; }
	inline void set__cardImage_6(Image_t2042527209 * value)
	{
		____cardImage_6 = value;
		Il2CppCodeGenWriteBarrier(&____cardImage_6, value);
	}

	inline static int32_t get_offset_of__button_7() { return static_cast<int32_t>(offsetof(CreditCardTile_t1004378135, ____button_7)); }
	inline Button_t2872111280 * get__button_7() const { return ____button_7; }
	inline Button_t2872111280 ** get_address_of__button_7() { return &____button_7; }
	inline void set__button_7(Button_t2872111280 * value)
	{
		____button_7 = value;
		Il2CppCodeGenWriteBarrier(&____button_7, value);
	}

	inline static int32_t get_offset_of__buttonAction_8() { return static_cast<int32_t>(offsetof(CreditCardTile_t1004378135, ____buttonAction_8)); }
	inline Action_1_t1873676830 * get__buttonAction_8() const { return ____buttonAction_8; }
	inline Action_1_t1873676830 ** get_address_of__buttonAction_8() { return &____buttonAction_8; }
	inline void set__buttonAction_8(Action_1_t1873676830 * value)
	{
		____buttonAction_8 = value;
		Il2CppCodeGenWriteBarrier(&____buttonAction_8, value);
	}

	inline static int32_t get_offset_of__cardID_9() { return static_cast<int32_t>(offsetof(CreditCardTile_t1004378135, ____cardID_9)); }
	inline int32_t get__cardID_9() const { return ____cardID_9; }
	inline int32_t* get_address_of__cardID_9() { return &____cardID_9; }
	inline void set__cardID_9(int32_t value)
	{
		____cardID_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
