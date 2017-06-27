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

// UnityTest.TestResult
struct TestResult_t490498461;
// UnityTest.TestComponent
struct TestComponent_t2516511601;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent2516511601.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult490498461.h"
#include "AssemblyU2DCSharp_UnityTest_TestResultState1620411406.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityTest.TestResult::.ctor(UnityTest.TestComponent)
extern "C"  void TestResult__ctor_m1646622649 (TestResult_t490498461 * __this, TestComponent_t2516511601 * ___testComponent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestResult::get_GameObject()
extern "C"  GameObject_t1756533147 * TestResult_get_GameObject_m1228274866 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Update(UnityTest.TestResult)
extern "C"  void TestResult_Update_m1863801978 (TestResult_t490498461 * __this, TestResult_t490498461 * ___oldResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Reset()
extern "C"  void TestResult_Reset_m2760372268 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResultState UnityTest.TestResult::get_ResultState()
extern "C"  uint8_t TestResult_get_ResultState_m2529456988 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Message()
extern "C"  String_t* TestResult_get_Message_m1666796880 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Logs()
extern "C"  String_t* TestResult_get_Logs_m1477073444 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_Executed()
extern "C"  bool TestResult_get_Executed_m82902453 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Name()
extern "C"  String_t* TestResult_get_Name_m1227207940 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Id()
extern "C"  String_t* TestResult_get_Id_m192151902 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsSuccess()
extern "C"  bool TestResult_get_IsSuccess_m4143018983 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsTimeout()
extern "C"  bool TestResult_get_IsTimeout_m1546464887 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestResult::get_Duration()
extern "C"  double TestResult_get_Duration_m117948065 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_StackTrace()
extern "C"  String_t* TestResult_get_StackTrace_m4054519502 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_FullName()
extern "C"  String_t* TestResult_get_FullName_m3326613931 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsIgnored()
extern "C"  bool TestResult_get_IsIgnored_m638715012 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsFailure()
extern "C"  bool TestResult_get_IsFailure_m4065885444 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::GetHashCode()
extern "C"  int32_t TestResult_GetHashCode_m2267492672 (TestResult_t490498461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::CompareTo(UnityTest.TestResult)
extern "C"  int32_t TestResult_CompareTo_m2768212981 (TestResult_t490498461 * __this, TestResult_t490498461 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::Equals(System.Object)
extern "C"  bool TestResult_Equals_m1069160616 (TestResult_t490498461 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
