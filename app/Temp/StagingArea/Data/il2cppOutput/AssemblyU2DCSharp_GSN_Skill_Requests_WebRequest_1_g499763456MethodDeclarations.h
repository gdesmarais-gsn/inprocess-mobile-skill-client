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

// GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>
struct WebRequest_1_t499763456;
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

// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::.ctor()
extern "C"  void WebRequest_1__ctor_m3202530180_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1__ctor_m3202530180(__this, method) ((  void (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1__ctor_m3202530180_gshared)(__this, method)
// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_OnBeginHandler()
extern "C"  SingleWebRequestBegin_t714235414 * WebRequest_1_get_OnBeginHandler_m3927834523_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnBeginHandler_m3927834523(__this, method) ((  SingleWebRequestBegin_t714235414 * (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_OnBeginHandler_m3927834523_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::set_OnBeginHandler(GSN.Skill.Requests.SingleWebRequestBegin)
extern "C"  void WebRequest_1_set_OnBeginHandler_m4061403372_gshared (WebRequest_1_t499763456 * __this, SingleWebRequestBegin_t714235414 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnBeginHandler_m4061403372(__this, ___value0, method) ((  void (*) (WebRequest_1_t499763456 *, SingleWebRequestBegin_t714235414 *, const MethodInfo*))WebRequest_1_set_OnBeginHandler_m4061403372_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_OnCompleteHandler()
extern "C"  SingleWebRequestComplete_t61608820 * WebRequest_1_get_OnCompleteHandler_m1833499571_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnCompleteHandler_m1833499571(__this, method) ((  SingleWebRequestComplete_t61608820 * (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_OnCompleteHandler_m1833499571_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::set_OnCompleteHandler(GSN.Skill.Requests.SingleWebRequestComplete)
extern "C"  void WebRequest_1_set_OnCompleteHandler_m3598630050_gshared (WebRequest_1_t499763456 * __this, SingleWebRequestComplete_t61608820 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnCompleteHandler_m3598630050(__this, ___value0, method) ((  void (*) (WebRequest_1_t499763456 *, SingleWebRequestComplete_t61608820 *, const MethodInfo*))WebRequest_1_set_OnCompleteHandler_m3598630050_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_OnFailHandler()
extern "C"  SingleWebRequestFail_t691327747 * WebRequest_1_get_OnFailHandler_m2605111767_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnFailHandler_m2605111767(__this, method) ((  SingleWebRequestFail_t691327747 * (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_OnFailHandler_m2605111767_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::set_OnFailHandler(GSN.Skill.Requests.SingleWebRequestFail)
extern "C"  void WebRequest_1_set_OnFailHandler_m2698672072_gshared (WebRequest_1_t499763456 * __this, SingleWebRequestFail_t691327747 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnFailHandler_m2698672072(__this, ___value0, method) ((  void (*) (WebRequest_1_t499763456 *, SingleWebRequestFail_t691327747 *, const MethodInfo*))WebRequest_1_set_OnFailHandler_m2698672072_gshared)(__this, ___value0, method)
// System.Int32 GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_RefreshDataSeconds()
extern "C"  int32_t WebRequest_1_get_RefreshDataSeconds_m3506143289_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_RefreshDataSeconds_m3506143289(__this, method) ((  int32_t (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_RefreshDataSeconds_m3506143289_gshared)(__this, method)
// System.DateTime GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_LastFetched()
extern "C"  DateTime_t693205669  WebRequest_1_get_LastFetched_m3245739839_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_LastFetched_m3245739839(__this, method) ((  DateTime_t693205669  (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_LastFetched_m3245739839_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::set_LastFetched(System.DateTime)
extern "C"  void WebRequest_1_set_LastFetched_m3829345600_gshared (WebRequest_1_t499763456 * __this, DateTime_t693205669  ___value0, const MethodInfo* method);
#define WebRequest_1_set_LastFetched_m3829345600(__this, ___value0, method) ((  void (*) (WebRequest_1_t499763456 *, DateTime_t693205669 , const MethodInfo*))WebRequest_1_set_LastFetched_m3829345600_gshared)(__this, ___value0, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_IsStale()
extern "C"  bool WebRequest_1_get_IsStale_m1627361208_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsStale_m1627361208(__this, method) ((  bool (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_IsStale_m1627361208_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::SetStale()
extern "C"  void WebRequest_1_SetStale_m1475701181_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_SetStale_m1475701181(__this, method) ((  void (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_SetStale_m1475701181_gshared)(__this, method)
// System.String GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_ContentType()
extern "C"  String_t* WebRequest_1_get_ContentType_m2367823185_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_ContentType_m2367823185(__this, method) ((  String_t* (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_ContentType_m2367823185_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::set_ContentType(System.String)
extern "C"  void WebRequest_1_set_ContentType_m1430002388_gshared (WebRequest_1_t499763456 * __this, String_t* ___value0, const MethodInfo* method);
#define WebRequest_1_set_ContentType_m1430002388(__this, ___value0, method) ((  void (*) (WebRequest_1_t499763456 *, String_t*, const MethodInfo*))WebRequest_1_set_ContentType_m1430002388_gshared)(__this, ___value0, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::ClearError()
extern "C"  void WebRequest_1_ClearError_m577904501_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_ClearError_m577904501(__this, method) ((  void (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_ClearError_m577904501_gshared)(__this, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_IsError()
extern "C"  bool WebRequest_1_get_IsError_m4146489591_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsError_m4146489591(__this, method) ((  bool (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_IsError_m4146489591_gshared)(__this, method)
// GSN.Skill.Requests.WebRequestErrorData GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::get_error()
extern "C"  WebRequestErrorData_t2176960341  WebRequest_1_get_error_m3521974288_gshared (WebRequest_1_t499763456 * __this, const MethodInfo* method);
#define WebRequest_1_get_error_m3521974288(__this, method) ((  WebRequestErrorData_t2176960341  (*) (WebRequest_1_t499763456 *, const MethodInfo*))WebRequest_1_get_error_m3521974288_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.CreditCardData>::set_error(GSN.Skill.Requests.WebRequestErrorData)
extern "C"  void WebRequest_1_set_error_m4133755239_gshared (WebRequest_1_t499763456 * __this, WebRequestErrorData_t2176960341  ___value0, const MethodInfo* method);
#define WebRequest_1_set_error_m4133755239(__this, ___value0, method) ((  void (*) (WebRequest_1_t499763456 *, WebRequestErrorData_t2176960341 , const MethodInfo*))WebRequest_1_set_error_m4133755239_gshared)(__this, ___value0, method)
