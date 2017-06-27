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

// GSN.Skill.Games.Tripeaks.Card
struct Card_t2087545274;
// GSN.Skill.Games.Tripeaks.DeckData
struct DeckData_t2475950745;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_CardTyp2845949242.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_PileID2297141513.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_DeckDat2475950745.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GSN.Skill.Games.Tripeaks.Card::.ctor()
extern "C"  void Card__ctor_m3748902628 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.Card::get_index()
extern "C"  int32_t Card_get_index_m1651178467 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.Card::get_cardID()
extern "C"  int32_t Card_get_cardID_m1603275626 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.Card::get_value()
extern "C"  int32_t Card_get_value_m3861198572 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.Card::get_flag()
extern "C"  int32_t Card_get_flag_m2413869785 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Tripeaks.CardType GSN.Skill.Games.Tripeaks.Card::get_cardType()
extern "C"  int32_t Card_get_cardType_m3690491945 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::set_cardType(GSN.Skill.Games.Tripeaks.CardType)
extern "C"  void Card_set_cardType_m1902795754 (Card_t2087545274 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Tripeaks.PileID GSN.Skill.Games.Tripeaks.Card::get_pileId()
extern "C"  int32_t Card_get_pileId_m3791910953 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.Card::get_faceUp()
extern "C"  bool Card_get_faceUp_m507166435 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::set_faceUp(System.Boolean)
extern "C"  void Card_set_faceUp_m44919814 (Card_t2087545274 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::setCard(System.Int32,System.Int32,GSN.Skill.Games.Tripeaks.PileID,GSN.Skill.Games.Tripeaks.CardType,GSN.Skill.Games.Tripeaks.DeckData)
extern "C"  void Card_setCard_m3240097925 (Card_t2087545274 * __this, int32_t ___cardId0, int32_t ___index1, int32_t ___pileID2, int32_t ___cardType3, DeckData_t2475950745 * ___deckData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::OnMouseDown()
extern "C"  void Card_OnMouseDown_m80640632 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::FlipCard(System.Boolean,System.Boolean)
extern "C"  void Card_FlipCard_m3585641485 (Card_t2087545274 * __this, bool ___faceUp0, bool ___showOverlay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::SetPile(GSN.Skill.Games.Tripeaks.PileID)
extern "C"  void Card_SetPile_m3148645564 (Card_t2087545274 * __this, int32_t ___pileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::MoveCardWithRot(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
extern "C"  void Card_MoveCardWithRot_m2494709271 (Card_t2087545274 * __this, Vector3_t2243707580  ___destPos0, Quaternion_t4030073918  ___destRot1, float ___tweenTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::MoveCard(UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  void Card_MoveCard_m1292074476 (Card_t2087545274 * __this, Vector3_t2243707580  ___destPos0, float ___tweenTime1, bool ___makeSound2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::TweenCompleteWithSound()
extern "C"  void Card_TweenCompleteWithSound_m541050415 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::TweenComplete()
extern "C"  void Card_TweenComplete_m2633983764 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::MoveCardNinjaStar(UnityEngine.Vector3,System.Single)
extern "C"  void Card_MoveCardNinjaStar_m1006792117 (Card_t2087545274 * __this, Vector3_t2243707580  ___destPos0, float ___tweenTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::MoveCardInRandomDirection()
extern "C"  void Card_MoveCardInRandomDirection_m2572853332 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::ResetCardPos()
extern "C"  void Card_ResetCardPos_m4159850995 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::MoveCardWithBounce(UnityEngine.Vector3,System.Single)
extern "C"  void Card_MoveCardWithBounce_m3841781805 (Card_t2087545274 * __this, Vector3_t2243707580  ___destPos0, float ___tweenTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::KillTweenAndAnimations()
extern "C"  void Card_KillTweenAndAnimations_m2903072163 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::Update()
extern "C"  void Card_Update_m837015279 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::PlayfieldDeal()
extern "C"  void Card_PlayfieldDeal_m658557224 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::PlayfieldDealActive()
extern "C"  void Card_PlayfieldDealActive_m3036208758 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::DrawPileDeal()
extern "C"  void Card_DrawPileDeal_m1034252230 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::CardShake()
extern "C"  void Card_CardShake_m2448787352 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::CardReveal(System.Boolean)
extern "C"  void Card_CardReveal_m1110803928 (Card_t2087545274 * __this, bool ___showOverlay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::CardUnreveal()
extern "C"  void Card_CardUnreveal_m3332051734 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::CardFaceDownOffScreen()
extern "C"  void Card_CardFaceDownOffScreen_m4116412860 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::CardWastePileFall()
extern "C"  void Card_CardWastePileFall_m547389761 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::DrawPileFall()
extern "C"  void Card_DrawPileFall_m4022678393 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::CardRevealDraw()
extern "C"  void Card_CardRevealDraw_m814140539 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::PlayfieldCardFall()
extern "C"  void Card_PlayfieldCardFall_m4215659419 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::CardCyclone()
extern "C"  void Card_CardCyclone_m2798828567 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::enableCollider(System.Boolean)
extern "C"  void Card_enableCollider_m1239049608 (Card_t2087545274 * __this, bool ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::SetToIdleAnim()
extern "C"  void Card_SetToIdleAnim_m4228147466 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::AddOverlay(UnityEngine.GameObject)
extern "C"  void Card_AddOverlay_m1211840065 (Card_t2087545274 * __this, GameObject_t1756533147 * ___overlay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::OverlayAppear()
extern "C"  void Card_OverlayAppear_m192120523 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::HideOverlay()
extern "C"  void Card_HideOverlay_m4077272016 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::ClearOverlay()
extern "C"  void Card_ClearOverlay_m4133462105 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::onUpdateDynamiteCounter(System.Int32)
extern "C"  void Card_onUpdateDynamiteCounter_m1980622616 (Card_t2087545274 * __this, int32_t ___dynamiteCounter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Card::setCardTint(System.Int32)
extern "C"  void Card_setCardTint_m3917244074 (Card_t2087545274 * __this, int32_t ___timeOfDay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.Card::GetPrettyString()
extern "C"  String_t* Card_GetPrettyString_m1696407364 (Card_t2087545274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
