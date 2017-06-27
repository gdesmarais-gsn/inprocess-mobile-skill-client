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
// UnityEngine.UI.Extensions.HorizontalScrollSnap
struct HorizontalScrollSnap_t3431010905;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// GSN.Skill.Phoenix.View.DepositSelectPageView
struct DepositSelectPageView_t3944520720;
// GSN.Skill.Phoenix.View.CreditCardPageView
struct CreditCardPageView_t117748145;
// GSN.Skill.Phoenix.View.BillingAddressPageView
struct BillingAddressPageView_t76590979;
// GSN.Skill.Phoenix.View.DepositConfirmPageView
struct DepositConfirmPageView_t3405700046;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent
struct GetDepositConfigDataSuccessEvent_t4067199831;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_PopupView1248909057.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetDepositConf1479940912.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_DepositM3723506665.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.DepositPopupView
struct  DepositPopupView_t87145889  : public PopupView_t1248909057
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.DepositPopupView::_closeButton
	Button_t2872111280 * ____closeButton_11;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.DepositPopupView::_backButton
	Button_t2872111280 * ____backButton_12;
	// UnityEngine.UI.Extensions.HorizontalScrollSnap GSN.Skill.Phoenix.View.DepositPopupView::_pageScroll
	HorizontalScrollSnap_t3431010905 * ____pageScroll_13;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.DepositPopupView::_headerText
	TextMeshProUGUI_t934157183 * ____headerText_14;
	// GSN.Skill.Phoenix.View.DepositSelectPageView GSN.Skill.Phoenix.View.DepositPopupView::_depositSelectPage
	DepositSelectPageView_t3944520720 * ____depositSelectPage_15;
	// GSN.Skill.Phoenix.View.CreditCardPageView GSN.Skill.Phoenix.View.DepositPopupView::_creditCardPage
	CreditCardPageView_t117748145 * ____creditCardPage_16;
	// GSN.Skill.Phoenix.View.BillingAddressPageView GSN.Skill.Phoenix.View.DepositPopupView::_billingInfoPage
	BillingAddressPageView_t76590979 * ____billingInfoPage_17;
	// GSN.Skill.Phoenix.View.DepositConfirmPageView GSN.Skill.Phoenix.View.DepositPopupView::_depositConfirmPage
	DepositConfirmPageView_t3405700046 * ____depositConfirmPage_18;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.DepositPopupView::_partiallyIllegalStatePopup
	GameObject_t1756533147 * ____partiallyIllegalStatePopup_19;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.DepositPopupView::_depositConfirmButton
	Button_t2872111280 * ____depositConfirmButton_20;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.DepositPopupView::_depositConfirmCloseButton
	Button_t2872111280 * ____depositConfirmCloseButton_21;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.DepositPopupView::_illegalStateMessage
	TextMeshProUGUI_t934157183 * ____illegalStateMessage_22;
	// System.String GSN.Skill.Phoenix.View.DepositPopupView::_illegalStatetext
	String_t* ____illegalStatetext_23;
	// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount GSN.Skill.Phoenix.View.DepositPopupView::_selectedDepositAmount
	DepositAmount_t1479940912  ____selectedDepositAmount_24;
	// GSN.Skill.Phoenix.Model.DepositManager/DepositWithNewCardData GSN.Skill.Phoenix.View.DepositPopupView::newCardData
	DepositWithNewCardData_t3723506665  ___newCardData_25;
	// System.Nullable`1<System.Int32> GSN.Skill.Phoenix.View.DepositPopupView::ccID
	Nullable_1_t334943763  ___ccID_26;
	// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent GSN.Skill.Phoenix.View.DepositPopupView::_data
	GetDepositConfigDataSuccessEvent_t4067199831 * ____data_27;
	// System.Boolean GSN.Skill.Phoenix.View.DepositPopupView::_isNewCard
	bool ____isNewCard_28;
	// System.Boolean GSN.Skill.Phoenix.View.DepositPopupView::_cardGamesAllowed
	bool ____cardGamesAllowed_29;
	// System.Boolean GSN.Skill.Phoenix.View.DepositPopupView::_allTournamentsAllowed
	bool ____allTournamentsAllowed_30;
	// System.Boolean GSN.Skill.Phoenix.View.DepositPopupView::_needConfirmDeposit
	bool ____needConfirmDeposit_31;
	// System.Int32 GSN.Skill.Phoenix.View.DepositPopupView::_currentPage
	int32_t ____currentPage_32;
	// System.String GSN.Skill.Phoenix.View.DepositPopupView::_password
	String_t* ____password_33;

public:
	inline static int32_t get_offset_of__closeButton_11() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____closeButton_11)); }
	inline Button_t2872111280 * get__closeButton_11() const { return ____closeButton_11; }
	inline Button_t2872111280 ** get_address_of__closeButton_11() { return &____closeButton_11; }
	inline void set__closeButton_11(Button_t2872111280 * value)
	{
		____closeButton_11 = value;
		Il2CppCodeGenWriteBarrier(&____closeButton_11, value);
	}

	inline static int32_t get_offset_of__backButton_12() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____backButton_12)); }
	inline Button_t2872111280 * get__backButton_12() const { return ____backButton_12; }
	inline Button_t2872111280 ** get_address_of__backButton_12() { return &____backButton_12; }
	inline void set__backButton_12(Button_t2872111280 * value)
	{
		____backButton_12 = value;
		Il2CppCodeGenWriteBarrier(&____backButton_12, value);
	}

	inline static int32_t get_offset_of__pageScroll_13() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____pageScroll_13)); }
	inline HorizontalScrollSnap_t3431010905 * get__pageScroll_13() const { return ____pageScroll_13; }
	inline HorizontalScrollSnap_t3431010905 ** get_address_of__pageScroll_13() { return &____pageScroll_13; }
	inline void set__pageScroll_13(HorizontalScrollSnap_t3431010905 * value)
	{
		____pageScroll_13 = value;
		Il2CppCodeGenWriteBarrier(&____pageScroll_13, value);
	}

	inline static int32_t get_offset_of__headerText_14() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____headerText_14)); }
	inline TextMeshProUGUI_t934157183 * get__headerText_14() const { return ____headerText_14; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__headerText_14() { return &____headerText_14; }
	inline void set__headerText_14(TextMeshProUGUI_t934157183 * value)
	{
		____headerText_14 = value;
		Il2CppCodeGenWriteBarrier(&____headerText_14, value);
	}

	inline static int32_t get_offset_of__depositSelectPage_15() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____depositSelectPage_15)); }
	inline DepositSelectPageView_t3944520720 * get__depositSelectPage_15() const { return ____depositSelectPage_15; }
	inline DepositSelectPageView_t3944520720 ** get_address_of__depositSelectPage_15() { return &____depositSelectPage_15; }
	inline void set__depositSelectPage_15(DepositSelectPageView_t3944520720 * value)
	{
		____depositSelectPage_15 = value;
		Il2CppCodeGenWriteBarrier(&____depositSelectPage_15, value);
	}

	inline static int32_t get_offset_of__creditCardPage_16() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____creditCardPage_16)); }
	inline CreditCardPageView_t117748145 * get__creditCardPage_16() const { return ____creditCardPage_16; }
	inline CreditCardPageView_t117748145 ** get_address_of__creditCardPage_16() { return &____creditCardPage_16; }
	inline void set__creditCardPage_16(CreditCardPageView_t117748145 * value)
	{
		____creditCardPage_16 = value;
		Il2CppCodeGenWriteBarrier(&____creditCardPage_16, value);
	}

	inline static int32_t get_offset_of__billingInfoPage_17() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____billingInfoPage_17)); }
	inline BillingAddressPageView_t76590979 * get__billingInfoPage_17() const { return ____billingInfoPage_17; }
	inline BillingAddressPageView_t76590979 ** get_address_of__billingInfoPage_17() { return &____billingInfoPage_17; }
	inline void set__billingInfoPage_17(BillingAddressPageView_t76590979 * value)
	{
		____billingInfoPage_17 = value;
		Il2CppCodeGenWriteBarrier(&____billingInfoPage_17, value);
	}

	inline static int32_t get_offset_of__depositConfirmPage_18() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____depositConfirmPage_18)); }
	inline DepositConfirmPageView_t3405700046 * get__depositConfirmPage_18() const { return ____depositConfirmPage_18; }
	inline DepositConfirmPageView_t3405700046 ** get_address_of__depositConfirmPage_18() { return &____depositConfirmPage_18; }
	inline void set__depositConfirmPage_18(DepositConfirmPageView_t3405700046 * value)
	{
		____depositConfirmPage_18 = value;
		Il2CppCodeGenWriteBarrier(&____depositConfirmPage_18, value);
	}

	inline static int32_t get_offset_of__partiallyIllegalStatePopup_19() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____partiallyIllegalStatePopup_19)); }
	inline GameObject_t1756533147 * get__partiallyIllegalStatePopup_19() const { return ____partiallyIllegalStatePopup_19; }
	inline GameObject_t1756533147 ** get_address_of__partiallyIllegalStatePopup_19() { return &____partiallyIllegalStatePopup_19; }
	inline void set__partiallyIllegalStatePopup_19(GameObject_t1756533147 * value)
	{
		____partiallyIllegalStatePopup_19 = value;
		Il2CppCodeGenWriteBarrier(&____partiallyIllegalStatePopup_19, value);
	}

	inline static int32_t get_offset_of__depositConfirmButton_20() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____depositConfirmButton_20)); }
	inline Button_t2872111280 * get__depositConfirmButton_20() const { return ____depositConfirmButton_20; }
	inline Button_t2872111280 ** get_address_of__depositConfirmButton_20() { return &____depositConfirmButton_20; }
	inline void set__depositConfirmButton_20(Button_t2872111280 * value)
	{
		____depositConfirmButton_20 = value;
		Il2CppCodeGenWriteBarrier(&____depositConfirmButton_20, value);
	}

	inline static int32_t get_offset_of__depositConfirmCloseButton_21() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____depositConfirmCloseButton_21)); }
	inline Button_t2872111280 * get__depositConfirmCloseButton_21() const { return ____depositConfirmCloseButton_21; }
	inline Button_t2872111280 ** get_address_of__depositConfirmCloseButton_21() { return &____depositConfirmCloseButton_21; }
	inline void set__depositConfirmCloseButton_21(Button_t2872111280 * value)
	{
		____depositConfirmCloseButton_21 = value;
		Il2CppCodeGenWriteBarrier(&____depositConfirmCloseButton_21, value);
	}

	inline static int32_t get_offset_of__illegalStateMessage_22() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____illegalStateMessage_22)); }
	inline TextMeshProUGUI_t934157183 * get__illegalStateMessage_22() const { return ____illegalStateMessage_22; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__illegalStateMessage_22() { return &____illegalStateMessage_22; }
	inline void set__illegalStateMessage_22(TextMeshProUGUI_t934157183 * value)
	{
		____illegalStateMessage_22 = value;
		Il2CppCodeGenWriteBarrier(&____illegalStateMessage_22, value);
	}

	inline static int32_t get_offset_of__illegalStatetext_23() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____illegalStatetext_23)); }
	inline String_t* get__illegalStatetext_23() const { return ____illegalStatetext_23; }
	inline String_t** get_address_of__illegalStatetext_23() { return &____illegalStatetext_23; }
	inline void set__illegalStatetext_23(String_t* value)
	{
		____illegalStatetext_23 = value;
		Il2CppCodeGenWriteBarrier(&____illegalStatetext_23, value);
	}

	inline static int32_t get_offset_of__selectedDepositAmount_24() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____selectedDepositAmount_24)); }
	inline DepositAmount_t1479940912  get__selectedDepositAmount_24() const { return ____selectedDepositAmount_24; }
	inline DepositAmount_t1479940912 * get_address_of__selectedDepositAmount_24() { return &____selectedDepositAmount_24; }
	inline void set__selectedDepositAmount_24(DepositAmount_t1479940912  value)
	{
		____selectedDepositAmount_24 = value;
	}

	inline static int32_t get_offset_of_newCardData_25() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ___newCardData_25)); }
	inline DepositWithNewCardData_t3723506665  get_newCardData_25() const { return ___newCardData_25; }
	inline DepositWithNewCardData_t3723506665 * get_address_of_newCardData_25() { return &___newCardData_25; }
	inline void set_newCardData_25(DepositWithNewCardData_t3723506665  value)
	{
		___newCardData_25 = value;
	}

	inline static int32_t get_offset_of_ccID_26() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ___ccID_26)); }
	inline Nullable_1_t334943763  get_ccID_26() const { return ___ccID_26; }
	inline Nullable_1_t334943763 * get_address_of_ccID_26() { return &___ccID_26; }
	inline void set_ccID_26(Nullable_1_t334943763  value)
	{
		___ccID_26 = value;
	}

	inline static int32_t get_offset_of__data_27() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____data_27)); }
	inline GetDepositConfigDataSuccessEvent_t4067199831 * get__data_27() const { return ____data_27; }
	inline GetDepositConfigDataSuccessEvent_t4067199831 ** get_address_of__data_27() { return &____data_27; }
	inline void set__data_27(GetDepositConfigDataSuccessEvent_t4067199831 * value)
	{
		____data_27 = value;
		Il2CppCodeGenWriteBarrier(&____data_27, value);
	}

	inline static int32_t get_offset_of__isNewCard_28() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____isNewCard_28)); }
	inline bool get__isNewCard_28() const { return ____isNewCard_28; }
	inline bool* get_address_of__isNewCard_28() { return &____isNewCard_28; }
	inline void set__isNewCard_28(bool value)
	{
		____isNewCard_28 = value;
	}

	inline static int32_t get_offset_of__cardGamesAllowed_29() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____cardGamesAllowed_29)); }
	inline bool get__cardGamesAllowed_29() const { return ____cardGamesAllowed_29; }
	inline bool* get_address_of__cardGamesAllowed_29() { return &____cardGamesAllowed_29; }
	inline void set__cardGamesAllowed_29(bool value)
	{
		____cardGamesAllowed_29 = value;
	}

	inline static int32_t get_offset_of__allTournamentsAllowed_30() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____allTournamentsAllowed_30)); }
	inline bool get__allTournamentsAllowed_30() const { return ____allTournamentsAllowed_30; }
	inline bool* get_address_of__allTournamentsAllowed_30() { return &____allTournamentsAllowed_30; }
	inline void set__allTournamentsAllowed_30(bool value)
	{
		____allTournamentsAllowed_30 = value;
	}

	inline static int32_t get_offset_of__needConfirmDeposit_31() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____needConfirmDeposit_31)); }
	inline bool get__needConfirmDeposit_31() const { return ____needConfirmDeposit_31; }
	inline bool* get_address_of__needConfirmDeposit_31() { return &____needConfirmDeposit_31; }
	inline void set__needConfirmDeposit_31(bool value)
	{
		____needConfirmDeposit_31 = value;
	}

	inline static int32_t get_offset_of__currentPage_32() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____currentPage_32)); }
	inline int32_t get__currentPage_32() const { return ____currentPage_32; }
	inline int32_t* get_address_of__currentPage_32() { return &____currentPage_32; }
	inline void set__currentPage_32(int32_t value)
	{
		____currentPage_32 = value;
	}

	inline static int32_t get_offset_of__password_33() { return static_cast<int32_t>(offsetof(DepositPopupView_t87145889, ____password_33)); }
	inline String_t* get__password_33() const { return ____password_33; }
	inline String_t** get_address_of__password_33() { return &____password_33; }
	inline void set__password_33(String_t* value)
	{
		____password_33 = value;
		Il2CppCodeGenWriteBarrier(&____password_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
