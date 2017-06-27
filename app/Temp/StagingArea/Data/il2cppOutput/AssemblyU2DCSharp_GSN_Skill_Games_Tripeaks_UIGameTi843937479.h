#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIGameTip
struct  UIGameTip_t843937479  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image GSN.Skill.Games.Tripeaks.UIGameTip::tipImage
	Image_t2042527209 * ___tipImage_2;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIGameTip::tipText
	TextMeshProUGUI_t934157183 * ___tipText_3;

public:
	inline static int32_t get_offset_of_tipImage_2() { return static_cast<int32_t>(offsetof(UIGameTip_t843937479, ___tipImage_2)); }
	inline Image_t2042527209 * get_tipImage_2() const { return ___tipImage_2; }
	inline Image_t2042527209 ** get_address_of_tipImage_2() { return &___tipImage_2; }
	inline void set_tipImage_2(Image_t2042527209 * value)
	{
		___tipImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___tipImage_2, value);
	}

	inline static int32_t get_offset_of_tipText_3() { return static_cast<int32_t>(offsetof(UIGameTip_t843937479, ___tipText_3)); }
	inline TextMeshProUGUI_t934157183 * get_tipText_3() const { return ___tipText_3; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_tipText_3() { return &___tipText_3; }
	inline void set_tipText_3(TextMeshProUGUI_t934157183 * value)
	{
		___tipText_3 = value;
		Il2CppCodeGenWriteBarrier(&___tipText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
