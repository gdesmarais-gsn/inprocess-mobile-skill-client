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
// GSN.Skill.Phoenix.View.GsnPickerField
struct GsnPickerField_t2146407116;
// UnityEngine.UI.Button
struct Button_t2872111280;
// GSN.Skill.Phoenix.View.DepositPopupView
struct DepositPopupView_t87145889;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_ScreenVie3652740853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.CreditCardPageView
struct  CreditCardPageView_t117748145  : public ScreenView_t3652740853
{
public:
	// GSN.Skill.Phoenix.View.GsnInputField GSN.Skill.Phoenix.View.CreditCardPageView::_creditCardNumber
	GsnInputField_t4191845288 * ____creditCardNumber_10;
	// GSN.Skill.Phoenix.View.GsnPickerField GSN.Skill.Phoenix.View.CreditCardPageView::_expMonth
	GsnPickerField_t2146407116 * ____expMonth_11;
	// GSN.Skill.Phoenix.View.GsnPickerField GSN.Skill.Phoenix.View.CreditCardPageView::_expYear
	GsnPickerField_t2146407116 * ____expYear_12;
	// GSN.Skill.Phoenix.View.GsnInputField GSN.Skill.Phoenix.View.CreditCardPageView::_cvn
	GsnInputField_t4191845288 * ____cvn_13;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.CreditCardPageView::_playerServicesButton
	Button_t2872111280 * ____playerServicesButton_14;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.CreditCardPageView::_nextButton
	Button_t2872111280 * ____nextButton_15;
	// GSN.Skill.Phoenix.View.DepositPopupView GSN.Skill.Phoenix.View.CreditCardPageView::_depositPopupView
	DepositPopupView_t87145889 * ____depositPopupView_16;
	// System.Boolean GSN.Skill.Phoenix.View.CreditCardPageView::forceFailExpirationDateOnNextUpdate
	bool ___forceFailExpirationDateOnNextUpdate_20;

public:
	inline static int32_t get_offset_of__creditCardNumber_10() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ____creditCardNumber_10)); }
	inline GsnInputField_t4191845288 * get__creditCardNumber_10() const { return ____creditCardNumber_10; }
	inline GsnInputField_t4191845288 ** get_address_of__creditCardNumber_10() { return &____creditCardNumber_10; }
	inline void set__creditCardNumber_10(GsnInputField_t4191845288 * value)
	{
		____creditCardNumber_10 = value;
		Il2CppCodeGenWriteBarrier(&____creditCardNumber_10, value);
	}

	inline static int32_t get_offset_of__expMonth_11() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ____expMonth_11)); }
	inline GsnPickerField_t2146407116 * get__expMonth_11() const { return ____expMonth_11; }
	inline GsnPickerField_t2146407116 ** get_address_of__expMonth_11() { return &____expMonth_11; }
	inline void set__expMonth_11(GsnPickerField_t2146407116 * value)
	{
		____expMonth_11 = value;
		Il2CppCodeGenWriteBarrier(&____expMonth_11, value);
	}

	inline static int32_t get_offset_of__expYear_12() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ____expYear_12)); }
	inline GsnPickerField_t2146407116 * get__expYear_12() const { return ____expYear_12; }
	inline GsnPickerField_t2146407116 ** get_address_of__expYear_12() { return &____expYear_12; }
	inline void set__expYear_12(GsnPickerField_t2146407116 * value)
	{
		____expYear_12 = value;
		Il2CppCodeGenWriteBarrier(&____expYear_12, value);
	}

	inline static int32_t get_offset_of__cvn_13() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ____cvn_13)); }
	inline GsnInputField_t4191845288 * get__cvn_13() const { return ____cvn_13; }
	inline GsnInputField_t4191845288 ** get_address_of__cvn_13() { return &____cvn_13; }
	inline void set__cvn_13(GsnInputField_t4191845288 * value)
	{
		____cvn_13 = value;
		Il2CppCodeGenWriteBarrier(&____cvn_13, value);
	}

	inline static int32_t get_offset_of__playerServicesButton_14() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ____playerServicesButton_14)); }
	inline Button_t2872111280 * get__playerServicesButton_14() const { return ____playerServicesButton_14; }
	inline Button_t2872111280 ** get_address_of__playerServicesButton_14() { return &____playerServicesButton_14; }
	inline void set__playerServicesButton_14(Button_t2872111280 * value)
	{
		____playerServicesButton_14 = value;
		Il2CppCodeGenWriteBarrier(&____playerServicesButton_14, value);
	}

	inline static int32_t get_offset_of__nextButton_15() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ____nextButton_15)); }
	inline Button_t2872111280 * get__nextButton_15() const { return ____nextButton_15; }
	inline Button_t2872111280 ** get_address_of__nextButton_15() { return &____nextButton_15; }
	inline void set__nextButton_15(Button_t2872111280 * value)
	{
		____nextButton_15 = value;
		Il2CppCodeGenWriteBarrier(&____nextButton_15, value);
	}

	inline static int32_t get_offset_of__depositPopupView_16() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ____depositPopupView_16)); }
	inline DepositPopupView_t87145889 * get__depositPopupView_16() const { return ____depositPopupView_16; }
	inline DepositPopupView_t87145889 ** get_address_of__depositPopupView_16() { return &____depositPopupView_16; }
	inline void set__depositPopupView_16(DepositPopupView_t87145889 * value)
	{
		____depositPopupView_16 = value;
		Il2CppCodeGenWriteBarrier(&____depositPopupView_16, value);
	}

	inline static int32_t get_offset_of_forceFailExpirationDateOnNextUpdate_20() { return static_cast<int32_t>(offsetof(CreditCardPageView_t117748145, ___forceFailExpirationDateOnNextUpdate_20)); }
	inline bool get_forceFailExpirationDateOnNextUpdate_20() const { return ___forceFailExpirationDateOnNextUpdate_20; }
	inline bool* get_address_of_forceFailExpirationDateOnNextUpdate_20() { return &___forceFailExpirationDateOnNextUpdate_20; }
	inline void set_forceFailExpirationDateOnNextUpdate_20(bool value)
	{
		___forceFailExpirationDateOnNextUpdate_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
