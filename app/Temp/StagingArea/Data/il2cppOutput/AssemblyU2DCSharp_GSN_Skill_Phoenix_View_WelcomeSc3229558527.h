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

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_ScreenVie3652740853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.WelcomeScreenView
struct  WelcomeScreenView_t3229558527  : public ScreenView_t3652740853
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.WelcomeScreenView::_loginButton
	Button_t2872111280 * ____loginButton_10;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.WelcomeScreenView::_registerButton
	Button_t2872111280 * ____registerButton_11;

public:
	inline static int32_t get_offset_of__loginButton_10() { return static_cast<int32_t>(offsetof(WelcomeScreenView_t3229558527, ____loginButton_10)); }
	inline Button_t2872111280 * get__loginButton_10() const { return ____loginButton_10; }
	inline Button_t2872111280 ** get_address_of__loginButton_10() { return &____loginButton_10; }
	inline void set__loginButton_10(Button_t2872111280 * value)
	{
		____loginButton_10 = value;
		Il2CppCodeGenWriteBarrier(&____loginButton_10, value);
	}

	inline static int32_t get_offset_of__registerButton_11() { return static_cast<int32_t>(offsetof(WelcomeScreenView_t3229558527, ____registerButton_11)); }
	inline Button_t2872111280 * get__registerButton_11() const { return ____registerButton_11; }
	inline Button_t2872111280 ** get_address_of__registerButton_11() { return &____registerButton_11; }
	inline void set__registerButton_11(Button_t2872111280 * value)
	{
		____registerButton_11 = value;
		Il2CppCodeGenWriteBarrier(&____registerButton_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
