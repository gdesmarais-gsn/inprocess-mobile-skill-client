#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>
struct Dictionary_2_t245276568;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>
struct Func_2_t1384938115;
// System.Func`2<ITestResult,System.Boolean>
struct Func_2_t3355952361;
// System.Func`2<ITestResult,System.String>
struct Func_2_t1559597876;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestResultRenderer
struct  TestResultRenderer_t1986929490  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>> TestResultRenderer::m_TestCollection
	Dictionary_2_t245276568 * ___m_TestCollection_0;
	// System.Boolean TestResultRenderer::m_ShowResults
	bool ___m_ShowResults_1;
	// UnityEngine.Vector2 TestResultRenderer::m_ScrollPosition
	Vector2_t2243707579  ___m_ScrollPosition_2;
	// System.Int32 TestResultRenderer::m_FailureCount
	int32_t ___m_FailureCount_3;

public:
	inline static int32_t get_offset_of_m_TestCollection_0() { return static_cast<int32_t>(offsetof(TestResultRenderer_t1986929490, ___m_TestCollection_0)); }
	inline Dictionary_2_t245276568 * get_m_TestCollection_0() const { return ___m_TestCollection_0; }
	inline Dictionary_2_t245276568 ** get_address_of_m_TestCollection_0() { return &___m_TestCollection_0; }
	inline void set_m_TestCollection_0(Dictionary_2_t245276568 * value)
	{
		___m_TestCollection_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_TestCollection_0, value);
	}

	inline static int32_t get_offset_of_m_ShowResults_1() { return static_cast<int32_t>(offsetof(TestResultRenderer_t1986929490, ___m_ShowResults_1)); }
	inline bool get_m_ShowResults_1() const { return ___m_ShowResults_1; }
	inline bool* get_address_of_m_ShowResults_1() { return &___m_ShowResults_1; }
	inline void set_m_ShowResults_1(bool value)
	{
		___m_ShowResults_1 = value;
	}

	inline static int32_t get_offset_of_m_ScrollPosition_2() { return static_cast<int32_t>(offsetof(TestResultRenderer_t1986929490, ___m_ScrollPosition_2)); }
	inline Vector2_t2243707579  get_m_ScrollPosition_2() const { return ___m_ScrollPosition_2; }
	inline Vector2_t2243707579 * get_address_of_m_ScrollPosition_2() { return &___m_ScrollPosition_2; }
	inline void set_m_ScrollPosition_2(Vector2_t2243707579  value)
	{
		___m_ScrollPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_FailureCount_3() { return static_cast<int32_t>(offsetof(TestResultRenderer_t1986929490, ___m_FailureCount_3)); }
	inline int32_t get_m_FailureCount_3() const { return ___m_FailureCount_3; }
	inline int32_t* get_address_of_m_FailureCount_3() { return &___m_FailureCount_3; }
	inline void set_m_FailureCount_3(int32_t value)
	{
		___m_FailureCount_3 = value;
	}
};

struct TestResultRenderer_t1986929490_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32> TestResultRenderer::<>f__am$cache0
	Func_2_t1384938115 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<ITestResult,System.Boolean> TestResultRenderer::<>f__am$cache1
	Func_2_t3355952361 * ___U3CU3Ef__amU24cache1_5;
	// System.Func`2<ITestResult,System.String> TestResultRenderer::<>f__am$cache2
	Func_2_t1559597876 * ___U3CU3Ef__amU24cache2_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(TestResultRenderer_t1986929490_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t1384938115 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t1384938115 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t1384938115 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(TestResultRenderer_t1986929490_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t3355952361 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t3355952361 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t3355952361 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(TestResultRenderer_t1986929490_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline Func_2_t1559597876 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline Func_2_t1559597876 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(Func_2_t1559597876 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
