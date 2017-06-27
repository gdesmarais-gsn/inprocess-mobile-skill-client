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

// GSN.Skill.Games.Tripeaks.TriPeaksCardDeck
struct TriPeaksCardDeck_t1840429032;
// GSN.Skill.Games.Tripeaks.PlayfieldModelData
struct PlayfieldModelData_t1827511723;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct GsnCard_t782444760;
// GSN.Skill.Games.Tripeaks.GameModel
struct GameModel_t3841817345;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>
struct List_1_t4087109391;
// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile
struct GsnCardPile_t3625903776;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// GSN.Skill.Games.Common.Utils.GsnRandom
struct GsnRandom_t3573954395;
// System.String
struct String_t;
// GSN.Skill.Games.Tripeaks.TikiCardData
struct TikiCardData_t3556096769;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Playfie1827511723.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive3294952118.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive1325840931.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_GameMod3841817345.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive3625903776.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Gsn3573954395.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_TikiCar3556096769.h"

// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::.ctor(GSN.Skill.Games.Tripeaks.PlayfieldModelData)
extern "C"  void TriPeaksCardDeck__ctor_m2583704504 (TriPeaksCardDeck_t1840429032 * __this, PlayfieldModelData_t1827511723 * ___inPlayfield0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::CreateCard(GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Ranks,System.Int32,System.Int32,System.Int32)
extern "C"  GsnCard_t782444760 * TriPeaksCardDeck_CreateCard_m3661944299 (TriPeaksCardDeck_t1840429032 * __this, int32_t ___suit0, int32_t ___rank1, int32_t ___value2, int32_t ___flags3, int32_t ___sortV4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::BuildDeck(GSN.Skill.Games.Tripeaks.GameModel,System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile,System.Int32[])
extern "C"  void TriPeaksCardDeck_BuildDeck_m1735462004 (TriPeaksCardDeck_t1840429032 * __this, GameModel_t3841817345 * ___gameModel0, List_1_t4087109391 * ___baseCardData1, GsnCardPile_t3625903776 * ___dealPile2, GsnCardPile_t3625903776 * ___removedPile3, Int32U5BU5D_t3030399641* ___cardOrder4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::BuildDeck(GSN.Skill.Games.Tripeaks.GameModel,System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile,GSN.Skill.Games.Common.Utils.GsnRandom)
extern "C"  void TriPeaksCardDeck_BuildDeck_m2395129550 (TriPeaksCardDeck_t1840429032 * __this, GameModel_t3841817345 * ___gameModel0, List_1_t4087109391 * ___baseCardData1, GsnCardPile_t3625903776 * ___dealPile2, GsnRandom_t3573954395 * ___rand3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::BuildDeckInternal(GSN.Skill.Games.Tripeaks.GameModel,System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile)
extern "C"  void TriPeaksCardDeck_BuildDeckInternal_m1146746164 (TriPeaksCardDeck_t1840429032 * __this, GameModel_t3841817345 * ___gameModel0, List_1_t4087109391 * ___baseCardData1, GsnCardPile_t3625903776 * ___dealPile2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::AddSharkCards(System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile)
extern "C"  void TriPeaksCardDeck_AddSharkCards_m3748598331 (TriPeaksCardDeck_t1840429032 * __this, List_1_t4087109391 * ___baseCardData0, GsnCardPile_t3625903776 * ___dealPile1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::GenerateTikiCards(GSN.Skill.Games.Tripeaks.GameModel,System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile,GSN.Skill.Games.Common.Utils.GsnRandom)
extern "C"  void TriPeaksCardDeck_GenerateTikiCards_m1969775552 (TriPeaksCardDeck_t1840429032 * __this, GameModel_t3841817345 * ___gameModel0, List_1_t4087109391 * ___baseCardData1, GsnCardPile_t3625903776 * ___dealPile2, GsnRandom_t3573954395 * ___rand3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::GenerateTikiCardsFromCardData(GSN.Skill.Games.Tripeaks.GameModel,System.String,System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile,GSN.Skill.Games.Common.Utils.GsnRandom,GSN.Skill.Games.Tripeaks.TikiCardData,System.Int32)
extern "C"  void TriPeaksCardDeck_GenerateTikiCardsFromCardData_m4023183497 (TriPeaksCardDeck_t1840429032 * __this, GameModel_t3841817345 * ___gameModel0, String_t* ___optionKey1, List_1_t4087109391 * ___baseCardData2, GsnCardPile_t3625903776 * ___dealPile3, GsnRandom_t3573954395 * ___rand4, TikiCardData_t3556096769 * ___tikiCardData5, int32_t ___tikiFlag6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::InsertTikiCard(System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>,GSN.Skill.Games.Common.Primitive.Card.GsnCardPile,GSN.Skill.Games.Common.Utils.GsnRandom,System.Int32)
extern "C"  void TriPeaksCardDeck_InsertTikiCard_m1695837884 (TriPeaksCardDeck_t1840429032 * __this, List_1_t4087109391 * ___baseCardData0, GsnCardPile_t3625903776 * ___dealPile1, GsnRandom_t3573954395 * ___rand2, int32_t ___tikiFlag3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
