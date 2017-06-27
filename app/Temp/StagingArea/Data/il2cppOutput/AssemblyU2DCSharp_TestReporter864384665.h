#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Reporter
struct Reporter_t3561640551;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestReporter
struct  TestReporter_t864384665  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TestReporter::logTestCount
	int32_t ___logTestCount_2;
	// System.Int32 TestReporter::threadLogTestCount
	int32_t ___threadLogTestCount_3;
	// System.Boolean TestReporter::logEverySecond
	bool ___logEverySecond_4;
	// System.Int32 TestReporter::currentLogTestCount
	int32_t ___currentLogTestCount_5;
	// Reporter TestReporter::reporter
	Reporter_t3561640551 * ___reporter_6;
	// UnityEngine.GUIStyle TestReporter::style
	GUIStyle_t1799908754 * ___style_7;
	// UnityEngine.Rect TestReporter::rect1
	Rect_t3681755626  ___rect1_8;
	// UnityEngine.Rect TestReporter::rect2
	Rect_t3681755626  ___rect2_9;
	// UnityEngine.Rect TestReporter::rect3
	Rect_t3681755626  ___rect3_10;
	// UnityEngine.Rect TestReporter::rect4
	Rect_t3681755626  ___rect4_11;
	// UnityEngine.Rect TestReporter::rect5
	Rect_t3681755626  ___rect5_12;
	// UnityEngine.Rect TestReporter::rect6
	Rect_t3681755626  ___rect6_13;
	// System.Single TestReporter::elapsed
	float ___elapsed_14;

public:
	inline static int32_t get_offset_of_logTestCount_2() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___logTestCount_2)); }
	inline int32_t get_logTestCount_2() const { return ___logTestCount_2; }
	inline int32_t* get_address_of_logTestCount_2() { return &___logTestCount_2; }
	inline void set_logTestCount_2(int32_t value)
	{
		___logTestCount_2 = value;
	}

	inline static int32_t get_offset_of_threadLogTestCount_3() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___threadLogTestCount_3)); }
	inline int32_t get_threadLogTestCount_3() const { return ___threadLogTestCount_3; }
	inline int32_t* get_address_of_threadLogTestCount_3() { return &___threadLogTestCount_3; }
	inline void set_threadLogTestCount_3(int32_t value)
	{
		___threadLogTestCount_3 = value;
	}

	inline static int32_t get_offset_of_logEverySecond_4() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___logEverySecond_4)); }
	inline bool get_logEverySecond_4() const { return ___logEverySecond_4; }
	inline bool* get_address_of_logEverySecond_4() { return &___logEverySecond_4; }
	inline void set_logEverySecond_4(bool value)
	{
		___logEverySecond_4 = value;
	}

	inline static int32_t get_offset_of_currentLogTestCount_5() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___currentLogTestCount_5)); }
	inline int32_t get_currentLogTestCount_5() const { return ___currentLogTestCount_5; }
	inline int32_t* get_address_of_currentLogTestCount_5() { return &___currentLogTestCount_5; }
	inline void set_currentLogTestCount_5(int32_t value)
	{
		___currentLogTestCount_5 = value;
	}

	inline static int32_t get_offset_of_reporter_6() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___reporter_6)); }
	inline Reporter_t3561640551 * get_reporter_6() const { return ___reporter_6; }
	inline Reporter_t3561640551 ** get_address_of_reporter_6() { return &___reporter_6; }
	inline void set_reporter_6(Reporter_t3561640551 * value)
	{
		___reporter_6 = value;
		Il2CppCodeGenWriteBarrier(&___reporter_6, value);
	}

	inline static int32_t get_offset_of_style_7() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___style_7)); }
	inline GUIStyle_t1799908754 * get_style_7() const { return ___style_7; }
	inline GUIStyle_t1799908754 ** get_address_of_style_7() { return &___style_7; }
	inline void set_style_7(GUIStyle_t1799908754 * value)
	{
		___style_7 = value;
		Il2CppCodeGenWriteBarrier(&___style_7, value);
	}

	inline static int32_t get_offset_of_rect1_8() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___rect1_8)); }
	inline Rect_t3681755626  get_rect1_8() const { return ___rect1_8; }
	inline Rect_t3681755626 * get_address_of_rect1_8() { return &___rect1_8; }
	inline void set_rect1_8(Rect_t3681755626  value)
	{
		___rect1_8 = value;
	}

	inline static int32_t get_offset_of_rect2_9() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___rect2_9)); }
	inline Rect_t3681755626  get_rect2_9() const { return ___rect2_9; }
	inline Rect_t3681755626 * get_address_of_rect2_9() { return &___rect2_9; }
	inline void set_rect2_9(Rect_t3681755626  value)
	{
		___rect2_9 = value;
	}

	inline static int32_t get_offset_of_rect3_10() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___rect3_10)); }
	inline Rect_t3681755626  get_rect3_10() const { return ___rect3_10; }
	inline Rect_t3681755626 * get_address_of_rect3_10() { return &___rect3_10; }
	inline void set_rect3_10(Rect_t3681755626  value)
	{
		___rect3_10 = value;
	}

	inline static int32_t get_offset_of_rect4_11() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___rect4_11)); }
	inline Rect_t3681755626  get_rect4_11() const { return ___rect4_11; }
	inline Rect_t3681755626 * get_address_of_rect4_11() { return &___rect4_11; }
	inline void set_rect4_11(Rect_t3681755626  value)
	{
		___rect4_11 = value;
	}

	inline static int32_t get_offset_of_rect5_12() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___rect5_12)); }
	inline Rect_t3681755626  get_rect5_12() const { return ___rect5_12; }
	inline Rect_t3681755626 * get_address_of_rect5_12() { return &___rect5_12; }
	inline void set_rect5_12(Rect_t3681755626  value)
	{
		___rect5_12 = value;
	}

	inline static int32_t get_offset_of_rect6_13() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___rect6_13)); }
	inline Rect_t3681755626  get_rect6_13() const { return ___rect6_13; }
	inline Rect_t3681755626 * get_address_of_rect6_13() { return &___rect6_13; }
	inline void set_rect6_13(Rect_t3681755626  value)
	{
		___rect6_13 = value;
	}

	inline static int32_t get_offset_of_elapsed_14() { return static_cast<int32_t>(offsetof(TestReporter_t864384665, ___elapsed_14)); }
	inline float get_elapsed_14() const { return ___elapsed_14; }
	inline float* get_address_of_elapsed_14() { return &___elapsed_14; }
	inline void set_elapsed_14(float value)
	{
		___elapsed_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
