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

// GSN.Skill.Games.Tripeaks.Board
struct Board_t4208424732;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Card>
struct List_1_t1456666406;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;
// GSN.Skill.Games.Tripeaks.PlayfieldData
struct PlayfieldData_t2127658700;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// GSN.Skill.Games.Tripeaks.PlayfieldData/CardData
struct CardData_t1059670474;
// GSN.Skill.Games.Tripeaks.Card
struct Card_t2087545274;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Playfie2127658700.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Playfie1059670474.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_PileID2297141513.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_CardTyp2845949242.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Card2087545274.h"

// System.Void GSN.Skill.Games.Tripeaks.Board::.ctor()
extern "C"  void Board__ctor_m3169465600 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Card> GSN.Skill.Games.Tripeaks.Board::get_cards()
extern "C"  List_1_t1456666406 * Board_get_cards_m469904946 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Card> GSN.Skill.Games.Tripeaks.Board::get_dealPile()
extern "C"  List_1_t1456666406 * Board_get_dealPile_m1702641909 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.Board::get_wasteCount()
extern "C"  int32_t Board_get_wasteCount_m2083569668 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.Board::get_poolsInitilized()
extern "C"  bool Board_get_poolsInitilized_m3968403335 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::set_screenWorldLeftSide(System.Single)
extern "C"  void Board_set_screenWorldLeftSide_m2246951486 (Board_t4208424732 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::initializePool(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * Board_initializePool_m3728810821 (Board_t4208424732 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::Init(System.String,GSN.Skill.Games.Tripeaks.PlayfieldData,System.Boolean,System.Int32)
extern "C"  void Board_Init_m535323245 (Board_t4208424732 * __this, String_t* ___deck0, PlayfieldData_t2127658700 * ___playfieldData1, bool ___oneShotWildEnabled2, int32_t ___backgroundDifficultyIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onBuildPlayfieldEvent(GSN.Skill.Games.Common.Events.IModelEvent,GSN.Skill.Games.Tripeaks.PlayfieldData)
extern "C"  void Board_onBuildPlayfieldEvent_m4177806238 (Board_t4208424732 * __this, Il2CppObject * ___e0, PlayfieldData_t2127658700 * ___playfieldData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::animateDealTableau(GSN.Skill.Games.Tripeaks.PlayfieldData,System.Collections.Generic.List`1<System.Int32>)
extern "C"  Il2CppObject * Board_animateDealTableau_m1890972619 (Board_t4208424732 * __this, PlayfieldData_t2127658700 * ___playfieldData0, List_1_t1440998580 * ___flippedCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::AnimateHazardsEntry(System.Collections.Generic.List`1<System.Int32>)
extern "C"  Il2CppObject * Board_AnimateHazardsEntry_m1038166741 (Board_t4208424732 * __this, List_1_t1440998580 * ___flippedCards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::CreateCard(System.Int32,System.Int32,GSN.Skill.Games.Tripeaks.PlayfieldData/CardData,GSN.Skill.Games.Tripeaks.PileID,System.Int32)
extern "C"  void Board_CreateCard_m3217541477 (Board_t4208424732 * __this, int32_t ___cardID0, int32_t ___cardIndex1, CardData_t1059670474 * ___cardData2, int32_t ___pileID3, int32_t ___backgroundDifficultyIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::CreateCard(System.Int32,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,GSN.Skill.Games.Tripeaks.PileID,System.Int32,GSN.Skill.Games.Tripeaks.CardType)
extern "C"  void Board_CreateCard_m3698363060 (Board_t4208424732 * __this, int32_t ___cardID0, int32_t ___cardIndex1, Vector3_t2243707580  ___position2, Quaternion_t4030073918  ___rot3, int32_t ___pileID4, int32_t ___backgroundDifficultyIndex5, int32_t ___cardType6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::AddOverlay(GSN.Skill.Games.Tripeaks.Card,GSN.Skill.Games.Tripeaks.CardType)
extern "C"  void Board_AddOverlay_m647371143 (Board_t4208424732 * __this, Card_t2087545274 * ___card0, int32_t ___cardType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onCardClickedResult(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onCardClickedResult_m1848572511 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onFlipCardResult(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onFlipCardResult_m2494275779 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onGainDealCards(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onGainDealCards_m2824545787 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::animateGainDealPileReshuffle(System.Collections.Generic.List`1<System.Int32>)
extern "C"  Il2CppObject * Board_animateGainDealPileReshuffle_m2952750383 (Board_t4208424732 * __this, List_1_t1440998580 * ___newdealCards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::MoveCardToWaste(System.Int32)
extern "C"  void Board_MoveCardToWaste_m3504711335 (Board_t4208424732 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onShowReshuffleButton(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onShowReshuffleButton_m3323972026 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onRemoveTrap(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onRemoveTrap_m1641787608 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onMoveCardToHoldEvent(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onMoveCardToHoldEvent_m1536584070 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GSN.Skill.Games.Tripeaks.Board::GetCardSpacing(System.Int32,System.Int32)
extern "C"  float Board_GetCardSpacing_m3023235773 (Board_t4208424732 * __this, int32_t ___cardCountInDeal0, int32_t ___numTotalCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onReshuffleEvent(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onReshuffleEvent_m3762958113 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::animateDealPileReshuffle()
extern "C"  Il2CppObject * Board_animateDealPileReshuffle_m181429565 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onRemoveCard(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onRemoveCard_m2092738947 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::AddToWasteCards(GSN.Skill.Games.Tripeaks.Card)
extern "C"  void Board_AddToWasteCards_m984187200 (Board_t4208424732 * __this, Card_t2087545274 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::RemoveFromWasteCards(GSN.Skill.Games.Tripeaks.Card,System.Boolean)
extern "C"  void Board_RemoveFromWasteCards_m3966083633 (Board_t4208424732 * __this, Card_t2087545274 * ___card0, bool ___arrangeCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::ArrangeWasteCards()
extern "C"  void Board_ArrangeWasteCards_m3900407683 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Tripeaks.Card GSN.Skill.Games.Tripeaks.Board::FindCardWithCardID(System.Int32)
extern "C"  Card_t2087545274 * Board_FindCardWithCardID_m4081082441 (Board_t4208424732 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.Board::TimeSinceLastReshuffle()
extern "C"  int32_t Board_TimeSinceLastReshuffle_m3975084295 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.Board::InReshuffleCountdown()
extern "C"  bool Board_InReshuffleCountdown_m2500748194 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::DealOneShotWild()
extern "C"  void Board_DealOneShotWild_m2834859810 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::ActivateTutorialOneShotWildButton()
extern "C"  Il2CppObject * Board_ActivateTutorialOneShotWildButton_m4132528539 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::DisableWildButton()
extern "C"  void Board_DisableWildButton_m1975807452 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::ClearBoard(System.Int32)
extern "C"  Il2CppObject * Board_ClearBoard_m1339472120 (Board_t4208424732 * __this, int32_t ___endReason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::animateCardCyclone()
extern "C"  Il2CppObject * Board_animateCardCyclone_m3580584588 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::animateCardsFalling()
extern "C"  Il2CppObject * Board_animateCardsFalling_m2318683149 (Board_t4208424732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::addCardToTopOfDeal(System.Int32)
extern "C"  void Board_addCardToTopOfDeal_m1673501289 (Board_t4208424732 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onUpdateDynamiteCounter(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onUpdateDynamiteCounter_m108597255 (Board_t4208424732 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Board::onUndoAction(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void Board_onUndoAction_m3012407251 (Board_t4208424732 * __this, Il2CppObject * ___step0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
