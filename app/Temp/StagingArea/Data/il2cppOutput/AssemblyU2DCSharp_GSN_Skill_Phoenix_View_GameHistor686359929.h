#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Extensions.ScrollRectEx
struct ScrollRectEx_t4232992262;
// System.String
struct String_t;
// System.Comparison`1<GSN.Skill.Phoenix.TournamentHistoryData>
struct Comparison_1_t3957710294;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Scrollabl2826640284.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.GameHistoryScreenView
struct  GameHistoryScreenView_t686359929  : public ScrollableScreenView_t2826640284
{
public:
	// UnityEngine.Transform GSN.Skill.Phoenix.View.GameHistoryScreenView::_notStartedListAnchor
	Transform_t3275118058 * ____notStartedListAnchor_10;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.GameHistoryScreenView::_openListAnchor
	Transform_t3275118058 * ____openListAnchor_11;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.GameHistoryScreenView::_completedListAnchor
	Transform_t3275118058 * ____completedListAnchor_12;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.GameHistoryScreenView::_swipeIndicator
	GameObject_t1756533147 * ____swipeIndicator_13;
	// UnityEngine.UI.Extensions.ScrollRectEx GSN.Skill.Phoenix.View.GameHistoryScreenView::_scrollRect
	ScrollRectEx_t4232992262 * ____scrollRect_14;
	// System.DateTime GSN.Skill.Phoenix.View.GameHistoryScreenView::_lastDateBannerDate
	DateTime_t693205669  ____lastDateBannerDate_15;
	// System.Boolean GSN.Skill.Phoenix.View.GameHistoryScreenView::_morePages
	bool ____morePages_16;

public:
	inline static int32_t get_offset_of__notStartedListAnchor_10() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929, ____notStartedListAnchor_10)); }
	inline Transform_t3275118058 * get__notStartedListAnchor_10() const { return ____notStartedListAnchor_10; }
	inline Transform_t3275118058 ** get_address_of__notStartedListAnchor_10() { return &____notStartedListAnchor_10; }
	inline void set__notStartedListAnchor_10(Transform_t3275118058 * value)
	{
		____notStartedListAnchor_10 = value;
		Il2CppCodeGenWriteBarrier(&____notStartedListAnchor_10, value);
	}

	inline static int32_t get_offset_of__openListAnchor_11() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929, ____openListAnchor_11)); }
	inline Transform_t3275118058 * get__openListAnchor_11() const { return ____openListAnchor_11; }
	inline Transform_t3275118058 ** get_address_of__openListAnchor_11() { return &____openListAnchor_11; }
	inline void set__openListAnchor_11(Transform_t3275118058 * value)
	{
		____openListAnchor_11 = value;
		Il2CppCodeGenWriteBarrier(&____openListAnchor_11, value);
	}

	inline static int32_t get_offset_of__completedListAnchor_12() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929, ____completedListAnchor_12)); }
	inline Transform_t3275118058 * get__completedListAnchor_12() const { return ____completedListAnchor_12; }
	inline Transform_t3275118058 ** get_address_of__completedListAnchor_12() { return &____completedListAnchor_12; }
	inline void set__completedListAnchor_12(Transform_t3275118058 * value)
	{
		____completedListAnchor_12 = value;
		Il2CppCodeGenWriteBarrier(&____completedListAnchor_12, value);
	}

	inline static int32_t get_offset_of__swipeIndicator_13() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929, ____swipeIndicator_13)); }
	inline GameObject_t1756533147 * get__swipeIndicator_13() const { return ____swipeIndicator_13; }
	inline GameObject_t1756533147 ** get_address_of__swipeIndicator_13() { return &____swipeIndicator_13; }
	inline void set__swipeIndicator_13(GameObject_t1756533147 * value)
	{
		____swipeIndicator_13 = value;
		Il2CppCodeGenWriteBarrier(&____swipeIndicator_13, value);
	}

	inline static int32_t get_offset_of__scrollRect_14() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929, ____scrollRect_14)); }
	inline ScrollRectEx_t4232992262 * get__scrollRect_14() const { return ____scrollRect_14; }
	inline ScrollRectEx_t4232992262 ** get_address_of__scrollRect_14() { return &____scrollRect_14; }
	inline void set__scrollRect_14(ScrollRectEx_t4232992262 * value)
	{
		____scrollRect_14 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRect_14, value);
	}

	inline static int32_t get_offset_of__lastDateBannerDate_15() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929, ____lastDateBannerDate_15)); }
	inline DateTime_t693205669  get__lastDateBannerDate_15() const { return ____lastDateBannerDate_15; }
	inline DateTime_t693205669 * get_address_of__lastDateBannerDate_15() { return &____lastDateBannerDate_15; }
	inline void set__lastDateBannerDate_15(DateTime_t693205669  value)
	{
		____lastDateBannerDate_15 = value;
	}

	inline static int32_t get_offset_of__morePages_16() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929, ____morePages_16)); }
	inline bool get__morePages_16() const { return ____morePages_16; }
	inline bool* get_address_of__morePages_16() { return &____morePages_16; }
	inline void set__morePages_16(bool value)
	{
		____morePages_16 = value;
	}
};

struct GameHistoryScreenView_t686359929_StaticFields
{
public:
	// System.Comparison`1<GSN.Skill.Phoenix.TournamentHistoryData> GSN.Skill.Phoenix.View.GameHistoryScreenView::<>f__am$cache0
	Comparison_1_t3957710294 * ___U3CU3Ef__amU24cache0_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_21() { return static_cast<int32_t>(offsetof(GameHistoryScreenView_t686359929_StaticFields, ___U3CU3Ef__amU24cache0_21)); }
	inline Comparison_1_t3957710294 * get_U3CU3Ef__amU24cache0_21() const { return ___U3CU3Ef__amU24cache0_21; }
	inline Comparison_1_t3957710294 ** get_address_of_U3CU3Ef__amU24cache0_21() { return &___U3CU3Ef__amU24cache0_21; }
	inline void set_U3CU3Ef__amU24cache0_21(Comparison_1_t3957710294 * value)
	{
		___U3CU3Ef__amU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
