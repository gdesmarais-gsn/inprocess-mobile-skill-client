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

// GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>
struct WebRequest_1_t903707499;
// GSN.Skill.Requests.SingleWebRequestBegin
struct SingleWebRequestBegin_t714235414;
// GSN.Skill.Requests.SingleWebRequestComplete
struct SingleWebRequestComplete_t61608820;
// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_SingleWebReque714235414.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_SingleWebReques61608820.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_SingleWebReque691327747.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequestErr2176960341.h"

// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::.ctor()
extern "C"  void WebRequest_1__ctor_m3346629950_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1__ctor_m3346629950(__this, method) ((  void (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1__ctor_m3346629950_gshared)(__this, method)
// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_OnBeginHandler()
extern "C"  SingleWebRequestBegin_t714235414 * WebRequest_1_get_OnBeginHandler_m199973823_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnBeginHandler_m199973823(__this, method) ((  SingleWebRequestBegin_t714235414 * (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_OnBeginHandler_m199973823_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::set_OnBeginHandler(GSN.Skill.Requests.SingleWebRequestBegin)
extern "C"  void WebRequest_1_set_OnBeginHandler_m3496121950_gshared (WebRequest_1_t903707499 * __this, SingleWebRequestBegin_t714235414 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnBeginHandler_m3496121950(__this, ___value0, method) ((  void (*) (WebRequest_1_t903707499 *, SingleWebRequestBegin_t714235414 *, const MethodInfo*))WebRequest_1_set_OnBeginHandler_m3496121950_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_OnCompleteHandler()
extern "C"  SingleWebRequestComplete_t61608820 * WebRequest_1_get_OnCompleteHandler_m3917760679_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnCompleteHandler_m3917760679(__this, method) ((  SingleWebRequestComplete_t61608820 * (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_OnCompleteHandler_m3917760679_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::set_OnCompleteHandler(GSN.Skill.Requests.SingleWebRequestComplete)
extern "C"  void WebRequest_1_set_OnCompleteHandler_m3456339336_gshared (WebRequest_1_t903707499 * __this, SingleWebRequestComplete_t61608820 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnCompleteHandler_m3456339336(__this, ___value0, method) ((  void (*) (WebRequest_1_t903707499 *, SingleWebRequestComplete_t61608820 *, const MethodInfo*))WebRequest_1_set_OnCompleteHandler_m3456339336_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_OnFailHandler()
extern "C"  SingleWebRequestFail_t691327747 * WebRequest_1_get_OnFailHandler_m1442675587_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnFailHandler_m1442675587(__this, method) ((  SingleWebRequestFail_t691327747 * (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_OnFailHandler_m1442675587_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::set_OnFailHandler(GSN.Skill.Requests.SingleWebRequestFail)
extern "C"  void WebRequest_1_set_OnFailHandler_m3633647394_gshared (WebRequest_1_t903707499 * __this, SingleWebRequestFail_t691327747 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnFailHandler_m3633647394(__this, ___value0, method) ((  void (*) (WebRequest_1_t903707499 *, SingleWebRequestFail_t691327747 *, const MethodInfo*))WebRequest_1_set_OnFailHandler_m3633647394_gshared)(__this, ___value0, method)
// System.Int32 GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_RefreshDataSeconds()
extern "C"  int32_t WebRequest_1_get_RefreshDataSeconds_m1355637601_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_RefreshDataSeconds_m1355637601(__this, method) ((  int32_t (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_RefreshDataSeconds_m1355637601_gshared)(__this, method)
// System.DateTime GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_LastFetched()
extern "C"  DateTime_t693205669  WebRequest_1_get_LastFetched_m2741108907_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_LastFetched_m2741108907(__this, method) ((  DateTime_t693205669  (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_LastFetched_m2741108907_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::set_LastFetched(System.DateTime)
extern "C"  void WebRequest_1_set_LastFetched_m2249344986_gshared (WebRequest_1_t903707499 * __this, DateTime_t693205669  ___value0, const MethodInfo* method);
#define WebRequest_1_set_LastFetched_m2249344986(__this, ___value0, method) ((  void (*) (WebRequest_1_t903707499 *, DateTime_t693205669 , const MethodInfo*))WebRequest_1_set_LastFetched_m2249344986_gshared)(__this, ___value0, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_IsStale()
extern "C"  bool WebRequest_1_get_IsStale_m3850532554_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsStale_m3850532554(__this, method) ((  bool (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_IsStale_m3850532554_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::SetStale()
extern "C"  void WebRequest_1_SetStale_m3395446309_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_SetStale_m3395446309(__this, method) ((  void (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_SetStale_m3395446309_gshared)(__this, method)
// System.String GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_ContentType()
extern "C"  String_t* WebRequest_1_get_ContentType_m3990521593_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_ContentType_m3990521593(__this, method) ((  String_t* (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_ContentType_m3990521593_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::set_ContentType(System.String)
extern "C"  void WebRequest_1_set_ContentType_m1404409254_gshared (WebRequest_1_t903707499 * __this, String_t* ___value0, const MethodInfo* method);
#define WebRequest_1_set_ContentType_m1404409254(__this, ___value0, method) ((  void (*) (WebRequest_1_t903707499 *, String_t*, const MethodInfo*))WebRequest_1_set_ContentType_m1404409254_gshared)(__this, ___value0, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::ClearError()
extern "C"  void WebRequest_1_ClearError_m420953413_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_ClearError_m420953413(__this, method) ((  void (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_ClearError_m420953413_gshared)(__this, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_IsError()
extern "C"  bool WebRequest_1_get_IsError_m1224446323_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsError_m1224446323(__this, method) ((  bool (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_IsError_m1224446323_gshared)(__this, method)
// GSN.Skill.Requests.WebRequestErrorData GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::get_error()
extern "C"  WebRequestErrorData_t2176960341  WebRequest_1_get_error_m1192613546_gshared (WebRequest_1_t903707499 * __this, const MethodInfo* method);
#define WebRequest_1_get_error_m1192613546(__this, method) ((  WebRequestErrorData_t2176960341  (*) (WebRequest_1_t903707499 *, const MethodInfo*))WebRequest_1_get_error_m1192613546_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.WithdrawData>::set_error(GSN.Skill.Requests.WebRequestErrorData)
extern "C"  void WebRequest_1_set_error_m20058787_gshared (WebRequest_1_t903707499 * __this, WebRequestErrorData_t2176960341  ___value0, const MethodInfo* method);
#define WebRequest_1_set_error_m20058787(__this, ___value0, method) ((  void (*) (WebRequest_1_t903707499 *, WebRequestErrorData_t2176960341 , const MethodInfo*))WebRequest_1_set_error_m20058787_gshared)(__this, ___value0, method)
