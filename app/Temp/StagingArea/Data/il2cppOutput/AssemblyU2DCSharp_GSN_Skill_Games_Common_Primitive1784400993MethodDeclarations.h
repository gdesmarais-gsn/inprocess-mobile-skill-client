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

// GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck
struct GsnCardDeck_t1784400993;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct GsnCard_t782444760;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile
struct GsnCardPile_t3625903776;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive_782444760.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive3625903776.h"

// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::.ctor()
extern "C"  void GsnCardDeck__ctor_m2597611518 (GsnCardDeck_t1784400993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::AddCard(GSN.Skill.Games.Common.Primitive.Card.GsnCard)
extern "C"  void GsnCardDeck_AddCard_m4135131479 (GsnCardDeck_t1784400993 * __this, GsnCard_t782444760 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::GetCard(System.Int32)
extern "C"  GsnCard_t782444760 * GsnCardDeck_GetCard_m1861553550 (GsnCardDeck_t1784400993 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::GetCardID(GSN.Skill.Games.Common.Primitive.Card.GsnCard)
extern "C"  int32_t GsnCardDeck_GetCardID_m3774805247 (GsnCardDeck_t1784400993 * __this, GsnCard_t782444760 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::get_count()
extern "C"  int32_t GsnCardDeck_get_count_m3383929316 (GsnCardDeck_t1784400993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::ToString()
extern "C"  String_t* GsnCardDeck_ToString_m2944405713 (GsnCardDeck_t1784400993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::SetPileOfCard(System.Int32,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile)
extern "C"  void GsnCardDeck_SetPileOfCard_m906999350 (GsnCardDeck_t1784400993 * __this, int32_t ___cardID0, GsnCardPile_t3625903776 * ___pile1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck::Reset()
extern "C"  void GsnCardDeck_Reset_m3974789059 (GsnCardDeck_t1784400993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
