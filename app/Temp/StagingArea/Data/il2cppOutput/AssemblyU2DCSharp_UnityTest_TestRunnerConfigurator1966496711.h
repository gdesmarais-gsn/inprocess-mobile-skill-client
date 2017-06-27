#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Net.IPEndPoint>
struct List_1_t1984534898;
// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.Boolean>
struct Func_2_t2559957419;
// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.String>
struct Func_2_t763602934;
// System.Comparison`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct Comparison_1_t4181525495;
// System.Func`2<System.Net.IPEndPoint,UnityTest.NetworkResultSender>
struct Func_2_t3357224493;
// System.Func`2<System.Net.IPEndPoint,System.String>
struct Func_2_t3140132476;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestRunnerConfigurator
struct  TestRunnerConfigurator_t1966496711  : public Il2CppObject
{
public:
	// System.Boolean UnityTest.TestRunnerConfigurator::<isBatchRun>k__BackingField
	bool ___U3CisBatchRunU3Ek__BackingField_4;
	// System.Boolean UnityTest.TestRunnerConfigurator::<sendResultsOverNetwork>k__BackingField
	bool ___U3CsendResultsOverNetworkU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Net.IPEndPoint> UnityTest.TestRunnerConfigurator::m_IPEndPointList
	List_1_t1984534898 * ___m_IPEndPointList_6;

public:
	inline static int32_t get_offset_of_U3CisBatchRunU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711, ___U3CisBatchRunU3Ek__BackingField_4)); }
	inline bool get_U3CisBatchRunU3Ek__BackingField_4() const { return ___U3CisBatchRunU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisBatchRunU3Ek__BackingField_4() { return &___U3CisBatchRunU3Ek__BackingField_4; }
	inline void set_U3CisBatchRunU3Ek__BackingField_4(bool value)
	{
		___U3CisBatchRunU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsendResultsOverNetworkU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711, ___U3CsendResultsOverNetworkU3Ek__BackingField_5)); }
	inline bool get_U3CsendResultsOverNetworkU3Ek__BackingField_5() const { return ___U3CsendResultsOverNetworkU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsendResultsOverNetworkU3Ek__BackingField_5() { return &___U3CsendResultsOverNetworkU3Ek__BackingField_5; }
	inline void set_U3CsendResultsOverNetworkU3Ek__BackingField_5(bool value)
	{
		___U3CsendResultsOverNetworkU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_IPEndPointList_6() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711, ___m_IPEndPointList_6)); }
	inline List_1_t1984534898 * get_m_IPEndPointList_6() const { return ___m_IPEndPointList_6; }
	inline List_1_t1984534898 ** get_address_of_m_IPEndPointList_6() { return &___m_IPEndPointList_6; }
	inline void set_m_IPEndPointList_6(List_1_t1984534898 * value)
	{
		___m_IPEndPointList_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_IPEndPointList_6, value);
	}
};

struct TestRunnerConfigurator_t1966496711_StaticFields
{
public:
	// System.String UnityTest.TestRunnerConfigurator::integrationTestsNetwork
	String_t* ___integrationTestsNetwork_0;
	// System.String UnityTest.TestRunnerConfigurator::batchRunFileMarker
	String_t* ___batchRunFileMarker_1;
	// System.String UnityTest.TestRunnerConfigurator::testScenesToRun
	String_t* ___testScenesToRun_2;
	// System.String UnityTest.TestRunnerConfigurator::previousScenes
	String_t* ___previousScenes_3;
	// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.Boolean> UnityTest.TestRunnerConfigurator::<>f__am$cache0
	Func_2_t2559957419 * ___U3CU3Ef__amU24cache0_7;
	// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.String> UnityTest.TestRunnerConfigurator::<>f__am$cache1
	Func_2_t763602934 * ___U3CU3Ef__amU24cache1_8;
	// System.Comparison`1<System.Net.NetworkInformation.UnicastIPAddressInformation> UnityTest.TestRunnerConfigurator::<>f__am$cache2
	Comparison_1_t4181525495 * ___U3CU3Ef__amU24cache2_9;
	// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.String> UnityTest.TestRunnerConfigurator::<>f__am$cache3
	Func_2_t763602934 * ___U3CU3Ef__amU24cache3_10;
	// System.Func`2<System.Net.IPEndPoint,UnityTest.NetworkResultSender> UnityTest.TestRunnerConfigurator::<>f__am$cache4
	Func_2_t3357224493 * ___U3CU3Ef__amU24cache4_11;
	// System.Func`2<System.Net.IPEndPoint,System.String> UnityTest.TestRunnerConfigurator::<>f__am$cache5
	Func_2_t3140132476 * ___U3CU3Ef__amU24cache5_12;

public:
	inline static int32_t get_offset_of_integrationTestsNetwork_0() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___integrationTestsNetwork_0)); }
	inline String_t* get_integrationTestsNetwork_0() const { return ___integrationTestsNetwork_0; }
	inline String_t** get_address_of_integrationTestsNetwork_0() { return &___integrationTestsNetwork_0; }
	inline void set_integrationTestsNetwork_0(String_t* value)
	{
		___integrationTestsNetwork_0 = value;
		Il2CppCodeGenWriteBarrier(&___integrationTestsNetwork_0, value);
	}

	inline static int32_t get_offset_of_batchRunFileMarker_1() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___batchRunFileMarker_1)); }
	inline String_t* get_batchRunFileMarker_1() const { return ___batchRunFileMarker_1; }
	inline String_t** get_address_of_batchRunFileMarker_1() { return &___batchRunFileMarker_1; }
	inline void set_batchRunFileMarker_1(String_t* value)
	{
		___batchRunFileMarker_1 = value;
		Il2CppCodeGenWriteBarrier(&___batchRunFileMarker_1, value);
	}

	inline static int32_t get_offset_of_testScenesToRun_2() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___testScenesToRun_2)); }
	inline String_t* get_testScenesToRun_2() const { return ___testScenesToRun_2; }
	inline String_t** get_address_of_testScenesToRun_2() { return &___testScenesToRun_2; }
	inline void set_testScenesToRun_2(String_t* value)
	{
		___testScenesToRun_2 = value;
		Il2CppCodeGenWriteBarrier(&___testScenesToRun_2, value);
	}

	inline static int32_t get_offset_of_previousScenes_3() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___previousScenes_3)); }
	inline String_t* get_previousScenes_3() const { return ___previousScenes_3; }
	inline String_t** get_address_of_previousScenes_3() { return &___previousScenes_3; }
	inline void set_previousScenes_3(String_t* value)
	{
		___previousScenes_3 = value;
		Il2CppCodeGenWriteBarrier(&___previousScenes_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_2_t2559957419 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_2_t2559957419 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_2_t2559957419 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Func_2_t763602934 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Func_2_t763602934 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Func_2_t763602934 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_9() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___U3CU3Ef__amU24cache2_9)); }
	inline Comparison_1_t4181525495 * get_U3CU3Ef__amU24cache2_9() const { return ___U3CU3Ef__amU24cache2_9; }
	inline Comparison_1_t4181525495 ** get_address_of_U3CU3Ef__amU24cache2_9() { return &___U3CU3Ef__amU24cache2_9; }
	inline void set_U3CU3Ef__amU24cache2_9(Comparison_1_t4181525495 * value)
	{
		___U3CU3Ef__amU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_10() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___U3CU3Ef__amU24cache3_10)); }
	inline Func_2_t763602934 * get_U3CU3Ef__amU24cache3_10() const { return ___U3CU3Ef__amU24cache3_10; }
	inline Func_2_t763602934 ** get_address_of_U3CU3Ef__amU24cache3_10() { return &___U3CU3Ef__amU24cache3_10; }
	inline void set_U3CU3Ef__amU24cache3_10(Func_2_t763602934 * value)
	{
		___U3CU3Ef__amU24cache3_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_11() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___U3CU3Ef__amU24cache4_11)); }
	inline Func_2_t3357224493 * get_U3CU3Ef__amU24cache4_11() const { return ___U3CU3Ef__amU24cache4_11; }
	inline Func_2_t3357224493 ** get_address_of_U3CU3Ef__amU24cache4_11() { return &___U3CU3Ef__amU24cache4_11; }
	inline void set_U3CU3Ef__amU24cache4_11(Func_2_t3357224493 * value)
	{
		___U3CU3Ef__amU24cache4_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_12() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t1966496711_StaticFields, ___U3CU3Ef__amU24cache5_12)); }
	inline Func_2_t3140132476 * get_U3CU3Ef__amU24cache5_12() const { return ___U3CU3Ef__amU24cache5_12; }
	inline Func_2_t3140132476 ** get_address_of_U3CU3Ef__amU24cache5_12() { return &___U3CU3Ef__amU24cache5_12; }
	inline void set_U3CU3Ef__amU24cache5_12(Func_2_t3140132476 * value)
	{
		___U3CU3Ef__amU24cache5_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
