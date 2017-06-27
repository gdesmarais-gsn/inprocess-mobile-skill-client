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

// GSN.Skill.Games.Tripeaks.TriPeaksCard
struct TriPeaksCard_t214310709;
// GSN.Skill.Games.Tripeaks.GameModel
struct GameModel_t3841817345;
// GSN.Skill.Games.Tripeaks.BaseCardData
struct BaseCardData_t423020963;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive3294952118.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive1325840931.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_GameMod3841817345.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_BaseCard423020963.h"

// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::.ctor(GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Suits,GSN.Skill.Games.Common.Primitive.Card.GsnStandardCard/Ranks,System.Int32,System.Int32,System.Int32)
extern "C"  void TriPeaksCard__ctor_m3452449461 (TriPeaksCard_t214310709 * __this, int32_t ___suit0, int32_t ___rank1, int32_t ___value2, int32_t ___flags3, int32_t ___sortValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.TriPeaksCard::get_activationCounter()
extern "C"  int32_t TriPeaksCard_get_activationCounter_m3327518404 (TriPeaksCard_t214310709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::set_activationCounter(System.Int32)
extern "C"  void TriPeaksCard_set_activationCounter_m2803238457 (TriPeaksCard_t214310709 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::ApplyFlagsFromData(GSN.Skill.Games.Tripeaks.GameModel,GSN.Skill.Games.Tripeaks.BaseCardData)
extern "C"  void TriPeaksCard_ApplyFlagsFromData_m1125726104 (TriPeaksCard_t214310709 * __this, GameModel_t3841817345 * ___gameModel0, BaseCardData_t423020963 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::ActivateFaceUpEffects(GSN.Skill.Games.Tripeaks.GameModel,System.Int32,System.Int32)
extern "C"  void TriPeaksCard_ActivateFaceUpEffects_m8331724 (TriPeaksCard_t214310709 * __this, GameModel_t3841817345 * ___gameModel0, int32_t ___cardId1, int32_t ___timeDelay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::KillFaceUpEffectTimers()
extern "C"  void TriPeaksCard_KillFaceUpEffectTimers_m3936163082 (TriPeaksCard_t214310709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::AdvanceTurn(GSN.Skill.Games.Tripeaks.GameModel)
extern "C"  void TriPeaksCard_AdvanceTurn_m3794696610 (TriPeaksCard_t214310709 * __this, GameModel_t3841817345 * ___gameModel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::SetActivationCounter(GSN.Skill.Games.Tripeaks.GameModel,System.Int32)
extern "C"  void TriPeaksCard_SetActivationCounter_m70938698 (TriPeaksCard_t214310709 * __this, GameModel_t3841817345 * ___gameModel0, int32_t ___activationCounter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::UpdateUI(GSN.Skill.Games.Tripeaks.GameModel,System.Int32)
extern "C"  void TriPeaksCard_UpdateUI_m2856352989 (TriPeaksCard_t214310709 * __this, GameModel_t3841817345 * ___gameModel0, int32_t ___cardID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Tripeaks.TriPeaksCard::EndsGame(GSN.Skill.Games.Tripeaks.GameModel)
extern "C"  bool TriPeaksCard_EndsGame_m493810195 (TriPeaksCard_t214310709 * __this, GameModel_t3841817345 * ___gameModel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::clearCountdownTask()
extern "C"  void TriPeaksCard_clearCountdownTask_m2712327716 (TriPeaksCard_t214310709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.TriPeaksCard::Rewind(System.Int32)
extern "C"  void TriPeaksCard_Rewind_m2477172255 (TriPeaksCard_t214310709 * __this, int32_t ___stateTimeMS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
