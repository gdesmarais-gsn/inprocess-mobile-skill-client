#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Requests.Tournament.GameHistoryRequestData
struct GameHistoryRequestData_t2381557741;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData>
struct List_1_t2065092575;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel
struct  GameHistoryScreenModel_t2520348191  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.GameListData GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::_gameListData
	GameListData_t2961126766 * ____gameListData_0;
	// GSN.Skill.Phoenix.Requests.Tournament.GameHistoryRequestData GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::_gameHistory
	GameHistoryRequestData_t2381557741 * ____gameHistory_1;
	// System.Int32 GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::_startingIndex
	int32_t ____startingIndex_3;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.TournamentHistoryData> GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::_completedTournaments
	List_1_t2065092575 * ____completedTournaments_4;

public:
	inline static int32_t get_offset_of__gameListData_0() { return static_cast<int32_t>(offsetof(GameHistoryScreenModel_t2520348191, ____gameListData_0)); }
	inline GameListData_t2961126766 * get__gameListData_0() const { return ____gameListData_0; }
	inline GameListData_t2961126766 ** get_address_of__gameListData_0() { return &____gameListData_0; }
	inline void set__gameListData_0(GameListData_t2961126766 * value)
	{
		____gameListData_0 = value;
		Il2CppCodeGenWriteBarrier(&____gameListData_0, value);
	}

	inline static int32_t get_offset_of__gameHistory_1() { return static_cast<int32_t>(offsetof(GameHistoryScreenModel_t2520348191, ____gameHistory_1)); }
	inline GameHistoryRequestData_t2381557741 * get__gameHistory_1() const { return ____gameHistory_1; }
	inline GameHistoryRequestData_t2381557741 ** get_address_of__gameHistory_1() { return &____gameHistory_1; }
	inline void set__gameHistory_1(GameHistoryRequestData_t2381557741 * value)
	{
		____gameHistory_1 = value;
		Il2CppCodeGenWriteBarrier(&____gameHistory_1, value);
	}

	inline static int32_t get_offset_of__startingIndex_3() { return static_cast<int32_t>(offsetof(GameHistoryScreenModel_t2520348191, ____startingIndex_3)); }
	inline int32_t get__startingIndex_3() const { return ____startingIndex_3; }
	inline int32_t* get_address_of__startingIndex_3() { return &____startingIndex_3; }
	inline void set__startingIndex_3(int32_t value)
	{
		____startingIndex_3 = value;
	}

	inline static int32_t get_offset_of__completedTournaments_4() { return static_cast<int32_t>(offsetof(GameHistoryScreenModel_t2520348191, ____completedTournaments_4)); }
	inline List_1_t2065092575 * get__completedTournaments_4() const { return ____completedTournaments_4; }
	inline List_1_t2065092575 ** get_address_of__completedTournaments_4() { return &____completedTournaments_4; }
	inline void set__completedTournaments_4(List_1_t2065092575 * value)
	{
		____completedTournaments_4 = value;
		Il2CppCodeGenWriteBarrier(&____completedTournaments_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
