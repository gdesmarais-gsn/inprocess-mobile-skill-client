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

// GSN.Skill.Phoenix.Requests.Payment.DepositRequestData
struct DepositRequestData_t2329604405;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Paymen274481908.h"

// System.Void GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::.ctor()
extern "C"  void DepositRequestData__ctor_m3993448110 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_amount()
extern "C"  int32_t DepositRequestData_get_amount_m1066294309 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::set_amount(System.Int32)
extern "C"  void DepositRequestData_set_amount_m3663316720 (DepositRequestData_t2329604405 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_creditCardID()
extern "C"  int32_t DepositRequestData_get_creditCardID_m1056930781 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::set_creditCardID(System.Int32)
extern "C"  void DepositRequestData_set_creditCardID_m2221052226 (DepositRequestData_t2329604405 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_password()
extern "C"  String_t* DepositRequestData_get_password_m157236961 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::set_password(System.String)
extern "C"  void DepositRequestData_set_password_m3435939454 (DepositRequestData_t2329604405 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Payment.DepositData GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_Response()
extern "C"  DepositData_t274481908  DepositRequestData_get_Response_m1096328667 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::set_Response(GSN.Skill.Phoenix.Requests.Payment.DepositData)
extern "C"  void DepositRequestData_set_Response_m1135851052 (DepositRequestData_t2329604405 * __this, DepositData_t274481908  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_Url()
extern "C"  String_t* DepositRequestData_get_Url_m579809897 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_userData()
extern "C"  User_t1577144177 * DepositRequestData_get_userData_m263761831 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * DepositRequestData_get_RequestBody_m3183960907 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::get_CookieSessionIDKey()
extern "C"  String_t* DepositRequestData_get_CookieSessionIDKey_m1895152336 (DepositRequestData_t2329604405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::OnClientIDSet(GSN.Skill.Events.IEvent)
extern "C"  void DepositRequestData_OnClientIDSet_m316950072 (DepositRequestData_t2329604405 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
