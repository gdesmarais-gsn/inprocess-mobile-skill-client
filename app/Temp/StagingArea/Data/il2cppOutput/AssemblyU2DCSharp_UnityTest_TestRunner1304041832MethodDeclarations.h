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

// UnityTest.TestRunner
struct TestRunner_t1304041832;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t1885632733;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>
struct IEnumerable_1_t2808638646;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Type
struct Type_t;
// UnityTest.TestResult
struct TestResult_t490498461;
// UnityTest.TestComponent
struct TestComponent_t2516511601;
// UnityTest.ITestComponent
struct ITestComponent_t2920761518;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult_ResultType581735912.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent2516511601.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult490498461.h"

// System.Void UnityTest.TestRunner::.ctor()
extern "C"  void TestRunner__ctor_m2351895006 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::get_isInitializedByRunner()
extern "C"  bool TestRunner_get_isInitializedByRunner_m3796614350 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Awake()
extern "C"  void TestRunner_Awake_m463510683 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Start()
extern "C"  void TestRunner_Start_m1599190826 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::InitRunner(System.Collections.Generic.List`1<UnityTest.TestComponent>,System.Collections.Generic.List`1<System.String>)
extern "C"  void TestRunner_InitRunner_m1035923382 (TestRunner_t1304041832 * __this, List_1_t1885632733 * ___tests0, List_1_t1398341365 * ___dynamicTestsToRun1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent> UnityTest.TestRunner::ParseListForGroups(System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>)
extern "C"  Il2CppObject* TestRunner_ParseListForGroups_m752197201 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Update()
extern "C"  void TestRunner_Update_m4091713191 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnDestroy()
extern "C"  void TestRunner_OnDestroy_m3373558557 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogHandler(System.String,System.String,UnityEngine.LogType)
extern "C"  void TestRunner_LogHandler_m2956213297 (TestRunner_t1304041832 * __this, String_t* ___condition0, String_t* ___stacktrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityTest.TestRunner::StateMachine()
extern "C"  Il2CppObject * TestRunner_StateMachine_m3541642506 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogMessage(System.String)
extern "C"  void TestRunner_LogMessage_m1520221235 (TestRunner_t1304041832 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTestRun()
extern "C"  void TestRunner_FinishTestRun_m2535838598 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::PrintResultToLog()
extern "C"  void TestRunner_PrintResultToLog_m3202900473 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LoadNextLevelOrQuit()
extern "C"  void TestRunner_LoadNextLevelOrQuit_m1208356473 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnGUI()
extern "C"  void TestRunner_OnGUI_m4164786174 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::StartNewTest()
extern "C"  void TestRunner_StartNewTest_m2384781446 (TestRunner_t1304041832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTest(UnityTest.TestResult/ResultType)
extern "C"  void TestRunner_FinishTest_m1325069965 (TestRunner_t1304041832 * __this, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestRunner UnityTest.TestRunner::GetTestRunner()
extern "C"  TestRunner_t1304041832 * TestRunner_GetTestRunner_m2902589186 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestRunner::Create()
extern "C"  GameObject_t1756533147 * TestRunner_Create_m2645519777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::IsBatchMode()
extern "C"  bool TestRunner_IsBatchMode_m926467007 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::.cctor()
extern "C"  void TestRunner__cctor_m1395955665 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<Start>m__0(System.Type)
extern "C"  String_t* TestRunner_U3CStartU3Em__0_m1296735611 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResult UnityTest.TestRunner::<InitRunner>m__1(UnityTest.TestComponent)
extern "C"  TestResult_t490498461 * TestRunner_U3CInitRunnerU3Em__1_m3056360923 (Il2CppObject * __this /* static, unused */, TestComponent_t2516511601 * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestRunner::<InitRunner>m__2(UnityTest.TestResult)
extern "C"  Il2CppObject * TestRunner_U3CInitRunnerU3Em__2_m1385019429 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<OnDestroy>m__3(UnityTest.TestResult)
extern "C"  bool TestRunner_U3COnDestroyU3Em__3_m2714852837 (TestRunner_t1304041832 * __this, TestResult_t490498461 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__4(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__4_m3842018790 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__5(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__5_m4006570311 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__6(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__6_m3458344612 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__7(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__7_m3926491909 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__8(UnityTest.TestResult)
extern "C"  String_t* TestRunner_U3CPrintResultToLogU3Em__8_m4236607815 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__9(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__9_m3619323859 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__A(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__A_m2707175355 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__B(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__B_m1211561240 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__C(UnityTest.TestResult)
extern "C"  String_t* TestRunner_U3CPrintResultToLogU3Em__C_m4240348228 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<StartNewTest>m__D(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CStartNewTestU3Em__D_m915839043 (TestRunner_t1304041832 * __this, TestResult_t490498461 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<FinishTest>m__E(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CFinishTestU3Em__E_m1879346421 (TestRunner_t1304041832 * __this, TestResult_t490498461 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
