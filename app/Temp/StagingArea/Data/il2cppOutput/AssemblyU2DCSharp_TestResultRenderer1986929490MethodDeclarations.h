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

// TestResultRenderer
struct TestResultRenderer_t1986929490;
// System.String
struct String_t;
// ITestResult
struct ITestResult_t3256343470;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22297589086.h"

// System.Void TestResultRenderer::.ctor()
extern "C"  void TestResultRenderer__ctor_m1018687449 (TestResultRenderer_t1986929490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::ShowResults()
extern "C"  void TestResultRenderer_ShowResults_m1265660124 (TestResultRenderer_t1986929490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::AddResults(System.String,ITestResult)
extern "C"  void TestResultRenderer_AddResults_m220909478 (TestResultRenderer_t1986929490 * __this, String_t* ___sceneName0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::Draw()
extern "C"  void TestResultRenderer_Draw_m2322615333 (TestResultRenderer_t1986929490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::FailureCount()
extern "C"  int32_t TestResultRenderer_FailureCount_m3229437850 (TestResultRenderer_t1986929490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::<Draw>m__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>)
extern "C"  int32_t TestResultRenderer_U3CDrawU3Em__0_m699406227 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t2297589086  ___testGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestResultRenderer::<Draw>m__1(ITestResult)
extern "C"  bool TestResultRenderer_U3CDrawU3Em__1_m2532659101 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestResultRenderer::<Draw>m__2(ITestResult)
extern "C"  String_t* TestResultRenderer_U3CDrawU3Em__2_m786173583 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
