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

// GSN.Skill.Games.Common.Utils.MultiJob
struct MultiJob_t1652600978;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

// System.Void GSN.Skill.Games.Common.Utils.MultiJob::.ctor(System.Boolean)
extern "C"  void MultiJob__ctor_m3887962278 (MultiJob_t1652600978 * __this, bool ___parallel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MultiJob::AddJob(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void MultiJob_AddJob_m3262775356 (MultiJob_t1652600978 * __this, Job_t4002496073 * ___job0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MultiJob::CustomStart()
extern "C"  void MultiJob_CustomStart_m576239726 (MultiJob_t1652600978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MultiJob::CheckIt(System.Boolean)
extern "C"  void MultiJob_CheckIt_m3695083427 (MultiJob_t1652600978 * __this, bool ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MultiJob::performRestOfJobs(System.Boolean)
extern "C"  void MultiJob_performRestOfJobs_m324635932 (MultiJob_t1652600978 * __this, bool ___lastFailed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MultiJob::CustomAbort()
extern "C"  void MultiJob_CustomAbort_m609057956 (MultiJob_t1652600978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MultiJob::CustomReset(System.Boolean)
extern "C"  void MultiJob_CustomReset_m1800212284 (MultiJob_t1652600978 * __this, bool ___hard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
