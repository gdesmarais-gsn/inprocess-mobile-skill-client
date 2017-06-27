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

// GSN.Skill.Games.Common.Utils.JobPriorityQueue
struct JobPriorityQueue_t4214851120;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

// System.Void GSN.Skill.Games.Common.Utils.JobPriorityQueue::.ctor()
extern "C"  void JobPriorityQueue__ctor_m3427858625 (JobPriorityQueue_t4214851120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.JobPriorityQueue::get_SupportsPriority()
extern "C"  bool JobPriorityQueue_get_SupportsPriority_m95811082 (JobPriorityQueue_t4214851120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.JobPriorityQueue::PleaseStart(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void JobPriorityQueue_PleaseStart_m3416879694 (JobPriorityQueue_t4214851120 * __this, Job_t4002496073 * ___job0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.JobPriorityQueue::JobDone(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void JobPriorityQueue_JobDone_m1506070591 (JobPriorityQueue_t4214851120 * __this, Job_t4002496073 * ___job0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
