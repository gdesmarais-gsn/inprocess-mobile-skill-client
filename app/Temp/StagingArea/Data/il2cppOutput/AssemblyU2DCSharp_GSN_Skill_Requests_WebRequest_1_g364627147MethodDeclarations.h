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

// GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>
struct WebRequest_1_t364627147;
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

// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::.ctor()
extern "C"  void WebRequest_1__ctor_m350298432_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1__ctor_m350298432(__this, method) ((  void (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1__ctor_m350298432_gshared)(__this, method)
// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_OnBeginHandler()
extern "C"  SingleWebRequestBegin_t714235414 * WebRequest_1_get_OnBeginHandler_m3022878575_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnBeginHandler_m3022878575(__this, method) ((  SingleWebRequestBegin_t714235414 * (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_OnBeginHandler_m3022878575_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::set_OnBeginHandler(GSN.Skill.Requests.SingleWebRequestBegin)
extern "C"  void WebRequest_1_set_OnBeginHandler_m1270852256_gshared (WebRequest_1_t364627147 * __this, SingleWebRequestBegin_t714235414 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnBeginHandler_m1270852256(__this, ___value0, method) ((  void (*) (WebRequest_1_t364627147 *, SingleWebRequestBegin_t714235414 *, const MethodInfo*))WebRequest_1_set_OnBeginHandler_m1270852256_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_OnCompleteHandler()
extern "C"  SingleWebRequestComplete_t61608820 * WebRequest_1_get_OnCompleteHandler_m2925210511_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnCompleteHandler_m2925210511(__this, method) ((  SingleWebRequestComplete_t61608820 * (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_OnCompleteHandler_m2925210511_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::set_OnCompleteHandler(GSN.Skill.Requests.SingleWebRequestComplete)
extern "C"  void WebRequest_1_set_OnCompleteHandler_m821739126_gshared (WebRequest_1_t364627147 * __this, SingleWebRequestComplete_t61608820 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnCompleteHandler_m821739126(__this, ___value0, method) ((  void (*) (WebRequest_1_t364627147 *, SingleWebRequestComplete_t61608820 *, const MethodInfo*))WebRequest_1_set_OnCompleteHandler_m821739126_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_OnFailHandler()
extern "C"  SingleWebRequestFail_t691327747 * WebRequest_1_get_OnFailHandler_m3627324847_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnFailHandler_m3627324847(__this, method) ((  SingleWebRequestFail_t691327747 * (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_OnFailHandler_m3627324847_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::set_OnFailHandler(GSN.Skill.Requests.SingleWebRequestFail)
extern "C"  void WebRequest_1_set_OnFailHandler_m863009588_gshared (WebRequest_1_t364627147 * __this, SingleWebRequestFail_t691327747 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnFailHandler_m863009588(__this, ___value0, method) ((  void (*) (WebRequest_1_t364627147 *, SingleWebRequestFail_t691327747 *, const MethodInfo*))WebRequest_1_set_OnFailHandler_m863009588_gshared)(__this, ___value0, method)
// System.Int32 GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_RefreshDataSeconds()
extern "C"  int32_t WebRequest_1_get_RefreshDataSeconds_m1866501933_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_RefreshDataSeconds_m1866501933(__this, method) ((  int32_t (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_RefreshDataSeconds_m1866501933_gshared)(__this, method)
// System.DateTime GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_LastFetched()
extern "C"  DateTime_t693205669  WebRequest_1_get_LastFetched_m18133639_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_LastFetched_m18133639(__this, method) ((  DateTime_t693205669  (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_LastFetched_m18133639_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::set_LastFetched(System.DateTime)
extern "C"  void WebRequest_1_set_LastFetched_m113915052_gshared (WebRequest_1_t364627147 * __this, DateTime_t693205669  ___value0, const MethodInfo* method);
#define WebRequest_1_set_LastFetched_m113915052(__this, ___value0, method) ((  void (*) (WebRequest_1_t364627147 *, DateTime_t693205669 , const MethodInfo*))WebRequest_1_set_LastFetched_m113915052_gshared)(__this, ___value0, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_IsStale()
extern "C"  bool WebRequest_1_get_IsStale_m1495475692_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsStale_m1495475692(__this, method) ((  bool (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_IsStale_m1495475692_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::SetStale()
extern "C"  void WebRequest_1_SetStale_m3986930301_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_SetStale_m3986930301(__this, method) ((  void (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_SetStale_m3986930301_gshared)(__this, method)
// System.String GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_ContentType()
extern "C"  String_t* WebRequest_1_get_ContentType_m329328469_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_ContentType_m329328469(__this, method) ((  String_t* (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_ContentType_m329328469_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::set_ContentType(System.String)
extern "C"  void WebRequest_1_set_ContentType_m3924082828_gshared (WebRequest_1_t364627147 * __this, String_t* ___value0, const MethodInfo* method);
#define WebRequest_1_set_ContentType_m3924082828(__this, ___value0, method) ((  void (*) (WebRequest_1_t364627147 *, String_t*, const MethodInfo*))WebRequest_1_set_ContentType_m3924082828_gshared)(__this, ___value0, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::ClearError()
extern "C"  void WebRequest_1_ClearError_m3354631709_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_ClearError_m3354631709(__this, method) ((  void (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_ClearError_m3354631709_gshared)(__this, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_IsError()
extern "C"  bool WebRequest_1_get_IsError_m2829012275_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsError_m2829012275(__this, method) ((  bool (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_IsError_m2829012275_gshared)(__this, method)
// GSN.Skill.Requests.WebRequestErrorData GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::get_error()
extern "C"  WebRequestErrorData_t2176960341  WebRequest_1_get_error_m1190745826_gshared (WebRequest_1_t364627147 * __this, const MethodInfo* method);
#define WebRequest_1_get_error_m1190745826(__this, method) ((  WebRequestErrorData_t2176960341  (*) (WebRequest_1_t364627147 *, const MethodInfo*))WebRequest_1_get_error_m1190745826_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Config.ConfigData>::set_error(GSN.Skill.Requests.WebRequestErrorData)
extern "C"  void WebRequest_1_set_error_m1585568499_gshared (WebRequest_1_t364627147 * __this, WebRequestErrorData_t2176960341  ___value0, const MethodInfo* method);
#define WebRequest_1_set_error_m1585568499(__this, ___value0, method) ((  void (*) (WebRequest_1_t364627147 *, WebRequestErrorData_t2176960341 , const MethodInfo*))WebRequest_1_set_error_m1585568499_gshared)(__this, ___value0, method)
