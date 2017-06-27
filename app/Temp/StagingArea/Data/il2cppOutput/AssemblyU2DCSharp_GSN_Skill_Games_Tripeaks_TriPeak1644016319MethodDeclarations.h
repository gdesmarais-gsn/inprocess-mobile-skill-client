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

// GSN.Skill.Games.Tripeaks.TriPeaksAnalytics
struct TriPeaksAnalytics_t1644016319;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::.ctor()
extern "C"  void TriPeaksAnalytics__ctor_m3381616019 (TriPeaksAnalytics_t1644016319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Tripeaks.TriPeaksAnalytics GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::get_instance()
extern "C"  TriPeaksAnalytics_t1644016319 * TriPeaksAnalytics_get_instance_m2231945586 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ConstructEndStats(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void TriPeaksAnalytics_ConstructEndStats_m1500165040 (TriPeaksAnalytics_t1644016319 * __this, int32_t ___timeRemaining0, int32_t ___scoreBase1, int32_t ___scoreStreak2, int32_t ___scoreTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::getEndGameReason(System.Int32)
extern "C"  String_t* TriPeaksAnalytics_getEndGameReason_m3793340680 (TriPeaksAnalytics_t1644016319 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportLevelEnd(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void TriPeaksAnalytics_ReportLevelEnd_m4284055512 (TriPeaksAnalytics_t1644016319 * __this, int32_t ___levelID0, int32_t ___endReason1, int32_t ___totalScore2, int32_t ___timeRemaining3, int32_t ___scoreBase4, int32_t ___scoreStreak5, int32_t ___scoreTime6, int32_t ___scoreTotal7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportGameEnd(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void TriPeaksAnalytics_ReportGameEnd_m3967171257 (TriPeaksAnalytics_t1644016319 * __this, int32_t ___endReason0, int32_t ___totalScore1, int32_t ___timeRemaining2, int32_t ___scoreBase3, int32_t ___scoreStreak4, int32_t ___scoreTime5, int32_t ___scoreTotal6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportTutorialView(System.String,System.Int32)
extern "C"  void TriPeaksAnalytics_ReportTutorialView_m2032399391 (TriPeaksAnalytics_t1644016319 * __this, String_t* ___tutorialID0, int32_t ___step1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportCardCollected(System.Int32)
extern "C"  void TriPeaksAnalytics_ReportCardCollected_m3277959223 (TriPeaksAnalytics_t1644016319 * __this, int32_t ___streakLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportCardDrawn(System.Boolean)
extern "C"  void TriPeaksAnalytics_ReportCardDrawn_m4019516066 (TriPeaksAnalytics_t1644016319 * __this, bool ___missedCards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportWildUsed()
extern "C"  void TriPeaksAnalytics_ReportWildUsed_m499778760 (TriPeaksAnalytics_t1644016319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportHoldCellUsed(System.Boolean)
extern "C"  void TriPeaksAnalytics_ReportHoldCellUsed_m1515840412 (TriPeaksAnalytics_t1644016319 * __this, bool ___added0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksAnalytics::ReportReshuffleActivatedUsed(System.Int32)
extern "C"  void TriPeaksAnalytics_ReportReshuffleActivatedUsed_m1419812340 (TriPeaksAnalytics_t1644016319 * __this, int32_t ___timeRemaining0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
