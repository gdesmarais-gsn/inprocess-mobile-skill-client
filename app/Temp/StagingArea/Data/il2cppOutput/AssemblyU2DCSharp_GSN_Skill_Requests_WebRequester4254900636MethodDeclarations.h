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

// GSN.Skill.Requests.WebRequester
struct WebRequester_t4254900636;
// GSN.Skill.Requests.ISessionHandler
struct ISessionHandler_t2877131789;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests3348797540.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequestErr3008710795.h"

// System.Void GSN.Skill.Requests.WebRequester::.ctor()
extern "C"  void WebRequester__ctor_m1721617444 (WebRequester_t4254900636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::Init(GSN.Skill.Requests.ISessionHandler)
extern "C"  void WebRequester_Init_m578611452 (WebRequester_t4254900636 * __this, Il2CppObject * ___cookieHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Requests.ISessionHandler GSN.Skill.Requests.WebRequester::get_MainSessionHandler()
extern "C"  Il2CppObject * WebRequester_get_MainSessionHandler_m3006164485 (WebRequester_t4254900636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Requests.WebRequester::get_HasConnection()
extern "C"  bool WebRequester_get_HasConnection_m3147110847 (WebRequester_t4254900636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::set_HasConnection(System.Boolean)
extern "C"  void WebRequester_set_HasConnection_m3647161518 (WebRequester_t4254900636 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::FetchRequest(GSN.Skill.Requests.IWebRequest)
extern "C"  void WebRequester_FetchRequest_m1543822574 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::FetchRequest(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler)
extern "C"  void WebRequester_FetchRequest_m522743908 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::SequentialFetchRequests(GSN.Skill.Requests.WebRequests)
extern "C"  void WebRequester_SequentialFetchRequests_m571276178 (WebRequester_t4254900636 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::BatchFetchRequests(GSN.Skill.Requests.WebRequests)
extern "C"  void WebRequester_BatchFetchRequests_m1930982281 (WebRequester_t4254900636 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::TryMultipleRequestsAgain(GSN.Skill.Requests.WebRequests)
extern "C"  void WebRequester_TryMultipleRequestsAgain_m3965955978 (WebRequester_t4254900636 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.WebRequester::InternalFetchRequest(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler)
extern "C"  Il2CppObject * WebRequester_InternalFetchRequest_m1289779329 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.WebRequester::HandleFetch(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler)
extern "C"  Il2CppObject * WebRequester_HandleFetch_m131300297 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.WebRequester::InternalSequentialFetchRequests(GSN.Skill.Requests.WebRequests)
extern "C"  Il2CppObject * WebRequester_InternalSequentialFetchRequests_m1470436061 (WebRequester_t4254900636 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::HandleMultipleRequestsComplete(GSN.Skill.Requests.WebRequests,System.Boolean)
extern "C"  void WebRequester_HandleMultipleRequestsComplete_m4162878681 (WebRequester_t4254900636 * __this, WebRequests_t3348797540 * ___requests0, bool ___allSuccess1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester::ValidateMainSessionHandler()
extern "C"  void WebRequester_ValidateMainSessionHandler_m914300481 (WebRequester_t4254900636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest GSN.Skill.Requests.WebRequester::CreateUnityWebRequest(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler)
extern "C"  UnityWebRequest_t254341728 * WebRequester_CreateUnityWebRequest_m2688115825 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.WebRequester::Parse(GSN.Skill.Requests.IWebRequest,System.String)
extern "C"  Il2CppObject * WebRequester_Parse_m1814591758 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Requests.WebRequester::ValidateWorldWinnerSessionIDError(GSN.Skill.Requests.WebRequestErrorData/Error)
extern "C"  bool WebRequester_ValidateWorldWinnerSessionIDError_m3862435969 (WebRequester_t4254900636 * __this, Error_t3008710795  ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.WebRequester::HandleWorldWinnerError(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler)
extern "C"  Il2CppObject * WebRequester_HandleWorldWinnerError_m865124232 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.WebRequester::HandleMissingSessionIDError(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler)
extern "C"  Il2CppObject * WebRequester_HandleMissingSessionIDError_m3514718524 (WebRequester_t4254900636 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Requests.WebRequester::GetEndpointName(System.String)
extern "C"  String_t* WebRequester_GetEndpointName_m3692311851 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
