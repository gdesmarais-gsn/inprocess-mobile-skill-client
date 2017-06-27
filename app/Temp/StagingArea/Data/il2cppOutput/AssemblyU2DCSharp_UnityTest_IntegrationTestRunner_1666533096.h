#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>
struct Dictionary_2_t114530121;
// UnityTest.ITestComponent
struct ITestComponent_t2920761518;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t3212888563;
// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct Func_2_t2325064025;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct  IntegrationTestsProvider_t1666533096  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::testCollection
	Dictionary_2_t114530121 * ___testCollection_0;
	// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::currentTestGroup
	Il2CppObject * ___currentTestGroup_1;
	// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::testToRun
	Il2CppObject* ___testToRun_2;

public:
	inline static int32_t get_offset_of_testCollection_0() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t1666533096, ___testCollection_0)); }
	inline Dictionary_2_t114530121 * get_testCollection_0() const { return ___testCollection_0; }
	inline Dictionary_2_t114530121 ** get_address_of_testCollection_0() { return &___testCollection_0; }
	inline void set_testCollection_0(Dictionary_2_t114530121 * value)
	{
		___testCollection_0 = value;
		Il2CppCodeGenWriteBarrier(&___testCollection_0, value);
	}

	inline static int32_t get_offset_of_currentTestGroup_1() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t1666533096, ___currentTestGroup_1)); }
	inline Il2CppObject * get_currentTestGroup_1() const { return ___currentTestGroup_1; }
	inline Il2CppObject ** get_address_of_currentTestGroup_1() { return &___currentTestGroup_1; }
	inline void set_currentTestGroup_1(Il2CppObject * value)
	{
		___currentTestGroup_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentTestGroup_1, value);
	}

	inline static int32_t get_offset_of_testToRun_2() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t1666533096, ___testToRun_2)); }
	inline Il2CppObject* get_testToRun_2() const { return ___testToRun_2; }
	inline Il2CppObject** get_address_of_testToRun_2() { return &___testToRun_2; }
	inline void set_testToRun_2(Il2CppObject* value)
	{
		___testToRun_2 = value;
		Il2CppCodeGenWriteBarrier(&___testToRun_2, value);
	}
};

struct IntegrationTestsProvider_t1666533096_StaticFields
{
public:
	// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<>f__am$cache0
	Func_2_t2325064025 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t1666533096_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t2325064025 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t2325064025 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t2325064025 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
