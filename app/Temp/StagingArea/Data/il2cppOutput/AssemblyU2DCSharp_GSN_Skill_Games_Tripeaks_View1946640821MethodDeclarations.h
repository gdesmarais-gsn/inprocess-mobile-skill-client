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

// GSN.Skill.Games.Tripeaks.View
struct View_t1946640821;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Client.MonoBehaviourPool
struct MonoBehaviourPool_t4145220098;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// CutScene
struct CutScene_t1243972120;
// GSN.Skill.Games.Tripeaks.Tutorial
struct Tutorial_t3830978326;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GSN.Skill.Games.Tripeaks.View/AudioCallback
struct AudioCallback_t2309726064;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_CutScene1243972120.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Tutoria3830978326.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Tutorial553455370.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_View_Au2309726064.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_EndGame3448324057.h"

// System.Void GSN.Skill.Games.Tripeaks.View::.ctor()
extern "C"  void View__ctor_m1921162675 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.View::get_playfieldID()
extern "C"  int32_t View_get_playfieldID_m1805310555 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.View::get_poolsInitilized()
extern "C"  bool View_get_poolsInitilized_m2595467110 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.View::CanSendInputToModel(System.Int32)
extern "C"  bool View_CanSendInputToModel_m4177686052 (View_t1946640821 * __this, int32_t ___cardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onCardClickedResult(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onCardClickedResult_m69873580 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.View::IsinTutorial()
extern "C"  bool View_IsinTutorial_m921988858 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::Awake()
extern "C"  void View_Awake_m2148128850 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::initializePool(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * View_initializePool_m1665527020 (View_t1946640821 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.View::CreateObjectPool(UnityEngine.Transform,System.String,System.String,System.Int32)
extern "C"  MonoBehaviourPool_t4145220098 * View_CreateObjectPool_m4118323701 (View_t1946640821 * __this, Transform_t3275118058 * ___transform0, String_t* ___bundleName1, String_t* ___resourceName2, int32_t ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void View_Configure_m3053386336 (View_t1946640821 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::Init(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void View_Init_m1505931906 (View_t1946640821 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::CutsceneTutorialBegin(CutScene)
extern "C"  Il2CppObject * View_CutsceneTutorialBegin_m2732679554 (View_t1946640821 * __this, CutScene_t1243972120 * ___cutSceneActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::TutorialBegin(GSN.Skill.Games.Tripeaks.Tutorial)
extern "C"  Il2CppObject * View_TutorialBegin_m276068403 (View_t1946640821 * __this, Tutorial_t3830978326 * ___tutorial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::TriggerTutorialStep(GSN.Skill.Games.Tripeaks.Tutorial/TutorialStep)
extern "C"  void View_TriggerTutorialStep_m1294772965 (View_t1946640821 * __this, int32_t ___step0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::tutorialTimer(System.Int32,UnityEngine.GameObject)
extern "C"  Il2CppObject * View_tutorialTimer_m2510908287 (View_t1946640821 * __this, int32_t ___secondsToWait0, GameObject_t1756533147 * ___tutorialObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::CutsceneTutorialComplete()
extern "C"  void View_CutsceneTutorialComplete_m3759763952 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::TutorialComplete()
extern "C"  void View_TutorialComplete_m2570602180 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.View::IsOptionOn(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
extern "C"  bool View_IsOptionOn_m3433521210 (View_t1946640821 * __this, Dictionary_2_t3943999495 * ___joinRecord0, String_t* ___optionName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::AddEventHandlers()
extern "C"  void View_AddEventHandlers_m2863109089 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onUpdateClock(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onUpdateClock_m1479691019 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::StartTutorialClock()
extern "C"  void View_StartTutorialClock_m2661006631 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::TutorialClockUpdate()
extern "C"  Il2CppObject * View_TutorialClockUpdate_m1486375136 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onEndGame(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onEndGame_m3782093127 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::ReadyToStart()
extern "C"  void View_ReadyToStart_m342129071 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::hideStartScreen()
extern "C"  Il2CppObject * View_hideStartScreen_m878308177 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::SkipStartScreen()
extern "C"  void View_SkipStartScreen_m2641910988 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::ImmediatelyStartGameWhenLoadingCompletes()
extern "C"  void View_ImmediatelyStartGameWhenLoadingCompletes_m3818966153 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::StartGame()
extern "C"  void View_StartGame_m1823728869 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::showGameHud()
extern "C"  Il2CppObject * View_showGameHud_m198680073 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::DelayedCallback(System.Single,GSN.Skill.Games.Tripeaks.View/AudioCallback,System.Int32)
extern "C"  Il2CppObject * View_DelayedCallback_m1626381496 (View_t1946640821 * __this, float ___time0, AudioCallback_t2309726064 * ___callback1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource GSN.Skill.Games.Tripeaks.View::playGameHudMusic(System.Int32)
extern "C"  AudioSource_t1135106623 * View_playGameHudMusic_m2223916379 (View_t1946640821 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::hideGameHUD()
extern "C"  Il2CppObject * View_hideGameHUD_m2001734510 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::showEndGameBanner(GSN.Skill.Games.Tripeaks.EndGameEvent)
extern "C"  void View_showEndGameBanner_m620102325 (View_t1946640821 * __this, EndGameEvent_t3448324057  ___ee0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::showResults(GSN.Skill.Games.Tripeaks.EndGameEvent,System.Int32)
extern "C"  Il2CppObject * View_showResults_m926842101 (View_t1946640821 * __this, EndGameEvent_t3448324057  ___ee0, int32_t ___timeRemaining1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onDealCards(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onDealCards_m1394497765 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onBuildPlayfieldEvent(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onBuildPlayfieldEvent_m3446677212 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onScoreUpdate(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onScoreUpdate_m2473172047 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onStreakUpdate(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onStreakUpdate_m547572973 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onFirstDealComplete(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onFirstDealComplete_m2728478485 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::onReshuffleComplete(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void View_onReshuffleComplete_m1233051395 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::createFloatingScore(System.Int32,System.Int32,System.Int32)
extern "C"  void View_createFloatingScore_m176072886 (View_t1946640821 * __this, int32_t ___pointsEarned0, int32_t ___streak1, int32_t ___cardID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::FreePoolObjectInTime(UnityEngine.GameObject,System.Single)
extern "C"  Il2CppObject * View_FreePoolObjectInTime_m4254156843 (View_t1946640821 * __this, GameObject_t1756533147 * ___pooledGameObject0, float ___killTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::OnReshuffleButton()
extern "C"  void View_OnReshuffleButton_m2118621576 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::OnLoadScreenHiddenEvent(GSN.Skill.Events.IEvent)
extern "C"  void View_OnLoadScreenHiddenEvent_m4232109293 (View_t1946640821 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::OnLoadingComplete()
extern "C"  void View_OnLoadingComplete_m1135276545 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.View::GamePreloadCount()
extern "C"  int32_t View_GamePreloadCount_m265698073 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::GamePreload()
extern "C"  Il2CppObject * View_GamePreload_m952809534 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::LoadBundles()
extern "C"  Il2CppObject * View_LoadBundles_m3927540752 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::UnloadBundles()
extern "C"  void View_UnloadBundles_m4078794629 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.View::CleanUpShadersInEditor()
extern "C"  void View_CleanUpShadersInEditor_m3014797095 (View_t1946640821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
