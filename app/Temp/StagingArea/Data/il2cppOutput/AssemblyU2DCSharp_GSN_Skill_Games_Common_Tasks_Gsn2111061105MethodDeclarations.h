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

// GSN.Skill.Games.Common.Tasks.GsnGameClockTask
struct GsnGameClockTask_t2111061105;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Model_Gam2215752692.h"

// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::.ctor(GSN.Skill.Games.Common.Model.GameModelBase,System.Int32)
extern "C"  void GsnGameClockTask__ctor_m256891540 (GsnGameClockTask_t2111061105 * __this, GameModelBase_t2215752692 * ___model0, int32_t ___timeStep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::get_accumulatedPauseTime()
extern "C"  int32_t GsnGameClockTask_get_accumulatedPauseTime_m1143728341 (GsnGameClockTask_t2111061105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::set_accumulatedPauseTime(System.Int32)
extern "C"  void GsnGameClockTask_set_accumulatedPauseTime_m2888587382 (GsnGameClockTask_t2111061105 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::Run()
extern "C"  void GsnGameClockTask_Run_m1021091274 (GsnGameClockTask_t2111061105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::UpdateTime()
extern "C"  void GsnGameClockTask_UpdateTime_m1916396601 (GsnGameClockTask_t2111061105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::Setup(System.Int32,System.Int32,System.Boolean)
extern "C"  void GsnGameClockTask_Setup_m177953857 (GsnGameClockTask_t2111061105 * __this, int32_t ___timeNow0, int32_t ___duration1, bool ___startPaused2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::GetSecsLeft()
extern "C"  int32_t GsnGameClockTask_GetSecsLeft_m2685983894 (GsnGameClockTask_t2111061105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::GetMSLeft()
extern "C"  int32_t GsnGameClockTask_GetMSLeft_m1757879192 (GsnGameClockTask_t2111061105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::Pause(System.Int32)
extern "C"  void GsnGameClockTask_Pause_m569672176 (GsnGameClockTask_t2111061105 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::Resume(System.Int32)
extern "C"  void GsnGameClockTask_Resume_m2906603869 (GsnGameClockTask_t2111061105 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::Cleanup()
extern "C"  void GsnGameClockTask_Cleanup_m3357767369 (GsnGameClockTask_t2111061105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::NextTimeStepAfter(System.Int32)
extern "C"  int32_t GsnGameClockTask_NextTimeStepAfter_m2534893840 (GsnGameClockTask_t2111061105 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tasks.GsnGameClockTask::Rewind(System.Int32,System.Int32)
extern "C"  void GsnGameClockTask_Rewind_m187902444 (GsnGameClockTask_t2111061105 * __this, int32_t ___stateTimeMS0, int32_t ___accumulatedPauseTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
