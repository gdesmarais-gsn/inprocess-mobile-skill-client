#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Decimal724701077.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourna440573673.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourna124904856.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.TournamentHistoryData
struct  TournamentHistoryData_t2695971443 
{
public:
	// System.Decimal GSN.Skill.Phoenix.TournamentHistoryData::fee
	Decimal_t724701077  ___fee_0;
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentType GSN.Skill.Phoenix.TournamentHistoryData::type
	int32_t ___type_1;
	// System.String GSN.Skill.Phoenix.TournamentHistoryData::typeFriendlyName
	String_t* ___typeFriendlyName_2;
	// System.String GSN.Skill.Phoenix.TournamentHistoryData::gameResource
	String_t* ___gameResource_3;
	// System.String GSN.Skill.Phoenix.TournamentHistoryData::gameFriendlyName
	String_t* ___gameFriendlyName_4;
	// System.Boolean GSN.Skill.Phoenix.TournamentHistoryData::closed
	bool ___closed_5;
	// System.Boolean GSN.Skill.Phoenix.TournamentHistoryData::playerWon
	bool ___playerWon_6;
	// System.Decimal GSN.Skill.Phoenix.TournamentHistoryData::amountWon
	Decimal_t724701077  ___amountWon_7;
	// System.Int32 GSN.Skill.Phoenix.TournamentHistoryData::tournID
	int32_t ___tournID_8;
	// System.Boolean GSN.Skill.Phoenix.TournamentHistoryData::unfinished
	bool ___unfinished_9;
	// System.Nullable`1<System.Int32> GSN.Skill.Phoenix.TournamentHistoryData::unplayedGameID
	Nullable_1_t334943763  ___unplayedGameID_10;
	// System.Int32 GSN.Skill.Phoenix.TournamentHistoryData::gameID
	int32_t ___gameID_11;
	// System.Int32 GSN.Skill.Phoenix.TournamentHistoryData::flavorID
	int32_t ___flavorID_12;
	// System.Int32 GSN.Skill.Phoenix.TournamentHistoryData::flavorTypeID
	int32_t ___flavorTypeID_13;
	// System.Int32 GSN.Skill.Phoenix.TournamentHistoryData::numPlayers
	int32_t ___numPlayers_14;
	// System.Int32 GSN.Skill.Phoenix.TournamentHistoryData::maxPlayers
	int32_t ___maxPlayers_15;
	// System.Decimal GSN.Skill.Phoenix.TournamentHistoryData::totalPrizePool
	Decimal_t724701077  ___totalPrizePool_16;
	// System.DateTime GSN.Skill.Phoenix.TournamentHistoryData::startDate
	DateTime_t693205669  ___startDate_17;
	// System.DateTime GSN.Skill.Phoenix.TournamentHistoryData::endDate
	DateTime_t693205669  ___endDate_18;
	// GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/TournamentState GSN.Skill.Phoenix.TournamentHistoryData::state
	int32_t ___state_19;

public:
	inline static int32_t get_offset_of_fee_0() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___fee_0)); }
	inline Decimal_t724701077  get_fee_0() const { return ___fee_0; }
	inline Decimal_t724701077 * get_address_of_fee_0() { return &___fee_0; }
	inline void set_fee_0(Decimal_t724701077  value)
	{
		___fee_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_typeFriendlyName_2() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___typeFriendlyName_2)); }
	inline String_t* get_typeFriendlyName_2() const { return ___typeFriendlyName_2; }
	inline String_t** get_address_of_typeFriendlyName_2() { return &___typeFriendlyName_2; }
	inline void set_typeFriendlyName_2(String_t* value)
	{
		___typeFriendlyName_2 = value;
		Il2CppCodeGenWriteBarrier(&___typeFriendlyName_2, value);
	}

	inline static int32_t get_offset_of_gameResource_3() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___gameResource_3)); }
	inline String_t* get_gameResource_3() const { return ___gameResource_3; }
	inline String_t** get_address_of_gameResource_3() { return &___gameResource_3; }
	inline void set_gameResource_3(String_t* value)
	{
		___gameResource_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameResource_3, value);
	}

	inline static int32_t get_offset_of_gameFriendlyName_4() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___gameFriendlyName_4)); }
	inline String_t* get_gameFriendlyName_4() const { return ___gameFriendlyName_4; }
	inline String_t** get_address_of_gameFriendlyName_4() { return &___gameFriendlyName_4; }
	inline void set_gameFriendlyName_4(String_t* value)
	{
		___gameFriendlyName_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameFriendlyName_4, value);
	}

	inline static int32_t get_offset_of_closed_5() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___closed_5)); }
	inline bool get_closed_5() const { return ___closed_5; }
	inline bool* get_address_of_closed_5() { return &___closed_5; }
	inline void set_closed_5(bool value)
	{
		___closed_5 = value;
	}

	inline static int32_t get_offset_of_playerWon_6() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___playerWon_6)); }
	inline bool get_playerWon_6() const { return ___playerWon_6; }
	inline bool* get_address_of_playerWon_6() { return &___playerWon_6; }
	inline void set_playerWon_6(bool value)
	{
		___playerWon_6 = value;
	}

	inline static int32_t get_offset_of_amountWon_7() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___amountWon_7)); }
	inline Decimal_t724701077  get_amountWon_7() const { return ___amountWon_7; }
	inline Decimal_t724701077 * get_address_of_amountWon_7() { return &___amountWon_7; }
	inline void set_amountWon_7(Decimal_t724701077  value)
	{
		___amountWon_7 = value;
	}

	inline static int32_t get_offset_of_tournID_8() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___tournID_8)); }
	inline int32_t get_tournID_8() const { return ___tournID_8; }
	inline int32_t* get_address_of_tournID_8() { return &___tournID_8; }
	inline void set_tournID_8(int32_t value)
	{
		___tournID_8 = value;
	}

	inline static int32_t get_offset_of_unfinished_9() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___unfinished_9)); }
	inline bool get_unfinished_9() const { return ___unfinished_9; }
	inline bool* get_address_of_unfinished_9() { return &___unfinished_9; }
	inline void set_unfinished_9(bool value)
	{
		___unfinished_9 = value;
	}

	inline static int32_t get_offset_of_unplayedGameID_10() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___unplayedGameID_10)); }
	inline Nullable_1_t334943763  get_unplayedGameID_10() const { return ___unplayedGameID_10; }
	inline Nullable_1_t334943763 * get_address_of_unplayedGameID_10() { return &___unplayedGameID_10; }
	inline void set_unplayedGameID_10(Nullable_1_t334943763  value)
	{
		___unplayedGameID_10 = value;
	}

	inline static int32_t get_offset_of_gameID_11() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___gameID_11)); }
	inline int32_t get_gameID_11() const { return ___gameID_11; }
	inline int32_t* get_address_of_gameID_11() { return &___gameID_11; }
	inline void set_gameID_11(int32_t value)
	{
		___gameID_11 = value;
	}

	inline static int32_t get_offset_of_flavorID_12() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___flavorID_12)); }
	inline int32_t get_flavorID_12() const { return ___flavorID_12; }
	inline int32_t* get_address_of_flavorID_12() { return &___flavorID_12; }
	inline void set_flavorID_12(int32_t value)
	{
		___flavorID_12 = value;
	}

	inline static int32_t get_offset_of_flavorTypeID_13() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___flavorTypeID_13)); }
	inline int32_t get_flavorTypeID_13() const { return ___flavorTypeID_13; }
	inline int32_t* get_address_of_flavorTypeID_13() { return &___flavorTypeID_13; }
	inline void set_flavorTypeID_13(int32_t value)
	{
		___flavorTypeID_13 = value;
	}

	inline static int32_t get_offset_of_numPlayers_14() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___numPlayers_14)); }
	inline int32_t get_numPlayers_14() const { return ___numPlayers_14; }
	inline int32_t* get_address_of_numPlayers_14() { return &___numPlayers_14; }
	inline void set_numPlayers_14(int32_t value)
	{
		___numPlayers_14 = value;
	}

	inline static int32_t get_offset_of_maxPlayers_15() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___maxPlayers_15)); }
	inline int32_t get_maxPlayers_15() const { return ___maxPlayers_15; }
	inline int32_t* get_address_of_maxPlayers_15() { return &___maxPlayers_15; }
	inline void set_maxPlayers_15(int32_t value)
	{
		___maxPlayers_15 = value;
	}

	inline static int32_t get_offset_of_totalPrizePool_16() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___totalPrizePool_16)); }
	inline Decimal_t724701077  get_totalPrizePool_16() const { return ___totalPrizePool_16; }
	inline Decimal_t724701077 * get_address_of_totalPrizePool_16() { return &___totalPrizePool_16; }
	inline void set_totalPrizePool_16(Decimal_t724701077  value)
	{
		___totalPrizePool_16 = value;
	}

	inline static int32_t get_offset_of_startDate_17() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___startDate_17)); }
	inline DateTime_t693205669  get_startDate_17() const { return ___startDate_17; }
	inline DateTime_t693205669 * get_address_of_startDate_17() { return &___startDate_17; }
	inline void set_startDate_17(DateTime_t693205669  value)
	{
		___startDate_17 = value;
	}

	inline static int32_t get_offset_of_endDate_18() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___endDate_18)); }
	inline DateTime_t693205669  get_endDate_18() const { return ___endDate_18; }
	inline DateTime_t693205669 * get_address_of_endDate_18() { return &___endDate_18; }
	inline void set_endDate_18(DateTime_t693205669  value)
	{
		___endDate_18 = value;
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(TournamentHistoryData_t2695971443, ___state_19)); }
	inline int32_t get_state_19() const { return ___state_19; }
	inline int32_t* get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(int32_t value)
	{
		___state_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.TournamentHistoryData
struct TournamentHistoryData_t2695971443_marshaled_pinvoke
{
	Decimal_t724701077  ___fee_0;
	int32_t ___type_1;
	char* ___typeFriendlyName_2;
	char* ___gameResource_3;
	char* ___gameFriendlyName_4;
	int32_t ___closed_5;
	int32_t ___playerWon_6;
	Decimal_t724701077  ___amountWon_7;
	int32_t ___tournID_8;
	int32_t ___unfinished_9;
	Nullable_1_t334943763  ___unplayedGameID_10;
	int32_t ___gameID_11;
	int32_t ___flavorID_12;
	int32_t ___flavorTypeID_13;
	int32_t ___numPlayers_14;
	int32_t ___maxPlayers_15;
	Decimal_t724701077  ___totalPrizePool_16;
	DateTime_t693205669  ___startDate_17;
	DateTime_t693205669  ___endDate_18;
	int32_t ___state_19;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.TournamentHistoryData
struct TournamentHistoryData_t2695971443_marshaled_com
{
	Decimal_t724701077  ___fee_0;
	int32_t ___type_1;
	Il2CppChar* ___typeFriendlyName_2;
	Il2CppChar* ___gameResource_3;
	Il2CppChar* ___gameFriendlyName_4;
	int32_t ___closed_5;
	int32_t ___playerWon_6;
	Decimal_t724701077  ___amountWon_7;
	int32_t ___tournID_8;
	int32_t ___unfinished_9;
	Nullable_1_t334943763  ___unplayedGameID_10;
	int32_t ___gameID_11;
	int32_t ___flavorID_12;
	int32_t ___flavorTypeID_13;
	int32_t ___numPlayers_14;
	int32_t ___maxPlayers_15;
	Decimal_t724701077  ___totalPrizePool_16;
	DateTime_t693205669  ___startDate_17;
	DateTime_t693205669  ___endDate_18;
	int32_t ___state_19;
};
