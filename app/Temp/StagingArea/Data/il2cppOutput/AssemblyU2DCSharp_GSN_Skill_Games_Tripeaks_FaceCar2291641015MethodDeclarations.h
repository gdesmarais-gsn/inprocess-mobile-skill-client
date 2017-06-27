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

// GSN.Skill.Games.Tripeaks.FaceCard
struct FaceCard_t2291641015;
// GSN.Skill.Games.Tripeaks.DeckData
struct DeckData_t2475950745;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_PileID2297141513.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_CardTyp2845949242.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_DeckDat2475950745.h"

// System.Void GSN.Skill.Games.Tripeaks.FaceCard::.ctor()
extern "C"  void FaceCard__ctor_m209453711 (FaceCard_t2291641015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.FaceCard::setCard(System.Int32,System.Int32,GSN.Skill.Games.Tripeaks.PileID,GSN.Skill.Games.Tripeaks.CardType,GSN.Skill.Games.Tripeaks.DeckData)
extern "C"  void FaceCard_setCard_m2193832008 (FaceCard_t2291641015 * __this, int32_t ___cardId0, int32_t ___index1, int32_t ___pileID2, int32_t ___cardType3, DeckData_t2475950745 * ___deckData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.FaceCard::setCardTint(System.Int32)
extern "C"  void FaceCard_setCardTint_m3733921463 (FaceCard_t2291641015 * __this, int32_t ___timeOfDay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.FaceCard::GetPrettyString()
extern "C"  String_t* FaceCard_GetPrettyString_m1271083311 (FaceCard_t2291641015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
