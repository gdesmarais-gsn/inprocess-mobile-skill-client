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

// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData
struct  RequiredGameStartData_t3552965630 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData::tourn_session_id
	String_t* ___tourn_session_id_0;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData::tourn_id
	String_t* ___tourn_id_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData::unplayed_game_id
	String_t* ___unplayed_game_id_2;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData::gameServer
	String_t* ___gameServer_3;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData::join_record
	String_t* ___join_record_4;

public:
	inline static int32_t get_offset_of_tourn_session_id_0() { return static_cast<int32_t>(offsetof(RequiredGameStartData_t3552965630, ___tourn_session_id_0)); }
	inline String_t* get_tourn_session_id_0() const { return ___tourn_session_id_0; }
	inline String_t** get_address_of_tourn_session_id_0() { return &___tourn_session_id_0; }
	inline void set_tourn_session_id_0(String_t* value)
	{
		___tourn_session_id_0 = value;
		Il2CppCodeGenWriteBarrier(&___tourn_session_id_0, value);
	}

	inline static int32_t get_offset_of_tourn_id_1() { return static_cast<int32_t>(offsetof(RequiredGameStartData_t3552965630, ___tourn_id_1)); }
	inline String_t* get_tourn_id_1() const { return ___tourn_id_1; }
	inline String_t** get_address_of_tourn_id_1() { return &___tourn_id_1; }
	inline void set_tourn_id_1(String_t* value)
	{
		___tourn_id_1 = value;
		Il2CppCodeGenWriteBarrier(&___tourn_id_1, value);
	}

	inline static int32_t get_offset_of_unplayed_game_id_2() { return static_cast<int32_t>(offsetof(RequiredGameStartData_t3552965630, ___unplayed_game_id_2)); }
	inline String_t* get_unplayed_game_id_2() const { return ___unplayed_game_id_2; }
	inline String_t** get_address_of_unplayed_game_id_2() { return &___unplayed_game_id_2; }
	inline void set_unplayed_game_id_2(String_t* value)
	{
		___unplayed_game_id_2 = value;
		Il2CppCodeGenWriteBarrier(&___unplayed_game_id_2, value);
	}

	inline static int32_t get_offset_of_gameServer_3() { return static_cast<int32_t>(offsetof(RequiredGameStartData_t3552965630, ___gameServer_3)); }
	inline String_t* get_gameServer_3() const { return ___gameServer_3; }
	inline String_t** get_address_of_gameServer_3() { return &___gameServer_3; }
	inline void set_gameServer_3(String_t* value)
	{
		___gameServer_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameServer_3, value);
	}

	inline static int32_t get_offset_of_join_record_4() { return static_cast<int32_t>(offsetof(RequiredGameStartData_t3552965630, ___join_record_4)); }
	inline String_t* get_join_record_4() const { return ___join_record_4; }
	inline String_t** get_address_of_join_record_4() { return &___join_record_4; }
	inline void set_join_record_4(String_t* value)
	{
		___join_record_4 = value;
		Il2CppCodeGenWriteBarrier(&___join_record_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData
struct RequiredGameStartData_t3552965630_marshaled_pinvoke
{
	char* ___tourn_session_id_0;
	char* ___tourn_id_1;
	char* ___unplayed_game_id_2;
	char* ___gameServer_3;
	char* ___join_record_4;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData/RequiredGameStartData
struct RequiredGameStartData_t3552965630_marshaled_com
{
	Il2CppChar* ___tourn_session_id_0;
	Il2CppChar* ___tourn_id_1;
	Il2CppChar* ___unplayed_game_id_2;
	Il2CppChar* ___gameServer_3;
	Il2CppChar* ___join_record_4;
};
