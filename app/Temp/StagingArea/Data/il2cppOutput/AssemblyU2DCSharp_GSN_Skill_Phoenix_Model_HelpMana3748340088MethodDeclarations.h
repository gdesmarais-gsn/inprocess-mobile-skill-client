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

// GSN.Skill.Phoenix.Model.HelpManager
struct HelpManager_t3748340088;
// System.String
struct String_t;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Model.HelpManager::.ctor()
extern "C"  void HelpManager__ctor_m1519902648 (HelpManager_t3748340088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.HelpManager::Help(System.String)
extern "C"  void HelpManager_Help_m594069915 (HelpManager_t3748340088 * __this, String_t* ___username0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.HelpManager::OnHelpURLGenerated(GSN.Skill.Requests.IWebRequest)
extern "C"  void HelpManager_OnHelpURLGenerated_m2410759575 (HelpManager_t3748340088 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.HelpManager::OnHelpURLFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void HelpManager_OnHelpURLFail_m4270845502 (HelpManager_t3748340088 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
