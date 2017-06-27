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

// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t1966496711;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t327193412;
// System.Net.NetworkInformation.UnicastIPAddressInformation
struct UnicastIPAddressInformation_t2919786644;
// UnityTest.NetworkResultSender
struct NetworkResultSender_t2246312250;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddr2919786644.h"
#include "System_System_Net_IPEndPoint2615413766.h"

// System.Void UnityTest.TestRunnerConfigurator::.ctor()
extern "C"  void TestRunnerConfigurator__ctor_m705632011 (TestRunnerConfigurator_t1966496711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_isBatchRun()
extern "C"  bool TestRunnerConfigurator_get_isBatchRun_m4088445273 (TestRunnerConfigurator_t1966496711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_isBatchRun(System.Boolean)
extern "C"  void TestRunnerConfigurator_set_isBatchRun_m557229600 (TestRunnerConfigurator_t1966496711 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_sendResultsOverNetwork()
extern "C"  bool TestRunnerConfigurator_get_sendResultsOverNetwork_m2213479566 (TestRunnerConfigurator_t1966496711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_sendResultsOverNetwork(System.Boolean)
extern "C"  void TestRunnerConfigurator_set_sendResultsOverNetwork_m3490115631 (TestRunnerConfigurator_t1966496711 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetIntegrationTestScenes(System.Int32)
extern "C"  String_t* TestRunnerConfigurator_GetIntegrationTestScenes_m1098943538 (TestRunnerConfigurator_t1966496711 * __this, int32_t ___testSceneNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForSendingResultsOverNetwork()
extern "C"  void TestRunnerConfigurator_CheckForSendingResultsOverNetwork_m3289821816 (TestRunnerConfigurator_t1966496711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTextAsset(System.String)
extern "C"  String_t* TestRunnerConfigurator_GetTextFromTextAsset_m1284058970 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTempFile(System.String)
extern "C"  String_t* TestRunnerConfigurator_GetTextFromTempFile_m2815795139 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForBatchMode()
extern "C"  void TestRunnerConfigurator_CheckForBatchMode_m3039033525 (TestRunnerConfigurator_t1966496711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UnityTest.TestRunnerConfigurator::GetAvailableNetworkIPs()
extern "C"  List_1_t1398341365 * TestRunnerConfigurator_GetAvailableNetworkIPs_m2707387739 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback UnityTest.TestRunnerConfigurator::ResolveNetworkConnection()
extern "C"  Il2CppObject * TestRunnerConfigurator_ResolveNetworkConnection_m3878511651 (TestRunnerConfigurator_t1966496711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::.cctor()
extern "C"  void TestRunnerConfigurator__cctor_m4037718552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::<GetAvailableNetworkIPs>m__0(System.Net.NetworkInformation.UnicastIPAddressInformation)
extern "C"  bool TestRunnerConfigurator_U3CGetAvailableNetworkIPsU3Em__0_m214278369 (Il2CppObject * __this /* static, unused */, UnicastIPAddressInformation_t2919786644 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::<GetAvailableNetworkIPs>m__1(System.Net.NetworkInformation.UnicastIPAddressInformation)
extern "C"  String_t* TestRunnerConfigurator_U3CGetAvailableNetworkIPsU3Em__1_m3537098001 (Il2CppObject * __this /* static, unused */, UnicastIPAddressInformation_t2919786644 * ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestRunnerConfigurator::<GetAvailableNetworkIPs>m__2(System.Net.NetworkInformation.UnicastIPAddressInformation,System.Net.NetworkInformation.UnicastIPAddressInformation)
extern "C"  int32_t TestRunnerConfigurator_U3CGetAvailableNetworkIPsU3Em__2_m751166519 (Il2CppObject * __this /* static, unused */, UnicastIPAddressInformation_t2919786644 * ___ip10, UnicastIPAddressInformation_t2919786644 * ___ip21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::<GetAvailableNetworkIPs>m__3(System.Net.NetworkInformation.UnicastIPAddressInformation)
extern "C"  String_t* TestRunnerConfigurator_U3CGetAvailableNetworkIPsU3Em__3_m2072424199 (Il2CppObject * __this /* static, unused */, UnicastIPAddressInformation_t2919786644 * ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.NetworkResultSender UnityTest.TestRunnerConfigurator::<ResolveNetworkConnection>m__4(System.Net.IPEndPoint)
extern "C"  NetworkResultSender_t2246312250 * TestRunnerConfigurator_U3CResolveNetworkConnectionU3Em__4_m1773376196 (Il2CppObject * __this /* static, unused */, IPEndPoint_t2615413766 * ___ipEndPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::<ResolveNetworkConnection>m__5(System.Net.IPEndPoint)
extern "C"  String_t* TestRunnerConfigurator_U3CResolveNetworkConnectionU3Em__5_m3956323704 (Il2CppObject * __this /* static, unused */, IPEndPoint_t2615413766 * ___ipep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
