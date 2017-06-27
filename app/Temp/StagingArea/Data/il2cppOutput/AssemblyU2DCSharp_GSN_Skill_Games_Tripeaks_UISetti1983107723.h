#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UISettings
struct  UISettings_t1983107723  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle GSN.Skill.Games.Tripeaks.UISettings::musicToggle
	Toggle_t3976754468 * ___musicToggle_2;
	// UnityEngine.UI.Toggle GSN.Skill.Games.Tripeaks.UISettings::soundFXToggle
	Toggle_t3976754468 * ___soundFXToggle_3;
	// UnityEngine.UI.Button GSN.Skill.Games.Tripeaks.UISettings::closeButton
	Button_t2872111280 * ___closeButton_4;

public:
	inline static int32_t get_offset_of_musicToggle_2() { return static_cast<int32_t>(offsetof(UISettings_t1983107723, ___musicToggle_2)); }
	inline Toggle_t3976754468 * get_musicToggle_2() const { return ___musicToggle_2; }
	inline Toggle_t3976754468 ** get_address_of_musicToggle_2() { return &___musicToggle_2; }
	inline void set_musicToggle_2(Toggle_t3976754468 * value)
	{
		___musicToggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___musicToggle_2, value);
	}

	inline static int32_t get_offset_of_soundFXToggle_3() { return static_cast<int32_t>(offsetof(UISettings_t1983107723, ___soundFXToggle_3)); }
	inline Toggle_t3976754468 * get_soundFXToggle_3() const { return ___soundFXToggle_3; }
	inline Toggle_t3976754468 ** get_address_of_soundFXToggle_3() { return &___soundFXToggle_3; }
	inline void set_soundFXToggle_3(Toggle_t3976754468 * value)
	{
		___soundFXToggle_3 = value;
		Il2CppCodeGenWriteBarrier(&___soundFXToggle_3, value);
	}

	inline static int32_t get_offset_of_closeButton_4() { return static_cast<int32_t>(offsetof(UISettings_t1983107723, ___closeButton_4)); }
	inline Button_t2872111280 * get_closeButton_4() const { return ___closeButton_4; }
	inline Button_t2872111280 ** get_address_of_closeButton_4() { return &___closeButton_4; }
	inline void set_closeButton_4(Button_t2872111280 * value)
	{
		___closeButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___closeButton_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
