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

// GSN.Skill.Phoenix.Requests.Account.LogoutRequestData
struct LogoutRequestData_t3397811983;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accoun588059788.h"

// System.Void GSN.Skill.Phoenix.Requests.Account.LogoutRequestData::.ctor()
extern "C"  void LogoutRequestData__ctor_m3874129799 (LogoutRequestData_t3397811983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.LogoutData GSN.Skill.Phoenix.Requests.Account.LogoutRequestData::get_Response()
extern "C"  LogoutData_t588059788  LogoutRequestData_get_Response_m633781275 (LogoutRequestData_t3397811983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Account.LogoutRequestData::set_Response(GSN.Skill.Phoenix.Requests.Account.LogoutData)
extern "C"  void LogoutRequestData_set_Response_m3503674056 (LogoutRequestData_t3397811983 * __this, LogoutData_t588059788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Account.LogoutRequestData::get_Url()
extern "C"  String_t* LogoutRequestData_get_Url_m3647770704 (LogoutRequestData_t3397811983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Requests.Account.LogoutRequestData::LogoutSuccessful()
extern "C"  bool LogoutRequestData_LogoutSuccessful_m2346289365 (LogoutRequestData_t3397811983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.Phoenix.Requests.Account.LogoutRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * LogoutRequestData_get_RequestBody_m2689182058 (LogoutRequestData_t3397811983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Account.LogoutRequestData::get_CookieSessionIDKey()
extern "C"  String_t* LogoutRequestData_get_CookieSessionIDKey_m1904951787 (LogoutRequestData_t3397811983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
