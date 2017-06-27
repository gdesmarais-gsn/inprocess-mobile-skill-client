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

// UnityTest.NetworkResultSender
struct NetworkResultSender_t2246312250;
// System.String
struct String_t;
// UnityTest.ResultDTO
struct ResultDTO_t2310469256;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t1885632733;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t4154586889;
// UnityTest.TestResult
struct TestResult_t490498461;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t2289882650;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO2310469256.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult490498461.h"

// System.Void UnityTest.NetworkResultSender::.ctor(System.String,System.Int32)
extern "C"  void NetworkResultSender__ctor_m1715104555 (NetworkResultSender_t2246312250 * __this, String_t* ___ip0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::SendDTO(UnityTest.ResultDTO)
extern "C"  bool NetworkResultSender_SendDTO_m1302798018 (NetworkResultSender_t2246312250 * __this, ResultDTO_t2310469256 * ___dto0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::Ping()
extern "C"  bool NetworkResultSender_Ping_m3561006116 (NetworkResultSender_t2246312250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
extern "C"  void NetworkResultSender_RunStarted_m3201479352 (NetworkResultSender_t2246312250 * __this, String_t* ___platform0, List_1_t1885632733 * ___testsToRun1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C"  void NetworkResultSender_RunFinished_m2043468721 (NetworkResultSender_t2246312250 * __this, List_1_t4154586889 * ___testResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestStarted(UnityTest.TestResult)
extern "C"  void NetworkResultSender_TestStarted_m1005685947 (NetworkResultSender_t2246312250 * __this, TestResult_t490498461 * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestFinished(UnityTest.TestResult)
extern "C"  void NetworkResultSender_TestFinished_m3844758228 (NetworkResultSender_t2246312250 * __this, TestResult_t490498461 * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::AllScenesFinished()
extern "C"  void NetworkResultSender_AllScenesFinished_m847625980 (NetworkResultSender_t2246312250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
extern "C"  void NetworkResultSender_TestRunInterrupted_m1028919440 (NetworkResultSender_t2246312250 * __this, List_1_t2289882650 * ___testsNotRun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
