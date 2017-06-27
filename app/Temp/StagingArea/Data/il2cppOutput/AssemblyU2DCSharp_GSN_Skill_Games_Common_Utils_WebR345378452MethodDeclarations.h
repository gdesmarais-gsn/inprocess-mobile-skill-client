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

// GSN.Skill.Games.Common.Utils.WebRequestDispatcher
struct WebRequestDispatcher_t345378452;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Net.WebResponse
struct WebResponse_t1895226051;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Net.WebException
struct WebException_t3368933679;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// System.Action
struct Action_t3226471752;
// System.IAsyncResult
struct IAsyncResult_t1999651008;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act1924202305.h"
#include "System_System_Net_WebResponse1895226051.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"
#include "System_System_Net_WebException3368933679.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Web3130072311.h"

// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::.ctor(GSN.Skill.Games.Common.Utils.ActionQueue)
extern "C"  void WebRequestDispatcher__ctor_m1790294222 (WebRequestDispatcher_t345378452 * __this, ActionQueue_t1924202305 * ___aqueue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_Aborted()
extern "C"  bool WebRequestDispatcher_get_Aborted_m3817214469 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_Aborted(System.Boolean)
extern "C"  void WebRequestDispatcher_set_Aborted_m188284108 (WebRequestDispatcher_t345378452 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_Response()
extern "C"  WebResponse_t1895226051 * WebRequestDispatcher_get_Response_m514360375 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_Response(System.Net.WebResponse)
extern "C"  void WebRequestDispatcher_set_Response_m3392558710 (WebRequestDispatcher_t345378452 * __this, WebResponse_t1895226051 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_Done()
extern "C"  bool WebRequestDispatcher_get_Done_m1412949526 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_ResponseBytes()
extern "C"  ByteU5BU5D_t3397334013* WebRequestDispatcher_get_ResponseBytes_m1909665816 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_ResponseText()
extern "C"  String_t* WebRequestDispatcher_get_ResponseText_m1891084417 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_FailReason()
extern "C"  String_t* WebRequestDispatcher_get_FailReason_m1738150517 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_FailReason(System.String)
extern "C"  void WebRequestDispatcher_set_FailReason_m872507954 (WebRequestDispatcher_t345378452 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_HttpStatusCode()
extern "C"  int32_t WebRequestDispatcher_get_HttpStatusCode_m1942930409 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_HttpStatusCode(System.Int32)
extern "C"  void WebRequestDispatcher_set_HttpStatusCode_m4012436882 (WebRequestDispatcher_t345378452 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_HttpStatusDescription()
extern "C"  String_t* WebRequestDispatcher_get_HttpStatusDescription_m1413977289 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_HttpStatusDescription(System.String)
extern "C"  void WebRequestDispatcher_set_HttpStatusDescription_m1994454052 (WebRequestDispatcher_t345378452 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_ResponseContentType()
extern "C"  String_t* WebRequestDispatcher_get_ResponseContentType_m2914319729 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_ResponseContentType(System.String)
extern "C"  void WebRequestDispatcher_set_ResponseContentType_m3976109484 (WebRequestDispatcher_t345378452 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_RequestUri()
extern "C"  String_t* WebRequestDispatcher_get_RequestUri_m4138265158 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_RequestUri(System.String)
extern "C"  void WebRequestDispatcher_set_RequestUri_m1208386727 (WebRequestDispatcher_t345378452 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebExceptionStatus GSN.Skill.Games.Common.Utils.WebRequestDispatcher::get_ExceptionStatus()
extern "C"  int32_t WebRequestDispatcher_get_ExceptionStatus_m696369799 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::set_ExceptionStatus(System.Net.WebExceptionStatus)
extern "C"  void WebRequestDispatcher_set_ExceptionStatus_m794093008 (WebRequestDispatcher_t345378452 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::setResponseInfo()
extern "C"  void WebRequestDispatcher_setResponseInfo_m549409658 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::setWebExceptionInfo(System.Net.WebException)
extern "C"  void WebRequestDispatcher_setWebExceptionInfo_m434753193 (WebRequestDispatcher_t345378452 * __this, WebException_t3368933679 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest GSN.Skill.Games.Common.Utils.WebRequestDispatcher::CreateRequest(System.String,System.String)
extern "C"  WebRequest_t1365124353 * WebRequestDispatcher_CreateRequest_m1442543040 (Il2CppObject * __this /* static, unused */, String_t* ___url0, String_t* ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::Abort()
extern "C"  void WebRequestDispatcher_Abort_m3171637201 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.WebRequestDispatcher::StrToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* WebRequestDispatcher_StrToBytes_m3730445686 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::TimeoutCallback(System.Object,System.Boolean)
extern "C"  void WebRequestDispatcher_TimeoutCallback_m909331986 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, bool ___timedOut1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::DestroyResponse()
extern "C"  void WebRequestDispatcher_DestroyResponse_m3370120444 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::DispatchRequest(System.Net.WebRequest,System.Byte[],System.IO.Stream,System.Action,System.Int32)
extern "C"  void WebRequestDispatcher_DispatchRequest_m763758797 (WebRequestDispatcher_t345378452 * __this, WebRequest_t1365124353 * ___wr0, ByteU5BU5D_t3397334013* ___postBytes1, Stream_t3255436806 * ___postStream2, Action_t3226471752 * ___a3, int32_t ___timeout_4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::setPostData(System.Object)
extern "C"  void WebRequestDispatcher_setPostData_m463534931 (WebRequestDispatcher_t345378452 * __this, Il2CppObject * ___state_0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::handleRequestStream(System.IAsyncResult)
extern "C"  void WebRequestDispatcher_handleRequestStream_m1311134713 (WebRequestDispatcher_t345378452 * __this, Il2CppObject * ___asynchronousResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::doActualRequest()
extern "C"  void WebRequestDispatcher_doActualRequest_m2193975143 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::handleResponse(System.IAsyncResult)
extern "C"  void WebRequestDispatcher_handleResponse_m3509452719 (WebRequestDispatcher_t345378452 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::DumpResult()
extern "C"  void WebRequestDispatcher_DumpResult_m3146111026 (WebRequestDispatcher_t345378452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::logCurl(System.Byte[],System.IO.Stream)
extern "C"  void WebRequestDispatcher_logCurl_m3881997499 (WebRequestDispatcher_t345378452 * __this, ByteU5BU5D_t3397334013* ___postBytes0, Stream_t3255436806 * ___postStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::GetByteArrayString(System.Byte[])
extern "C"  String_t* WebRequestDispatcher_GetByteArrayString_m963879037 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::AppendStringToFile(System.String)
extern "C"  void WebRequestDispatcher_AppendStringToFile_m996983527 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher::.cctor()
extern "C"  void WebRequestDispatcher__cctor_m1924592912 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher/NetworkReachableValue GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<GetNetworkReachability>m__0()
extern "C"  int32_t WebRequestDispatcher_U3CGetNetworkReachabilityU3Em__0_m1574867717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
