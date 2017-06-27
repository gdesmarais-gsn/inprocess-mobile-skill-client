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
// GSN.Skill.Phoenix.View.GsnInputField
struct GsnInputField_t4191845288;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_ScreenVie3652740853.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.WithdrawPageView
struct  WithdrawPageView_t2203161558  : public ScreenView_t3652740853
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.WithdrawPageView::_gameCreditsValue
	TextMeshProUGUI_t934157183 * ____gameCreditsValue_10;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.WithdrawPageView::_cashValue
	TextMeshProUGUI_t934157183 * ____cashValue_11;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.WithdrawPageView::_balanceValue
	TextMeshProUGUI_t934157183 * ____balanceValue_12;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.WithdrawPageView::_passwordMessage
	TextMeshProUGUI_t934157183 * ____passwordMessage_13;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.WithdrawPageView::_successMessage
	TextMeshProUGUI_t934157183 * ____successMessage_14;
	// GSN.Skill.Phoenix.View.GsnInputField GSN.Skill.Phoenix.View.WithdrawPageView::_withdrawAmount
	GsnInputField_t4191845288 * ____withdrawAmount_15;
	// GSN.Skill.Phoenix.View.GsnInputField GSN.Skill.Phoenix.View.WithdrawPageView::_passwordInput
	GsnInputField_t4191845288 * ____passwordInput_16;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.WithdrawPageView::_passwordPanel
	GameObject_t1756533147 * ____passwordPanel_17;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.WithdrawPageView::_withdrawPanel
	GameObject_t1756533147 * ____withdrawPanel_18;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.WithdrawPageView::_withdrawSuccessPanel
	GameObject_t1756533147 * ____withdrawSuccessPanel_19;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.WithdrawPageView::_withdrawButton
	Button_t2872111280 * ____withdrawButton_20;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.WithdrawPageView::_verifyPasswordButton
	Button_t2872111280 * ____verifyPasswordButton_21;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.WithdrawPageView::_closeVerifyPasswordButton
	Button_t2872111280 * ____closeVerifyPasswordButton_22;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.WithdrawPageView::_FAQButton
	Button_t2872111280 * ____FAQButton_23;
	// System.Decimal GSN.Skill.Phoenix.View.WithdrawPageView::_withdrawAmountValue
	Decimal_t724701077  ____withdrawAmountValue_24;

public:
	inline static int32_t get_offset_of__gameCreditsValue_10() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____gameCreditsValue_10)); }
	inline TextMeshProUGUI_t934157183 * get__gameCreditsValue_10() const { return ____gameCreditsValue_10; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__gameCreditsValue_10() { return &____gameCreditsValue_10; }
	inline void set__gameCreditsValue_10(TextMeshProUGUI_t934157183 * value)
	{
		____gameCreditsValue_10 = value;
		Il2CppCodeGenWriteBarrier(&____gameCreditsValue_10, value);
	}

	inline static int32_t get_offset_of__cashValue_11() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____cashValue_11)); }
	inline TextMeshProUGUI_t934157183 * get__cashValue_11() const { return ____cashValue_11; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__cashValue_11() { return &____cashValue_11; }
	inline void set__cashValue_11(TextMeshProUGUI_t934157183 * value)
	{
		____cashValue_11 = value;
		Il2CppCodeGenWriteBarrier(&____cashValue_11, value);
	}

	inline static int32_t get_offset_of__balanceValue_12() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____balanceValue_12)); }
	inline TextMeshProUGUI_t934157183 * get__balanceValue_12() const { return ____balanceValue_12; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__balanceValue_12() { return &____balanceValue_12; }
	inline void set__balanceValue_12(TextMeshProUGUI_t934157183 * value)
	{
		____balanceValue_12 = value;
		Il2CppCodeGenWriteBarrier(&____balanceValue_12, value);
	}

	inline static int32_t get_offset_of__passwordMessage_13() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____passwordMessage_13)); }
	inline TextMeshProUGUI_t934157183 * get__passwordMessage_13() const { return ____passwordMessage_13; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__passwordMessage_13() { return &____passwordMessage_13; }
	inline void set__passwordMessage_13(TextMeshProUGUI_t934157183 * value)
	{
		____passwordMessage_13 = value;
		Il2CppCodeGenWriteBarrier(&____passwordMessage_13, value);
	}

	inline static int32_t get_offset_of__successMessage_14() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____successMessage_14)); }
	inline TextMeshProUGUI_t934157183 * get__successMessage_14() const { return ____successMessage_14; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__successMessage_14() { return &____successMessage_14; }
	inline void set__successMessage_14(TextMeshProUGUI_t934157183 * value)
	{
		____successMessage_14 = value;
		Il2CppCodeGenWriteBarrier(&____successMessage_14, value);
	}

	inline static int32_t get_offset_of__withdrawAmount_15() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____withdrawAmount_15)); }
	inline GsnInputField_t4191845288 * get__withdrawAmount_15() const { return ____withdrawAmount_15; }
	inline GsnInputField_t4191845288 ** get_address_of__withdrawAmount_15() { return &____withdrawAmount_15; }
	inline void set__withdrawAmount_15(GsnInputField_t4191845288 * value)
	{
		____withdrawAmount_15 = value;
		Il2CppCodeGenWriteBarrier(&____withdrawAmount_15, value);
	}

	inline static int32_t get_offset_of__passwordInput_16() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____passwordInput_16)); }
	inline GsnInputField_t4191845288 * get__passwordInput_16() const { return ____passwordInput_16; }
	inline GsnInputField_t4191845288 ** get_address_of__passwordInput_16() { return &____passwordInput_16; }
	inline void set__passwordInput_16(GsnInputField_t4191845288 * value)
	{
		____passwordInput_16 = value;
		Il2CppCodeGenWriteBarrier(&____passwordInput_16, value);
	}

	inline static int32_t get_offset_of__passwordPanel_17() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____passwordPanel_17)); }
	inline GameObject_t1756533147 * get__passwordPanel_17() const { return ____passwordPanel_17; }
	inline GameObject_t1756533147 ** get_address_of__passwordPanel_17() { return &____passwordPanel_17; }
	inline void set__passwordPanel_17(GameObject_t1756533147 * value)
	{
		____passwordPanel_17 = value;
		Il2CppCodeGenWriteBarrier(&____passwordPanel_17, value);
	}

	inline static int32_t get_offset_of__withdrawPanel_18() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____withdrawPanel_18)); }
	inline GameObject_t1756533147 * get__withdrawPanel_18() const { return ____withdrawPanel_18; }
	inline GameObject_t1756533147 ** get_address_of__withdrawPanel_18() { return &____withdrawPanel_18; }
	inline void set__withdrawPanel_18(GameObject_t1756533147 * value)
	{
		____withdrawPanel_18 = value;
		Il2CppCodeGenWriteBarrier(&____withdrawPanel_18, value);
	}

	inline static int32_t get_offset_of__withdrawSuccessPanel_19() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____withdrawSuccessPanel_19)); }
	inline GameObject_t1756533147 * get__withdrawSuccessPanel_19() const { return ____withdrawSuccessPanel_19; }
	inline GameObject_t1756533147 ** get_address_of__withdrawSuccessPanel_19() { return &____withdrawSuccessPanel_19; }
	inline void set__withdrawSuccessPanel_19(GameObject_t1756533147 * value)
	{
		____withdrawSuccessPanel_19 = value;
		Il2CppCodeGenWriteBarrier(&____withdrawSuccessPanel_19, value);
	}

	inline static int32_t get_offset_of__withdrawButton_20() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____withdrawButton_20)); }
	inline Button_t2872111280 * get__withdrawButton_20() const { return ____withdrawButton_20; }
	inline Button_t2872111280 ** get_address_of__withdrawButton_20() { return &____withdrawButton_20; }
	inline void set__withdrawButton_20(Button_t2872111280 * value)
	{
		____withdrawButton_20 = value;
		Il2CppCodeGenWriteBarrier(&____withdrawButton_20, value);
	}

	inline static int32_t get_offset_of__verifyPasswordButton_21() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____verifyPasswordButton_21)); }
	inline Button_t2872111280 * get__verifyPasswordButton_21() const { return ____verifyPasswordButton_21; }
	inline Button_t2872111280 ** get_address_of__verifyPasswordButton_21() { return &____verifyPasswordButton_21; }
	inline void set__verifyPasswordButton_21(Button_t2872111280 * value)
	{
		____verifyPasswordButton_21 = value;
		Il2CppCodeGenWriteBarrier(&____verifyPasswordButton_21, value);
	}

	inline static int32_t get_offset_of__closeVerifyPasswordButton_22() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____closeVerifyPasswordButton_22)); }
	inline Button_t2872111280 * get__closeVerifyPasswordButton_22() const { return ____closeVerifyPasswordButton_22; }
	inline Button_t2872111280 ** get_address_of__closeVerifyPasswordButton_22() { return &____closeVerifyPasswordButton_22; }
	inline void set__closeVerifyPasswordButton_22(Button_t2872111280 * value)
	{
		____closeVerifyPasswordButton_22 = value;
		Il2CppCodeGenWriteBarrier(&____closeVerifyPasswordButton_22, value);
	}

	inline static int32_t get_offset_of__FAQButton_23() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____FAQButton_23)); }
	inline Button_t2872111280 * get__FAQButton_23() const { return ____FAQButton_23; }
	inline Button_t2872111280 ** get_address_of__FAQButton_23() { return &____FAQButton_23; }
	inline void set__FAQButton_23(Button_t2872111280 * value)
	{
		____FAQButton_23 = value;
		Il2CppCodeGenWriteBarrier(&____FAQButton_23, value);
	}

	inline static int32_t get_offset_of__withdrawAmountValue_24() { return static_cast<int32_t>(offsetof(WithdrawPageView_t2203161558, ____withdrawAmountValue_24)); }
	inline Decimal_t724701077  get__withdrawAmountValue_24() const { return ____withdrawAmountValue_24; }
	inline Decimal_t724701077 * get_address_of__withdrawAmountValue_24() { return &____withdrawAmountValue_24; }
	inline void set__withdrawAmountValue_24(Decimal_t724701077  value)
	{
		____withdrawAmountValue_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
