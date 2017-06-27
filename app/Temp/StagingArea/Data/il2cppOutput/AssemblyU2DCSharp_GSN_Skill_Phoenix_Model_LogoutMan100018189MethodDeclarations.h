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

// GSN.Skill.Phoenix.Model.LogoutManager
struct LogoutManager_t100018189;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Phoenix.Model.LogoutManager::.ctor()
extern "C"  void LogoutManager__ctor_m1974798499 (LogoutManager_t100018189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LogoutManager::Logout()
extern "C"  void LogoutManager_Logout_m2538401393 (LogoutManager_t100018189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LogoutManager::OnLogoutComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void LogoutManager_OnLogoutComplete_m711855836 (LogoutManager_t100018189 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.LogoutManager::OnLogoutFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void LogoutManager_OnLogoutFail_m799756385 (LogoutManager_t100018189 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
