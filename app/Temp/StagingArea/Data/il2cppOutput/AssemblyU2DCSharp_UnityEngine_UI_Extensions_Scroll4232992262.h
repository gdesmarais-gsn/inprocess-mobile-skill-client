#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastTopEvent
struct ScrollPastTopEvent_t1138129402;
// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastBottomEvent
struct ScrollPastBottomEvent_t183467032;

#include "UnityEngine_UI_UnityEngine_UI_ScrollRect1199013257.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.ScrollRectEx
struct  ScrollRectEx_t4232992262  : public ScrollRect_t1199013257
{
public:
	// System.Boolean UnityEngine.UI.Extensions.ScrollRectEx::routeToParent
	bool ___routeToParent_38;
	// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastTopEvent UnityEngine.UI.Extensions.ScrollRectEx::m_OnScrollPastTop
	ScrollPastTopEvent_t1138129402 * ___m_OnScrollPastTop_40;
	// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastBottomEvent UnityEngine.UI.Extensions.ScrollRectEx::m_OnScrollPastBottom
	ScrollPastBottomEvent_t183467032 * ___m_OnScrollPastBottom_41;

public:
	inline static int32_t get_offset_of_routeToParent_38() { return static_cast<int32_t>(offsetof(ScrollRectEx_t4232992262, ___routeToParent_38)); }
	inline bool get_routeToParent_38() const { return ___routeToParent_38; }
	inline bool* get_address_of_routeToParent_38() { return &___routeToParent_38; }
	inline void set_routeToParent_38(bool value)
	{
		___routeToParent_38 = value;
	}

	inline static int32_t get_offset_of_m_OnScrollPastTop_40() { return static_cast<int32_t>(offsetof(ScrollRectEx_t4232992262, ___m_OnScrollPastTop_40)); }
	inline ScrollPastTopEvent_t1138129402 * get_m_OnScrollPastTop_40() const { return ___m_OnScrollPastTop_40; }
	inline ScrollPastTopEvent_t1138129402 ** get_address_of_m_OnScrollPastTop_40() { return &___m_OnScrollPastTop_40; }
	inline void set_m_OnScrollPastTop_40(ScrollPastTopEvent_t1138129402 * value)
	{
		___m_OnScrollPastTop_40 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnScrollPastTop_40, value);
	}

	inline static int32_t get_offset_of_m_OnScrollPastBottom_41() { return static_cast<int32_t>(offsetof(ScrollRectEx_t4232992262, ___m_OnScrollPastBottom_41)); }
	inline ScrollPastBottomEvent_t183467032 * get_m_OnScrollPastBottom_41() const { return ___m_OnScrollPastBottom_41; }
	inline ScrollPastBottomEvent_t183467032 ** get_address_of_m_OnScrollPastBottom_41() { return &___m_OnScrollPastBottom_41; }
	inline void set_m_OnScrollPastBottom_41(ScrollPastBottomEvent_t183467032 * value)
	{
		___m_OnScrollPastBottom_41 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnScrollPastBottom_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
