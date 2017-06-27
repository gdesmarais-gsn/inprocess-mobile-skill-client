#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t2808691390;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollFX
struct  ScrollFX_t816274025  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ScrollFX::_parallaxY
	bool ____parallaxY_2;
	// System.Boolean ScrollFX::_fadeOutY
	bool ____fadeOutY_3;
	// System.Boolean ScrollFX::_clampAtTop
	bool ____clampAtTop_4;
	// System.Boolean ScrollFX::_clampAtBottom
	bool ____clampAtBottom_5;
	// System.Single ScrollFX::_speed
	float ____speed_6;
	// UnityEngine.Vector3 ScrollFX::_parentStartPos
	Vector3_t2243707580  ____parentStartPos_7;
	// UnityEngine.Vector3 ScrollFX::_startPos
	Vector3_t2243707580  ____startPos_8;
	// System.Single ScrollFX::_parentYDelta
	float ____parentYDelta_9;
	// System.Single ScrollFX::_yDelta
	float ____yDelta_10;
	// System.Boolean ScrollFX::_startPosSet
	bool ____startPosSet_11;
	// UnityEngine.CanvasGroup ScrollFX::_cGroup
	CanvasGroup_t3296560743 * ____cGroup_12;
	// UnityEngine.UI.LayoutElement ScrollFX::_layoutElement
	LayoutElement_t2808691390 * ____layoutElement_13;

public:
	inline static int32_t get_offset_of__parallaxY_2() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____parallaxY_2)); }
	inline bool get__parallaxY_2() const { return ____parallaxY_2; }
	inline bool* get_address_of__parallaxY_2() { return &____parallaxY_2; }
	inline void set__parallaxY_2(bool value)
	{
		____parallaxY_2 = value;
	}

	inline static int32_t get_offset_of__fadeOutY_3() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____fadeOutY_3)); }
	inline bool get__fadeOutY_3() const { return ____fadeOutY_3; }
	inline bool* get_address_of__fadeOutY_3() { return &____fadeOutY_3; }
	inline void set__fadeOutY_3(bool value)
	{
		____fadeOutY_3 = value;
	}

	inline static int32_t get_offset_of__clampAtTop_4() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____clampAtTop_4)); }
	inline bool get__clampAtTop_4() const { return ____clampAtTop_4; }
	inline bool* get_address_of__clampAtTop_4() { return &____clampAtTop_4; }
	inline void set__clampAtTop_4(bool value)
	{
		____clampAtTop_4 = value;
	}

	inline static int32_t get_offset_of__clampAtBottom_5() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____clampAtBottom_5)); }
	inline bool get__clampAtBottom_5() const { return ____clampAtBottom_5; }
	inline bool* get_address_of__clampAtBottom_5() { return &____clampAtBottom_5; }
	inline void set__clampAtBottom_5(bool value)
	{
		____clampAtBottom_5 = value;
	}

	inline static int32_t get_offset_of__speed_6() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____speed_6)); }
	inline float get__speed_6() const { return ____speed_6; }
	inline float* get_address_of__speed_6() { return &____speed_6; }
	inline void set__speed_6(float value)
	{
		____speed_6 = value;
	}

	inline static int32_t get_offset_of__parentStartPos_7() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____parentStartPos_7)); }
	inline Vector3_t2243707580  get__parentStartPos_7() const { return ____parentStartPos_7; }
	inline Vector3_t2243707580 * get_address_of__parentStartPos_7() { return &____parentStartPos_7; }
	inline void set__parentStartPos_7(Vector3_t2243707580  value)
	{
		____parentStartPos_7 = value;
	}

	inline static int32_t get_offset_of__startPos_8() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____startPos_8)); }
	inline Vector3_t2243707580  get__startPos_8() const { return ____startPos_8; }
	inline Vector3_t2243707580 * get_address_of__startPos_8() { return &____startPos_8; }
	inline void set__startPos_8(Vector3_t2243707580  value)
	{
		____startPos_8 = value;
	}

	inline static int32_t get_offset_of__parentYDelta_9() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____parentYDelta_9)); }
	inline float get__parentYDelta_9() const { return ____parentYDelta_9; }
	inline float* get_address_of__parentYDelta_9() { return &____parentYDelta_9; }
	inline void set__parentYDelta_9(float value)
	{
		____parentYDelta_9 = value;
	}

	inline static int32_t get_offset_of__yDelta_10() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____yDelta_10)); }
	inline float get__yDelta_10() const { return ____yDelta_10; }
	inline float* get_address_of__yDelta_10() { return &____yDelta_10; }
	inline void set__yDelta_10(float value)
	{
		____yDelta_10 = value;
	}

	inline static int32_t get_offset_of__startPosSet_11() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____startPosSet_11)); }
	inline bool get__startPosSet_11() const { return ____startPosSet_11; }
	inline bool* get_address_of__startPosSet_11() { return &____startPosSet_11; }
	inline void set__startPosSet_11(bool value)
	{
		____startPosSet_11 = value;
	}

	inline static int32_t get_offset_of__cGroup_12() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____cGroup_12)); }
	inline CanvasGroup_t3296560743 * get__cGroup_12() const { return ____cGroup_12; }
	inline CanvasGroup_t3296560743 ** get_address_of__cGroup_12() { return &____cGroup_12; }
	inline void set__cGroup_12(CanvasGroup_t3296560743 * value)
	{
		____cGroup_12 = value;
		Il2CppCodeGenWriteBarrier(&____cGroup_12, value);
	}

	inline static int32_t get_offset_of__layoutElement_13() { return static_cast<int32_t>(offsetof(ScrollFX_t816274025, ____layoutElement_13)); }
	inline LayoutElement_t2808691390 * get__layoutElement_13() const { return ____layoutElement_13; }
	inline LayoutElement_t2808691390 ** get_address_of__layoutElement_13() { return &____layoutElement_13; }
	inline void set__layoutElement_13(LayoutElement_t2808691390 * value)
	{
		____layoutElement_13 = value;
		Il2CppCodeGenWriteBarrier(&____layoutElement_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
