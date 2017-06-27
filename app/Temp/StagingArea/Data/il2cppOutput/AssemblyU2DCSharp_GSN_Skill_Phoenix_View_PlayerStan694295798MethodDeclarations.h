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

// GSN.Skill.Phoenix.View.PlayerStandingsTile
struct PlayerStandingsTile_t694295798;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetTournResult2367918687.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetTournResult3917028247.h"

// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::.ctor()
extern "C"  void PlayerStandingsTile__ctor_m2806224096 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player GSN.Skill.Phoenix.View.PlayerStandingsTile::get_PlayerData()
extern "C"  Player_t2367918687  PlayerStandingsTile_get_PlayerData_m2979782618 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnEnable()
extern "C"  void PlayerStandingsTile_OnEnable_m3000099720 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnDisable()
extern "C"  void PlayerStandingsTile_OnDisable_m1562399477 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::SetPlayerData(GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData,GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player)
extern "C"  void PlayerStandingsTile_SetPlayerData_m3577479989 (PlayerStandingsTile_t694295798 * __this, TournResultData_t3917028247  ___resultData0, Player_t2367918687  ___playerData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimateScoreBar(System.Int32,System.Int32)
extern "C"  void PlayerStandingsTile_AnimateScoreBar_m2849308980 (PlayerStandingsTile_t694295798 * __this, int32_t ___lowestScore0, int32_t ___highestScore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::SkipAnimateScoreBar(System.Int32,System.Int32)
extern "C"  void PlayerStandingsTile_SkipAnimateScoreBar_m619395447 (PlayerStandingsTile_t694295798 * __this, int32_t ___lowestScore0, int32_t ___highestScore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GSN.Skill.Phoenix.View.PlayerStandingsTile::CheckMinScorePercent(System.Single)
extern "C"  float PlayerStandingsTile_CheckMinScorePercent_m3647632420 (PlayerStandingsTile_t694295798 * __this, float ___scorePercent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnBarUpdate(System.Single)
extern "C"  void PlayerStandingsTile_OnBarUpdate_m821074720 (PlayerStandingsTile_t694295798 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimateScoreBarWinItNow()
extern "C"  void PlayerStandingsTile_AnimateScoreBarWinItNow_m2117452977 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnBarUpdateWinItNow(System.Single)
extern "C"  void PlayerStandingsTile_OnBarUpdateWinItNow_m3253906051 (PlayerStandingsTile_t694295798 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnScoreUpdate(System.Single)
extern "C"  void PlayerStandingsTile_OnScoreUpdate_m2246804153 (PlayerStandingsTile_t694295798 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimateBarEnd()
extern "C"  void PlayerStandingsTile_AnimateBarEnd_m1017185909 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimateRankStampIn()
extern "C"  void PlayerStandingsTile_AnimateRankStampIn_m615565145 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::SkipAnimateRankStampIn()
extern "C"  void PlayerStandingsTile_SkipAnimateRankStampIn_m733410746 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimatePrizeSlideIn()
extern "C"  void PlayerStandingsTile_AnimatePrizeSlideIn_m2197555439 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::SkipAnimatePrizeSlideIn()
extern "C"  void PlayerStandingsTile_SkipAnimatePrizeSlideIn_m1804178620 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimatePlayerRocket(System.Int32)
extern "C"  void PlayerStandingsTile_AnimatePlayerRocket_m150792929 (PlayerStandingsTile_t694295798 * __this, int32_t ___yPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimatePlayerDown(System.Int32)
extern "C"  void PlayerStandingsTile_AnimatePlayerDown_m3727179359 (PlayerStandingsTile_t694295798 * __this, int32_t ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimateExpandWinItNow()
extern "C"  void PlayerStandingsTile_AnimateExpandWinItNow_m1121241974 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::AnimateCollapseWinItNow()
extern "C"  void PlayerStandingsTile_AnimateCollapseWinItNow_m1879533187 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::SkipAnimateExpandWinItNow()
extern "C"  void PlayerStandingsTile_SkipAnimateExpandWinItNow_m3772391987 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.PlayerStandingsTile::PlayerRocket(System.Int32)
extern "C"  Il2CppObject * PlayerStandingsTile_PlayerRocket_m382716202 (PlayerStandingsTile_t694295798 * __this, int32_t ___yPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::SkipPlayerRocket(System.Int32)
extern "C"  void PlayerStandingsTile_SkipPlayerRocket_m4120082499 (PlayerStandingsTile_t694295798 * __this, int32_t ___yPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::SkipMoveDown(System.Single)
extern "C"  void PlayerStandingsTile_SkipMoveDown_m141228475 (PlayerStandingsTile_t694295798 * __this, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnRocketUpdate(System.Single)
extern "C"  void PlayerStandingsTile_OnRocketUpdate_m1393617589 (PlayerStandingsTile_t694295798 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnMoveDown(System.Single)
extern "C"  void PlayerStandingsTile_OnMoveDown_m835348119 (PlayerStandingsTile_t694295798 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.PlayerStandingsTile::CountDownWinItNow(System.Int32)
extern "C"  Il2CppObject * PlayerStandingsTile_CountDownWinItNow_m1135665249 (PlayerStandingsTile_t694295798 * __this, int32_t ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnWinItNowClick()
extern "C"  void PlayerStandingsTile_OnWinItNowClick_m2240025120 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.PlayerStandingsTile::OnDeclineWinItNowClick()
extern "C"  void PlayerStandingsTile_OnDeclineWinItNowClick_m3547463694 (PlayerStandingsTile_t694295798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
