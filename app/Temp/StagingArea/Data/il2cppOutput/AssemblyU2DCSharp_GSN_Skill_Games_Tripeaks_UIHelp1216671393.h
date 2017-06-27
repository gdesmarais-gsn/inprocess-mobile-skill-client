#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIHelp
struct  UIHelp_t1216671393  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] GSN.Skill.Games.Tripeaks.UIHelp::helpPages
	GameObjectU5BU5D_t3057952154* ___helpPages_2;
	// UnityEngine.UI.Text GSN.Skill.Games.Tripeaks.UIHelp::headerText
	Text_t356221433 * ___headerText_3;
	// UnityEngine.UI.ScrollRect GSN.Skill.Games.Tripeaks.UIHelp::scrollRect
	ScrollRect_t1199013257 * ___scrollRect_4;
	// System.Single GSN.Skill.Games.Tripeaks.UIHelp::_srollRectSizeX
	float ____srollRectSizeX_5;
	// System.Int32 GSN.Skill.Games.Tripeaks.UIHelp::_currentPage
	int32_t ____currentPage_6;
	// System.Single GSN.Skill.Games.Tripeaks.UIHelp::pageChangeSpeed
	float ___pageChangeSpeed_7;

public:
	inline static int32_t get_offset_of_helpPages_2() { return static_cast<int32_t>(offsetof(UIHelp_t1216671393, ___helpPages_2)); }
	inline GameObjectU5BU5D_t3057952154* get_helpPages_2() const { return ___helpPages_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_helpPages_2() { return &___helpPages_2; }
	inline void set_helpPages_2(GameObjectU5BU5D_t3057952154* value)
	{
		___helpPages_2 = value;
		Il2CppCodeGenWriteBarrier(&___helpPages_2, value);
	}

	inline static int32_t get_offset_of_headerText_3() { return static_cast<int32_t>(offsetof(UIHelp_t1216671393, ___headerText_3)); }
	inline Text_t356221433 * get_headerText_3() const { return ___headerText_3; }
	inline Text_t356221433 ** get_address_of_headerText_3() { return &___headerText_3; }
	inline void set_headerText_3(Text_t356221433 * value)
	{
		___headerText_3 = value;
		Il2CppCodeGenWriteBarrier(&___headerText_3, value);
	}

	inline static int32_t get_offset_of_scrollRect_4() { return static_cast<int32_t>(offsetof(UIHelp_t1216671393, ___scrollRect_4)); }
	inline ScrollRect_t1199013257 * get_scrollRect_4() const { return ___scrollRect_4; }
	inline ScrollRect_t1199013257 ** get_address_of_scrollRect_4() { return &___scrollRect_4; }
	inline void set_scrollRect_4(ScrollRect_t1199013257 * value)
	{
		___scrollRect_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_4, value);
	}

	inline static int32_t get_offset_of__srollRectSizeX_5() { return static_cast<int32_t>(offsetof(UIHelp_t1216671393, ____srollRectSizeX_5)); }
	inline float get__srollRectSizeX_5() const { return ____srollRectSizeX_5; }
	inline float* get_address_of__srollRectSizeX_5() { return &____srollRectSizeX_5; }
	inline void set__srollRectSizeX_5(float value)
	{
		____srollRectSizeX_5 = value;
	}

	inline static int32_t get_offset_of__currentPage_6() { return static_cast<int32_t>(offsetof(UIHelp_t1216671393, ____currentPage_6)); }
	inline int32_t get__currentPage_6() const { return ____currentPage_6; }
	inline int32_t* get_address_of__currentPage_6() { return &____currentPage_6; }
	inline void set__currentPage_6(int32_t value)
	{
		____currentPage_6 = value;
	}

	inline static int32_t get_offset_of_pageChangeSpeed_7() { return static_cast<int32_t>(offsetof(UIHelp_t1216671393, ___pageChangeSpeed_7)); }
	inline float get_pageChangeSpeed_7() const { return ___pageChangeSpeed_7; }
	inline float* get_address_of_pageChangeSpeed_7() { return &___pageChangeSpeed_7; }
	inline void set_pageChangeSpeed_7(float value)
	{
		___pageChangeSpeed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
