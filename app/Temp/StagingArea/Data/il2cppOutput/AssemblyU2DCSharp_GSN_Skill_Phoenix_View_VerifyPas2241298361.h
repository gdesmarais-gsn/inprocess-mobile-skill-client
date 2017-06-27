#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.InputField
struct InputField_t1631627530;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_PopupView1248909057.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.VerifyPasswordPopupView
struct  VerifyPasswordPopupView_t2241298361  : public PopupView_t1248909057
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.VerifyPasswordPopupView::_submitButton
	Button_t2872111280 * ____submitButton_11;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.VerifyPasswordPopupView::_closeButton
	Button_t2872111280 * ____closeButton_12;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.VerifyPasswordPopupView::_forgotPasswordButton
	Button_t2872111280 * ____forgotPasswordButton_13;
	// UnityEngine.UI.InputField GSN.Skill.Phoenix.View.VerifyPasswordPopupView::_passwordField
	InputField_t1631627530 * ____passwordField_14;

public:
	inline static int32_t get_offset_of__submitButton_11() { return static_cast<int32_t>(offsetof(VerifyPasswordPopupView_t2241298361, ____submitButton_11)); }
	inline Button_t2872111280 * get__submitButton_11() const { return ____submitButton_11; }
	inline Button_t2872111280 ** get_address_of__submitButton_11() { return &____submitButton_11; }
	inline void set__submitButton_11(Button_t2872111280 * value)
	{
		____submitButton_11 = value;
		Il2CppCodeGenWriteBarrier(&____submitButton_11, value);
	}

	inline static int32_t get_offset_of__closeButton_12() { return static_cast<int32_t>(offsetof(VerifyPasswordPopupView_t2241298361, ____closeButton_12)); }
	inline Button_t2872111280 * get__closeButton_12() const { return ____closeButton_12; }
	inline Button_t2872111280 ** get_address_of__closeButton_12() { return &____closeButton_12; }
	inline void set__closeButton_12(Button_t2872111280 * value)
	{
		____closeButton_12 = value;
		Il2CppCodeGenWriteBarrier(&____closeButton_12, value);
	}

	inline static int32_t get_offset_of__forgotPasswordButton_13() { return static_cast<int32_t>(offsetof(VerifyPasswordPopupView_t2241298361, ____forgotPasswordButton_13)); }
	inline Button_t2872111280 * get__forgotPasswordButton_13() const { return ____forgotPasswordButton_13; }
	inline Button_t2872111280 ** get_address_of__forgotPasswordButton_13() { return &____forgotPasswordButton_13; }
	inline void set__forgotPasswordButton_13(Button_t2872111280 * value)
	{
		____forgotPasswordButton_13 = value;
		Il2CppCodeGenWriteBarrier(&____forgotPasswordButton_13, value);
	}

	inline static int32_t get_offset_of__passwordField_14() { return static_cast<int32_t>(offsetof(VerifyPasswordPopupView_t2241298361, ____passwordField_14)); }
	inline InputField_t1631627530 * get__passwordField_14() const { return ____passwordField_14; }
	inline InputField_t1631627530 ** get_address_of__passwordField_14() { return &____passwordField_14; }
	inline void set__passwordField_14(InputField_t1631627530 * value)
	{
		____passwordField_14 = value;
		Il2CppCodeGenWriteBarrier(&____passwordField_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
