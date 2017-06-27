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

// GSN.Skill.Phoenix.Model.LoginFlowManager
struct LoginFlowManager_t3154992724;
// GSN.Skill.Phoenix.Model.ScreenManager
struct ScreenManager_t2047768743;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Requests.SingleWebRequestComplete
struct SingleWebRequestComplete_t61608820;
// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;
// System.String
struct String_t;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ScreenMa2047768743.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_SingleWebReques61608820.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_SingleWebReque691327747.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::.ctor(GSN.Skill.Phoenix.Model.ScreenManager,GSN.Skill.Phoenix.Model.Data.CurrentUser)
extern "C"  void LoginFlowManager__ctor_m3328138845 (LoginFlowManager_t3154992724 * __this, ScreenManager_t2047768743 * ___screenManager0, CurrentUser_t3910039426 * ___currentUser1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.LoginFlowManager::get_autoLoginEnabled()
extern "C"  bool LoginFlowManager_get_autoLoginEnabled_m2610744068 (LoginFlowManager_t3154992724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::AutoLogin(GSN.Skill.Requests.SingleWebRequestComplete,GSN.Skill.Requests.SingleWebRequestFail)
extern "C"  void LoginFlowManager_AutoLogin_m4044181227 (LoginFlowManager_t3154992724 * __this, SingleWebRequestComplete_t61608820 * ___OnComplete0, SingleWebRequestFail_t691327747 * ___OnFail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::ShowWelcomeScreen()
extern "C"  void LoginFlowManager_ShowWelcomeScreen_m20740713 (LoginFlowManager_t3154992724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::ShowLogin()
extern "C"  void LoginFlowManager_ShowLogin_m1820330042 (LoginFlowManager_t3154992724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::ShowRegistration()
extern "C"  void LoginFlowManager_ShowRegistration_m4294101506 (LoginFlowManager_t3154992724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::RegisterUser(System.String,System.String,System.String)
extern "C"  void LoginFlowManager_RegisterUser_m3589477070 (LoginFlowManager_t3154992724 * __this, String_t* ___username0, String_t* ___email1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::Login(System.String,System.String,System.Boolean)
extern "C"  void LoginFlowManager_Login_m2429772176 (LoginFlowManager_t3154992724 * __this, String_t* ___username0, String_t* ___password1, bool ___autoLoginEnabled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::HandleSuccessfulLogin()
extern "C"  void LoginFlowManager_HandleSuccessfulLogin_m1211691661 (LoginFlowManager_t3154992724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::OnRegisterUserSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void LoginFlowManager_OnRegisterUserSuccess_m3026321981 (LoginFlowManager_t3154992724 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::OnRegisterUserFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void LoginFlowManager_OnRegisterUserFail_m2800772632 (LoginFlowManager_t3154992724 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::OnLoginComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void LoginFlowManager_OnLoginComplete_m457833192 (LoginFlowManager_t3154992724 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::OnLoginFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void LoginFlowManager_OnLoginFail_m2452739923 (LoginFlowManager_t3154992724 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::OnAutoLoginComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void LoginFlowManager_OnAutoLoginComplete_m2327756907 (LoginFlowManager_t3154992724 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LoginFlowManager::OnAutoLoginFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void LoginFlowManager_OnAutoLoginFail_m683250054 (LoginFlowManager_t3154992724 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
