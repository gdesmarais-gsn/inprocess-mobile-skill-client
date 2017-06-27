#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData[]
struct PlayerDataU5BU5D_t1170079108;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
struct PlayerData_t1227508857_marshaled_pinvoke;
struct PlayerData_t1227508857_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn1227508857.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult
struct  TournamentResult_t3039471716 
{
public:
	// System.Boolean GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::showPlayTypeAgainButton
	bool ___showPlayTypeAgainButton_0;
	// System.Boolean GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::showPlayAnotherTournButton
	bool ___showPlayAnotherTournButton_1;
	// System.Boolean GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::reEnterableByUser
	bool ___reEnterableByUser_2;
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData[] GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::PlayerData
	PlayerDataU5BU5D_t1170079108* ___PlayerData_3;
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::userHighScoreData
	PlayerData_t1227508857  ___userHighScoreData_4;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::is_P1
	String_t* ___is_P1_5;
	// System.Boolean GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::canWinItNow
	bool ___canWinItNow_6;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::winItNowRemainingSeconds
	int32_t ___winItNowRemainingSeconds_7;
	// System.String[] GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<prizeValue>k__BackingField
	StringU5BU5D_t1642385972* ___U3CprizeValueU3Ek__BackingField_8;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<unplayed_game_id>k__BackingField
	String_t* ___U3Cunplayed_game_idU3Ek__BackingField_9;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<Fee>k__BackingField
	String_t* ___U3CFeeU3Ek__BackingField_10;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<FlavorDescription>k__BackingField
	String_t* ___U3CFlavorDescriptionU3Ek__BackingField_11;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<FlavorTypeID>k__BackingField
	String_t* ___U3CFlavorTypeIDU3Ek__BackingField_12;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<GameID>k__BackingField
	String_t* ___U3CGameIDU3Ek__BackingField_13;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<StartDate>k__BackingField
	String_t* ___U3CStartDateU3Ek__BackingField_14;
	// System.Boolean GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<closed>k__BackingField
	bool ___U3CclosedU3Ek__BackingField_15;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<MaxPlayers>k__BackingField
	String_t* ___U3CMaxPlayersU3Ek__BackingField_16;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<EndDate>k__BackingField
	String_t* ___U3CEndDateU3Ek__BackingField_17;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<FlavorName>k__BackingField
	String_t* ___U3CFlavorNameU3Ek__BackingField_18;
	// System.Boolean GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<PlayerWon>k__BackingField
	bool ___U3CPlayerWonU3Ek__BackingField_19;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<NumPlayers>k__BackingField
	String_t* ___U3CNumPlayersU3Ek__BackingField_20;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<Winnings>k__BackingField
	String_t* ___U3CWinningsU3Ek__BackingField_21;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<GameName>k__BackingField
	String_t* ___U3CGameNameU3Ek__BackingField_22;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<TotalPrizeAmount>k__BackingField
	String_t* ___U3CTotalPrizeAmountU3Ek__BackingField_23;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<FlavorType>k__BackingField
	String_t* ___U3CFlavorTypeU3Ek__BackingField_24;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<WinnerDeclared>k__BackingField
	String_t* ___U3CWinnerDeclaredU3Ek__BackingField_25;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<TournamentID>k__BackingField
	String_t* ___U3CTournamentIDU3Ek__BackingField_26;
	// System.Nullable`1<System.Int32> GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult::<Unfinished>k__BackingField
	Nullable_1_t334943763  ___U3CUnfinishedU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_showPlayTypeAgainButton_0() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___showPlayTypeAgainButton_0)); }
	inline bool get_showPlayTypeAgainButton_0() const { return ___showPlayTypeAgainButton_0; }
	inline bool* get_address_of_showPlayTypeAgainButton_0() { return &___showPlayTypeAgainButton_0; }
	inline void set_showPlayTypeAgainButton_0(bool value)
	{
		___showPlayTypeAgainButton_0 = value;
	}

	inline static int32_t get_offset_of_showPlayAnotherTournButton_1() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___showPlayAnotherTournButton_1)); }
	inline bool get_showPlayAnotherTournButton_1() const { return ___showPlayAnotherTournButton_1; }
	inline bool* get_address_of_showPlayAnotherTournButton_1() { return &___showPlayAnotherTournButton_1; }
	inline void set_showPlayAnotherTournButton_1(bool value)
	{
		___showPlayAnotherTournButton_1 = value;
	}

	inline static int32_t get_offset_of_reEnterableByUser_2() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___reEnterableByUser_2)); }
	inline bool get_reEnterableByUser_2() const { return ___reEnterableByUser_2; }
	inline bool* get_address_of_reEnterableByUser_2() { return &___reEnterableByUser_2; }
	inline void set_reEnterableByUser_2(bool value)
	{
		___reEnterableByUser_2 = value;
	}

	inline static int32_t get_offset_of_PlayerData_3() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___PlayerData_3)); }
	inline PlayerDataU5BU5D_t1170079108* get_PlayerData_3() const { return ___PlayerData_3; }
	inline PlayerDataU5BU5D_t1170079108** get_address_of_PlayerData_3() { return &___PlayerData_3; }
	inline void set_PlayerData_3(PlayerDataU5BU5D_t1170079108* value)
	{
		___PlayerData_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerData_3, value);
	}

	inline static int32_t get_offset_of_userHighScoreData_4() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___userHighScoreData_4)); }
	inline PlayerData_t1227508857  get_userHighScoreData_4() const { return ___userHighScoreData_4; }
	inline PlayerData_t1227508857 * get_address_of_userHighScoreData_4() { return &___userHighScoreData_4; }
	inline void set_userHighScoreData_4(PlayerData_t1227508857  value)
	{
		___userHighScoreData_4 = value;
	}

	inline static int32_t get_offset_of_is_P1_5() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___is_P1_5)); }
	inline String_t* get_is_P1_5() const { return ___is_P1_5; }
	inline String_t** get_address_of_is_P1_5() { return &___is_P1_5; }
	inline void set_is_P1_5(String_t* value)
	{
		___is_P1_5 = value;
		Il2CppCodeGenWriteBarrier(&___is_P1_5, value);
	}

	inline static int32_t get_offset_of_canWinItNow_6() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___canWinItNow_6)); }
	inline bool get_canWinItNow_6() const { return ___canWinItNow_6; }
	inline bool* get_address_of_canWinItNow_6() { return &___canWinItNow_6; }
	inline void set_canWinItNow_6(bool value)
	{
		___canWinItNow_6 = value;
	}

	inline static int32_t get_offset_of_winItNowRemainingSeconds_7() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___winItNowRemainingSeconds_7)); }
	inline int32_t get_winItNowRemainingSeconds_7() const { return ___winItNowRemainingSeconds_7; }
	inline int32_t* get_address_of_winItNowRemainingSeconds_7() { return &___winItNowRemainingSeconds_7; }
	inline void set_winItNowRemainingSeconds_7(int32_t value)
	{
		___winItNowRemainingSeconds_7 = value;
	}

	inline static int32_t get_offset_of_U3CprizeValueU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CprizeValueU3Ek__BackingField_8)); }
	inline StringU5BU5D_t1642385972* get_U3CprizeValueU3Ek__BackingField_8() const { return ___U3CprizeValueU3Ek__BackingField_8; }
	inline StringU5BU5D_t1642385972** get_address_of_U3CprizeValueU3Ek__BackingField_8() { return &___U3CprizeValueU3Ek__BackingField_8; }
	inline void set_U3CprizeValueU3Ek__BackingField_8(StringU5BU5D_t1642385972* value)
	{
		___U3CprizeValueU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CprizeValueU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3Cunplayed_game_idU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3Cunplayed_game_idU3Ek__BackingField_9)); }
	inline String_t* get_U3Cunplayed_game_idU3Ek__BackingField_9() const { return ___U3Cunplayed_game_idU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3Cunplayed_game_idU3Ek__BackingField_9() { return &___U3Cunplayed_game_idU3Ek__BackingField_9; }
	inline void set_U3Cunplayed_game_idU3Ek__BackingField_9(String_t* value)
	{
		___U3Cunplayed_game_idU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3Cunplayed_game_idU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CFeeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CFeeU3Ek__BackingField_10)); }
	inline String_t* get_U3CFeeU3Ek__BackingField_10() const { return ___U3CFeeU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CFeeU3Ek__BackingField_10() { return &___U3CFeeU3Ek__BackingField_10; }
	inline void set_U3CFeeU3Ek__BackingField_10(String_t* value)
	{
		___U3CFeeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFeeU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CFlavorDescriptionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CFlavorDescriptionU3Ek__BackingField_11)); }
	inline String_t* get_U3CFlavorDescriptionU3Ek__BackingField_11() const { return ___U3CFlavorDescriptionU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CFlavorDescriptionU3Ek__BackingField_11() { return &___U3CFlavorDescriptionU3Ek__BackingField_11; }
	inline void set_U3CFlavorDescriptionU3Ek__BackingField_11(String_t* value)
	{
		___U3CFlavorDescriptionU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFlavorDescriptionU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CFlavorTypeIDU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CFlavorTypeIDU3Ek__BackingField_12)); }
	inline String_t* get_U3CFlavorTypeIDU3Ek__BackingField_12() const { return ___U3CFlavorTypeIDU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CFlavorTypeIDU3Ek__BackingField_12() { return &___U3CFlavorTypeIDU3Ek__BackingField_12; }
	inline void set_U3CFlavorTypeIDU3Ek__BackingField_12(String_t* value)
	{
		___U3CFlavorTypeIDU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFlavorTypeIDU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CGameIDU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CGameIDU3Ek__BackingField_13)); }
	inline String_t* get_U3CGameIDU3Ek__BackingField_13() const { return ___U3CGameIDU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CGameIDU3Ek__BackingField_13() { return &___U3CGameIDU3Ek__BackingField_13; }
	inline void set_U3CGameIDU3Ek__BackingField_13(String_t* value)
	{
		___U3CGameIDU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameIDU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CStartDateU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CStartDateU3Ek__BackingField_14)); }
	inline String_t* get_U3CStartDateU3Ek__BackingField_14() const { return ___U3CStartDateU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CStartDateU3Ek__BackingField_14() { return &___U3CStartDateU3Ek__BackingField_14; }
	inline void set_U3CStartDateU3Ek__BackingField_14(String_t* value)
	{
		___U3CStartDateU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStartDateU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CclosedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CclosedU3Ek__BackingField_15)); }
	inline bool get_U3CclosedU3Ek__BackingField_15() const { return ___U3CclosedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CclosedU3Ek__BackingField_15() { return &___U3CclosedU3Ek__BackingField_15; }
	inline void set_U3CclosedU3Ek__BackingField_15(bool value)
	{
		___U3CclosedU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CMaxPlayersU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CMaxPlayersU3Ek__BackingField_16)); }
	inline String_t* get_U3CMaxPlayersU3Ek__BackingField_16() const { return ___U3CMaxPlayersU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CMaxPlayersU3Ek__BackingField_16() { return &___U3CMaxPlayersU3Ek__BackingField_16; }
	inline void set_U3CMaxPlayersU3Ek__BackingField_16(String_t* value)
	{
		___U3CMaxPlayersU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMaxPlayersU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CEndDateU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CEndDateU3Ek__BackingField_17)); }
	inline String_t* get_U3CEndDateU3Ek__BackingField_17() const { return ___U3CEndDateU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CEndDateU3Ek__BackingField_17() { return &___U3CEndDateU3Ek__BackingField_17; }
	inline void set_U3CEndDateU3Ek__BackingField_17(String_t* value)
	{
		___U3CEndDateU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEndDateU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CFlavorNameU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CFlavorNameU3Ek__BackingField_18)); }
	inline String_t* get_U3CFlavorNameU3Ek__BackingField_18() const { return ___U3CFlavorNameU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CFlavorNameU3Ek__BackingField_18() { return &___U3CFlavorNameU3Ek__BackingField_18; }
	inline void set_U3CFlavorNameU3Ek__BackingField_18(String_t* value)
	{
		___U3CFlavorNameU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFlavorNameU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CPlayerWonU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CPlayerWonU3Ek__BackingField_19)); }
	inline bool get_U3CPlayerWonU3Ek__BackingField_19() const { return ___U3CPlayerWonU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CPlayerWonU3Ek__BackingField_19() { return &___U3CPlayerWonU3Ek__BackingField_19; }
	inline void set_U3CPlayerWonU3Ek__BackingField_19(bool value)
	{
		___U3CPlayerWonU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CNumPlayersU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CNumPlayersU3Ek__BackingField_20)); }
	inline String_t* get_U3CNumPlayersU3Ek__BackingField_20() const { return ___U3CNumPlayersU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNumPlayersU3Ek__BackingField_20() { return &___U3CNumPlayersU3Ek__BackingField_20; }
	inline void set_U3CNumPlayersU3Ek__BackingField_20(String_t* value)
	{
		___U3CNumPlayersU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNumPlayersU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3CWinningsU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CWinningsU3Ek__BackingField_21)); }
	inline String_t* get_U3CWinningsU3Ek__BackingField_21() const { return ___U3CWinningsU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CWinningsU3Ek__BackingField_21() { return &___U3CWinningsU3Ek__BackingField_21; }
	inline void set_U3CWinningsU3Ek__BackingField_21(String_t* value)
	{
		___U3CWinningsU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWinningsU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CGameNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CGameNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CGameNameU3Ek__BackingField_22() const { return ___U3CGameNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CGameNameU3Ek__BackingField_22() { return &___U3CGameNameU3Ek__BackingField_22; }
	inline void set_U3CGameNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CGameNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameNameU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_U3CTotalPrizeAmountU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CTotalPrizeAmountU3Ek__BackingField_23)); }
	inline String_t* get_U3CTotalPrizeAmountU3Ek__BackingField_23() const { return ___U3CTotalPrizeAmountU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CTotalPrizeAmountU3Ek__BackingField_23() { return &___U3CTotalPrizeAmountU3Ek__BackingField_23; }
	inline void set_U3CTotalPrizeAmountU3Ek__BackingField_23(String_t* value)
	{
		___U3CTotalPrizeAmountU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTotalPrizeAmountU3Ek__BackingField_23, value);
	}

	inline static int32_t get_offset_of_U3CFlavorTypeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CFlavorTypeU3Ek__BackingField_24)); }
	inline String_t* get_U3CFlavorTypeU3Ek__BackingField_24() const { return ___U3CFlavorTypeU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CFlavorTypeU3Ek__BackingField_24() { return &___U3CFlavorTypeU3Ek__BackingField_24; }
	inline void set_U3CFlavorTypeU3Ek__BackingField_24(String_t* value)
	{
		___U3CFlavorTypeU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFlavorTypeU3Ek__BackingField_24, value);
	}

	inline static int32_t get_offset_of_U3CWinnerDeclaredU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CWinnerDeclaredU3Ek__BackingField_25)); }
	inline String_t* get_U3CWinnerDeclaredU3Ek__BackingField_25() const { return ___U3CWinnerDeclaredU3Ek__BackingField_25; }
	inline String_t** get_address_of_U3CWinnerDeclaredU3Ek__BackingField_25() { return &___U3CWinnerDeclaredU3Ek__BackingField_25; }
	inline void set_U3CWinnerDeclaredU3Ek__BackingField_25(String_t* value)
	{
		___U3CWinnerDeclaredU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWinnerDeclaredU3Ek__BackingField_25, value);
	}

	inline static int32_t get_offset_of_U3CTournamentIDU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CTournamentIDU3Ek__BackingField_26)); }
	inline String_t* get_U3CTournamentIDU3Ek__BackingField_26() const { return ___U3CTournamentIDU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CTournamentIDU3Ek__BackingField_26() { return &___U3CTournamentIDU3Ek__BackingField_26; }
	inline void set_U3CTournamentIDU3Ek__BackingField_26(String_t* value)
	{
		___U3CTournamentIDU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTournamentIDU3Ek__BackingField_26, value);
	}

	inline static int32_t get_offset_of_U3CUnfinishedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(TournamentResult_t3039471716, ___U3CUnfinishedU3Ek__BackingField_27)); }
	inline Nullable_1_t334943763  get_U3CUnfinishedU3Ek__BackingField_27() const { return ___U3CUnfinishedU3Ek__BackingField_27; }
	inline Nullable_1_t334943763 * get_address_of_U3CUnfinishedU3Ek__BackingField_27() { return &___U3CUnfinishedU3Ek__BackingField_27; }
	inline void set_U3CUnfinishedU3Ek__BackingField_27(Nullable_1_t334943763  value)
	{
		___U3CUnfinishedU3Ek__BackingField_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult
struct TournamentResult_t3039471716_marshaled_pinvoke
{
	int32_t ___showPlayTypeAgainButton_0;
	int32_t ___showPlayAnotherTournButton_1;
	int32_t ___reEnterableByUser_2;
	PlayerData_t1227508857_marshaled_pinvoke* ___PlayerData_3;
	PlayerData_t1227508857_marshaled_pinvoke ___userHighScoreData_4;
	char* ___is_P1_5;
	int32_t ___canWinItNow_6;
	int32_t ___winItNowRemainingSeconds_7;
	char** ___U3CprizeValueU3Ek__BackingField_8;
	char* ___U3Cunplayed_game_idU3Ek__BackingField_9;
	char* ___U3CFeeU3Ek__BackingField_10;
	char* ___U3CFlavorDescriptionU3Ek__BackingField_11;
	char* ___U3CFlavorTypeIDU3Ek__BackingField_12;
	char* ___U3CGameIDU3Ek__BackingField_13;
	char* ___U3CStartDateU3Ek__BackingField_14;
	int32_t ___U3CclosedU3Ek__BackingField_15;
	char* ___U3CMaxPlayersU3Ek__BackingField_16;
	char* ___U3CEndDateU3Ek__BackingField_17;
	char* ___U3CFlavorNameU3Ek__BackingField_18;
	int32_t ___U3CPlayerWonU3Ek__BackingField_19;
	char* ___U3CNumPlayersU3Ek__BackingField_20;
	char* ___U3CWinningsU3Ek__BackingField_21;
	char* ___U3CGameNameU3Ek__BackingField_22;
	char* ___U3CTotalPrizeAmountU3Ek__BackingField_23;
	char* ___U3CFlavorTypeU3Ek__BackingField_24;
	char* ___U3CWinnerDeclaredU3Ek__BackingField_25;
	char* ___U3CTournamentIDU3Ek__BackingField_26;
	Nullable_1_t334943763  ___U3CUnfinishedU3Ek__BackingField_27;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult
struct TournamentResult_t3039471716_marshaled_com
{
	int32_t ___showPlayTypeAgainButton_0;
	int32_t ___showPlayAnotherTournButton_1;
	int32_t ___reEnterableByUser_2;
	PlayerData_t1227508857_marshaled_com* ___PlayerData_3;
	PlayerData_t1227508857_marshaled_com ___userHighScoreData_4;
	Il2CppChar* ___is_P1_5;
	int32_t ___canWinItNow_6;
	int32_t ___winItNowRemainingSeconds_7;
	Il2CppChar** ___U3CprizeValueU3Ek__BackingField_8;
	Il2CppChar* ___U3Cunplayed_game_idU3Ek__BackingField_9;
	Il2CppChar* ___U3CFeeU3Ek__BackingField_10;
	Il2CppChar* ___U3CFlavorDescriptionU3Ek__BackingField_11;
	Il2CppChar* ___U3CFlavorTypeIDU3Ek__BackingField_12;
	Il2CppChar* ___U3CGameIDU3Ek__BackingField_13;
	Il2CppChar* ___U3CStartDateU3Ek__BackingField_14;
	int32_t ___U3CclosedU3Ek__BackingField_15;
	Il2CppChar* ___U3CMaxPlayersU3Ek__BackingField_16;
	Il2CppChar* ___U3CEndDateU3Ek__BackingField_17;
	Il2CppChar* ___U3CFlavorNameU3Ek__BackingField_18;
	int32_t ___U3CPlayerWonU3Ek__BackingField_19;
	Il2CppChar* ___U3CNumPlayersU3Ek__BackingField_20;
	Il2CppChar* ___U3CWinningsU3Ek__BackingField_21;
	Il2CppChar* ___U3CGameNameU3Ek__BackingField_22;
	Il2CppChar* ___U3CTotalPrizeAmountU3Ek__BackingField_23;
	Il2CppChar* ___U3CFlavorTypeU3Ek__BackingField_24;
	Il2CppChar* ___U3CWinnerDeclaredU3Ek__BackingField_25;
	Il2CppChar* ___U3CTournamentIDU3Ek__BackingField_26;
	Nullable_1_t334943763  ___U3CUnfinishedU3Ek__BackingField_27;
};
