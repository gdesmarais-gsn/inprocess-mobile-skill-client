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

// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile
struct GsnCardPile_t3625903776;
// GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck
struct GsnCardDeck_t1784400993;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct GsnCard_t782444760;
// GSN.Skill.Games.Common.Utils.GsnRandom
struct GsnRandom_t3573954395;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard
struct GsnStandardCard_t2915596887;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive1784400993.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Gsn3573954395.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive3294952118.h"

// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::.ctor(GSN.Skill.Games.Common.Primitive.Card.GsnCardDeck,System.Int32)
extern "C"  void GsnCardPile__ctor_m4274514595 (GsnCardPile_t3625903776 * __this, GsnCardDeck_t1784400993 * ___deck0, int32_t ___pileID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::get_pileID()
extern "C"  int32_t GsnCardPile_get_pileID_m3066777837 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::set_pileID(System.Int32)
extern "C"  void GsnCardPile_set_pileID_m3587756024 (GsnCardPile_t3625903776 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::get_count()
extern "C"  int32_t GsnCardPile_get_count_m669804915 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::AddCard(System.Int32)
extern "C"  void GsnCardPile_AddCard_m1029854019 (GsnCardPile_t3625903776 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::AddCardAt(System.Int32,System.Int32)
extern "C"  void GsnCardPile_AddCardAt_m1017993115 (GsnCardPile_t3625903776 * __this, int32_t ___slot0, int32_t ___cardID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::SlotIsOnTop(System.UInt32)
extern "C"  bool GsnCardPile_SlotIsOnTop_m3822683891 (GsnCardPile_t3625903776 * __this, uint32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::RemoveTopCard()
extern "C"  int32_t GsnCardPile_RemoveTopCard_m3272141710 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::RemoveCard(System.Int32)
extern "C"  void GsnCardPile_RemoveCard_m2603321118 (GsnCardPile_t3625903776 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::RemoveCardAt(System.Int32)
extern "C"  int32_t GsnCardPile_RemoveCardAt_m1061423375 (GsnCardPile_t3625903776 * __this, int32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetCardIDAt(System.Int32)
extern "C"  int32_t GsnCardPile_GetCardIDAt_m599953468 (GsnCardPile_t3625903776 * __this, int32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetCardAt(System.Int32)
extern "C"  GsnCard_t782444760 * GsnCardPile_GetCardAt_m1031382152 (GsnCardPile_t3625903776 * __this, int32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetCardSlot(System.Int32)
extern "C"  int32_t GsnCardPile_GetCardSlot_m1067634896 (GsnCardPile_t3625903776 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetTopCardID()
extern "C"  int32_t GsnCardPile_GetTopCardID_m3102030089 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetTopCard()
extern "C"  GsnCard_t782444760 * GsnCardPile_GetTopCard_m2436423477 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetTopCardIfFaceUp()
extern "C"  GsnCard_t782444760 * GsnCardPile_GetTopCardIfFaceUp_m2043940070 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::Clear()
extern "C"  void GsnCardPile_Clear_m2059379896 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::get_isEmpty()
extern "C"  bool GsnCardPile_get_isEmpty_m367156421 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::Sort(System.Boolean)
extern "C"  void GsnCardPile_Sort_m1875845724 (GsnCardPile_t3625903776 * __this, bool ___sortAscending0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::QuickSort(System.Int32,System.Int32)
extern "C"  void GsnCardPile_QuickSort_m2310351138 (GsnCardPile_t3625903776 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetSortValue(System.Int32)
extern "C"  int32_t GsnCardPile_GetSortValue_m677069203 (GsnCardPile_t3625903776 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::Shuffle(GSN.Skill.Games.Common.Utils.GsnRandom)
extern "C"  void GsnCardPile_Shuffle_m2099784971 (GsnCardPile_t3625903776 * __this, GsnRandom_t3573954395 * ___rand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::SwapCardWith(System.Int32,System.Int32)
extern "C"  void GsnCardPile_SwapCardWith_m600844760 (GsnCardPile_t3625903776 * __this, int32_t ___cardID0, int32_t ___spotID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetString(System.Boolean)
extern "C"  String_t* GsnCardPile_GetString_m1657591612 (GsnCardPile_t3625903776 * __this, bool ___withFlags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetCountOfCardsInSuit(GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits)
extern "C"  int32_t GsnCardPile_GetCountOfCardsInSuit_m444761332 (GsnCardPile_t3625903776 * __this, int32_t ___suit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::GetHighestCardInSuit(GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits)
extern "C"  GsnStandardCard_t2915596887 * GsnCardPile_GetHighestCardInSuit_m1638308533 (GsnCardPile_t3625903776 * __this, int32_t ___suit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::CardAdded(System.Int32)
extern "C"  void GsnCardPile_CardAdded_m120564132 (GsnCardPile_t3625903776 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::CardRemoved(System.Int32)
extern "C"  void GsnCardPile_CardRemoved_m260527026 (GsnCardPile_t3625903776 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Primitive.Card.GsnCardPile::ToString()
extern "C"  String_t* GsnCardPile_ToString_m2467604722 (GsnCardPile_t3625903776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
