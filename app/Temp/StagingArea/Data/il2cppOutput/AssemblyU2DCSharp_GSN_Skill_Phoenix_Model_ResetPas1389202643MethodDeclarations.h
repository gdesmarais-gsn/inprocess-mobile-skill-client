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

// GSN.Skill.Phoenix.Model.ResetPasswordManager
struct ResetPasswordManager_t1389202643;
// System.String
struct String_t;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Model.ResetPasswordManager::.ctor()
extern "C"  void ResetPasswordManager__ctor_m1682655219 (ResetPasswordManager_t1389202643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ResetPasswordManager::ResetPassword(System.String,System.String)
extern "C"  void ResetPasswordManager_ResetPassword_m77887205 (ResetPasswordManager_t1389202643 * __this, String_t* ___emailAddress0, String_t* ___username1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ResetPasswordManager::ShowResetPasswordPopup()
extern "C"  void ResetPasswordManager_ShowResetPasswordPopup_m2393275618 (ResetPasswordManager_t1389202643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ResetPasswordManager::OnResetPasswordFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void ResetPasswordManager_OnResetPasswordFail_m838704273 (ResetPasswordManager_t1389202643 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ResetPasswordManager::OnResetPasswordSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void ResetPasswordManager_OnResetPasswordSuccess_m833872122 (ResetPasswordManager_t1389202643 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
