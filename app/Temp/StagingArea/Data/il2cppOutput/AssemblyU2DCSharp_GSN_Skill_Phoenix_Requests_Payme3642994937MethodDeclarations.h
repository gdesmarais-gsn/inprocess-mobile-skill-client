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

// GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData
struct AddCreditCardRequestData_t3642994937;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Payme1639860674.h"

// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::.ctor()
extern "C"  void AddCreditCardRequestData__ctor_m3148241548 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_amount()
extern "C"  int32_t AddCreditCardRequestData_get_amount_m1086182025 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_amount(System.Int32)
extern "C"  void AddCreditCardRequestData_set_amount_m2103510002 (AddCreditCardRequestData_t3642994937 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_address1()
extern "C"  String_t* AddCreditCardRequestData_get_address1_m2348589409 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_address1(System.String)
extern "C"  void AddCreditCardRequestData_set_address1_m3573084510 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_city()
extern "C"  String_t* AddCreditCardRequestData_get_city_m3964645745 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_city(System.String)
extern "C"  void AddCreditCardRequestData_set_city_m2851190382 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_country()
extern "C"  String_t* AddCreditCardRequestData_get_country_m3927729776 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_country(System.String)
extern "C"  void AddCreditCardRequestData_set_country_m1223356785 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_state()
extern "C"  String_t* AddCreditCardRequestData_get_state_m2971117349 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_state(System.String)
extern "C"  void AddCreditCardRequestData_set_state_m3758010108 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_zip()
extern "C"  String_t* AddCreditCardRequestData_get_zip_m3458382901 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_zip(System.String)
extern "C"  void AddCreditCardRequestData_set_zip_m1111040306 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_ccv()
extern "C"  String_t* AddCreditCardRequestData_get_ccv_m3852177754 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_ccv(System.String)
extern "C"  void AddCreditCardRequestData_set_ccv_m1213713523 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_expirationMonth()
extern "C"  String_t* AddCreditCardRequestData_get_expirationMonth_m1472585577 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_expirationMonth(System.String)
extern "C"  void AddCreditCardRequestData_set_expirationMonth_m129521448 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_expirationYear()
extern "C"  String_t* AddCreditCardRequestData_get_expirationYear_m1551219596 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_expirationYear(System.String)
extern "C"  void AddCreditCardRequestData_set_expirationYear_m3195243165 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_ccNumber()
extern "C"  String_t* AddCreditCardRequestData_get_ccNumber_m2511172801 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_ccNumber(System.String)
extern "C"  void AddCreditCardRequestData_set_ccNumber_m978990674 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_address2()
extern "C"  String_t* AddCreditCardRequestData_get_address2_m2348589310 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_address2(System.String)
extern "C"  void AddCreditCardRequestData_set_address2_m1221561981 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_firstName()
extern "C"  String_t* AddCreditCardRequestData_get_firstName_m1728545919 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_firstName(System.String)
extern "C"  void AddCreditCardRequestData_set_firstName_m86555828 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_lastName()
extern "C"  String_t* AddCreditCardRequestData_get_lastName_m212000723 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_lastName(System.String)
extern "C"  void AddCreditCardRequestData_set_lastName_m733137030 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_password()
extern "C"  String_t* AddCreditCardRequestData_get_password_m259242989 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_password(System.String)
extern "C"  void AddCreditCardRequestData_set_password_m2051583356 (AddCreditCardRequestData_t3642994937 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Payment.AddCreditCardData GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_Response()
extern "C"  AddCreditCardData_t1639860674  AddCreditCardRequestData_get_Response_m1501377995 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::set_Response(GSN.Skill.Phoenix.Requests.Payment.AddCreditCardData)
extern "C"  void AddCreditCardRequestData_set_Response_m2699668812 (AddCreditCardRequestData_t3642994937 * __this, AddCreditCardData_t1639860674  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_Url()
extern "C"  String_t* AddCreditCardRequestData_get_Url_m4164059365 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_userData()
extern "C"  User_t1577144177 * AddCreditCardRequestData_get_userData_m1483123011 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * AddCreditCardRequestData_get_RequestBody_m3546105975 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Payment.AddCreditCardRequestData::get_CookieSessionIDKey()
extern "C"  String_t* AddCreditCardRequestData_get_CookieSessionIDKey_m3355424610 (AddCreditCardRequestData_t3642994937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
