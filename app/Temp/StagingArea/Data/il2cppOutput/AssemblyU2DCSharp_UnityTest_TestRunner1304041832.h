#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TestResultRenderer
struct TestResultRenderer_t1986929490;
// UnityTest.TestComponent
struct TestComponent_t2516511601;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t4154586889;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t1885632733;
// System.String
struct String_t;
// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t1966496711;
// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct TestRunnerCallbackList_t3689696405;
// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t1666533096;
// System.Func`2<System.Type,System.String>
struct Func_2_t215605592;
// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>
struct Func_2_t944794905;
// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent>
struct Func_2_t1804997582;
// System.Func`2<UnityTest.TestResult,System.Boolean>
struct Func_2_t2709810782;
// System.Func`2<UnityTest.TestResult,System.String>
struct Func_2_t913456297;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UnityTest_TestRunner_TestState193983825.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestRunner
struct  TestRunner_t1304041832  : public MonoBehaviour_t1158329972
{
public:
	// UnityTest.TestComponent UnityTest.TestRunner::currentTest
	TestComponent_t2516511601 * ___currentTest_4;
	// System.Collections.Generic.List`1<UnityTest.TestResult> UnityTest.TestRunner::m_ResultList
	List_1_t4154586889 * ___m_ResultList_5;
	// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestRunner::m_TestComponents
	List_1_t1885632733 * ___m_TestComponents_6;
	// System.Double UnityTest.TestRunner::m_StartTime
	double ___m_StartTime_7;
	// System.Boolean UnityTest.TestRunner::m_ReadyToRun
	bool ___m_ReadyToRun_8;
	// System.String UnityTest.TestRunner::m_TestMessages
	String_t* ___m_TestMessages_9;
	// System.String UnityTest.TestRunner::m_Stacktrace
	String_t* ___m_Stacktrace_10;
	// UnityTest.TestRunner/TestState UnityTest.TestRunner::m_TestState
	int32_t ___m_TestState_11;
	// UnityTest.TestRunnerConfigurator UnityTest.TestRunner::m_Configurator
	TestRunnerConfigurator_t1966496711 * ___m_Configurator_12;
	// UnityTest.IntegrationTestRunner.TestRunnerCallbackList UnityTest.TestRunner::TestRunnerCallback
	TestRunnerCallbackList_t3689696405 * ___TestRunnerCallback_13;
	// UnityTest.IntegrationTestRunner.IntegrationTestsProvider UnityTest.TestRunner::m_TestsProvider
	IntegrationTestsProvider_t1666533096 * ___m_TestsProvider_14;

public:
	inline static int32_t get_offset_of_currentTest_4() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___currentTest_4)); }
	inline TestComponent_t2516511601 * get_currentTest_4() const { return ___currentTest_4; }
	inline TestComponent_t2516511601 ** get_address_of_currentTest_4() { return &___currentTest_4; }
	inline void set_currentTest_4(TestComponent_t2516511601 * value)
	{
		___currentTest_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentTest_4, value);
	}

	inline static int32_t get_offset_of_m_ResultList_5() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_ResultList_5)); }
	inline List_1_t4154586889 * get_m_ResultList_5() const { return ___m_ResultList_5; }
	inline List_1_t4154586889 ** get_address_of_m_ResultList_5() { return &___m_ResultList_5; }
	inline void set_m_ResultList_5(List_1_t4154586889 * value)
	{
		___m_ResultList_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_ResultList_5, value);
	}

	inline static int32_t get_offset_of_m_TestComponents_6() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_TestComponents_6)); }
	inline List_1_t1885632733 * get_m_TestComponents_6() const { return ___m_TestComponents_6; }
	inline List_1_t1885632733 ** get_address_of_m_TestComponents_6() { return &___m_TestComponents_6; }
	inline void set_m_TestComponents_6(List_1_t1885632733 * value)
	{
		___m_TestComponents_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_TestComponents_6, value);
	}

	inline static int32_t get_offset_of_m_StartTime_7() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_StartTime_7)); }
	inline double get_m_StartTime_7() const { return ___m_StartTime_7; }
	inline double* get_address_of_m_StartTime_7() { return &___m_StartTime_7; }
	inline void set_m_StartTime_7(double value)
	{
		___m_StartTime_7 = value;
	}

	inline static int32_t get_offset_of_m_ReadyToRun_8() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_ReadyToRun_8)); }
	inline bool get_m_ReadyToRun_8() const { return ___m_ReadyToRun_8; }
	inline bool* get_address_of_m_ReadyToRun_8() { return &___m_ReadyToRun_8; }
	inline void set_m_ReadyToRun_8(bool value)
	{
		___m_ReadyToRun_8 = value;
	}

	inline static int32_t get_offset_of_m_TestMessages_9() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_TestMessages_9)); }
	inline String_t* get_m_TestMessages_9() const { return ___m_TestMessages_9; }
	inline String_t** get_address_of_m_TestMessages_9() { return &___m_TestMessages_9; }
	inline void set_m_TestMessages_9(String_t* value)
	{
		___m_TestMessages_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_TestMessages_9, value);
	}

	inline static int32_t get_offset_of_m_Stacktrace_10() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_Stacktrace_10)); }
	inline String_t* get_m_Stacktrace_10() const { return ___m_Stacktrace_10; }
	inline String_t** get_address_of_m_Stacktrace_10() { return &___m_Stacktrace_10; }
	inline void set_m_Stacktrace_10(String_t* value)
	{
		___m_Stacktrace_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Stacktrace_10, value);
	}

	inline static int32_t get_offset_of_m_TestState_11() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_TestState_11)); }
	inline int32_t get_m_TestState_11() const { return ___m_TestState_11; }
	inline int32_t* get_address_of_m_TestState_11() { return &___m_TestState_11; }
	inline void set_m_TestState_11(int32_t value)
	{
		___m_TestState_11 = value;
	}

	inline static int32_t get_offset_of_m_Configurator_12() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_Configurator_12)); }
	inline TestRunnerConfigurator_t1966496711 * get_m_Configurator_12() const { return ___m_Configurator_12; }
	inline TestRunnerConfigurator_t1966496711 ** get_address_of_m_Configurator_12() { return &___m_Configurator_12; }
	inline void set_m_Configurator_12(TestRunnerConfigurator_t1966496711 * value)
	{
		___m_Configurator_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Configurator_12, value);
	}

	inline static int32_t get_offset_of_TestRunnerCallback_13() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___TestRunnerCallback_13)); }
	inline TestRunnerCallbackList_t3689696405 * get_TestRunnerCallback_13() const { return ___TestRunnerCallback_13; }
	inline TestRunnerCallbackList_t3689696405 ** get_address_of_TestRunnerCallback_13() { return &___TestRunnerCallback_13; }
	inline void set_TestRunnerCallback_13(TestRunnerCallbackList_t3689696405 * value)
	{
		___TestRunnerCallback_13 = value;
		Il2CppCodeGenWriteBarrier(&___TestRunnerCallback_13, value);
	}

	inline static int32_t get_offset_of_m_TestsProvider_14() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832, ___m_TestsProvider_14)); }
	inline IntegrationTestsProvider_t1666533096 * get_m_TestsProvider_14() const { return ___m_TestsProvider_14; }
	inline IntegrationTestsProvider_t1666533096 ** get_address_of_m_TestsProvider_14() { return &___m_TestsProvider_14; }
	inline void set_m_TestsProvider_14(IntegrationTestsProvider_t1666533096 * value)
	{
		___m_TestsProvider_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_TestsProvider_14, value);
	}
};

struct TestRunner_t1304041832_StaticFields
{
public:
	// System.Int32 UnityTest.TestRunner::TestSceneNumber
	int32_t ___TestSceneNumber_2;
	// TestResultRenderer UnityTest.TestRunner::k_ResultRenderer
	TestResultRenderer_t1986929490 * ___k_ResultRenderer_3;
	// System.Func`2<System.Type,System.String> UnityTest.TestRunner::<>f__am$cache0
	Func_2_t215605592 * ___U3CU3Ef__amU24cache0_23;
	// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult> UnityTest.TestRunner::<>f__am$cache1
	Func_2_t944794905 * ___U3CU3Ef__amU24cache1_24;
	// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent> UnityTest.TestRunner::<>f__am$cache2
	Func_2_t1804997582 * ___U3CU3Ef__amU24cache2_25;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache3
	Func_2_t2709810782 * ___U3CU3Ef__amU24cache3_26;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache4
	Func_2_t2709810782 * ___U3CU3Ef__amU24cache4_27;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache5
	Func_2_t2709810782 * ___U3CU3Ef__amU24cache5_28;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache6
	Func_2_t2709810782 * ___U3CU3Ef__amU24cache6_29;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache7
	Func_2_t913456297 * ___U3CU3Ef__amU24cache7_30;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache8
	Func_2_t2709810782 * ___U3CU3Ef__amU24cache8_31;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache9
	Func_2_t2709810782 * ___U3CU3Ef__amU24cache9_32;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cacheA
	Func_2_t2709810782 * ___U3CU3Ef__amU24cacheA_33;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cacheB
	Func_2_t913456297 * ___U3CU3Ef__amU24cacheB_34;

public:
	inline static int32_t get_offset_of_TestSceneNumber_2() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___TestSceneNumber_2)); }
	inline int32_t get_TestSceneNumber_2() const { return ___TestSceneNumber_2; }
	inline int32_t* get_address_of_TestSceneNumber_2() { return &___TestSceneNumber_2; }
	inline void set_TestSceneNumber_2(int32_t value)
	{
		___TestSceneNumber_2 = value;
	}

	inline static int32_t get_offset_of_k_ResultRenderer_3() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___k_ResultRenderer_3)); }
	inline TestResultRenderer_t1986929490 * get_k_ResultRenderer_3() const { return ___k_ResultRenderer_3; }
	inline TestResultRenderer_t1986929490 ** get_address_of_k_ResultRenderer_3() { return &___k_ResultRenderer_3; }
	inline void set_k_ResultRenderer_3(TestResultRenderer_t1986929490 * value)
	{
		___k_ResultRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___k_ResultRenderer_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_23() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache0_23)); }
	inline Func_2_t215605592 * get_U3CU3Ef__amU24cache0_23() const { return ___U3CU3Ef__amU24cache0_23; }
	inline Func_2_t215605592 ** get_address_of_U3CU3Ef__amU24cache0_23() { return &___U3CU3Ef__amU24cache0_23; }
	inline void set_U3CU3Ef__amU24cache0_23(Func_2_t215605592 * value)
	{
		___U3CU3Ef__amU24cache0_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_24() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache1_24)); }
	inline Func_2_t944794905 * get_U3CU3Ef__amU24cache1_24() const { return ___U3CU3Ef__amU24cache1_24; }
	inline Func_2_t944794905 ** get_address_of_U3CU3Ef__amU24cache1_24() { return &___U3CU3Ef__amU24cache1_24; }
	inline void set_U3CU3Ef__amU24cache1_24(Func_2_t944794905 * value)
	{
		___U3CU3Ef__amU24cache1_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_25() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache2_25)); }
	inline Func_2_t1804997582 * get_U3CU3Ef__amU24cache2_25() const { return ___U3CU3Ef__amU24cache2_25; }
	inline Func_2_t1804997582 ** get_address_of_U3CU3Ef__amU24cache2_25() { return &___U3CU3Ef__amU24cache2_25; }
	inline void set_U3CU3Ef__amU24cache2_25(Func_2_t1804997582 * value)
	{
		___U3CU3Ef__amU24cache2_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_26() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache3_26)); }
	inline Func_2_t2709810782 * get_U3CU3Ef__amU24cache3_26() const { return ___U3CU3Ef__amU24cache3_26; }
	inline Func_2_t2709810782 ** get_address_of_U3CU3Ef__amU24cache3_26() { return &___U3CU3Ef__amU24cache3_26; }
	inline void set_U3CU3Ef__amU24cache3_26(Func_2_t2709810782 * value)
	{
		___U3CU3Ef__amU24cache3_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_27() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache4_27)); }
	inline Func_2_t2709810782 * get_U3CU3Ef__amU24cache4_27() const { return ___U3CU3Ef__amU24cache4_27; }
	inline Func_2_t2709810782 ** get_address_of_U3CU3Ef__amU24cache4_27() { return &___U3CU3Ef__amU24cache4_27; }
	inline void set_U3CU3Ef__amU24cache4_27(Func_2_t2709810782 * value)
	{
		___U3CU3Ef__amU24cache4_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_28() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache5_28)); }
	inline Func_2_t2709810782 * get_U3CU3Ef__amU24cache5_28() const { return ___U3CU3Ef__amU24cache5_28; }
	inline Func_2_t2709810782 ** get_address_of_U3CU3Ef__amU24cache5_28() { return &___U3CU3Ef__amU24cache5_28; }
	inline void set_U3CU3Ef__amU24cache5_28(Func_2_t2709810782 * value)
	{
		___U3CU3Ef__amU24cache5_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_29() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache6_29)); }
	inline Func_2_t2709810782 * get_U3CU3Ef__amU24cache6_29() const { return ___U3CU3Ef__amU24cache6_29; }
	inline Func_2_t2709810782 ** get_address_of_U3CU3Ef__amU24cache6_29() { return &___U3CU3Ef__amU24cache6_29; }
	inline void set_U3CU3Ef__amU24cache6_29(Func_2_t2709810782 * value)
	{
		___U3CU3Ef__amU24cache6_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_30() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache7_30)); }
	inline Func_2_t913456297 * get_U3CU3Ef__amU24cache7_30() const { return ___U3CU3Ef__amU24cache7_30; }
	inline Func_2_t913456297 ** get_address_of_U3CU3Ef__amU24cache7_30() { return &___U3CU3Ef__amU24cache7_30; }
	inline void set_U3CU3Ef__amU24cache7_30(Func_2_t913456297 * value)
	{
		___U3CU3Ef__amU24cache7_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_31() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache8_31)); }
	inline Func_2_t2709810782 * get_U3CU3Ef__amU24cache8_31() const { return ___U3CU3Ef__amU24cache8_31; }
	inline Func_2_t2709810782 ** get_address_of_U3CU3Ef__amU24cache8_31() { return &___U3CU3Ef__amU24cache8_31; }
	inline void set_U3CU3Ef__amU24cache8_31(Func_2_t2709810782 * value)
	{
		___U3CU3Ef__amU24cache8_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_32() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cache9_32)); }
	inline Func_2_t2709810782 * get_U3CU3Ef__amU24cache9_32() const { return ___U3CU3Ef__amU24cache9_32; }
	inline Func_2_t2709810782 ** get_address_of_U3CU3Ef__amU24cache9_32() { return &___U3CU3Ef__amU24cache9_32; }
	inline void set_U3CU3Ef__amU24cache9_32(Func_2_t2709810782 * value)
	{
		___U3CU3Ef__amU24cache9_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_33() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cacheA_33)); }
	inline Func_2_t2709810782 * get_U3CU3Ef__amU24cacheA_33() const { return ___U3CU3Ef__amU24cacheA_33; }
	inline Func_2_t2709810782 ** get_address_of_U3CU3Ef__amU24cacheA_33() { return &___U3CU3Ef__amU24cacheA_33; }
	inline void set_U3CU3Ef__amU24cacheA_33(Func_2_t2709810782 * value)
	{
		___U3CU3Ef__amU24cacheA_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_34() { return static_cast<int32_t>(offsetof(TestRunner_t1304041832_StaticFields, ___U3CU3Ef__amU24cacheB_34)); }
	inline Func_2_t913456297 * get_U3CU3Ef__amU24cacheB_34() const { return ___U3CU3Ef__amU24cacheB_34; }
	inline Func_2_t913456297 ** get_address_of_U3CU3Ef__amU24cacheB_34() { return &___U3CU3Ef__amU24cacheB_34; }
	inline void set_U3CU3Ef__amU24cacheB_34(Func_2_t913456297 * value)
	{
		___U3CU3Ef__amU24cacheB_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
