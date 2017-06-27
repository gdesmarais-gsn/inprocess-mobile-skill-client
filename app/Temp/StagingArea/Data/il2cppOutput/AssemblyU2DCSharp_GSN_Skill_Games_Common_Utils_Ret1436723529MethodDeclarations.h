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

// GSN.Skill.Games.Common.Utils.RetryJobController
struct RetryJobController_t1436723529;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// GSN.Skill.Games.Common.Utils.IHeapable
struct IHeapable_t2168791121;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

// System.Void GSN.Skill.Games.Common.Utils.RetryJobController::.ctor()
extern "C"  void RetryJobController__ctor_m1067380868 (RetryJobController_t1436723529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.RetryJobController::get_SupportsPriority()
extern "C"  bool RetryJobController_get_SupportsPriority_m1438441637 (RetryJobController_t1436723529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJobController::PleaseStart(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void RetryJobController_PleaseStart_m2404340937 (RetryJobController_t1436723529 * __this, Job_t4002496073 * ___job0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJobController::JobDone(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void RetryJobController_JobDone_m3364983718 (RetryJobController_t1436723529 * __this, Job_t4002496073 * ___job0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJobController::rushRetry(GSN.Skill.Games.Common.Utils.IHeapable)
extern "C"  void RetryJobController_rushRetry_m2881968987 (RetryJobController_t1436723529 * __this, Il2CppObject * ___pwrj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
