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

// GSN.Skill.Phoenix.View.TournamentResultsPopupView
struct TournamentResultsPopupView_t1589578082;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.PlayerStandingsTile>
struct List_1_t63416930;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetTournResult3917028247.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::.ctor()
extern "C"  void TournamentResultsPopupView__ctor_m1889435746 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnEnable()
extern "C"  void TournamentResultsPopupView_OnEnable_m1764773850 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnDisable()
extern "C"  void TournamentResultsPopupView_OnDisable_m2625178329 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::SetInitialState()
extern "C"  void TournamentResultsPopupView_SetInitialState_m49073567 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnGetTournamentResults(GSN.Skill.Events.IEvent)
extern "C"  void TournamentResultsPopupView_OnGetTournamentResults_m961938743 (TournamentResultsPopupView_t1589578082 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::PositionTile(UnityEngine.GameObject,System.Single)
extern "C"  void TournamentResultsPopupView_PositionTile_m2066610494 (TournamentResultsPopupView_t1589578082 * __this, GameObject_t1756533147 * ___tile0, float ___yPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::SetFlavorHeader(GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData)
extern "C"  void TournamentResultsPopupView_SetFlavorHeader_m3027438336 (TournamentResultsPopupView_t1589578082 * __this, TournResultData_t3917028247  ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::SetupIntroLayout()
extern "C"  void TournamentResultsPopupView_SetupIntroLayout_m3659371563 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::BuildMatchInfo()
extern "C"  void TournamentResultsPopupView_BuildMatchInfo_m2801550879 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::ShowExtra()
extern "C"  void TournamentResultsPopupView_ShowExtra_m4284770477 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::ShowList(System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.PlayerStandingsTile>)
extern "C"  void TournamentResultsPopupView_ShowList_m3823967668 (TournamentResultsPopupView_t1589578082 * __this, List_1_t63416930 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::HideExtra()
extern "C"  void TournamentResultsPopupView_HideExtra_m7161836 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnToggleUpdate(System.Boolean)
extern "C"  void TournamentResultsPopupView_OnToggleUpdate_m4244803229 (TournamentResultsPopupView_t1589578082 * __this, bool ___isOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::SetTheme(System.String)
extern "C"  void TournamentResultsPopupView_SetTheme_m2452675965 (TournamentResultsPopupView_t1589578082 * __this, String_t* ___gameResourceName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.TournamentResultsPopupView::AnimateTournamentPlayerStandings()
extern "C"  Il2CppObject * TournamentResultsPopupView_AnimateTournamentPlayerStandings_m3760187786 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::SkipPlayerStandingsAnimation()
extern "C"  void TournamentResultsPopupView_SkipPlayerStandingsAnimation_m2057593451 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.TournamentResultsPopupView::WinItNowAnimation()
extern "C"  Il2CppObject * TournamentResultsPopupView_WinItNowAnimation_m2232695543 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.TournamentResultsPopupView::DeclineWinItNowAnimation()
extern "C"  Il2CppObject * TournamentResultsPopupView_DeclineWinItNowAnimation_m2707844607 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnCloseButton()
extern "C"  void TournamentResultsPopupView_OnCloseButton_m2636951489 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnDeclineWinItNow()
extern "C"  void TournamentResultsPopupView_OnDeclineWinItNow_m601740514 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnWinItNow()
extern "C"  void TournamentResultsPopupView_OnWinItNow_m569730604 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnRenterClick()
extern "C"  void TournamentResultsPopupView_OnRenterClick_m186819593 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnPlayTypeAgainClick()
extern "C"  void TournamentResultsPopupView_OnPlayTypeAgainClick_m3544208491 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnSkipAnimations()
extern "C"  void TournamentResultsPopupView_OnSkipAnimations_m3381974101 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnFetchPopupBeginEvent(GSN.Skill.Events.IEvent)
extern "C"  void TournamentResultsPopupView_OnFetchPopupBeginEvent_m2629030523 (TournamentResultsPopupView_t1589578082 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::OnFetchPopupCompleteEvent(GSN.Skill.Events.IEvent)
extern "C"  void TournamentResultsPopupView_OnFetchPopupCompleteEvent_m2610158397 (TournamentResultsPopupView_t1589578082 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentResultsPopupView::FreePooledObjects()
extern "C"  void TournamentResultsPopupView_FreePooledObjects_m3617385823 (TournamentResultsPopupView_t1589578082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
