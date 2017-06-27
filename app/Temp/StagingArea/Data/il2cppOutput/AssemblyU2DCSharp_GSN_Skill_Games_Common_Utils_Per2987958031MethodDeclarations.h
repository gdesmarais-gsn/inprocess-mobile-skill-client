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

// GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob
struct PerseverantWebRequestJob_t2987958031;
// GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker
struct FailChecker_t651280870;
// GSN.Skill.Games.Common.Utils.WebRequestJob
struct WebRequestJob_t3512327076;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_WebR651280870.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Web3512327076.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::.ctor(GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker,System.Int32,System.Int32)
extern "C"  void PerseverantWebRequestJob__ctor_m1777503080 (PerseverantWebRequestJob_t2987958031 * __this, FailChecker_t651280870 * ___fc0, int32_t ___firstDelay_1, int32_t ___maxDelay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.WebRequestJob GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::get_WebRequestJob()
extern "C"  WebRequestJob_t3512327076 * PerseverantWebRequestJob_get_WebRequestJob_m1248875716 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::set_WebRequestJob(GSN.Skill.Games.Common.Utils.WebRequestJob)
extern "C"  void PerseverantWebRequestJob_set_WebRequestJob_m1676575355 (PerseverantWebRequestJob_t2987958031 * __this, WebRequestJob_t3512327076 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::RushRetry()
extern "C"  void PerseverantWebRequestJob_RushRetry_m376738032 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::get_AuthorizationRecoverJob()
extern "C"  Job_t4002496073 * PerseverantWebRequestJob_get_AuthorizationRecoverJob_m627328697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::set_AuthorizationRecoverJob(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void PerseverantWebRequestJob_set_AuthorizationRecoverJob_m2981943192 (Il2CppObject * __this /* static, unused */, Job_t4002496073 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::SuppressActivityIndicator()
extern "C"  void PerseverantWebRequestJob_SuppressActivityIndicator_m97565385 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::set_Bullish(System.Boolean)
extern "C"  void PerseverantWebRequestJob_set_Bullish_m758063879 (PerseverantWebRequestJob_t2987958031 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::get_Bullish()
extern "C"  bool PerseverantWebRequestJob_get_Bullish_m2438523470 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::CustomStart()
extern "C"  void PerseverantWebRequestJob_CustomStart_m4185338635 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::Finish()
extern "C"  void PerseverantWebRequestJob_Finish_m1775401599 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::get_Wrapper()
extern "C"  RequestWrapper_t293827378 * PerseverantWebRequestJob_get_Wrapper_m2404778997 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::NewWrapper()
extern "C"  void PerseverantWebRequestJob_NewWrapper_m1611220527 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::DestroyResponse()
extern "C"  void PerseverantWebRequestJob_DestroyResponse_m804038637 (PerseverantWebRequestJob_t2987958031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::.cctor()
extern "C"  void PerseverantWebRequestJob__cctor_m2692296431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
