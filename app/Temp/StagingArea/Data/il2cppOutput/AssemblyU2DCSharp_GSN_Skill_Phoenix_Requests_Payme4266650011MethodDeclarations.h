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

// GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData
struct WithdrawRequestData_t4266650011;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Paymen343388644.h"

// System.Void GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::.ctor()
extern "C"  void WithdrawRequestData__ctor_m828917254 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::get_amount()
extern "C"  Decimal_t724701077  WithdrawRequestData_get_amount_m3712019794 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::set_amount(System.Decimal)
extern "C"  void WithdrawRequestData_set_amount_m1988690189 (WithdrawRequestData_t4266650011 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::get_password()
extern "C"  String_t* WithdrawRequestData_get_password_m1617230315 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::set_password(System.String)
extern "C"  void WithdrawRequestData_set_password_m1764112274 (WithdrawRequestData_t4266650011 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Payment.WithdrawData GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::get_Response()
extern "C"  WithdrawData_t343388644  WithdrawRequestData_get_Response_m913265019 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::set_Response(GSN.Skill.Phoenix.Requests.Payment.WithdrawData)
extern "C"  void WithdrawRequestData_set_Response_m668182338 (WithdrawRequestData_t4266650011 * __this, WithdrawData_t343388644  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::get_Url()
extern "C"  String_t* WithdrawRequestData_get_Url_m1434917935 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::get_userData()
extern "C"  User_t1577144177 * WithdrawRequestData_get_userData_m1661624461 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * WithdrawRequestData_get_RequestBody_m3553931253 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::get_CookieSessionIDKey()
extern "C"  String_t* WithdrawRequestData_get_CookieSessionIDKey_m3405056938 (WithdrawRequestData_t4266650011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::OnClientIDSet(GSN.Skill.Events.IEvent)
extern "C"  void WithdrawRequestData_OnClientIDSet_m1973013436 (WithdrawRequestData_t4266650011 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
