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

// GSN.Skill.Games.Common.Tasks.GsnScheduler
struct GsnScheduler_t1299811741;
// GSN.Skill.Games.Common.Tasks.GsnTaskBase
struct GsnTaskBase_t3376855096;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"

// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::.ctor()
extern "C"  void GsnScheduler__ctor_m750971749 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::RunUntil(System.Int32)
extern "C"  void GsnScheduler_RunUntil_m3010721903 (GsnScheduler_t1299811741 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::Run()
extern "C"  void GsnScheduler_Run_m3209131714 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::OnIdle(System.Int32)
extern "C"  void GsnScheduler_OnIdle_m3986997653 (GsnScheduler_t1299811741 * __this, int32_t ___lastRunTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::Add(GSN.Skill.Games.Common.Tasks.GsnTaskBase)
extern "C"  void GsnScheduler_Add_m2031362013 (GsnScheduler_t1299811741 * __this, GsnTaskBase_t3376855096 * ___task0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::internalAdd(GSN.Skill.Games.Common.Tasks.GsnTaskBase)
extern "C"  void GsnScheduler_internalAdd_m3003670226 (GsnScheduler_t1299811741 * __this, GsnTaskBase_t3376855096 * ___task0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::Remove(GSN.Skill.Games.Common.Tasks.GsnTaskBase)
extern "C"  void GsnScheduler_Remove_m3914177066 (GsnScheduler_t1299811741 * __this, GsnTaskBase_t3376855096 * ___task0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::internalRemove(System.Int32)
extern "C"  void GsnScheduler_internalRemove_m2314241853 (GsnScheduler_t1299811741 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::RemoveAll()
extern "C"  void GsnScheduler_RemoveAll_m2519628272 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::FriendPrepone(GSN.Skill.Games.Common.Tasks.GsnTaskBase)
extern "C"  void GsnScheduler_FriendPrepone_m481957965 (GsnScheduler_t1299811741 * __this, GsnTaskBase_t3376855096 * ___task0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Tasks.GsnScheduler::internalPrepone(System.Int32)
extern "C"  bool GsnScheduler_internalPrepone_m3129414454 (GsnScheduler_t1299811741 * __this, int32_t ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::FriendPostpone(GSN.Skill.Games.Common.Tasks.GsnTaskBase)
extern "C"  void GsnScheduler_FriendPostpone_m542323760 (GsnScheduler_t1299811741 * __this, GsnTaskBase_t3376855096 * ___task0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::internalPostpone(System.Int32)
extern "C"  void GsnScheduler_internalPostpone_m2810673063 (GsnScheduler_t1299811741 * __this, int32_t ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::strictRefreshWakeUpTime()
extern "C"  void GsnScheduler_strictRefreshWakeUpTime_m3743065475 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::lazyRefreshWakeUpTime()
extern "C"  void GsnScheduler_lazyRefreshWakeUpTime_m682069110 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnScheduler::getEarlierChild(System.Int32)
extern "C"  int32_t GsnScheduler_getEarlierChild_m661230538 (GsnScheduler_t1299811741 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::cleanupSchedule()
extern "C"  void GsnScheduler_cleanupSchedule_m4212905354 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Tasks.GsnScheduler::GetDumpString()
extern "C"  String_t* GsnScheduler_GetDumpString_m3821150855 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Tasks.GsnScheduler::get_lazy()
extern "C"  bool GsnScheduler_get_lazy_m1915555082 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::set_lazy(System.Boolean)
extern "C"  void GsnScheduler_set_lazy_m4114234945 (GsnScheduler_t1299811741 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Tasks.GsnTaskBase GSN.Skill.Games.Common.Tasks.GsnScheduler::get_runningTask()
extern "C"  GsnTaskBase_t3376855096 * GsnScheduler_get_runningTask_m2932297312 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnScheduler::get_wakeUpTime()
extern "C"  int32_t GsnScheduler_get_wakeUpTime_m1650610384 (GsnScheduler_t1299811741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnScheduler::set_wakeUpTime(System.Int32)
extern "C"  void GsnScheduler_set_wakeUpTime_m26472873 (GsnScheduler_t1299811741 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
