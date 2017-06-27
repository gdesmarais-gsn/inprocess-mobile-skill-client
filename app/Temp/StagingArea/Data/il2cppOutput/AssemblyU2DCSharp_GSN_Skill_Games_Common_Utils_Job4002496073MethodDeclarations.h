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

// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// GSN.Skill.Games.Common.Utils.Heap
struct Heap_t3225244008;
// GSN.Skill.Games.Common.Utils.IJobController
struct IJobController_t3044627300;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job>
struct List_1_t3371617205;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job2799772509.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Hea3225244008.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act4252928663.h"

// System.Void GSN.Skill.Games.Common.Utils.Job::.ctor(GSN.Skill.Games.Common.Utils.Job/AutoResetValue)
extern "C"  void Job__ctor_m2953252857 (Job_t4002496073 * __this, int32_t ___autoReset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.Job::get_Running()
extern "C"  bool Job_get_Running_m435226072 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.Job::get_jobID()
extern "C"  int32_t Job_get_jobID_m1389526103 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::set_jobID(System.Int32)
extern "C"  void Job_set_jobID_m2126615954 (Job_t4002496073 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.Job::get_Aborted()
extern "C"  bool Job_get_Aborted_m732502788 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::set_Aborted(System.Boolean)
extern "C"  void Job_set_Aborted_m3424191219 (Job_t4002496073 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.Job::get_ActuallyStarted()
extern "C"  bool Job_get_ActuallyStarted_m1115861157 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::set_ActuallyStarted(System.Boolean)
extern "C"  void Job_set_ActuallyStarted_m2713068750 (Job_t4002496073 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.Heap GSN.Skill.Games.Common.Utils.Job::get___heap()
extern "C"  Heap_t3225244008 * Job_get___heap_m1116113730 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::set___heap(GSN.Skill.Games.Common.Utils.Heap)
extern "C"  void Job_set___heap_m3914861053 (Job_t4002496073 * __this, Heap_t3225244008 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.Job::get___heapIndex()
extern "C"  int32_t Job_get___heapIndex_m2028816203 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::set___heapIndex(System.Int32)
extern "C"  void Job_set___heapIndex_m2617688288 (Job_t4002496073 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.Job::get_heapRank()
extern "C"  int32_t Job_get_heapRank_m4186368807 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.Job::get_Priority()
extern "C"  int32_t Job_get_Priority_m713803255 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::set_Priority(System.Int32)
extern "C"  void Job_set_Priority_m3334576296 (Job_t4002496073 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::set_Controller(GSN.Skill.Games.Common.Utils.IJobController)
extern "C"  void Job_set_Controller_m4091310107 (Job_t4002496073 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IJobController GSN.Skill.Games.Common.Utils.Job::get_Controller()
extern "C"  Il2CppObject * Job_get_Controller_m2287943166 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::SetLogging(System.Boolean,System.UInt32)
extern "C"  void Job_SetLogging_m975854984 (Job_t4002496073 * __this, bool ___loggingEnabled0, uint32_t ___loggingPreferenceStrength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::AbortAll(System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job>)
extern "C"  void Job_AbortAll_m1517854910 (Job_t4002496073 * __this, List_1_t3371617205 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::Forget(System.Action)
extern "C"  void Job_Forget_m1881493980 (Job_t4002496073 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::ResetAll(System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job>,System.Boolean)
extern "C"  void Job_ResetAll_m2221999546 (Job_t4002496073 * __this, List_1_t3371617205 * ___l0, bool ___hard1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::AddPrerequisite(GSN.Skill.Games.Common.Utils.Job)
extern "C"  void Job_AddPrerequisite_m2851190774 (Job_t4002496073 * __this, Job_t4002496073 * ___j0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::CustomReset(System.Boolean)
extern "C"  void Job_CustomReset_m2758107591 (Job_t4002496073 * __this, bool ___hard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::Reset(System.Boolean)
extern "C"  void Job_Reset_m155475080 (Job_t4002496073 * __this, bool ___hard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::CustomAbort()
extern "C"  void Job_CustomAbort_m859374879 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::Abort()
extern "C"  void Job_Abort_m642344028 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::Start(System.Action`1<System.Boolean>,System.String)
extern "C"  void Job_Start_m844035741 (Job_t4002496073 * __this, Action_1_t3627374100 * ___doneAction0, String_t* ___note1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::Start(System.Action,System.String)
extern "C"  void Job_Start_m3337145165 (Job_t4002496073 * __this, Action_t3226471752 * ___doneAction0, String_t* ___note1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::finishStarting()
extern "C"  void Job_finishStarting_m3068743817 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::handleJobException()
extern "C"  void Job_handleJobException_m208289774 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::__ActuallyStart()
extern "C"  void Job___ActuallyStart_m2913956729 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::StartByController()
extern "C"  void Job_StartByController_m2994729893 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action GSN.Skill.Games.Common.Utils.Job::MakePrereqDoneAction(GSN.Skill.Games.Common.Utils.Job)
extern "C"  Action_t3226471752 * Job_MakePrereqDoneAction_m2884496822 (Job_t4002496073 * __this, Job_t4002496073 * ___j0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::StartPrerequisites()
extern "C"  void Job_StartPrerequisites_m1237791979 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::CheckPrerequisite(System.Boolean)
extern "C"  void Job_CheckPrerequisite_m2421216201 (Job_t4002496073 * __this, bool ___failed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::AbandonPrerequisites()
extern "C"  void Job_AbandonPrerequisites_m732772368 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::Finish()
extern "C"  void Job_Finish_m3185488697 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::CallActionInJobContext(System.Action)
extern "C"  void Job_CallActionInJobContext_m4155140506 (Job_t4002496073 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.Job::ContainsContext(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  bool Job_ContainsContext_m3874410609 (Job_t4002496073 * __this, ActionContext_t4252928663 * ___ac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Job::<finishStarting>m__0()
extern "C"  void Job_U3CfinishStartingU3Em__0_m1656516880 (Job_t4002496073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
