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

// GSN.Skill.Games.Common.Primitive.Card.GsnStandardCardDeck
struct GsnStandardCardDeck_t1823276868;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct GsnCard_t782444760;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive3294952118.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive1325840931.h"

// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnStandardCardDeck::.ctor()
extern "C"  void GsnStandardCardDeck__ctor_m1155824645 (GsnStandardCardDeck_t1823276868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnStandardCardDeck::Initialize(System.Boolean,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits)
extern "C"  void GsnStandardCardDeck_Initialize_m58278054 (GsnStandardCardDeck_t1823276868 * __this, bool ___aceHigh0, int32_t ___suit01, int32_t ___suit12, int32_t ___suit23, int32_t ___suit34, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnStandardCardDeck::GetCardIDFromRankAndSuit(GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Ranks,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits)
extern "C"  int32_t GsnStandardCardDeck_GetCardIDFromRankAndSuit_m1586911693 (GsnStandardCardDeck_t1823276868 * __this, int32_t ___rank0, int32_t ___suit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Common.Primitive.Card.GsnStandardCardDeck::CreateCard(GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Ranks,System.Int32,System.Int32,System.Int32)
extern "C"  GsnCard_t782444760 * GsnStandardCardDeck_CreateCard_m2746202832 (GsnStandardCardDeck_t1823276868 * __this, int32_t ___suit0, int32_t ___rank1, int32_t ___value2, int32_t ___flags3, int32_t ___sortV4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
