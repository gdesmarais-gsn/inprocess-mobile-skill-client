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

// GSN.Skill.Games.Common.Utils.RepeaterJob
struct RepeaterJob_t1855617669;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

// System.Void GSN.Skill.Games.Common.Utils.RepeaterJob::.ctor(GSN.Skill.Games.Common.Utils.Job,System.Int32)
extern "C"  void RepeaterJob__ctor_m2334111722 (RepeaterJob_t1855617669 * __this, Job_t4002496073 * ___repeatingJob_0, int32_t ___timesToRun_1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RepeaterJob::maybeRepeatAgain()
extern "C"  void RepeaterJob_maybeRepeatAgain_m2738269871 (RepeaterJob_t1855617669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RepeaterJob::CustomStart()
extern "C"  void RepeaterJob_CustomStart_m552629189 (RepeaterJob_t1855617669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RepeaterJob::CustomAbort()
extern "C"  void RepeaterJob_CustomAbort_m4029497751 (RepeaterJob_t1855617669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RepeaterJob::CustomReset(System.Boolean)
extern "C"  void RepeaterJob_CustomReset_m1632168847 (RepeaterJob_t1855617669 * __this, bool ___hard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
