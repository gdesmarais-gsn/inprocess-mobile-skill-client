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

// GSN.Skill.Games.Tripeaks.GameModel
struct GameModel_t3841817345;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct GsnCard_t782444760;
// GSN.Skill.Games.Common.Tasks.GsnScheduler
struct GsnScheduler_t1299811741;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;
// GSN.Skill.Games.Common.Events.IInputMessage
struct IInputMessage_t3660278550;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Tripeaks.BaseCardData
struct BaseCardData_t423020963;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive_782444760.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_BaseCard423020963.h"

// System.Void GSN.Skill.Games.Tripeaks.GameModel::.ctor(System.String)
extern "C"  void GameModel__ctor_m3609687545 (GameModel_t3841817345 * __this, String_t* ___dataPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Tripeaks.GameModel::get_wasteCard()
extern "C"  GsnCard_t782444760 * GameModel_get_wasteCard_m1388114253 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Tripeaks.GameModel::get_holdCard()
extern "C"  GsnCard_t782444760 * GameModel_get_holdCard_m1148106720 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::set_holdCard(GSN.Skill.Games.Common.Primitive.Card.GsnCard)
extern "C"  void GameModel_set_holdCard_m3938096873 (GameModel_t3841817345 * __this, GsnCard_t782444760 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::get_score()
extern "C"  int32_t GameModel_get_score_m595755914 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::set_score(System.Int32)
extern "C"  void GameModel_set_score_m1596379571 (GameModel_t3841817345 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::get_timeBonus()
extern "C"  int32_t GameModel_get_timeBonus_m515456936 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::set_timeBonus(System.Int32)
extern "C"  void GameModel_set_timeBonus_m2674326831 (GameModel_t3841817345 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::get_streakBonus()
extern "C"  int32_t GameModel_get_streakBonus_m4243244027 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::set_streakBonus(System.Int32)
extern "C"  void GameModel_set_streakBonus_m292904962 (GameModel_t3841817345 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Tasks.GsnScheduler GSN.Skill.Games.Tripeaks.GameModel::CreateScheduler()
extern "C"  GsnScheduler_t1299811741 * GameModel_CreateScheduler_m3733652665 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::GetTweakable(System.String)
extern "C"  int32_t GameModel_GetTweakable_m2311541351 (GameModel_t3841817345 * __this, String_t* ___tweakable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::modifyScore(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GameModel_modifyScore_m2737766079 (GameModel_t3841817345 * __this, int32_t ___points0, int32_t ___streak1, int32_t ___cardID2, int32_t ___delayTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::noMoreMoves()
extern "C"  bool GameModel_noMoreMoves_m3224978189 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::get_isGameOver()
extern "C"  bool GameModel_get_isGameOver_m3204426262 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::get_isGameStarted()
extern "C"  bool GameModel_get_isGameStarted_m3761597211 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::get_cardsRemaining()
extern "C"  int32_t GameModel_get_cardsRemaining_m3329321799 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::checkForEndGame()
extern "C"  void GameModel_checkForEndGame_m609064695 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.GameModel::findAllMoves(GSN.Skill.Games.Common.Primitive.Card.GsnCard)
extern "C"  List_1_t1440998580 * GameModel_findAllMoves_m3150485129 (GameModel_t3841817345 * __this, GsnCard_t782444760 * ___card10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::isCardOneUpOrDown(GSN.Skill.Games.Common.Primitive.Card.GsnCard,GSN.Skill.Games.Common.Primitive.Card.GsnCard)
extern "C"  bool GameModel_isCardOneUpOrDown_m3321384995 (GameModel_t3841817345 * __this, GsnCard_t782444760 * ___c10, GsnCard_t782444760 * ___c21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::beginUndo()
extern "C"  void GameModel_beginUndo_m1168552270 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::endUndo()
extern "C"  void GameModel_endUndo_m3773902322 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::addUndoStep(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void GameModel_addUndoStep_m3299740742 (GameModel_t3841817345 * __this, Il2CppObject * ___step0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::HandleInputMessage(GSN.Skill.Games.Common.Events.IInputMessage)
extern "C"  void GameModel_HandleInputMessage_m3904270892 (GameModel_t3841817345 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::performUndoAction()
extern "C"  void GameModel_performUndoAction_m2434460884 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::CancelEndGame()
extern "C"  void GameModel_CancelEndGame_m830466604 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::blockInput(System.Int32)
extern "C"  void GameModel_blockInput_m1721148109 (GameModel_t3841817345 * __this, int32_t ___blockTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::ConfigureGame(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameModel_ConfigureGame_m4039810829 (GameModel_t3841817345 * __this, Dictionary_2_t3943999495 * ___startRecord0, Dictionary_2_t3943999495 * ___joinRecord1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::ConfigureGameBeginGame()
extern "C"  void GameModel_ConfigureGameBeginGame_m3809171320 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::SetOptionToggle(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
extern "C"  void GameModel_SetOptionToggle_m219371825 (GameModel_t3841817345 * __this, Dictionary_2_t3943999495 * ___att0, String_t* ___optionName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::resetStreak()
extern "C"  void GameModel_resetStreak_m2251120952 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::GetScore()
extern "C"  int32_t GameModel_GetScore_m2129144999 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::FinalizeScore()
extern "C"  int32_t GameModel_FinalizeScore_m1830675627 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::OnInputComplete()
extern "C"  void GameModel_OnInputComplete_m390417721 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::RemoveEffectTimer(GSN.Skill.Games.Common.Primitive.Card.GsnCard)
extern "C"  void GameModel_RemoveEffectTimer_m3931566357 (GameModel_t3841817345 * __this, GsnCard_t782444760 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::getTimeBonus(System.Int32)
extern "C"  int32_t GameModel_getTimeBonus_m4076159526 (GameModel_t3841817345 * __this, int32_t ___timeLeft0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::OnDealClicked()
extern "C"  void GameModel_OnDealClicked_m440089945 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::PlayBaitCard(System.Int32)
extern "C"  bool GameModel_PlayBaitCard_m2579075238 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::ClearDynamite(System.Int32)
extern "C"  void GameModel_ClearDynamite_m339421654 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::MoveTableauCardToWaste(System.Int32,System.Boolean,System.Int32)
extern "C"  void GameModel_MoveTableauCardToWaste_m3221281022 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, bool ___playerDriven1, int32_t ___delayTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::ProcessClickActions(System.Int32,System.Boolean&)
extern "C"  void GameModel_ProcessClickActions_m2903177287 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, bool* ___sendClickResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::RemoveFaceUpCard(System.Int32,System.Int32)
extern "C"  void GameModel_RemoveFaceUpCard_m1157902525 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, int32_t ___timeDelay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::AddFaceUpCard(System.Int32,System.Int32,System.Boolean)
extern "C"  void GameModel_AddFaceUpCard_m3602906093 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, int32_t ___timeDelay1, bool ___activateFaceUpEffects2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::ActivateFaceUpCard(System.Int32,System.Int32,System.Boolean)
extern "C"  void GameModel_ActivateFaceUpCard_m2452516253 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, int32_t ___timeDelay1, bool ___activateFaceUpEffects2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::PointsForStreak(System.Int32)
extern "C"  int32_t GameModel_PointsForStreak_m4156152918 (GameModel_t3841817345 * __this, int32_t ___streak0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::IncrementStreak(System.Int32)
extern "C"  void GameModel_IncrementStreak_m2567163765 (GameModel_t3841817345 * __this, int32_t ___delayTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::ToggleStreakResetLock()
extern "C"  void GameModel_ToggleStreakResetLock_m3099395857 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::MoveTopDealCardToWaste()
extern "C"  void GameModel_MoveTopDealCardToWaste_m3533810360 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::RemoveWaste(System.Int32)
extern "C"  void GameModel_RemoveWaste_m2240753554 (GameModel_t3841817345 * __this, int32_t ___targetCardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::CanMoveCardToWaste(System.Int32)
extern "C"  bool GameModel_CanMoveCardToWaste_m805061636 (Il2CppObject * __this /* static, unused */, int32_t ___cardFlags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::CheckWasteForTikiAbilities()
extern "C"  void GameModel_CheckWasteForTikiAbilities_m673939973 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::ClearRandomCardsFromList(System.Int32,GSN.Skill.Games.Common.Primitive.Card.GsnCard,System.Boolean)
extern "C"  void GameModel_ClearRandomCardsFromList_m1081014606 (GameModel_t3841817345 * __this, int32_t ___maxNumCards0, GsnCard_t782444760 * ___card1, bool ___rebuildAllMovesEveryPop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::EndReshuffle()
extern "C"  void GameModel_EndReshuffle_m1198729544 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::OnWildOnTimeClicked()
extern "C"  void GameModel_OnWildOnTimeClicked_m3653623655 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::CalculateScoreUpperBound(System.Int32)
extern "C"  int32_t GameModel_CalculateScoreUpperBound_m3798335488 (GameModel_t3841817345 * __this, int32_t ___msPerMove0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::AdvanceTurn()
extern "C"  void GameModel_AdvanceTurn_m2689795504 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::AdvanceCountdownTimer(System.Int32,System.Int32)
extern "C"  void GameModel_AdvanceCountdownTimer_m1485873963 (GameModel_t3841817345 * __this, int32_t ___cardID0, int32_t ___timeLeft1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::checkCurrentWasteForRemoval()
extern "C"  void GameModel_checkCurrentWasteForRemoval_m4183424925 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::CanCardStayInPlay()
extern "C"  bool GameModel_CanCardStayInPlay_m2484041579 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::get_canDealCard()
extern "C"  bool GameModel_get_canDealCard_m2578979546 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::get_canClickWild()
extern "C"  bool GameModel_get_canClickWild_m2742475456 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::get_canReshuffle()
extern "C"  bool GameModel_get_canReshuffle_m3082953866 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::get_canHoldCard()
extern "C"  bool GameModel_get_canHoldCard_m574937457 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::isCardChoiceSuboptimal(System.Int32)
extern "C"  bool GameModel_isCardChoiceSuboptimal_m1420848589 (GameModel_t3841817345 * __this, int32_t ___inputIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::GetVisibleStreak(System.Int32)
extern "C"  int32_t GameModel_GetVisibleStreak_m4093721506 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::GetVisibleStreak(System.Int32,System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t GameModel_GetVisibleStreak_m2321530349 (GameModel_t3841817345 * __this, int32_t ___cardID0, List_1_t1440998580 * ___faceUpCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::CountCardsRevealedBy(System.Int32)
extern "C"  int32_t GameModel_CountCardsRevealedBy_m4189562423 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::CountCardsRevealedBy(GSN.Skill.Games.Tripeaks.BaseCardData)
extern "C"  int32_t GameModel_CountCardsRevealedBy_m2152472994 (GameModel_t3841817345 * __this, BaseCardData_t423020963 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::HasOption(System.String)
extern "C"  bool GameModel_HasOption_m2153457552 (GameModel_t3841817345 * __this, String_t* ___optionName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::earlyFailBomb()
extern "C"  void GameModel_earlyFailBomb_m973120538 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::earlyFailNoMoreMoves()
extern "C"  void GameModel_earlyFailNoMoreMoves_m1223549276 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::GetReshuffleTime()
extern "C"  int32_t GameModel_GetReshuffleTime_m390482424 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::RewindTasks(System.Int32,System.Int32)
extern "C"  void GameModel_RewindTasks_m311459150 (GameModel_t3841817345 * __this, int32_t ___stateTimeMS0, int32_t ___clockTaskAccumulatedPauseTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.GameModel::CardIndexToString(System.Int32)
extern "C"  String_t* GameModel_CardIndexToString_m1483355187 (GameModel_t3841817345 * __this, int32_t ___cardIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.GameModel::CardIDToString(System.Int32)
extern "C"  String_t* GameModel_CardIDToString_m2204401866 (GameModel_t3841817345 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.GameModel::ToString()
extern "C"  String_t* GameModel_ToString_m796543440 (GameModel_t3841817345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.GameModel::getCardStringFromIndex(System.Int32)
extern "C"  String_t* GameModel_getCardStringFromIndex_m3536506032 (GameModel_t3841817345 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.GameModel::.cctor()
extern "C"  void GameModel__cctor_m2245875880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
