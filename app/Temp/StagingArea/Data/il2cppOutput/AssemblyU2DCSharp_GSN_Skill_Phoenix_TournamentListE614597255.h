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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Decimal>
struct List_1_t93822209;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Decimal724701077.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourna440573673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.TournamentListEvent/TournamentData
struct  TournamentData_t614597255 
{
public:
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::numPlayers
	int32_t ___numPlayers_0;
	// System.Decimal GSN.Skill.Phoenix.TournamentListEvent/TournamentData::totalPrizePool
	Decimal_t724701077  ___totalPrizePool_1;
	// System.String GSN.Skill.Phoenix.TournamentListEvent/TournamentData::tournamentName
	String_t* ___tournamentName_2;
	// System.Decimal GSN.Skill.Phoenix.TournamentListEvent/TournamentData::fee
	Decimal_t724701077  ___fee_3;
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::flavorID
	int32_t ___flavorID_4;
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::flavorTypeID
	int32_t ___flavorTypeID_5;
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::gameID
	int32_t ___gameID_6;
	// System.String GSN.Skill.Phoenix.TournamentListEvent/TournamentData::gameResource
	String_t* ___gameResource_7;
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentType GSN.Skill.Phoenix.TournamentListEvent/TournamentData::type
	int32_t ___type_8;
	// System.String GSN.Skill.Phoenix.TournamentListEvent/TournamentData::typeFriendlyName
	String_t* ___typeFriendlyName_9;
	// System.String GSN.Skill.Phoenix.TournamentListEvent/TournamentData::gameFriendlyName
	String_t* ___gameFriendlyName_10;
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::rewardsPointsBase
	int32_t ___rewardsPointsBase_11;
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::rewardPointsMultiplier
	int32_t ___rewardPointsMultiplier_12;
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::minCashGamesRequired
	int32_t ___minCashGamesRequired_13;
	// System.Int32 GSN.Skill.Phoenix.TournamentListEvent/TournamentData::minGameSpecificPlaysRequired
	int32_t ___minGameSpecificPlaysRequired_14;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Phoenix.TournamentListEvent/TournamentData::auxDataStrings
	List_1_t1398341365 * ___auxDataStrings_15;
	// System.Collections.Generic.List`1<System.Decimal> GSN.Skill.Phoenix.TournamentListEvent/TournamentData::prizes
	List_1_t93822209 * ___prizes_16;

public:
	inline static int32_t get_offset_of_numPlayers_0() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___numPlayers_0)); }
	inline int32_t get_numPlayers_0() const { return ___numPlayers_0; }
	inline int32_t* get_address_of_numPlayers_0() { return &___numPlayers_0; }
	inline void set_numPlayers_0(int32_t value)
	{
		___numPlayers_0 = value;
	}

	inline static int32_t get_offset_of_totalPrizePool_1() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___totalPrizePool_1)); }
	inline Decimal_t724701077  get_totalPrizePool_1() const { return ___totalPrizePool_1; }
	inline Decimal_t724701077 * get_address_of_totalPrizePool_1() { return &___totalPrizePool_1; }
	inline void set_totalPrizePool_1(Decimal_t724701077  value)
	{
		___totalPrizePool_1 = value;
	}

	inline static int32_t get_offset_of_tournamentName_2() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___tournamentName_2)); }
	inline String_t* get_tournamentName_2() const { return ___tournamentName_2; }
	inline String_t** get_address_of_tournamentName_2() { return &___tournamentName_2; }
	inline void set_tournamentName_2(String_t* value)
	{
		___tournamentName_2 = value;
		Il2CppCodeGenWriteBarrier(&___tournamentName_2, value);
	}

	inline static int32_t get_offset_of_fee_3() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___fee_3)); }
	inline Decimal_t724701077  get_fee_3() const { return ___fee_3; }
	inline Decimal_t724701077 * get_address_of_fee_3() { return &___fee_3; }
	inline void set_fee_3(Decimal_t724701077  value)
	{
		___fee_3 = value;
	}

	inline static int32_t get_offset_of_flavorID_4() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___flavorID_4)); }
	inline int32_t get_flavorID_4() const { return ___flavorID_4; }
	inline int32_t* get_address_of_flavorID_4() { return &___flavorID_4; }
	inline void set_flavorID_4(int32_t value)
	{
		___flavorID_4 = value;
	}

	inline static int32_t get_offset_of_flavorTypeID_5() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___flavorTypeID_5)); }
	inline int32_t get_flavorTypeID_5() const { return ___flavorTypeID_5; }
	inline int32_t* get_address_of_flavorTypeID_5() { return &___flavorTypeID_5; }
	inline void set_flavorTypeID_5(int32_t value)
	{
		___flavorTypeID_5 = value;
	}

	inline static int32_t get_offset_of_gameID_6() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___gameID_6)); }
	inline int32_t get_gameID_6() const { return ___gameID_6; }
	inline int32_t* get_address_of_gameID_6() { return &___gameID_6; }
	inline void set_gameID_6(int32_t value)
	{
		___gameID_6 = value;
	}

	inline static int32_t get_offset_of_gameResource_7() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___gameResource_7)); }
	inline String_t* get_gameResource_7() const { return ___gameResource_7; }
	inline String_t** get_address_of_gameResource_7() { return &___gameResource_7; }
	inline void set_gameResource_7(String_t* value)
	{
		___gameResource_7 = value;
		Il2CppCodeGenWriteBarrier(&___gameResource_7, value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_typeFriendlyName_9() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___typeFriendlyName_9)); }
	inline String_t* get_typeFriendlyName_9() const { return ___typeFriendlyName_9; }
	inline String_t** get_address_of_typeFriendlyName_9() { return &___typeFriendlyName_9; }
	inline void set_typeFriendlyName_9(String_t* value)
	{
		___typeFriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier(&___typeFriendlyName_9, value);
	}

	inline static int32_t get_offset_of_gameFriendlyName_10() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___gameFriendlyName_10)); }
	inline String_t* get_gameFriendlyName_10() const { return ___gameFriendlyName_10; }
	inline String_t** get_address_of_gameFriendlyName_10() { return &___gameFriendlyName_10; }
	inline void set_gameFriendlyName_10(String_t* value)
	{
		___gameFriendlyName_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameFriendlyName_10, value);
	}

	inline static int32_t get_offset_of_rewardsPointsBase_11() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___rewardsPointsBase_11)); }
	inline int32_t get_rewardsPointsBase_11() const { return ___rewardsPointsBase_11; }
	inline int32_t* get_address_of_rewardsPointsBase_11() { return &___rewardsPointsBase_11; }
	inline void set_rewardsPointsBase_11(int32_t value)
	{
		___rewardsPointsBase_11 = value;
	}

	inline static int32_t get_offset_of_rewardPointsMultiplier_12() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___rewardPointsMultiplier_12)); }
	inline int32_t get_rewardPointsMultiplier_12() const { return ___rewardPointsMultiplier_12; }
	inline int32_t* get_address_of_rewardPointsMultiplier_12() { return &___rewardPointsMultiplier_12; }
	inline void set_rewardPointsMultiplier_12(int32_t value)
	{
		___rewardPointsMultiplier_12 = value;
	}

	inline static int32_t get_offset_of_minCashGamesRequired_13() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___minCashGamesRequired_13)); }
	inline int32_t get_minCashGamesRequired_13() const { return ___minCashGamesRequired_13; }
	inline int32_t* get_address_of_minCashGamesRequired_13() { return &___minCashGamesRequired_13; }
	inline void set_minCashGamesRequired_13(int32_t value)
	{
		___minCashGamesRequired_13 = value;
	}

	inline static int32_t get_offset_of_minGameSpecificPlaysRequired_14() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___minGameSpecificPlaysRequired_14)); }
	inline int32_t get_minGameSpecificPlaysRequired_14() const { return ___minGameSpecificPlaysRequired_14; }
	inline int32_t* get_address_of_minGameSpecificPlaysRequired_14() { return &___minGameSpecificPlaysRequired_14; }
	inline void set_minGameSpecificPlaysRequired_14(int32_t value)
	{
		___minGameSpecificPlaysRequired_14 = value;
	}

	inline static int32_t get_offset_of_auxDataStrings_15() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___auxDataStrings_15)); }
	inline List_1_t1398341365 * get_auxDataStrings_15() const { return ___auxDataStrings_15; }
	inline List_1_t1398341365 ** get_address_of_auxDataStrings_15() { return &___auxDataStrings_15; }
	inline void set_auxDataStrings_15(List_1_t1398341365 * value)
	{
		___auxDataStrings_15 = value;
		Il2CppCodeGenWriteBarrier(&___auxDataStrings_15, value);
	}

	inline static int32_t get_offset_of_prizes_16() { return static_cast<int32_t>(offsetof(TournamentData_t614597255, ___prizes_16)); }
	inline List_1_t93822209 * get_prizes_16() const { return ___prizes_16; }
	inline List_1_t93822209 ** get_address_of_prizes_16() { return &___prizes_16; }
	inline void set_prizes_16(List_1_t93822209 * value)
	{
		___prizes_16 = value;
		Il2CppCodeGenWriteBarrier(&___prizes_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.TournamentListEvent/TournamentData
struct TournamentData_t614597255_marshaled_pinvoke
{
	int32_t ___numPlayers_0;
	Decimal_t724701077  ___totalPrizePool_1;
	char* ___tournamentName_2;
	Decimal_t724701077  ___fee_3;
	int32_t ___flavorID_4;
	int32_t ___flavorTypeID_5;
	int32_t ___gameID_6;
	char* ___gameResource_7;
	int32_t ___type_8;
	char* ___typeFriendlyName_9;
	char* ___gameFriendlyName_10;
	int32_t ___rewardsPointsBase_11;
	int32_t ___rewardPointsMultiplier_12;
	int32_t ___minCashGamesRequired_13;
	int32_t ___minGameSpecificPlaysRequired_14;
	List_1_t1398341365 * ___auxDataStrings_15;
	List_1_t93822209 * ___prizes_16;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.TournamentListEvent/TournamentData
struct TournamentData_t614597255_marshaled_com
{
	int32_t ___numPlayers_0;
	Decimal_t724701077  ___totalPrizePool_1;
	Il2CppChar* ___tournamentName_2;
	Decimal_t724701077  ___fee_3;
	int32_t ___flavorID_4;
	int32_t ___flavorTypeID_5;
	int32_t ___gameID_6;
	Il2CppChar* ___gameResource_7;
	int32_t ___type_8;
	Il2CppChar* ___typeFriendlyName_9;
	Il2CppChar* ___gameFriendlyName_10;
	int32_t ___rewardsPointsBase_11;
	int32_t ___rewardPointsMultiplier_12;
	int32_t ___minCashGamesRequired_13;
	int32_t ___minGameSpecificPlaysRequired_14;
	List_1_t1398341365 * ___auxDataStrings_15;
	List_1_t93822209 * ___prizes_16;
};
