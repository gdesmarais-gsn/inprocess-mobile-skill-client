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

// GSN.Skill.Games.Common.Utils.JobOrderQueue
struct JobOrderQueue_t821930782;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

// System.Void GSN.Skill.Games.Common.Utils.JobOrderQueue::.ctor()
extern "C"  void JobOrderQueue__ctor_m197981529 (JobOrderQueue_t821930782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.JobOrderQueue::set_MaxRunning(System.Int32)
extern "C"  void JobOrderQueue_set_MaxRunning_m609110942 (JobOrderQueue_t821930782 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.JobOrderQueue::get_MaxRunning()
extern "C"  int32_t JobOrderQueue_get_MaxRunning_m2784342341 (JobOrderQueue_t821930782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.JobOrderQueue::get_SupportsPriority()
extern "C"  bool JobOrderQueue_get_SupportsPriority_m1812227652 (JobOrderQueue_t821930782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.JobOrderQueue::PleaseStart(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void JobOrderQueue_PleaseStart_m3790056552 (JobOrderQueue_t821930782 * __this, Job_t4002496073 * ___job0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.JobOrderQueue::runJobs()
extern "C"  void JobOrderQueue_runJobs_m805598646 (JobOrderQueue_t821930782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.JobOrderQueue::JobDone(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void JobOrderQueue_JobDone_m1033027331 (JobOrderQueue_t821930782 * __this, Job_t4002496073 * ___job0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
