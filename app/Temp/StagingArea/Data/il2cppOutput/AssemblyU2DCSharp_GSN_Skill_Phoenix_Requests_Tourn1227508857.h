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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData
struct  PlayerData_t1227508857 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData::Score
	String_t* ___Score_0;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData::Won
	String_t* ___Won_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData::Username
	String_t* ___Username_2;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData::UserID
	String_t* ___UserID_3;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData::GameStatus
	String_t* ___GameStatus_4;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData::Place
	String_t* ___Place_5;

public:
	inline static int32_t get_offset_of_Score_0() { return static_cast<int32_t>(offsetof(PlayerData_t1227508857, ___Score_0)); }
	inline String_t* get_Score_0() const { return ___Score_0; }
	inline String_t** get_address_of_Score_0() { return &___Score_0; }
	inline void set_Score_0(String_t* value)
	{
		___Score_0 = value;
		Il2CppCodeGenWriteBarrier(&___Score_0, value);
	}

	inline static int32_t get_offset_of_Won_1() { return static_cast<int32_t>(offsetof(PlayerData_t1227508857, ___Won_1)); }
	inline String_t* get_Won_1() const { return ___Won_1; }
	inline String_t** get_address_of_Won_1() { return &___Won_1; }
	inline void set_Won_1(String_t* value)
	{
		___Won_1 = value;
		Il2CppCodeGenWriteBarrier(&___Won_1, value);
	}

	inline static int32_t get_offset_of_Username_2() { return static_cast<int32_t>(offsetof(PlayerData_t1227508857, ___Username_2)); }
	inline String_t* get_Username_2() const { return ___Username_2; }
	inline String_t** get_address_of_Username_2() { return &___Username_2; }
	inline void set_Username_2(String_t* value)
	{
		___Username_2 = value;
		Il2CppCodeGenWriteBarrier(&___Username_2, value);
	}

	inline static int32_t get_offset_of_UserID_3() { return static_cast<int32_t>(offsetof(PlayerData_t1227508857, ___UserID_3)); }
	inline String_t* get_UserID_3() const { return ___UserID_3; }
	inline String_t** get_address_of_UserID_3() { return &___UserID_3; }
	inline void set_UserID_3(String_t* value)
	{
		___UserID_3 = value;
		Il2CppCodeGenWriteBarrier(&___UserID_3, value);
	}

	inline static int32_t get_offset_of_GameStatus_4() { return static_cast<int32_t>(offsetof(PlayerData_t1227508857, ___GameStatus_4)); }
	inline String_t* get_GameStatus_4() const { return ___GameStatus_4; }
	inline String_t** get_address_of_GameStatus_4() { return &___GameStatus_4; }
	inline void set_GameStatus_4(String_t* value)
	{
		___GameStatus_4 = value;
		Il2CppCodeGenWriteBarrier(&___GameStatus_4, value);
	}

	inline static int32_t get_offset_of_Place_5() { return static_cast<int32_t>(offsetof(PlayerData_t1227508857, ___Place_5)); }
	inline String_t* get_Place_5() const { return ___Place_5; }
	inline String_t** get_address_of_Place_5() { return &___Place_5; }
	inline void set_Place_5(String_t* value)
	{
		___Place_5 = value;
		Il2CppCodeGenWriteBarrier(&___Place_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData
struct PlayerData_t1227508857_marshaled_pinvoke
{
	char* ___Score_0;
	char* ___Won_1;
	char* ___Username_2;
	char* ___UserID_3;
	char* ___GameStatus_4;
	char* ___Place_5;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/PlayerData
struct PlayerData_t1227508857_marshaled_com
{
	Il2CppChar* ___Score_0;
	Il2CppChar* ___Won_1;
	Il2CppChar* ___Username_2;
	Il2CppChar* ___UserID_3;
	Il2CppChar* ___GameStatus_4;
	Il2CppChar* ___Place_5;
};
