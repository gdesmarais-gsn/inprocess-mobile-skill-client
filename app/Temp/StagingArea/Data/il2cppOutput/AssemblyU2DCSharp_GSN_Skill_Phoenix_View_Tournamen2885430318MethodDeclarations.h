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

// GSN.Skill.Phoenix.View.TournamentScreenView
struct TournamentScreenView_t2885430318;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Phoenix.View.GameResource
struct GameResource_t1931330162;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentListEvent/TournamentData>
struct List_1_t4278685683;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_GameResou1931330162.h"

// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::.ctor()
extern "C"  void TournamentScreenView__ctor_m2791986750 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::OnEnable()
extern "C"  void TournamentScreenView_OnEnable_m788495462 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::OnDisable()
extern "C"  void TournamentScreenView_OnDisable_m1300667437 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::FreePooledObjects()
extern "C"  void TournamentScreenView_FreePooledObjects_m3180249187 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.TournamentScreenView::AnimateScreenOut()
extern "C"  Il2CppObject * TournamentScreenView_AnimateScreenOut_m401983447 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.TournamentScreenView::AnimateScreenIn()
extern "C"  Il2CppObject * TournamentScreenView_AnimateScreenIn_m1541813458 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::SetTheme(GSN.Skill.Phoenix.View.GameResource)
extern "C"  void TournamentScreenView_SetTheme_m4292701172 (TournamentScreenView_t2885430318 * __this, GameResource_t1931330162 * ___gameResource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::OnTournamentListEvent(GSN.Skill.Events.IEvent)
extern "C"  void TournamentScreenView_OnTournamentListEvent_m1417505993 (TournamentScreenView_t2885430318 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::UpdateTournamentTiles(System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentListEvent/TournamentData>,System.Int32,System.Int32)
extern "C"  void TournamentScreenView_UpdateTournamentTiles_m143047634 (TournamentScreenView_t2885430318 * __this, List_1_t4278685683 * ___tournamentData0, int32_t ___numCashGamePlays1, int32_t ___numSpecificGamePlays2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::OnCentered()
extern "C"  void TournamentScreenView_OnCentered_m3895505811 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::OnFetchScreenBeginEvent(GSN.Skill.Events.IEvent)
extern "C"  void TournamentScreenView_OnFetchScreenBeginEvent_m3654984041 (TournamentScreenView_t2885430318 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.TournamentScreenView::OnFetchScreenCompleteEvent(GSN.Skill.Events.IEvent)
extern "C"  void TournamentScreenView_OnFetchScreenCompleteEvent_m3762912615 (TournamentScreenView_t2885430318 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.TournamentScreenView::<AnimateScreenOut>__BaseCallProxy0()
extern "C"  Il2CppObject * TournamentScreenView_U3CAnimateScreenOutU3E__BaseCallProxy0_m791772002 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.TournamentScreenView::<AnimateScreenIn>__BaseCallProxy1()
extern "C"  Il2CppObject * TournamentScreenView_U3CAnimateScreenInU3E__BaseCallProxy1_m1523642192 (TournamentScreenView_t2885430318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
