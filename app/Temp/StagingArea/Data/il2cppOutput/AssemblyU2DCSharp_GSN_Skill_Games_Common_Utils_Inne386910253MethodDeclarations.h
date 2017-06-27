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

// GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob
struct InnerPerseverantWebRequestJob_t386910253;
// GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker
struct FailChecker_t651280870;
// GSN.Skill.Games.Common.Utils.WebRequestJob
struct WebRequestJob_t3512327076;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_WebR651280870.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Web3512327076.h"

// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::.ctor(GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker,System.Int32,System.Int32)
extern "C"  void InnerPerseverantWebRequestJob__ctor_m2670562516 (InnerPerseverantWebRequestJob_t386910253 * __this, FailChecker_t651280870 * ___fc0, int32_t ___firstDelay_1, int32_t ___maxDelay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.WebRequestJob GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::get_WebRequestJob()
extern "C"  WebRequestJob_t3512327076 * InnerPerseverantWebRequestJob_get_WebRequestJob_m1804443070 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::set_WebRequestJob(GSN.Skill.Games.Common.Utils.WebRequestJob)
extern "C"  void InnerPerseverantWebRequestJob_set_WebRequestJob_m1218888761 (InnerPerseverantWebRequestJob_t386910253 * __this, WebRequestJob_t3512327076 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::SetDefaultTimeout(System.Int32)
extern "C"  void InnerPerseverantWebRequestJob_SetDefaultTimeout_m569517737 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::set_Bullish(System.Boolean)
extern "C"  void InnerPerseverantWebRequestJob_set_Bullish_m3763694953 (InnerPerseverantWebRequestJob_t386910253 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::get_Bullish()
extern "C"  bool InnerPerseverantWebRequestJob_get_Bullish_m485537318 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::CustomReset(System.Boolean)
extern "C"  void InnerPerseverantWebRequestJob_CustomReset_m2204629311 (InnerPerseverantWebRequestJob_t386910253 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::CustomStart()
extern "C"  void InnerPerseverantWebRequestJob_CustomStart_m2194299173 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::NetIsReachable()
extern "C"  bool InnerPerseverantWebRequestJob_NetIsReachable_m2523757942 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::DestroyResponse()
extern "C"  void InnerPerseverantWebRequestJob_DestroyResponse_m1018284707 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::NewWrapper()
extern "C"  void InnerPerseverantWebRequestJob_NewWrapper_m2558143085 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::get_Wrapper()
extern "C"  RequestWrapper_t293827378 * InnerPerseverantWebRequestJob_get_Wrapper_m2129150075 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::DoubleRetryDelay()
extern "C"  void InnerPerseverantWebRequestJob_DoubleRetryDelay_m2873487602 (InnerPerseverantWebRequestJob_t386910253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::.cctor()
extern "C"  void InnerPerseverantWebRequestJob__cctor_m4230192613 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
