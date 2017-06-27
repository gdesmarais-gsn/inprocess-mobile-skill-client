#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.View.GsnInputField
struct GsnInputField_t4191845288;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_PopupView1248909057.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.LoginPopupView
struct  LoginPopupView_t10661302  : public PopupView_t1248909057
{
public:
	// GSN.Skill.Phoenix.View.GsnInputField GSN.Skill.Phoenix.View.LoginPopupView::_usernameInput
	GsnInputField_t4191845288 * ____usernameInput_11;
	// GSN.Skill.Phoenix.View.GsnInputField GSN.Skill.Phoenix.View.LoginPopupView::_passwordInput
	GsnInputField_t4191845288 * ____passwordInput_12;
	// UnityEngine.UI.Toggle GSN.Skill.Phoenix.View.LoginPopupView::_rememberMeToggle
	Toggle_t3976754468 * ____rememberMeToggle_13;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.LoginPopupView::_submitButton
	Button_t2872111280 * ____submitButton_14;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.LoginPopupView::_closeButton
	Button_t2872111280 * ____closeButton_15;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.LoginPopupView::_forgotPasswordButton
	Button_t2872111280 * ____forgotPasswordButton_16;

public:
	inline static int32_t get_offset_of__usernameInput_11() { return static_cast<int32_t>(offsetof(LoginPopupView_t10661302, ____usernameInput_11)); }
	inline GsnInputField_t4191845288 * get__usernameInput_11() const { return ____usernameInput_11; }
	inline GsnInputField_t4191845288 ** get_address_of__usernameInput_11() { return &____usernameInput_11; }
	inline void set__usernameInput_11(GsnInputField_t4191845288 * value)
	{
		____usernameInput_11 = value;
		Il2CppCodeGenWriteBarrier(&____usernameInput_11, value);
	}

	inline static int32_t get_offset_of__passwordInput_12() { return static_cast<int32_t>(offsetof(LoginPopupView_t10661302, ____passwordInput_12)); }
	inline GsnInputField_t4191845288 * get__passwordInput_12() const { return ____passwordInput_12; }
	inline GsnInputField_t4191845288 ** get_address_of__passwordInput_12() { return &____passwordInput_12; }
	inline void set__passwordInput_12(GsnInputField_t4191845288 * value)
	{
		____passwordInput_12 = value;
		Il2CppCodeGenWriteBarrier(&____passwordInput_12, value);
	}

	inline static int32_t get_offset_of__rememberMeToggle_13() { return static_cast<int32_t>(offsetof(LoginPopupView_t10661302, ____rememberMeToggle_13)); }
	inline Toggle_t3976754468 * get__rememberMeToggle_13() const { return ____rememberMeToggle_13; }
	inline Toggle_t3976754468 ** get_address_of__rememberMeToggle_13() { return &____rememberMeToggle_13; }
	inline void set__rememberMeToggle_13(Toggle_t3976754468 * value)
	{
		____rememberMeToggle_13 = value;
		Il2CppCodeGenWriteBarrier(&____rememberMeToggle_13, value);
	}

	inline static int32_t get_offset_of__submitButton_14() { return static_cast<int32_t>(offsetof(LoginPopupView_t10661302, ____submitButton_14)); }
	inline Button_t2872111280 * get__submitButton_14() const { return ____submitButton_14; }
	inline Button_t2872111280 ** get_address_of__submitButton_14() { return &____submitButton_14; }
	inline void set__submitButton_14(Button_t2872111280 * value)
	{
		____submitButton_14 = value;
		Il2CppCodeGenWriteBarrier(&____submitButton_14, value);
	}

	inline static int32_t get_offset_of__closeButton_15() { return static_cast<int32_t>(offsetof(LoginPopupView_t10661302, ____closeButton_15)); }
	inline Button_t2872111280 * get__closeButton_15() const { return ____closeButton_15; }
	inline Button_t2872111280 ** get_address_of__closeButton_15() { return &____closeButton_15; }
	inline void set__closeButton_15(Button_t2872111280 * value)
	{
		____closeButton_15 = value;
		Il2CppCodeGenWriteBarrier(&____closeButton_15, value);
	}

	inline static int32_t get_offset_of__forgotPasswordButton_16() { return static_cast<int32_t>(offsetof(LoginPopupView_t10661302, ____forgotPasswordButton_16)); }
	inline Button_t2872111280 * get__forgotPasswordButton_16() const { return ____forgotPasswordButton_16; }
	inline Button_t2872111280 ** get_address_of__forgotPasswordButton_16() { return &____forgotPasswordButton_16; }
	inline void set__forgotPasswordButton_16(Button_t2872111280 * value)
	{
		____forgotPasswordButton_16 = value;
		Il2CppCodeGenWriteBarrier(&____forgotPasswordButton_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
