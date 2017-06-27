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

// GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>
struct WebRequest_1_t2490013107;
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

// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::.ctor()
extern "C"  void WebRequest_1__ctor_m2477374535_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1__ctor_m2477374535(__this, method) ((  void (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1__ctor_m2477374535_gshared)(__this, method)
// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_OnBeginHandler()
extern "C"  SingleWebRequestBegin_t714235414 * WebRequest_1_get_OnBeginHandler_m3995968882_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnBeginHandler_m3995968882(__this, method) ((  SingleWebRequestBegin_t714235414 * (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_OnBeginHandler_m3995968882_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::set_OnBeginHandler(GSN.Skill.Requests.SingleWebRequestBegin)
extern "C"  void WebRequest_1_set_OnBeginHandler_m3099162963_gshared (WebRequest_1_t2490013107 * __this, SingleWebRequestBegin_t714235414 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnBeginHandler_m3099162963(__this, ___value0, method) ((  void (*) (WebRequest_1_t2490013107 *, SingleWebRequestBegin_t714235414 *, const MethodInfo*))WebRequest_1_set_OnBeginHandler_m3099162963_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_OnCompleteHandler()
extern "C"  SingleWebRequestComplete_t61608820 * WebRequest_1_get_OnCompleteHandler_m4256864188_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnCompleteHandler_m4256864188(__this, method) ((  SingleWebRequestComplete_t61608820 * (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_OnCompleteHandler_m4256864188_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::set_OnCompleteHandler(GSN.Skill.Requests.SingleWebRequestComplete)
extern "C"  void WebRequest_1_set_OnCompleteHandler_m3754702367_gshared (WebRequest_1_t2490013107 * __this, SingleWebRequestComplete_t61608820 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnCompleteHandler_m3754702367(__this, ___value0, method) ((  void (*) (WebRequest_1_t2490013107 *, SingleWebRequestComplete_t61608820 *, const MethodInfo*))WebRequest_1_set_OnCompleteHandler_m3754702367_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_OnFailHandler()
extern "C"  SingleWebRequestFail_t691327747 * WebRequest_1_get_OnFailHandler_m266529870_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnFailHandler_m266529870(__this, method) ((  SingleWebRequestFail_t691327747 * (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_OnFailHandler_m266529870_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::set_OnFailHandler(GSN.Skill.Requests.SingleWebRequestFail)
extern "C"  void WebRequest_1_set_OnFailHandler_m870455147_gshared (WebRequest_1_t2490013107 * __this, SingleWebRequestFail_t691327747 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnFailHandler_m870455147(__this, ___value0, method) ((  void (*) (WebRequest_1_t2490013107 *, SingleWebRequestFail_t691327747 *, const MethodInfo*))WebRequest_1_set_OnFailHandler_m870455147_gshared)(__this, ___value0, method)
// System.Int32 GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_RefreshDataSeconds()
extern "C"  int32_t WebRequest_1_get_RefreshDataSeconds_m4037724372_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_RefreshDataSeconds_m4037724372(__this, method) ((  int32_t (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_RefreshDataSeconds_m4037724372_gshared)(__this, method)
// System.DateTime GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_LastFetched()
extern "C"  DateTime_t693205669  WebRequest_1_get_LastFetched_m2709667062_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_LastFetched_m2709667062(__this, method) ((  DateTime_t693205669  (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_LastFetched_m2709667062_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::set_LastFetched(System.DateTime)
extern "C"  void WebRequest_1_set_LastFetched_m3656253091_gshared (WebRequest_1_t2490013107 * __this, DateTime_t693205669  ___value0, const MethodInfo* method);
#define WebRequest_1_set_LastFetched_m3656253091(__this, ___value0, method) ((  void (*) (WebRequest_1_t2490013107 *, DateTime_t693205669 , const MethodInfo*))WebRequest_1_set_LastFetched_m3656253091_gshared)(__this, ___value0, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_IsStale()
extern "C"  bool WebRequest_1_get_IsStale_m2391476867_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsStale_m2391476867(__this, method) ((  bool (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_IsStale_m2391476867_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::SetStale()
extern "C"  void WebRequest_1_SetStale_m2224780346_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_SetStale_m2224780346(__this, method) ((  void (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_SetStale_m2224780346_gshared)(__this, method)
// System.String GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_ContentType()
extern "C"  String_t* WebRequest_1_get_ContentType_m1127913214_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_ContentType_m1127913214(__this, method) ((  String_t* (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_ContentType_m1127913214_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::set_ContentType(System.String)
extern "C"  void WebRequest_1_set_ContentType_m2135520781_gshared (WebRequest_1_t2490013107 * __this, String_t* ___value0, const MethodInfo* method);
#define WebRequest_1_set_ContentType_m2135520781(__this, ___value0, method) ((  void (*) (WebRequest_1_t2490013107 *, String_t*, const MethodInfo*))WebRequest_1_set_ContentType_m2135520781_gshared)(__this, ___value0, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::ClearError()
extern "C"  void WebRequest_1_ClearError_m3669314638_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_ClearError_m3669314638(__this, method) ((  void (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_ClearError_m3669314638_gshared)(__this, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_IsError()
extern "C"  bool WebRequest_1_get_IsError_m615633664_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsError_m615633664(__this, method) ((  bool (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_IsError_m615633664_gshared)(__this, method)
// GSN.Skill.Requests.WebRequestErrorData GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::get_error()
extern "C"  WebRequestErrorData_t2176960341  WebRequest_1_get_error_m3511192087_gshared (WebRequest_1_t2490013107 * __this, const MethodInfo* method);
#define WebRequest_1_get_error_m3511192087(__this, method) ((  WebRequestErrorData_t2176960341  (*) (WebRequest_1_t2490013107 *, const MethodInfo*))WebRequest_1_get_error_m3511192087_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Account.AccountLoginData>::set_error(GSN.Skill.Requests.WebRequestErrorData)
extern "C"  void WebRequest_1_set_error_m700316730_gshared (WebRequest_1_t2490013107 * __this, WebRequestErrorData_t2176960341  ___value0, const MethodInfo* method);
#define WebRequest_1_set_error_m700316730(__this, ___value0, method) ((  void (*) (WebRequest_1_t2490013107 *, WebRequestErrorData_t2176960341 , const MethodInfo*))WebRequest_1_set_error_m700316730_gshared)(__this, ___value0, method)
