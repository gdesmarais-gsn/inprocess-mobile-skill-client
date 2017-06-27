#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu
struct  BaseDebugMenu_t4164237173  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rect GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu::windowRect
	Rect_t3681755626  ___windowRect_2;
	// UnityEngine.Vector4 GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu::margins
	Vector4_t2243707581  ___margins_3;
	// System.Single GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu::_scale
	float ____scale_4;
	// UnityEngine.Color GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu::labelColor
	Color_t2020392075  ___labelColor_5;
	// UnityEngine.Color GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu::dataColor
	Color_t2020392075  ___dataColor_6;

public:
	inline static int32_t get_offset_of_windowRect_2() { return static_cast<int32_t>(offsetof(BaseDebugMenu_t4164237173, ___windowRect_2)); }
	inline Rect_t3681755626  get_windowRect_2() const { return ___windowRect_2; }
	inline Rect_t3681755626 * get_address_of_windowRect_2() { return &___windowRect_2; }
	inline void set_windowRect_2(Rect_t3681755626  value)
	{
		___windowRect_2 = value;
	}

	inline static int32_t get_offset_of_margins_3() { return static_cast<int32_t>(offsetof(BaseDebugMenu_t4164237173, ___margins_3)); }
	inline Vector4_t2243707581  get_margins_3() const { return ___margins_3; }
	inline Vector4_t2243707581 * get_address_of_margins_3() { return &___margins_3; }
	inline void set_margins_3(Vector4_t2243707581  value)
	{
		___margins_3 = value;
	}

	inline static int32_t get_offset_of__scale_4() { return static_cast<int32_t>(offsetof(BaseDebugMenu_t4164237173, ____scale_4)); }
	inline float get__scale_4() const { return ____scale_4; }
	inline float* get_address_of__scale_4() { return &____scale_4; }
	inline void set__scale_4(float value)
	{
		____scale_4 = value;
	}

	inline static int32_t get_offset_of_labelColor_5() { return static_cast<int32_t>(offsetof(BaseDebugMenu_t4164237173, ___labelColor_5)); }
	inline Color_t2020392075  get_labelColor_5() const { return ___labelColor_5; }
	inline Color_t2020392075 * get_address_of_labelColor_5() { return &___labelColor_5; }
	inline void set_labelColor_5(Color_t2020392075  value)
	{
		___labelColor_5 = value;
	}

	inline static int32_t get_offset_of_dataColor_6() { return static_cast<int32_t>(offsetof(BaseDebugMenu_t4164237173, ___dataColor_6)); }
	inline Color_t2020392075  get_dataColor_6() const { return ___dataColor_6; }
	inline Color_t2020392075 * get_address_of_dataColor_6() { return &___dataColor_6; }
	inline void set_dataColor_6(Color_t2020392075  value)
	{
		___dataColor_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
