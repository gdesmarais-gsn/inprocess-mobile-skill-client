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

// GSN.Skill.Phoenix.View.TournamentDetailsPopupView
struct TournamentDetailsPopupView_t1196524442;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize>
struct List_1_t3940452026;
// System.Collections.Generic.List`1<System.Decimal>
struct List_1_t93822209;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Tournament276363598.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::.ctor()
extern "C"  void TournamentDetailsPopupView__ctor_m1776418066 (TournamentDetailsPopupView_t1196524442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::OnEnable()
extern "C"  void TournamentDetailsPopupView_OnEnable_m1981657746 (TournamentDetailsPopupView_t1196524442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::OnDisable()
extern "C"  void TournamentDetailsPopupView_OnDisable_m3262362489 (TournamentDetailsPopupView_t1196524442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::OnGetTournamentDetails(GSN.Skill.Events.IEvent)
extern "C"  void TournamentDetailsPopupView_OnGetTournamentDetails_m3850453287 (TournamentDetailsPopupView_t1196524442 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::UpdateProgressBar(System.Single)
extern "C"  void TournamentDetailsPopupView_UpdateProgressBar_m1438624270 (TournamentDetailsPopupView_t1196524442 * __this, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize> GSN.Skill.Phoenix.View.TournamentDetailsPopupView::GroupPrizesByRank(System.Collections.Generic.List`1<System.Decimal>)
extern "C"  List_1_t3940452026 * TournamentDetailsPopupView_GroupPrizesByRank_m3706752622 (TournamentDetailsPopupView_t1196524442 * __this, List_1_t93822209 * ___prizes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize GSN.Skill.Phoenix.View.TournamentDetailsPopupView::GetRankSetPrize(System.Decimal,System.Int32,System.Int32)
extern "C"  RankSetPrize_t276363598  TournamentDetailsPopupView_GetRankSetPrize_m1529018133 (TournamentDetailsPopupView_t1196524442 * __this, Decimal_t724701077  ___currentPrizeValue0, int32_t ___firstRankInGroup1, int32_t ___lastRankInGroup2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::SetTheme()
extern "C"  void TournamentDetailsPopupView_SetTheme_m3404032143 (TournamentDetailsPopupView_t1196524442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::OnCloseButton()
extern "C"  void TournamentDetailsPopupView_OnCloseButton_m2649941481 (TournamentDetailsPopupView_t1196524442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::OnTournamentEnterButton()
extern "C"  void TournamentDetailsPopupView_OnTournamentEnterButton_m1215868018 (TournamentDetailsPopupView_t1196524442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentDetailsPopupView::FreePooledObjects()
extern "C"  void TournamentDetailsPopupView_FreePooledObjects_m666110735 (TournamentDetailsPopupView_t1196524442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
