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

// GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>
struct WebRequest_1_t862101303;
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

// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::.ctor()
extern "C"  void WebRequest_1__ctor_m359282103_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1__ctor_m359282103(__this, method) ((  void (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1__ctor_m359282103_gshared)(__this, method)
// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_OnBeginHandler()
extern "C"  SingleWebRequestBegin_t714235414 * WebRequest_1_get_OnBeginHandler_m1480727584_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnBeginHandler_m1480727584(__this, method) ((  SingleWebRequestBegin_t714235414 * (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_OnBeginHandler_m1480727584_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::set_OnBeginHandler(GSN.Skill.Requests.SingleWebRequestBegin)
extern "C"  void WebRequest_1_set_OnBeginHandler_m1311835379_gshared (WebRequest_1_t862101303 * __this, SingleWebRequestBegin_t714235414 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnBeginHandler_m1311835379(__this, ___value0, method) ((  void (*) (WebRequest_1_t862101303 *, SingleWebRequestBegin_t714235414 *, const MethodInfo*))WebRequest_1_set_OnBeginHandler_m1311835379_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_OnCompleteHandler()
extern "C"  SingleWebRequestComplete_t61608820 * WebRequest_1_get_OnCompleteHandler_m1531208230_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnCompleteHandler_m1531208230(__this, method) ((  SingleWebRequestComplete_t61608820 * (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_OnCompleteHandler_m1531208230_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::set_OnCompleteHandler(GSN.Skill.Requests.SingleWebRequestComplete)
extern "C"  void WebRequest_1_set_OnCompleteHandler_m1498807055_gshared (WebRequest_1_t862101303 * __this, SingleWebRequestComplete_t61608820 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnCompleteHandler_m1498807055(__this, ___value0, method) ((  void (*) (WebRequest_1_t862101303 *, SingleWebRequestComplete_t61608820 *, const MethodInfo*))WebRequest_1_set_OnCompleteHandler_m1498807055_gshared)(__this, ___value0, method)
// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_OnFailHandler()
extern "C"  SingleWebRequestFail_t691327747 * WebRequest_1_get_OnFailHandler_m2178083548_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_OnFailHandler_m2178083548(__this, method) ((  SingleWebRequestFail_t691327747 * (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_OnFailHandler_m2178083548_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::set_OnFailHandler(GSN.Skill.Requests.SingleWebRequestFail)
extern "C"  void WebRequest_1_set_OnFailHandler_m1038774435_gshared (WebRequest_1_t862101303 * __this, SingleWebRequestFail_t691327747 * ___value0, const MethodInfo* method);
#define WebRequest_1_set_OnFailHandler_m1038774435(__this, ___value0, method) ((  void (*) (WebRequest_1_t862101303 *, SingleWebRequestFail_t691327747 *, const MethodInfo*))WebRequest_1_set_OnFailHandler_m1038774435_gshared)(__this, ___value0, method)
// System.Int32 GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_RefreshDataSeconds()
extern "C"  int32_t WebRequest_1_get_RefreshDataSeconds_m2305298154_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_RefreshDataSeconds_m2305298154(__this, method) ((  int32_t (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_RefreshDataSeconds_m2305298154_gshared)(__this, method)
// System.DateTime GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_LastFetched()
extern "C"  DateTime_t693205669  WebRequest_1_get_LastFetched_m3588317220_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_LastFetched_m3588317220(__this, method) ((  DateTime_t693205669  (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_LastFetched_m3588317220_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::set_LastFetched(System.DateTime)
extern "C"  void WebRequest_1_set_LastFetched_m2640782075_gshared (WebRequest_1_t862101303 * __this, DateTime_t693205669  ___value0, const MethodInfo* method);
#define WebRequest_1_set_LastFetched_m2640782075(__this, ___value0, method) ((  void (*) (WebRequest_1_t862101303 *, DateTime_t693205669 , const MethodInfo*))WebRequest_1_set_LastFetched_m2640782075_gshared)(__this, ___value0, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_IsStale()
extern "C"  bool WebRequest_1_get_IsStale_m1356285971_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsStale_m1356285971(__this, method) ((  bool (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_IsStale_m1356285971_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::SetStale()
extern "C"  void WebRequest_1_SetStale_m1193551276_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_SetStale_m1193551276(__this, method) ((  void (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_SetStale_m1193551276_gshared)(__this, method)
// System.String GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_ContentType()
extern "C"  String_t* WebRequest_1_get_ContentType_m2278664056_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_ContentType_m2278664056(__this, method) ((  String_t* (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_ContentType_m2278664056_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::set_ContentType(System.String)
extern "C"  void WebRequest_1_set_ContentType_m1918872173_gshared (WebRequest_1_t862101303 * __this, String_t* ___value0, const MethodInfo* method);
#define WebRequest_1_set_ContentType_m1918872173(__this, ___value0, method) ((  void (*) (WebRequest_1_t862101303 *, String_t*, const MethodInfo*))WebRequest_1_set_ContentType_m1918872173_gshared)(__this, ___value0, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::ClearError()
extern "C"  void WebRequest_1_ClearError_m308151528_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_ClearError_m308151528(__this, method) ((  void (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_ClearError_m308151528_gshared)(__this, method)
// System.Boolean GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_IsError()
extern "C"  bool WebRequest_1_get_IsError_m1399675794_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_IsError_m1399675794(__this, method) ((  bool (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_IsError_m1399675794_gshared)(__this, method)
// GSN.Skill.Requests.WebRequestErrorData GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::get_error()
extern "C"  WebRequestErrorData_t2176960341  WebRequest_1_get_error_m325624199_gshared (WebRequest_1_t862101303 * __this, const MethodInfo* method);
#define WebRequest_1_get_error_m325624199(__this, method) ((  WebRequestErrorData_t2176960341  (*) (WebRequest_1_t862101303 *, const MethodInfo*))WebRequest_1_get_error_m325624199_gshared)(__this, method)
// System.Void GSN.Skill.Requests.WebRequest`1<GSN.Skill.Requests.Config.APIInfoData>::set_error(GSN.Skill.Requests.WebRequestErrorData)
extern "C"  void WebRequest_1_set_error_m1109240952_gshared (WebRequest_1_t862101303 * __this, WebRequestErrorData_t2176960341  ___value0, const MethodInfo* method);
#define WebRequest_1_set_error_m1109240952(__this, ___value0, method) ((  void (*) (WebRequest_1_t862101303 *, WebRequestErrorData_t2176960341 , const MethodInfo*))WebRequest_1_set_error_m1109240952_gshared)(__this, ___value0, method)
