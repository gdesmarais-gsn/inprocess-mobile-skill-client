#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIHugeWin
struct  UIHugeWin_t3990307283  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIHugeWin::_animator
	Animator_t69676727 * ____animator_2;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIHugeWin::textValue
	TextMeshProUGUI_t934157183 * ___textValue_4;

public:
	inline static int32_t get_offset_of__animator_2() { return static_cast<int32_t>(offsetof(UIHugeWin_t3990307283, ____animator_2)); }
	inline Animator_t69676727 * get__animator_2() const { return ____animator_2; }
	inline Animator_t69676727 ** get_address_of__animator_2() { return &____animator_2; }
	inline void set__animator_2(Animator_t69676727 * value)
	{
		____animator_2 = value;
		Il2CppCodeGenWriteBarrier(&____animator_2, value);
	}

	inline static int32_t get_offset_of_textValue_4() { return static_cast<int32_t>(offsetof(UIHugeWin_t3990307283, ___textValue_4)); }
	inline TextMeshProUGUI_t934157183 * get_textValue_4() const { return ___textValue_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_textValue_4() { return &___textValue_4; }
	inline void set_textValue_4(TextMeshProUGUI_t934157183 * value)
	{
		___textValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___textValue_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
