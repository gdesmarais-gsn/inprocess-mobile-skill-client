#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// GSN.Skill.Phoenix.View.TournamentResultsPopupView
struct TournamentResultsPopupView_t1589578082;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseView2538946938.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetTournResult2367918687.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.PlayerStandingsTile
struct  PlayerStandingsTile_t694295798  : public BaseView_t2538946938
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PlayerStandingsTile::_userName
	TextMeshProUGUI_t934157183 * ____userName_5;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PlayerStandingsTile::_prizeWon
	TextMeshProUGUI_t934157183 * ____prizeWon_6;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PlayerStandingsTile::_score
	TextMeshProUGUI_t934157183 * ____score_7;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PlayerStandingsTile::_rank
	TextMeshProUGUI_t934157183 * ____rank_8;
	// UnityEngine.UI.Image GSN.Skill.Phoenix.View.PlayerStandingsTile::_rankSprites
	Image_t2042527209 * ____rankSprites_9;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.PlayerStandingsTile::_winItNowPanel
	GameObject_t1756533147 * ____winItNowPanel_10;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.PlayerStandingsTile::_winItNowButton
	Button_t2872111280 * ____winItNowButton_11;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.PlayerStandingsTile::_declineWinItNowButton
	Button_t2872111280 * ____declineWinItNowButton_12;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PlayerStandingsTile::_winItNowFee
	TextMeshProUGUI_t934157183 * ____winItNowFee_13;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PlayerStandingsTile::_winItNowPayout
	TextMeshProUGUI_t934157183 * ____winItNowPayout_14;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.PlayerStandingsTile::_winItNowTime
	TextMeshProUGUI_t934157183 * ____winItNowTime_15;
	// UnityEngine.Sprite[] GSN.Skill.Phoenix.View.PlayerStandingsTile::_rankImages
	SpriteU5BU5D_t3359083662* ____rankImages_16;
	// UnityEngine.RectTransform GSN.Skill.Phoenix.View.PlayerStandingsTile::_scoreBar
	RectTransform_t3349966182 * ____scoreBar_17;
	// UnityEngine.AnimationCurve GSN.Skill.Phoenix.View.PlayerStandingsTile::_rocketEase
	AnimationCurve_t3306541151 * ____rocketEase_18;
	// UnityEngine.Animator GSN.Skill.Phoenix.View.PlayerStandingsTile::_animScorebar
	Animator_t69676727 * ____animScorebar_19;
	// UnityEngine.Animator GSN.Skill.Phoenix.View.PlayerStandingsTile::_animScorePop
	Animator_t69676727 * ____animScorePop_20;
	// UnityEngine.Animator GSN.Skill.Phoenix.View.PlayerStandingsTile::_animProfileShake
	Animator_t69676727 * ____animProfileShake_21;
	// UnityEngine.Animator GSN.Skill.Phoenix.View.PlayerStandingsTile::_animProfileGlow
	Animator_t69676727 * ____animProfileGlow_22;
	// UnityEngine.Animator GSN.Skill.Phoenix.View.PlayerStandingsTile::_animRankStamp
	Animator_t69676727 * ____animRankStamp_23;
	// UnityEngine.Animator GSN.Skill.Phoenix.View.PlayerStandingsTile::_animScorebarFlash
	Animator_t69676727 * ____animScorebarFlash_24;
	// UnityEngine.Animator GSN.Skill.Phoenix.View.PlayerStandingsTile::_animPrize
	Animator_t69676727 * ____animPrize_25;
	// GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player GSN.Skill.Phoenix.View.PlayerStandingsTile::_playerData
	Player_t2367918687  ____playerData_52;
	// System.Boolean GSN.Skill.Phoenix.View.PlayerStandingsTile::canWinitNow
	bool ___canWinitNow_53;
	// System.Boolean GSN.Skill.Phoenix.View.PlayerStandingsTile::_tournamentIsClosed
	bool ____tournamentIsClosed_54;
	// GSN.Skill.Phoenix.View.TournamentResultsPopupView GSN.Skill.Phoenix.View.PlayerStandingsTile::tournamentResultsPopup
	TournamentResultsPopupView_t1589578082 * ___tournamentResultsPopup_55;

public:
	inline static int32_t get_offset_of__userName_5() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____userName_5)); }
	inline TextMeshProUGUI_t934157183 * get__userName_5() const { return ____userName_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__userName_5() { return &____userName_5; }
	inline void set__userName_5(TextMeshProUGUI_t934157183 * value)
	{
		____userName_5 = value;
		Il2CppCodeGenWriteBarrier(&____userName_5, value);
	}

	inline static int32_t get_offset_of__prizeWon_6() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____prizeWon_6)); }
	inline TextMeshProUGUI_t934157183 * get__prizeWon_6() const { return ____prizeWon_6; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__prizeWon_6() { return &____prizeWon_6; }
	inline void set__prizeWon_6(TextMeshProUGUI_t934157183 * value)
	{
		____prizeWon_6 = value;
		Il2CppCodeGenWriteBarrier(&____prizeWon_6, value);
	}

	inline static int32_t get_offset_of__score_7() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____score_7)); }
	inline TextMeshProUGUI_t934157183 * get__score_7() const { return ____score_7; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__score_7() { return &____score_7; }
	inline void set__score_7(TextMeshProUGUI_t934157183 * value)
	{
		____score_7 = value;
		Il2CppCodeGenWriteBarrier(&____score_7, value);
	}

	inline static int32_t get_offset_of__rank_8() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____rank_8)); }
	inline TextMeshProUGUI_t934157183 * get__rank_8() const { return ____rank_8; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__rank_8() { return &____rank_8; }
	inline void set__rank_8(TextMeshProUGUI_t934157183 * value)
	{
		____rank_8 = value;
		Il2CppCodeGenWriteBarrier(&____rank_8, value);
	}

	inline static int32_t get_offset_of__rankSprites_9() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____rankSprites_9)); }
	inline Image_t2042527209 * get__rankSprites_9() const { return ____rankSprites_9; }
	inline Image_t2042527209 ** get_address_of__rankSprites_9() { return &____rankSprites_9; }
	inline void set__rankSprites_9(Image_t2042527209 * value)
	{
		____rankSprites_9 = value;
		Il2CppCodeGenWriteBarrier(&____rankSprites_9, value);
	}

	inline static int32_t get_offset_of__winItNowPanel_10() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____winItNowPanel_10)); }
	inline GameObject_t1756533147 * get__winItNowPanel_10() const { return ____winItNowPanel_10; }
	inline GameObject_t1756533147 ** get_address_of__winItNowPanel_10() { return &____winItNowPanel_10; }
	inline void set__winItNowPanel_10(GameObject_t1756533147 * value)
	{
		____winItNowPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&____winItNowPanel_10, value);
	}

	inline static int32_t get_offset_of__winItNowButton_11() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____winItNowButton_11)); }
	inline Button_t2872111280 * get__winItNowButton_11() const { return ____winItNowButton_11; }
	inline Button_t2872111280 ** get_address_of__winItNowButton_11() { return &____winItNowButton_11; }
	inline void set__winItNowButton_11(Button_t2872111280 * value)
	{
		____winItNowButton_11 = value;
		Il2CppCodeGenWriteBarrier(&____winItNowButton_11, value);
	}

	inline static int32_t get_offset_of__declineWinItNowButton_12() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____declineWinItNowButton_12)); }
	inline Button_t2872111280 * get__declineWinItNowButton_12() const { return ____declineWinItNowButton_12; }
	inline Button_t2872111280 ** get_address_of__declineWinItNowButton_12() { return &____declineWinItNowButton_12; }
	inline void set__declineWinItNowButton_12(Button_t2872111280 * value)
	{
		____declineWinItNowButton_12 = value;
		Il2CppCodeGenWriteBarrier(&____declineWinItNowButton_12, value);
	}

	inline static int32_t get_offset_of__winItNowFee_13() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____winItNowFee_13)); }
	inline TextMeshProUGUI_t934157183 * get__winItNowFee_13() const { return ____winItNowFee_13; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__winItNowFee_13() { return &____winItNowFee_13; }
	inline void set__winItNowFee_13(TextMeshProUGUI_t934157183 * value)
	{
		____winItNowFee_13 = value;
		Il2CppCodeGenWriteBarrier(&____winItNowFee_13, value);
	}

	inline static int32_t get_offset_of__winItNowPayout_14() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____winItNowPayout_14)); }
	inline TextMeshProUGUI_t934157183 * get__winItNowPayout_14() const { return ____winItNowPayout_14; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__winItNowPayout_14() { return &____winItNowPayout_14; }
	inline void set__winItNowPayout_14(TextMeshProUGUI_t934157183 * value)
	{
		____winItNowPayout_14 = value;
		Il2CppCodeGenWriteBarrier(&____winItNowPayout_14, value);
	}

	inline static int32_t get_offset_of__winItNowTime_15() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____winItNowTime_15)); }
	inline TextMeshProUGUI_t934157183 * get__winItNowTime_15() const { return ____winItNowTime_15; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__winItNowTime_15() { return &____winItNowTime_15; }
	inline void set__winItNowTime_15(TextMeshProUGUI_t934157183 * value)
	{
		____winItNowTime_15 = value;
		Il2CppCodeGenWriteBarrier(&____winItNowTime_15, value);
	}

	inline static int32_t get_offset_of__rankImages_16() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____rankImages_16)); }
	inline SpriteU5BU5D_t3359083662* get__rankImages_16() const { return ____rankImages_16; }
	inline SpriteU5BU5D_t3359083662** get_address_of__rankImages_16() { return &____rankImages_16; }
	inline void set__rankImages_16(SpriteU5BU5D_t3359083662* value)
	{
		____rankImages_16 = value;
		Il2CppCodeGenWriteBarrier(&____rankImages_16, value);
	}

	inline static int32_t get_offset_of__scoreBar_17() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____scoreBar_17)); }
	inline RectTransform_t3349966182 * get__scoreBar_17() const { return ____scoreBar_17; }
	inline RectTransform_t3349966182 ** get_address_of__scoreBar_17() { return &____scoreBar_17; }
	inline void set__scoreBar_17(RectTransform_t3349966182 * value)
	{
		____scoreBar_17 = value;
		Il2CppCodeGenWriteBarrier(&____scoreBar_17, value);
	}

	inline static int32_t get_offset_of__rocketEase_18() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____rocketEase_18)); }
	inline AnimationCurve_t3306541151 * get__rocketEase_18() const { return ____rocketEase_18; }
	inline AnimationCurve_t3306541151 ** get_address_of__rocketEase_18() { return &____rocketEase_18; }
	inline void set__rocketEase_18(AnimationCurve_t3306541151 * value)
	{
		____rocketEase_18 = value;
		Il2CppCodeGenWriteBarrier(&____rocketEase_18, value);
	}

	inline static int32_t get_offset_of__animScorebar_19() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____animScorebar_19)); }
	inline Animator_t69676727 * get__animScorebar_19() const { return ____animScorebar_19; }
	inline Animator_t69676727 ** get_address_of__animScorebar_19() { return &____animScorebar_19; }
	inline void set__animScorebar_19(Animator_t69676727 * value)
	{
		____animScorebar_19 = value;
		Il2CppCodeGenWriteBarrier(&____animScorebar_19, value);
	}

	inline static int32_t get_offset_of__animScorePop_20() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____animScorePop_20)); }
	inline Animator_t69676727 * get__animScorePop_20() const { return ____animScorePop_20; }
	inline Animator_t69676727 ** get_address_of__animScorePop_20() { return &____animScorePop_20; }
	inline void set__animScorePop_20(Animator_t69676727 * value)
	{
		____animScorePop_20 = value;
		Il2CppCodeGenWriteBarrier(&____animScorePop_20, value);
	}

	inline static int32_t get_offset_of__animProfileShake_21() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____animProfileShake_21)); }
	inline Animator_t69676727 * get__animProfileShake_21() const { return ____animProfileShake_21; }
	inline Animator_t69676727 ** get_address_of__animProfileShake_21() { return &____animProfileShake_21; }
	inline void set__animProfileShake_21(Animator_t69676727 * value)
	{
		____animProfileShake_21 = value;
		Il2CppCodeGenWriteBarrier(&____animProfileShake_21, value);
	}

	inline static int32_t get_offset_of__animProfileGlow_22() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____animProfileGlow_22)); }
	inline Animator_t69676727 * get__animProfileGlow_22() const { return ____animProfileGlow_22; }
	inline Animator_t69676727 ** get_address_of__animProfileGlow_22() { return &____animProfileGlow_22; }
	inline void set__animProfileGlow_22(Animator_t69676727 * value)
	{
		____animProfileGlow_22 = value;
		Il2CppCodeGenWriteBarrier(&____animProfileGlow_22, value);
	}

	inline static int32_t get_offset_of__animRankStamp_23() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____animRankStamp_23)); }
	inline Animator_t69676727 * get__animRankStamp_23() const { return ____animRankStamp_23; }
	inline Animator_t69676727 ** get_address_of__animRankStamp_23() { return &____animRankStamp_23; }
	inline void set__animRankStamp_23(Animator_t69676727 * value)
	{
		____animRankStamp_23 = value;
		Il2CppCodeGenWriteBarrier(&____animRankStamp_23, value);
	}

	inline static int32_t get_offset_of__animScorebarFlash_24() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____animScorebarFlash_24)); }
	inline Animator_t69676727 * get__animScorebarFlash_24() const { return ____animScorebarFlash_24; }
	inline Animator_t69676727 ** get_address_of__animScorebarFlash_24() { return &____animScorebarFlash_24; }
	inline void set__animScorebarFlash_24(Animator_t69676727 * value)
	{
		____animScorebarFlash_24 = value;
		Il2CppCodeGenWriteBarrier(&____animScorebarFlash_24, value);
	}

	inline static int32_t get_offset_of__animPrize_25() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____animPrize_25)); }
	inline Animator_t69676727 * get__animPrize_25() const { return ____animPrize_25; }
	inline Animator_t69676727 ** get_address_of__animPrize_25() { return &____animPrize_25; }
	inline void set__animPrize_25(Animator_t69676727 * value)
	{
		____animPrize_25 = value;
		Il2CppCodeGenWriteBarrier(&____animPrize_25, value);
	}

	inline static int32_t get_offset_of__playerData_52() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____playerData_52)); }
	inline Player_t2367918687  get__playerData_52() const { return ____playerData_52; }
	inline Player_t2367918687 * get_address_of__playerData_52() { return &____playerData_52; }
	inline void set__playerData_52(Player_t2367918687  value)
	{
		____playerData_52 = value;
	}

	inline static int32_t get_offset_of_canWinitNow_53() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ___canWinitNow_53)); }
	inline bool get_canWinitNow_53() const { return ___canWinitNow_53; }
	inline bool* get_address_of_canWinitNow_53() { return &___canWinitNow_53; }
	inline void set_canWinitNow_53(bool value)
	{
		___canWinitNow_53 = value;
	}

	inline static int32_t get_offset_of__tournamentIsClosed_54() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ____tournamentIsClosed_54)); }
	inline bool get__tournamentIsClosed_54() const { return ____tournamentIsClosed_54; }
	inline bool* get_address_of__tournamentIsClosed_54() { return &____tournamentIsClosed_54; }
	inline void set__tournamentIsClosed_54(bool value)
	{
		____tournamentIsClosed_54 = value;
	}

	inline static int32_t get_offset_of_tournamentResultsPopup_55() { return static_cast<int32_t>(offsetof(PlayerStandingsTile_t694295798, ___tournamentResultsPopup_55)); }
	inline TournamentResultsPopupView_t1589578082 * get_tournamentResultsPopup_55() const { return ___tournamentResultsPopup_55; }
	inline TournamentResultsPopupView_t1589578082 ** get_address_of_tournamentResultsPopup_55() { return &___tournamentResultsPopup_55; }
	inline void set_tournamentResultsPopup_55(TournamentResultsPopupView_t1589578082 * value)
	{
		___tournamentResultsPopup_55 = value;
		Il2CppCodeGenWriteBarrier(&___tournamentResultsPopup_55, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
