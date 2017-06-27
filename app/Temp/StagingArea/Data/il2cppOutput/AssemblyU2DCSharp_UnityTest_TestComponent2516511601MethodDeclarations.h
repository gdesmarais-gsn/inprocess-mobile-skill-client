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

// UnityTest.TestComponent
struct TestComponent_t2516511601;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityTest.ITestComponent
struct ITestComponent_t2920761518;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t1885632733;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1595930271;
// System.Reflection.Assembly
struct Assembly_t4268412390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent2516511601.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"

// System.Void UnityTest.TestComponent::.ctor()
extern "C"  void TestComponent__ctor_m2022488661 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExludedOnThisPlatform()
extern "C"  bool TestComponent_IsExludedOnThisPlatform_m2715882924 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool TestComponent_IsAssignableFrom_m1777167846 (Il2CppObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExceptionExpected(System.String)
extern "C"  bool TestComponent_IsExceptionExpected_m1446780962 (TestComponent_t2516511601 * __this, String_t* ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnException()
extern "C"  bool TestComponent_ShouldSucceedOnException_m4007130788 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestComponent::GetTimeout()
extern "C"  double TestComponent_GetTimeout_m3814449449 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsIgnored()
extern "C"  bool TestComponent_IsIgnored_m2040452679 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnAssertions()
extern "C"  bool TestComponent_ShouldSucceedOnAssertions_m942204676 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.TestComponent::GetTypeByName(System.String)
extern "C"  Type_t * TestComponent_GetTypeByName_m524528909 (Il2CppObject * __this /* static, unused */, String_t* ___className0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::OnValidate()
extern "C"  void TestComponent_OnValidate_m252516352 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::EnableTest(System.Boolean)
extern "C"  void TestComponent_EnableTest_m2066779193 (TestComponent_t2516511601 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::CompareTo(UnityTest.ITestComponent)
extern "C"  int32_t TestComponent_CompareTo_m1478284906 (TestComponent_t2516511601 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsTestGroup()
extern "C"  bool TestComponent_IsTestGroup_m2601912502 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::get_Name()
extern "C"  String_t* TestComponent_get_Name_m1475120506 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestComponent::GetTestGroup()
extern "C"  Il2CppObject * TestComponent_GetTestGroup_m4074183410 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::Equals(System.Object)
extern "C"  bool TestComponent_Equals_m1826577164 (TestComponent_t2516511601 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::GetHashCode()
extern "C"  int32_t TestComponent_GetHashCode_m3482172304 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Equality(UnityTest.TestComponent,UnityTest.TestComponent)
extern "C"  bool TestComponent_op_Equality_m920468941 (Il2CppObject * __this /* static, unused */, TestComponent_t2516511601 * ___a0, TestComponent_t2516511601 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Inequality(UnityTest.TestComponent,UnityTest.TestComponent)
extern "C"  bool TestComponent_op_Inequality_m3300184364 (Il2CppObject * __this /* static, unused */, TestComponent_t2516511601 * ___a0, TestComponent_t2516511601 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestComponent UnityTest.TestComponent::CreateDynamicTest(System.Type)
extern "C"  TestComponent_t2516511601 * TestComponent_CreateDynamicTest_m2215029740 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest()
extern "C"  GameObject_t1756533147 * TestComponent_CreateTest_m1015745604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest(System.String)
extern "C"  GameObject_t1756533147 * TestComponent_CreateTest_m1629125538 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTestsOnScene()
extern "C"  List_1_t1885632733 * TestComponent_FindAllTestsOnScene_m3397300754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTopTestsOnScene()
extern "C"  List_1_t1885632733 * TestComponent_FindAllTopTestsOnScene_m3180001167 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllDynamicTestsOnScene()
extern "C"  List_1_t1885632733 * TestComponent_FindAllDynamicTestsOnScene_m1702380637 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DestroyAllDynamicTests()
extern "C"  void TestComponent_DestroyAllDynamicTests_m273851988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DisableAllTests()
extern "C"  void TestComponent_DisableAllTests_m2617072481 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyTestsOnScene()
extern "C"  bool TestComponent_AnyTestsOnScene_m702308525 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyDynamicTestForCurrentScene()
extern "C"  bool TestComponent_AnyDynamicTestForCurrentScene_m2386798880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::GetTypesWithHelpAttribute(System.String)
extern "C"  Il2CppObject* TestComponent_GetTypesWithHelpAttribute_m4123827388 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::.cctor()
extern "C"  void TestComponent__cctor_m2271889498 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<IsExludedOnThisPlatform>m__0(System.String)
extern "C"  bool TestComponent_U3CIsExludedOnThisPlatformU3Em__0_m2322532271 (Il2CppObject * __this /* static, unused */, String_t* ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::<IsExceptionExpected>m__1(System.String)
extern "C"  String_t* TestComponent_U3CIsExceptionExpectedU3Em__1_m2337563019 (Il2CppObject * __this /* static, unused */, String_t* ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::<GetTypeByName>m__2(System.Reflection.Assembly)
extern "C"  Il2CppObject* TestComponent_U3CGetTypeByNameU3Em__2_m2372521881 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllTopTestsOnScene>m__3(UnityTest.TestComponent)
extern "C"  bool TestComponent_U3CFindAllTopTestsOnSceneU3Em__3_m1172336192 (Il2CppObject * __this /* static, unused */, TestComponent_t2516511601 * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllDynamicTestsOnScene>m__4(UnityTest.TestComponent)
extern "C"  bool TestComponent_U3CFindAllDynamicTestsOnSceneU3Em__4_m2867683043 (Il2CppObject * __this /* static, unused */, TestComponent_t2516511601 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::UnityTest.ITestComponent.get_gameObject()
extern "C"  GameObject_t1756533147 * TestComponent_UnityTest_ITestComponent_get_gameObject_m4259331441 (TestComponent_t2516511601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
