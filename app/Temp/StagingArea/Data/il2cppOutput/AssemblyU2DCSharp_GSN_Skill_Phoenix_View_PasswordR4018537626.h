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
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Pool_Pool3748385124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.PasswordResetUsernameTile
struct  PasswordResetUsernameTile_t4018537626  : public PooledGameObject_t3748385124
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PasswordResetUsernameTile::username
	TextMeshProUGUI_t934157183 * ___username_4;
	// UnityEngine.UI.Toggle GSN.Skill.Phoenix.View.PasswordResetUsernameTile::toggle
	Toggle_t3976754468 * ___toggle_5;

public:
	inline static int32_t get_offset_of_username_4() { return static_cast<int32_t>(offsetof(PasswordResetUsernameTile_t4018537626, ___username_4)); }
	inline TextMeshProUGUI_t934157183 * get_username_4() const { return ___username_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_username_4() { return &___username_4; }
	inline void set_username_4(TextMeshProUGUI_t934157183 * value)
	{
		___username_4 = value;
		Il2CppCodeGenWriteBarrier(&___username_4, value);
	}

	inline static int32_t get_offset_of_toggle_5() { return static_cast<int32_t>(offsetof(PasswordResetUsernameTile_t4018537626, ___toggle_5)); }
	inline Toggle_t3976754468 * get_toggle_5() const { return ___toggle_5; }
	inline Toggle_t3976754468 ** get_address_of_toggle_5() { return &___toggle_5; }
	inline void set_toggle_5(Toggle_t3976754468 * value)
	{
		___toggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
