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

// GSN.Skill.Phoenix.View.GameHistoryScreenView
struct GameHistoryScreenView_t686359929;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Phoenix.View.GameResource
struct GameResource_t1931330162;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData>
struct List_1_t2065092575;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_GameResou1931330162.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentHist2695971443.h"

// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::.ctor()
extern "C"  void GameHistoryScreenView__ctor_m1406728713 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnEnable()
extern "C"  void GameHistoryScreenView_OnEnable_m1439701601 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnDisable()
extern "C"  void GameHistoryScreenView_OnDisable_m2397008524 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.GameHistoryScreenView::AnimateScreenOut()
extern "C"  Il2CppObject * GameHistoryScreenView_AnimateScreenOut_m1108339414 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.GameHistoryScreenView::AnimateScreenIn()
extern "C"  Il2CppObject * GameHistoryScreenView_AnimateScreenIn_m1608004999 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::SetTheme(GSN.Skill.Phoenix.View.GameResource)
extern "C"  void GameHistoryScreenView_SetTheme_m193945321 (GameHistoryScreenView_t686359929 * __this, GameResource_t1931330162 * ___gameResource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnGameHistoryEvent(GSN.Skill.Events.IEvent)
extern "C"  void GameHistoryScreenView_OnGameHistoryEvent_m2023368667 (GameHistoryScreenView_t686359929 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnGetPaginatedGameHistoryEvent(GSN.Skill.Events.IEvent)
extern "C"  void GameHistoryScreenView_OnGetPaginatedGameHistoryEvent_m744442592 (GameHistoryScreenView_t686359929 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::UpdateHistoryTiles(System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData>,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C"  void GameHistoryScreenView_UpdateHistoryTiles_m1280079675 (GameHistoryScreenView_t686359929 * __this, List_1_t2065092575 * ___historyData0, Transform_t3275118058 * ___listAnchor1, bool ___paginationUpdate2, bool ___createNotStartedBanner3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData> GSN.Skill.Phoenix.View.GameHistoryScreenView::SortDecending(System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData>)
extern "C"  List_1_t2065092575 * GameHistoryScreenView_SortDecending_m199835293 (GameHistoryScreenView_t686359929 * __this, List_1_t2065092575 * ___historyData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::AddBanner(UnityEngine.Transform,System.String)
extern "C"  void GameHistoryScreenView_AddBanner_m3154062105 (GameHistoryScreenView_t686359929 * __this, Transform_t3275118058 * ___parentList0, String_t* ___bannerText1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnScrollPastTop()
extern "C"  void GameHistoryScreenView_OnScrollPastTop_m3745030788 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnScrollPastBottom()
extern "C"  void GameHistoryScreenView_OnScrollPastBottom_m2096162424 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnCentered()
extern "C"  void GameHistoryScreenView_OnCentered_m197318574 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnFetchScreenBeginEvent(GSN.Skill.Events.IEvent)
extern "C"  void GameHistoryScreenView_OnFetchScreenBeginEvent_m1419499792 (GameHistoryScreenView_t686359929 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.GameHistoryScreenView::OnFetchScreenCompleteEvent(GSN.Skill.Events.IEvent)
extern "C"  void GameHistoryScreenView_OnFetchScreenCompleteEvent_m3812819692 (GameHistoryScreenView_t686359929 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.GameHistoryScreenView::<AnimateScreenOut>__BaseCallProxy0()
extern "C"  Il2CppObject * GameHistoryScreenView_U3CAnimateScreenOutU3E__BaseCallProxy0_m1498505703 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.GameHistoryScreenView::<AnimateScreenIn>__BaseCallProxy1()
extern "C"  Il2CppObject * GameHistoryScreenView_U3CAnimateScreenInU3E__BaseCallProxy1_m697521867 (GameHistoryScreenView_t686359929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Phoenix.View.GameHistoryScreenView::<SortDecending>m__0(GSN.Skill.Phoenix.TournamentHistoryData,GSN.Skill.Phoenix.TournamentHistoryData)
extern "C"  int32_t GameHistoryScreenView_U3CSortDecendingU3Em__0_m2499842415 (Il2CppObject * __this /* static, unused */, TournamentHistoryData_t2695971443  ___a0, TournamentHistoryData_t2695971443  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
