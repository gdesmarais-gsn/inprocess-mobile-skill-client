#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player>
struct List_1_t1737039819;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Decimal724701077.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentHist2695971443.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData
struct  TournResultData_t3917028247 
{
public:
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::showPlayTypeAgainButton
	bool ___showPlayTypeAgainButton_0;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::showPlayAnotherTournButton
	bool ___showPlayAnotherTournButton_1;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::reEnterableByUser
	bool ___reEnterableByUser_2;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::p1Game
	bool ___p1Game_3;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::canWinItNow
	bool ___canWinItNow_4;
	// System.Decimal GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::winItNowCost
	Decimal_t724701077  ___winItNowCost_5;
	// System.Int32 GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::winItNowRemainingSeconds
	int32_t ___winItNowRemainingSeconds_6;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player> GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::players
	List_1_t1737039819 * ___players_7;
	// GSN.Skill.Phoenix.TournamentHistoryData GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::history
	TournamentHistoryData_t2695971443  ___history_8;
	// System.Int32 GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::minPlayerScore
	int32_t ___minPlayerScore_9;
	// System.Int32 GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::maxPlayerScore
	int32_t ___maxPlayerScore_10;
	// System.Int32 GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData::maxCurrentUserScore
	int32_t ___maxCurrentUserScore_11;

public:
	inline static int32_t get_offset_of_showPlayTypeAgainButton_0() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___showPlayTypeAgainButton_0)); }
	inline bool get_showPlayTypeAgainButton_0() const { return ___showPlayTypeAgainButton_0; }
	inline bool* get_address_of_showPlayTypeAgainButton_0() { return &___showPlayTypeAgainButton_0; }
	inline void set_showPlayTypeAgainButton_0(bool value)
	{
		___showPlayTypeAgainButton_0 = value;
	}

	inline static int32_t get_offset_of_showPlayAnotherTournButton_1() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___showPlayAnotherTournButton_1)); }
	inline bool get_showPlayAnotherTournButton_1() const { return ___showPlayAnotherTournButton_1; }
	inline bool* get_address_of_showPlayAnotherTournButton_1() { return &___showPlayAnotherTournButton_1; }
	inline void set_showPlayAnotherTournButton_1(bool value)
	{
		___showPlayAnotherTournButton_1 = value;
	}

	inline static int32_t get_offset_of_reEnterableByUser_2() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___reEnterableByUser_2)); }
	inline bool get_reEnterableByUser_2() const { return ___reEnterableByUser_2; }
	inline bool* get_address_of_reEnterableByUser_2() { return &___reEnterableByUser_2; }
	inline void set_reEnterableByUser_2(bool value)
	{
		___reEnterableByUser_2 = value;
	}

	inline static int32_t get_offset_of_p1Game_3() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___p1Game_3)); }
	inline bool get_p1Game_3() const { return ___p1Game_3; }
	inline bool* get_address_of_p1Game_3() { return &___p1Game_3; }
	inline void set_p1Game_3(bool value)
	{
		___p1Game_3 = value;
	}

	inline static int32_t get_offset_of_canWinItNow_4() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___canWinItNow_4)); }
	inline bool get_canWinItNow_4() const { return ___canWinItNow_4; }
	inline bool* get_address_of_canWinItNow_4() { return &___canWinItNow_4; }
	inline void set_canWinItNow_4(bool value)
	{
		___canWinItNow_4 = value;
	}

	inline static int32_t get_offset_of_winItNowCost_5() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___winItNowCost_5)); }
	inline Decimal_t724701077  get_winItNowCost_5() const { return ___winItNowCost_5; }
	inline Decimal_t724701077 * get_address_of_winItNowCost_5() { return &___winItNowCost_5; }
	inline void set_winItNowCost_5(Decimal_t724701077  value)
	{
		___winItNowCost_5 = value;
	}

	inline static int32_t get_offset_of_winItNowRemainingSeconds_6() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___winItNowRemainingSeconds_6)); }
	inline int32_t get_winItNowRemainingSeconds_6() const { return ___winItNowRemainingSeconds_6; }
	inline int32_t* get_address_of_winItNowRemainingSeconds_6() { return &___winItNowRemainingSeconds_6; }
	inline void set_winItNowRemainingSeconds_6(int32_t value)
	{
		___winItNowRemainingSeconds_6 = value;
	}

	inline static int32_t get_offset_of_players_7() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___players_7)); }
	inline List_1_t1737039819 * get_players_7() const { return ___players_7; }
	inline List_1_t1737039819 ** get_address_of_players_7() { return &___players_7; }
	inline void set_players_7(List_1_t1737039819 * value)
	{
		___players_7 = value;
		Il2CppCodeGenWriteBarrier(&___players_7, value);
	}

	inline static int32_t get_offset_of_history_8() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___history_8)); }
	inline TournamentHistoryData_t2695971443  get_history_8() const { return ___history_8; }
	inline TournamentHistoryData_t2695971443 * get_address_of_history_8() { return &___history_8; }
	inline void set_history_8(TournamentHistoryData_t2695971443  value)
	{
		___history_8 = value;
	}

	inline static int32_t get_offset_of_minPlayerScore_9() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___minPlayerScore_9)); }
	inline int32_t get_minPlayerScore_9() const { return ___minPlayerScore_9; }
	inline int32_t* get_address_of_minPlayerScore_9() { return &___minPlayerScore_9; }
	inline void set_minPlayerScore_9(int32_t value)
	{
		___minPlayerScore_9 = value;
	}

	inline static int32_t get_offset_of_maxPlayerScore_10() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___maxPlayerScore_10)); }
	inline int32_t get_maxPlayerScore_10() const { return ___maxPlayerScore_10; }
	inline int32_t* get_address_of_maxPlayerScore_10() { return &___maxPlayerScore_10; }
	inline void set_maxPlayerScore_10(int32_t value)
	{
		___maxPlayerScore_10 = value;
	}

	inline static int32_t get_offset_of_maxCurrentUserScore_11() { return static_cast<int32_t>(offsetof(TournResultData_t3917028247, ___maxCurrentUserScore_11)); }
	inline int32_t get_maxCurrentUserScore_11() const { return ___maxCurrentUserScore_11; }
	inline int32_t* get_address_of_maxCurrentUserScore_11() { return &___maxCurrentUserScore_11; }
	inline void set_maxCurrentUserScore_11(int32_t value)
	{
		___maxCurrentUserScore_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData
struct TournResultData_t3917028247_marshaled_pinvoke
{
	int32_t ___showPlayTypeAgainButton_0;
	int32_t ___showPlayAnotherTournButton_1;
	int32_t ___reEnterableByUser_2;
	int32_t ___p1Game_3;
	int32_t ___canWinItNow_4;
	Decimal_t724701077  ___winItNowCost_5;
	int32_t ___winItNowRemainingSeconds_6;
	List_1_t1737039819 * ___players_7;
	TournamentHistoryData_t2695971443_marshaled_pinvoke ___history_8;
	int32_t ___minPlayerScore_9;
	int32_t ___maxPlayerScore_10;
	int32_t ___maxCurrentUserScore_11;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData
struct TournResultData_t3917028247_marshaled_com
{
	int32_t ___showPlayTypeAgainButton_0;
	int32_t ___showPlayAnotherTournButton_1;
	int32_t ___reEnterableByUser_2;
	int32_t ___p1Game_3;
	int32_t ___canWinItNow_4;
	Decimal_t724701077  ___winItNowCost_5;
	int32_t ___winItNowRemainingSeconds_6;
	List_1_t1737039819 * ___players_7;
	TournamentHistoryData_t2695971443_marshaled_com ___history_8;
	int32_t ___minPlayerScore_9;
	int32_t ___maxPlayerScore_10;
	int32_t ___maxCurrentUserScore_11;
};
