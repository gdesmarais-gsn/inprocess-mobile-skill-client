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

// GSN.Skill.Games.Tripeaks.DynamiteCountdownTask
struct DynamiteCountdownTask_t3600144113;
// GSN.Skill.Games.Tripeaks.GameModel
struct GameModel_t3841817345;
// GSN.Skill.Games.Tripeaks.TriPeaksCard
struct TriPeaksCard_t214310709;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_GameMod3841817345.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_TriPeaks214310709.h"

// System.Void GSN.Skill.Games.Tripeaks.DynamiteCountdownTask::.ctor(GSN.Skill.Games.Tripeaks.GameModel,System.Int32,System.Int32,GSN.Skill.Games.Tripeaks.TriPeaksCard)
extern "C"  void DynamiteCountdownTask__ctor_m986083231 (DynamiteCountdownTask_t3600144113 * __this, GameModel_t3841817345 * ___model0, int32_t ___countdownSecs1, int32_t ___cardID2, TriPeaksCard_t214310709 * ___card3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.DynamiteCountdownTask::Run()
extern "C"  void DynamiteCountdownTask_Run_m3484621252 (DynamiteCountdownTask_t3600144113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.DynamiteCountdownTask::Rewind(System.Int32)
extern "C"  void DynamiteCountdownTask_Rewind_m834338447 (DynamiteCountdownTask_t3600144113 * __this, int32_t ___absoluteTimeMS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
