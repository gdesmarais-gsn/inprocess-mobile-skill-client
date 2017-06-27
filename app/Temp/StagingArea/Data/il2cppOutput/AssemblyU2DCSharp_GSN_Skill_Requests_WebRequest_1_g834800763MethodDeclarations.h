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

// GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>
struct WebRequest_1_t834800763;
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

// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::.ctor()
extern "C"  void WebRequest_1__ctor_m1843730704_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1__ctor_m1843730704(__this, method) ((  void (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1__ctor_m1843730704_gshared)(__this, method)
// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_OnBeginHandler()
extern "C"  SingleWebRequestBegin_t714235414 * WebRequest_1_get_OnBeginHandler_m3146270281_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnBeginHandler_m3146270281(__this, method) ((  SingleWebRequestBegin_t714235414 * (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_OnBeginHandler_m3146270281_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::set_OnBeginHandler(GSN.Skill.Requests.SingleWebRequestBegin)
extern "C"  void WebRequest_1_set_OnBeginHandler_m2549160260_gshared (WebRequest_1_t834800763 * __this, SingleWebRequestBegin_t714235414 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnBeginHandler_m2549160260(__this, ___value0, method) ((  void (*) (WebRequest_1_t834800763 *, SingleWebRequestBegin_t714235414 *, const MethodInfo*))WebRequest_1_set_OnBeginHandler_m2549160260_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_OnCompleteHandler()
extern "C"  SingleWebRequestComplete_t61608820 * WebRequest_1_get_OnCompleteHandler_m271974949_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnCompleteHandler_m271974949(__this, method) ((  SingleWebRequestComplete_t61608820 * (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_OnCompleteHandler_m271974949_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::set_OnCompleteHandler(GSN.Skill.Requests.SingleWebRequestComplete)
extern "C"  void WebRequest_1_set_OnCompleteHandler_m1166659822_gshared (WebRequest_1_t834800763 * __this, SingleWebRequestComplete_t61608820 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnCompleteHandler_m1166659822(__this, ___value0, method) ((  void (*) (WebRequest_1_t834800763 *, SingleWebRequestComplete_t61608820 *, const MethodInfo*))WebRequest_1_set_OnCompleteHandler_m1166659822_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_OnFailHandler()
extern "C"  SingleWebRequestFail_t691327747 * WebRequest_1_get_OnFailHandler_m151883557_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnFailHandler_m151883557(__this, method) ((  SingleWebRequestFail_t691327747 * (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_OnFailHandler_m151883557_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::set_OnFailHandler(GSN.Skill.Requests.SingleWebRequestFail)
extern "C"  void WebRequest_1_set_OnFailHandler_m918220316_gshared (WebRequest_1_t834800763 * __this, SingleWebRequestFail_t691327747 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnFailHandler_m918220316(__this, ___value0, method) ((  void (*) (WebRequest_1_t834800763 *, SingleWebRequestFail_t691327747 *, const MethodInfo*))WebRequest_1_set_OnFailHandler_m918220316_gshared)(__this, ___value0, method)
// System.Int32 GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_RefreshDataSeconds()
extern "C"  int32_t WebRequest_1_get_RefreshDataSeconds_m2561512875_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_RefreshDataSeconds_m2561512875(__this, method) ((  int32_t (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_RefreshDataSeconds_m2561512875_gshared)(__this, method)
// System.DateTime GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_LastFetched()
extern "C"  DateTime_t693205669  WebRequest_1_get_LastFetched_m4189726893_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_LastFetched_m4189726893(__this, method) ((  DateTime_t693205669  (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_LastFetched_m4189726893_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::set_LastFetched(System.DateTime)
extern "C"  void WebRequest_1_set_LastFetched_m2386349124_gshared (WebRequest_1_t834800763 * __this, DateTime_t693205669  ___value0, const MethodInfo* method);
#define WebRequest_1_set_LastFetched_m2386349124(__this, ___value0, method) ((  void (*) (WebRequest_1_t834800763 *, DateTime_t693205669 , const MethodInfo*))WebRequest_1_set_LastFetched_m2386349124_gshared)(__this, ___value0, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_IsStale()
extern "C"  bool WebRequest_1_get_IsStale_m1862985424_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsStale_m1862985424(__this, method) ((  bool (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_IsStale_m1862985424_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::SetStale()
extern "C"  void WebRequest_1_SetStale_m1454254919_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_SetStale_m1454254919(__this, method) ((  void (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_SetStale_m1454254919_gshared)(__this, method)
// System.String GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_ContentType()
extern "C"  String_t* WebRequest_1_get_ContentType_m1379968511_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_ContentType_m1379968511(__this, method) ((  String_t* (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_ContentType_m1379968511_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::set_ContentType(System.String)
extern "C"  void WebRequest_1_set_ContentType_m1269425796_gshared (WebRequest_1_t834800763 * __this, String_t* ___value0, const MethodInfo* method);
#define WebRequest_1_set_ContentType_m1269425796(__this, ___value0, method) ((  void (*) (WebRequest_1_t834800763 *, String_t*, const MethodInfo*))WebRequest_1_set_ContentType_m1269425796_gshared)(__this, ___value0, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::ClearError()
extern "C"  void WebRequest_1_ClearError_m76757139_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_ClearError_m76757139(__this, method) ((  void (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_ClearError_m76757139_gshared)(__this, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_IsError()
extern "C"  bool WebRequest_1_get_IsError_m3936322729_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsError_m3936322729(__this, method) ((  bool (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_IsError_m3936322729_gshared)(__this, method)
// GSN.Skill.Requests.WebRequestErrorData GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::get_error()
extern "C"  WebRequestErrorData_t2176960341  WebRequest_1_get_error_m198486950_gshared (WebRequest_1_t834800763 * __this, const MethodInfo* method);
#define WebRequest_1_get_error_m198486950(__this, method) ((  WebRequestErrorData_t2176960341  (*) (WebRequest_1_t834800763 *, const MethodInfo*))WebRequest_1_get_error_m198486950_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Payment.DepositData>::set_error(GSN.Skill.Requests.WebRequestErrorData)
extern "C"  void WebRequest_1_set_error_m2843671469_gshared (WebRequest_1_t834800763 * __this, WebRequestErrorData_t2176960341  ___value0, const MethodInfo* method);
#define WebRequest_1_set_error_m2843671469(__this, ___value0, method) ((  void (*) (WebRequest_1_t834800763 *, WebRequestErrorData_t2176960341 , const MethodInfo*))WebRequest_1_set_error_m2843671469_gshared)(__this, ___value0, method)
