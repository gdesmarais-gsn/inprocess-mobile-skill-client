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
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIAbortDialog
struct  UIAbortDialog_t1044851848  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIAbortDialog::headerText
	TextMeshProUGUI_t934157183 * ___headerText_2;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIAbortDialog::messageText
	TextMeshProUGUI_t934157183 * ___messageText_3;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIAbortDialog::animator
	Animator_t69676727 * ___animator_4;

public:
	inline static int32_t get_offset_of_headerText_2() { return static_cast<int32_t>(offsetof(UIAbortDialog_t1044851848, ___headerText_2)); }
	inline TextMeshProUGUI_t934157183 * get_headerText_2() const { return ___headerText_2; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_headerText_2() { return &___headerText_2; }
	inline void set_headerText_2(TextMeshProUGUI_t934157183 * value)
	{
		___headerText_2 = value;
		Il2CppCodeGenWriteBarrier(&___headerText_2, value);
	}

	inline static int32_t get_offset_of_messageText_3() { return static_cast<int32_t>(offsetof(UIAbortDialog_t1044851848, ___messageText_3)); }
	inline TextMeshProUGUI_t934157183 * get_messageText_3() const { return ___messageText_3; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_messageText_3() { return &___messageText_3; }
	inline void set_messageText_3(TextMeshProUGUI_t934157183 * value)
	{
		___messageText_3 = value;
		Il2CppCodeGenWriteBarrier(&___messageText_3, value);
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(UIAbortDialog_t1044851848, ___animator_4)); }
	inline Animator_t69676727 * get_animator_4() const { return ___animator_4; }
	inline Animator_t69676727 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t69676727 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
