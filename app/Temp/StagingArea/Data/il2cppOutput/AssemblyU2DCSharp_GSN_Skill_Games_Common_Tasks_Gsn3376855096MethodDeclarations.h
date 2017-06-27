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

// GSN.Skill.Games.Common.Tasks.GsnTaskBase
struct GsnTaskBase_t3376855096;
// GSN.Skill.Games.Common.Tasks.GsnScheduler
struct GsnScheduler_t1299811741;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn1299811741.h"

// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::.ctor()
extern "C"  void GsnTaskBase__ctor_m833660190 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::Reconstruct()
extern "C"  void GsnTaskBase_Reconstruct_m1129393512 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::SetWakeUpTime(System.Int32)
extern "C"  void GsnTaskBase_SetWakeUpTime_m1429602437 (GsnTaskBase_t3376855096 * __this, int32_t ___wt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Tasks.GsnTaskBase::IsIdle()
extern "C"  bool GsnTaskBase_IsIdle_m1680381028 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::UnSchedule()
extern "C"  void GsnTaskBase_UnSchedule_m1949516266 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::OnRemoved()
extern "C"  void GsnTaskBase_OnRemoved_m2202480045 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Tasks.GsnTaskBase::IsAnchor()
extern "C"  bool GsnTaskBase_IsAnchor_m2637514673 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnTaskBase::get_heapLocation()
extern "C"  int32_t GsnTaskBase_get_heapLocation_m1578955206 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::set_heapLocation(System.Int32)
extern "C"  void GsnTaskBase_set_heapLocation_m607416243 (GsnTaskBase_t3376855096 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Tasks.GsnScheduler GSN.Skill.Games.Common.Tasks.GsnTaskBase::get_scheduler()
extern "C"  GsnScheduler_t1299811741 * GsnTaskBase_get_scheduler_m2758217401 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::set_scheduler(GSN.Skill.Games.Common.Tasks.GsnScheduler)
extern "C"  void GsnTaskBase_set_scheduler_m4017641542 (GsnTaskBase_t3376855096 * __this, GsnScheduler_t1299811741 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnTaskBase::get_wakeUpTime()
extern "C"  int32_t GsnTaskBase_get_wakeUpTime_m3095691449 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnTaskBase::set_wakeUpTime(System.Int32)
extern "C"  void GsnTaskBase_set_wakeUpTime_m2526113148 (GsnTaskBase_t3376855096 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Tasks.GsnTaskBase::GetDumpString()
extern "C"  String_t* GsnTaskBase_GetDumpString_m40585942 (GsnTaskBase_t3376855096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
