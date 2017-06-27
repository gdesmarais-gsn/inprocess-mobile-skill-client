#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.HorizontalScrollSnap
struct  HorizontalScrollSnap_t3431010905  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_startingPage
	int32_t ____startingPage_2;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_pageSpacing
	int32_t ____pageSpacing_3;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.HorizontalScrollSnap::_paginationObject
	GameObject_t1756533147 * ____paginationObject_4;
	// System.Single UnityEngine.UI.Extensions.HorizontalScrollSnap::_ChangeBulletsThreshold
	float ____ChangeBulletsThreshold_5;
	// System.Boolean UnityEngine.UI.Extensions.HorizontalScrollSnap::UseFastSwipe
	bool ___UseFastSwipe_6;
	// System.Boolean UnityEngine.UI.Extensions.HorizontalScrollSnap::LoopScrolling
	bool ___LoopScrolling_7;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::FastSwipeThreshold
	int32_t ___FastSwipeThreshold_8;
	// UnityEngine.Transform UnityEngine.UI.Extensions.HorizontalScrollSnap::_pagesContainer
	Transform_t3275118058 * ____pagesContainer_9;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_pages
	int32_t ____pages_10;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_actualPages
	int32_t ____actualPages_11;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_currentPage
	int32_t ____currentPage_12;
	// System.Boolean UnityEngine.UI.Extensions.HorizontalScrollSnap::_fastSwipeTimer
	bool ____fastSwipeTimer_13;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_fastSwipeCounter
	int32_t ____fastSwipeCounter_14;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_fastSwipeTarget
	int32_t ____fastSwipeTarget_15;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.UI.Extensions.HorizontalScrollSnap::_pageTransforms
	List_1_t2644239190 * ____pageTransforms_16;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.Extensions.HorizontalScrollSnap::_lerpPositions
	List_1_t1612828712 * ____lerpPositions_17;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.HorizontalScrollSnap::_scrollRect
	ScrollRect_t1199013257 * ____scrollRect_18;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.HorizontalScrollSnap::_lerpTarget
	Vector3_t2243707580  ____lerpTarget_19;
	// System.Boolean UnityEngine.UI.Extensions.HorizontalScrollSnap::_lerp
	bool ____lerp_20;
	// System.Boolean UnityEngine.UI.Extensions.HorizontalScrollSnap::_startDrag
	bool ____startDrag_21;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.HorizontalScrollSnap::_startPosition
	Vector3_t2243707580  ____startPosition_22;
	// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::_pageWidth
	int32_t ____pageWidth_23;
	// System.Boolean UnityEngine.UI.Extensions.HorizontalScrollSnap::isFastSwipe
	bool ___isFastSwipe_24;
	// System.Single UnityEngine.UI.Extensions.HorizontalScrollSnap::_distanceToFirst
	float ____distanceToFirst_25;
	// System.Single UnityEngine.UI.Extensions.HorizontalScrollSnap::_distanceToLast
	float ____distanceToLast_26;

public:
	inline static int32_t get_offset_of__startingPage_2() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____startingPage_2)); }
	inline int32_t get__startingPage_2() const { return ____startingPage_2; }
	inline int32_t* get_address_of__startingPage_2() { return &____startingPage_2; }
	inline void set__startingPage_2(int32_t value)
	{
		____startingPage_2 = value;
	}

	inline static int32_t get_offset_of__pageSpacing_3() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____pageSpacing_3)); }
	inline int32_t get__pageSpacing_3() const { return ____pageSpacing_3; }
	inline int32_t* get_address_of__pageSpacing_3() { return &____pageSpacing_3; }
	inline void set__pageSpacing_3(int32_t value)
	{
		____pageSpacing_3 = value;
	}

	inline static int32_t get_offset_of__paginationObject_4() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____paginationObject_4)); }
	inline GameObject_t1756533147 * get__paginationObject_4() const { return ____paginationObject_4; }
	inline GameObject_t1756533147 ** get_address_of__paginationObject_4() { return &____paginationObject_4; }
	inline void set__paginationObject_4(GameObject_t1756533147 * value)
	{
		____paginationObject_4 = value;
		Il2CppCodeGenWriteBarrier(&____paginationObject_4, value);
	}

	inline static int32_t get_offset_of__ChangeBulletsThreshold_5() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____ChangeBulletsThreshold_5)); }
	inline float get__ChangeBulletsThreshold_5() const { return ____ChangeBulletsThreshold_5; }
	inline float* get_address_of__ChangeBulletsThreshold_5() { return &____ChangeBulletsThreshold_5; }
	inline void set__ChangeBulletsThreshold_5(float value)
	{
		____ChangeBulletsThreshold_5 = value;
	}

	inline static int32_t get_offset_of_UseFastSwipe_6() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ___UseFastSwipe_6)); }
	inline bool get_UseFastSwipe_6() const { return ___UseFastSwipe_6; }
	inline bool* get_address_of_UseFastSwipe_6() { return &___UseFastSwipe_6; }
	inline void set_UseFastSwipe_6(bool value)
	{
		___UseFastSwipe_6 = value;
	}

	inline static int32_t get_offset_of_LoopScrolling_7() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ___LoopScrolling_7)); }
	inline bool get_LoopScrolling_7() const { return ___LoopScrolling_7; }
	inline bool* get_address_of_LoopScrolling_7() { return &___LoopScrolling_7; }
	inline void set_LoopScrolling_7(bool value)
	{
		___LoopScrolling_7 = value;
	}

	inline static int32_t get_offset_of_FastSwipeThreshold_8() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ___FastSwipeThreshold_8)); }
	inline int32_t get_FastSwipeThreshold_8() const { return ___FastSwipeThreshold_8; }
	inline int32_t* get_address_of_FastSwipeThreshold_8() { return &___FastSwipeThreshold_8; }
	inline void set_FastSwipeThreshold_8(int32_t value)
	{
		___FastSwipeThreshold_8 = value;
	}

	inline static int32_t get_offset_of__pagesContainer_9() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____pagesContainer_9)); }
	inline Transform_t3275118058 * get__pagesContainer_9() const { return ____pagesContainer_9; }
	inline Transform_t3275118058 ** get_address_of__pagesContainer_9() { return &____pagesContainer_9; }
	inline void set__pagesContainer_9(Transform_t3275118058 * value)
	{
		____pagesContainer_9 = value;
		Il2CppCodeGenWriteBarrier(&____pagesContainer_9, value);
	}

	inline static int32_t get_offset_of__pages_10() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____pages_10)); }
	inline int32_t get__pages_10() const { return ____pages_10; }
	inline int32_t* get_address_of__pages_10() { return &____pages_10; }
	inline void set__pages_10(int32_t value)
	{
		____pages_10 = value;
	}

	inline static int32_t get_offset_of__actualPages_11() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____actualPages_11)); }
	inline int32_t get__actualPages_11() const { return ____actualPages_11; }
	inline int32_t* get_address_of__actualPages_11() { return &____actualPages_11; }
	inline void set__actualPages_11(int32_t value)
	{
		____actualPages_11 = value;
	}

	inline static int32_t get_offset_of__currentPage_12() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____currentPage_12)); }
	inline int32_t get__currentPage_12() const { return ____currentPage_12; }
	inline int32_t* get_address_of__currentPage_12() { return &____currentPage_12; }
	inline void set__currentPage_12(int32_t value)
	{
		____currentPage_12 = value;
	}

	inline static int32_t get_offset_of__fastSwipeTimer_13() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____fastSwipeTimer_13)); }
	inline bool get__fastSwipeTimer_13() const { return ____fastSwipeTimer_13; }
	inline bool* get_address_of__fastSwipeTimer_13() { return &____fastSwipeTimer_13; }
	inline void set__fastSwipeTimer_13(bool value)
	{
		____fastSwipeTimer_13 = value;
	}

	inline static int32_t get_offset_of__fastSwipeCounter_14() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____fastSwipeCounter_14)); }
	inline int32_t get__fastSwipeCounter_14() const { return ____fastSwipeCounter_14; }
	inline int32_t* get_address_of__fastSwipeCounter_14() { return &____fastSwipeCounter_14; }
	inline void set__fastSwipeCounter_14(int32_t value)
	{
		____fastSwipeCounter_14 = value;
	}

	inline static int32_t get_offset_of__fastSwipeTarget_15() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____fastSwipeTarget_15)); }
	inline int32_t get__fastSwipeTarget_15() const { return ____fastSwipeTarget_15; }
	inline int32_t* get_address_of__fastSwipeTarget_15() { return &____fastSwipeTarget_15; }
	inline void set__fastSwipeTarget_15(int32_t value)
	{
		____fastSwipeTarget_15 = value;
	}

	inline static int32_t get_offset_of__pageTransforms_16() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____pageTransforms_16)); }
	inline List_1_t2644239190 * get__pageTransforms_16() const { return ____pageTransforms_16; }
	inline List_1_t2644239190 ** get_address_of__pageTransforms_16() { return &____pageTransforms_16; }
	inline void set__pageTransforms_16(List_1_t2644239190 * value)
	{
		____pageTransforms_16 = value;
		Il2CppCodeGenWriteBarrier(&____pageTransforms_16, value);
	}

	inline static int32_t get_offset_of__lerpPositions_17() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____lerpPositions_17)); }
	inline List_1_t1612828712 * get__lerpPositions_17() const { return ____lerpPositions_17; }
	inline List_1_t1612828712 ** get_address_of__lerpPositions_17() { return &____lerpPositions_17; }
	inline void set__lerpPositions_17(List_1_t1612828712 * value)
	{
		____lerpPositions_17 = value;
		Il2CppCodeGenWriteBarrier(&____lerpPositions_17, value);
	}

	inline static int32_t get_offset_of__scrollRect_18() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____scrollRect_18)); }
	inline ScrollRect_t1199013257 * get__scrollRect_18() const { return ____scrollRect_18; }
	inline ScrollRect_t1199013257 ** get_address_of__scrollRect_18() { return &____scrollRect_18; }
	inline void set__scrollRect_18(ScrollRect_t1199013257 * value)
	{
		____scrollRect_18 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRect_18, value);
	}

	inline static int32_t get_offset_of__lerpTarget_19() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____lerpTarget_19)); }
	inline Vector3_t2243707580  get__lerpTarget_19() const { return ____lerpTarget_19; }
	inline Vector3_t2243707580 * get_address_of__lerpTarget_19() { return &____lerpTarget_19; }
	inline void set__lerpTarget_19(Vector3_t2243707580  value)
	{
		____lerpTarget_19 = value;
	}

	inline static int32_t get_offset_of__lerp_20() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____lerp_20)); }
	inline bool get__lerp_20() const { return ____lerp_20; }
	inline bool* get_address_of__lerp_20() { return &____lerp_20; }
	inline void set__lerp_20(bool value)
	{
		____lerp_20 = value;
	}

	inline static int32_t get_offset_of__startDrag_21() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____startDrag_21)); }
	inline bool get__startDrag_21() const { return ____startDrag_21; }
	inline bool* get_address_of__startDrag_21() { return &____startDrag_21; }
	inline void set__startDrag_21(bool value)
	{
		____startDrag_21 = value;
	}

	inline static int32_t get_offset_of__startPosition_22() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____startPosition_22)); }
	inline Vector3_t2243707580  get__startPosition_22() const { return ____startPosition_22; }
	inline Vector3_t2243707580 * get_address_of__startPosition_22() { return &____startPosition_22; }
	inline void set__startPosition_22(Vector3_t2243707580  value)
	{
		____startPosition_22 = value;
	}

	inline static int32_t get_offset_of__pageWidth_23() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____pageWidth_23)); }
	inline int32_t get__pageWidth_23() const { return ____pageWidth_23; }
	inline int32_t* get_address_of__pageWidth_23() { return &____pageWidth_23; }
	inline void set__pageWidth_23(int32_t value)
	{
		____pageWidth_23 = value;
	}

	inline static int32_t get_offset_of_isFastSwipe_24() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ___isFastSwipe_24)); }
	inline bool get_isFastSwipe_24() const { return ___isFastSwipe_24; }
	inline bool* get_address_of_isFastSwipe_24() { return &___isFastSwipe_24; }
	inline void set_isFastSwipe_24(bool value)
	{
		___isFastSwipe_24 = value;
	}

	inline static int32_t get_offset_of__distanceToFirst_25() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____distanceToFirst_25)); }
	inline float get__distanceToFirst_25() const { return ____distanceToFirst_25; }
	inline float* get_address_of__distanceToFirst_25() { return &____distanceToFirst_25; }
	inline void set__distanceToFirst_25(float value)
	{
		____distanceToFirst_25 = value;
	}

	inline static int32_t get_offset_of__distanceToLast_26() { return static_cast<int32_t>(offsetof(HorizontalScrollSnap_t3431010905, ____distanceToLast_26)); }
	inline float get__distanceToLast_26() const { return ____distanceToLast_26; }
	inline float* get_address_of__distanceToLast_26() { return &____distanceToLast_26; }
	inline void set__distanceToLast_26(float value)
	{
		____distanceToLast_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
