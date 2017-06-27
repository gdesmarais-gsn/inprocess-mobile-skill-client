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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.TournamentSignupSuccessEvent
struct  TournamentSignupSuccessEvent_t1669876612  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Phoenix.TournamentSignupSuccessEvent::isNativeGame
	bool ___isNativeGame_0;
	// System.String GSN.Skill.Phoenix.TournamentSignupSuccessEvent::gameSite
	String_t* ___gameSite_1;
	// System.String GSN.Skill.Phoenix.TournamentSignupSuccessEvent::flavorID
	String_t* ___flavorID_2;
	// System.String GSN.Skill.Phoenix.TournamentSignupSuccessEvent::tournamentID
	String_t* ___tournamentID_3;
	// System.String GSN.Skill.Phoenix.TournamentSignupSuccessEvent::tournamentSessionID
	String_t* ___tournamentSessionID_4;
	// System.String GSN.Skill.Phoenix.TournamentSignupSuccessEvent::clientID
	String_t* ___clientID_5;
	// System.String GSN.Skill.Phoenix.TournamentSignupSuccessEvent::gameID
	String_t* ___gameID_6;
	// System.String GSN.Skill.Phoenix.TournamentSignupSuccessEvent::joinRecord
	String_t* ___joinRecord_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.TournamentSignupSuccessEvent::sessionStorageVariables
	Dictionary_2_t3943999495 * ___sessionStorageVariables_8;

public:
	inline static int32_t get_offset_of_isNativeGame_0() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___isNativeGame_0)); }
	inline bool get_isNativeGame_0() const { return ___isNativeGame_0; }
	inline bool* get_address_of_isNativeGame_0() { return &___isNativeGame_0; }
	inline void set_isNativeGame_0(bool value)
	{
		___isNativeGame_0 = value;
	}

	inline static int32_t get_offset_of_gameSite_1() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___gameSite_1)); }
	inline String_t* get_gameSite_1() const { return ___gameSite_1; }
	inline String_t** get_address_of_gameSite_1() { return &___gameSite_1; }
	inline void set_gameSite_1(String_t* value)
	{
		___gameSite_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameSite_1, value);
	}

	inline static int32_t get_offset_of_flavorID_2() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___flavorID_2)); }
	inline String_t* get_flavorID_2() const { return ___flavorID_2; }
	inline String_t** get_address_of_flavorID_2() { return &___flavorID_2; }
	inline void set_flavorID_2(String_t* value)
	{
		___flavorID_2 = value;
		Il2CppCodeGenWriteBarrier(&___flavorID_2, value);
	}

	inline static int32_t get_offset_of_tournamentID_3() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___tournamentID_3)); }
	inline String_t* get_tournamentID_3() const { return ___tournamentID_3; }
	inline String_t** get_address_of_tournamentID_3() { return &___tournamentID_3; }
	inline void set_tournamentID_3(String_t* value)
	{
		___tournamentID_3 = value;
		Il2CppCodeGenWriteBarrier(&___tournamentID_3, value);
	}

	inline static int32_t get_offset_of_tournamentSessionID_4() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___tournamentSessionID_4)); }
	inline String_t* get_tournamentSessionID_4() const { return ___tournamentSessionID_4; }
	inline String_t** get_address_of_tournamentSessionID_4() { return &___tournamentSessionID_4; }
	inline void set_tournamentSessionID_4(String_t* value)
	{
		___tournamentSessionID_4 = value;
		Il2CppCodeGenWriteBarrier(&___tournamentSessionID_4, value);
	}

	inline static int32_t get_offset_of_clientID_5() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___clientID_5)); }
	inline String_t* get_clientID_5() const { return ___clientID_5; }
	inline String_t** get_address_of_clientID_5() { return &___clientID_5; }
	inline void set_clientID_5(String_t* value)
	{
		___clientID_5 = value;
		Il2CppCodeGenWriteBarrier(&___clientID_5, value);
	}

	inline static int32_t get_offset_of_gameID_6() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___gameID_6)); }
	inline String_t* get_gameID_6() const { return ___gameID_6; }
	inline String_t** get_address_of_gameID_6() { return &___gameID_6; }
	inline void set_gameID_6(String_t* value)
	{
		___gameID_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameID_6, value);
	}

	inline static int32_t get_offset_of_joinRecord_7() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___joinRecord_7)); }
	inline String_t* get_joinRecord_7() const { return ___joinRecord_7; }
	inline String_t** get_address_of_joinRecord_7() { return &___joinRecord_7; }
	inline void set_joinRecord_7(String_t* value)
	{
		___joinRecord_7 = value;
		Il2CppCodeGenWriteBarrier(&___joinRecord_7, value);
	}

	inline static int32_t get_offset_of_sessionStorageVariables_8() { return static_cast<int32_t>(offsetof(TournamentSignupSuccessEvent_t1669876612, ___sessionStorageVariables_8)); }
	inline Dictionary_2_t3943999495 * get_sessionStorageVariables_8() const { return ___sessionStorageVariables_8; }
	inline Dictionary_2_t3943999495 ** get_address_of_sessionStorageVariables_8() { return &___sessionStorageVariables_8; }
	inline void set_sessionStorageVariables_8(Dictionary_2_t3943999495 * value)
	{
		___sessionStorageVariables_8 = value;
		Il2CppCodeGenWriteBarrier(&___sessionStorageVariables_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
