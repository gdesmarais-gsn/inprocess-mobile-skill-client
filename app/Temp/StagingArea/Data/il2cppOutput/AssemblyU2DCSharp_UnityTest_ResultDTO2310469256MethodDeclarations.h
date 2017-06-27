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

// UnityTest.ResultDTO
struct ResultDTO_t2310469256;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t4154586889;
// UnityTest.TestResult
struct TestResult_t490498461;
// ITestResult
struct ITestResult_t3256343470;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType2559459879.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult490498461.h"

// System.Void UnityTest.ResultDTO::.ctor(UnityTest.ResultDTO/MessageType)
extern "C"  void ResultDTO__ctor_m2997706971 (ResultDTO_t2310469256 * __this, uint8_t ___messageType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreatePing()
extern "C"  ResultDTO_t2310469256 * ResultDTO_CreatePing_m1194476820 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunStarted()
extern "C"  ResultDTO_t2310469256 * ResultDTO_CreateRunStarted_m467284258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C"  ResultDTO_t2310469256 * ResultDTO_CreateRunFinished_m2054287321 (Il2CppObject * __this /* static, unused */, List_1_t4154586889 * ___testResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestStarted(UnityTest.TestResult)
extern "C"  ResultDTO_t2310469256 * ResultDTO_CreateTestStarted_m1735683695 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestFinished(UnityTest.TestResult)
extern "C"  ResultDTO_t2310469256 * ResultDTO_CreateTestFinished_m2256157174 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateAllScenesFinished()
extern "C"  ResultDTO_t2310469256 * ResultDTO_CreateAllScenesFinished_m2902006830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ITestResult UnityTest.ResultDTO::GetSerializableTestResult(UnityTest.TestResult)
extern "C"  Il2CppObject * ResultDTO_GetSerializableTestResult_m2896258847 (Il2CppObject * __this /* static, unused */, TestResult_t490498461 * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
