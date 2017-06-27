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
// GSN.Skill.Phoenix.View.ProfilePopupView
struct ProfilePopupView_t1319786358;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_ScreenVie3652740853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.LegalPageView
struct  LegalPageView_t72550921  : public ScreenView_t3652740853
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.LegalPageView::_TCButton
	Button_t2872111280 * ____TCButton_10;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.LegalPageView::_TOSButton
	Button_t2872111280 * ____TOSButton_11;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.LegalPageView::_privacyPolicyButton
	Button_t2872111280 * ____privacyPolicyButton_12;
	// GSN.Skill.Phoenix.View.ProfilePopupView GSN.Skill.Phoenix.View.LegalPageView::_profileView
	ProfilePopupView_t1319786358 * ____profileView_13;

public:
	inline static int32_t get_offset_of__TCButton_10() { return static_cast<int32_t>(offsetof(LegalPageView_t72550921, ____TCButton_10)); }
	inline Button_t2872111280 * get__TCButton_10() const { return ____TCButton_10; }
	inline Button_t2872111280 ** get_address_of__TCButton_10() { return &____TCButton_10; }
	inline void set__TCButton_10(Button_t2872111280 * value)
	{
		____TCButton_10 = value;
		Il2CppCodeGenWriteBarrier(&____TCButton_10, value);
	}

	inline static int32_t get_offset_of__TOSButton_11() { return static_cast<int32_t>(offsetof(LegalPageView_t72550921, ____TOSButton_11)); }
	inline Button_t2872111280 * get__TOSButton_11() const { return ____TOSButton_11; }
	inline Button_t2872111280 ** get_address_of__TOSButton_11() { return &____TOSButton_11; }
	inline void set__TOSButton_11(Button_t2872111280 * value)
	{
		____TOSButton_11 = value;
		Il2CppCodeGenWriteBarrier(&____TOSButton_11, value);
	}

	inline static int32_t get_offset_of__privacyPolicyButton_12() { return static_cast<int32_t>(offsetof(LegalPageView_t72550921, ____privacyPolicyButton_12)); }
	inline Button_t2872111280 * get__privacyPolicyButton_12() const { return ____privacyPolicyButton_12; }
	inline Button_t2872111280 ** get_address_of__privacyPolicyButton_12() { return &____privacyPolicyButton_12; }
	inline void set__privacyPolicyButton_12(Button_t2872111280 * value)
	{
		____privacyPolicyButton_12 = value;
		Il2CppCodeGenWriteBarrier(&____privacyPolicyButton_12, value);
	}

	inline static int32_t get_offset_of__profileView_13() { return static_cast<int32_t>(offsetof(LegalPageView_t72550921, ____profileView_13)); }
	inline ProfilePopupView_t1319786358 * get__profileView_13() const { return ____profileView_13; }
	inline ProfilePopupView_t1319786358 ** get_address_of__profileView_13() { return &____profileView_13; }
	inline void set__profileView_13(ProfilePopupView_t1319786358 * value)
	{
		____profileView_13 = value;
		Il2CppCodeGenWriteBarrier(&____profileView_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
