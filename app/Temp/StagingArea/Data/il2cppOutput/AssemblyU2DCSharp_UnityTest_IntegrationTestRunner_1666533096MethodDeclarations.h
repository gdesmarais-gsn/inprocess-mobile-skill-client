#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t1666533096;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t3212888563;
// UnityTest.ITestComponent
struct ITestComponent_t2920761518;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t2289882650;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::.ctor(System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>)
extern "C"  void IntegrationTestsProvider__ctor_m3921523350 (IntegrationTestsProvider_t1666533096 * __this, Il2CppObject* ___tests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AddTestToList(UnityTest.ITestComponent)
extern "C"  void IntegrationTestsProvider_AddTestToList_m1886687841 (IntegrationTestsProvider_t1666533096 * __this, Il2CppObject * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetNextTest()
extern "C"  Il2CppObject * IntegrationTestsProvider_GetNextTest_m4242984223 (IntegrationTestsProvider_t1666533096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FinishTest(UnityTest.ITestComponent)
extern "C"  void IntegrationTestsProvider_FinishTest_m2677561504 (IntegrationTestsProvider_t1666533096 * __this, Il2CppObject * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindNextTestGroup(UnityTest.ITestComponent)
extern "C"  Il2CppObject * IntegrationTestsProvider_FindNextTestGroup_m2091128510 (IntegrationTestsProvider_t1666533096 * __this, Il2CppObject * ___testGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindInnerTestGroup(UnityTest.ITestComponent)
extern "C"  Il2CppObject * IntegrationTestsProvider_FindInnerTestGroup_m1719555685 (IntegrationTestsProvider_t1666533096 * __this, Il2CppObject * ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AnyTestsLeft()
extern "C"  bool IntegrationTestsProvider_AnyTestsLeft_m3901869230 (IntegrationTestsProvider_t1666533096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetRemainingTests()
extern "C"  List_1_t2289882650 * IntegrationTestsProvider_GetRemainingTests_m1613368701 (IntegrationTestsProvider_t1666533096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<IntegrationTestsProvider>m__0(UnityTest.ITestComponent)
extern "C"  Il2CppObject * IntegrationTestsProvider_U3CIntegrationTestsProviderU3Em__0_m137894666 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
