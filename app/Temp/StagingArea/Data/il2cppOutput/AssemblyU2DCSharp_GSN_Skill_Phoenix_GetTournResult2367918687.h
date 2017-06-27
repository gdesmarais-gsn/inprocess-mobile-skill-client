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
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player
struct  Player_t2367918687 
{
public:
	// System.Int32 GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::score
	int32_t ___score_0;
	// System.Decimal GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::amountWon
	Decimal_t724701077  ___amountWon_1;
	// System.String GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::username
	String_t* ___username_2;
	// System.Nullable`1<System.Int32> GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::place
	Nullable_1_t334943763  ___place_3;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::isTied
	bool ___isTied_4;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::isBuyoutSlot
	bool ___isBuyoutSlot_5;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::isLoggedInPlayer
	bool ___isLoggedInPlayer_6;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::stillPlaying
	bool ___stillPlaying_7;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player::notStarted
	bool ___notStarted_8;

public:
	inline static int32_t get_offset_of_score_0() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___score_0)); }
	inline int32_t get_score_0() const { return ___score_0; }
	inline int32_t* get_address_of_score_0() { return &___score_0; }
	inline void set_score_0(int32_t value)
	{
		___score_0 = value;
	}

	inline static int32_t get_offset_of_amountWon_1() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___amountWon_1)); }
	inline Decimal_t724701077  get_amountWon_1() const { return ___amountWon_1; }
	inline Decimal_t724701077 * get_address_of_amountWon_1() { return &___amountWon_1; }
	inline void set_amountWon_1(Decimal_t724701077  value)
	{
		___amountWon_1 = value;
	}

	inline static int32_t get_offset_of_username_2() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___username_2)); }
	inline String_t* get_username_2() const { return ___username_2; }
	inline String_t** get_address_of_username_2() { return &___username_2; }
	inline void set_username_2(String_t* value)
	{
		___username_2 = value;
		Il2CppCodeGenWriteBarrier(&___username_2, value);
	}

	inline static int32_t get_offset_of_place_3() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___place_3)); }
	inline Nullable_1_t334943763  get_place_3() const { return ___place_3; }
	inline Nullable_1_t334943763 * get_address_of_place_3() { return &___place_3; }
	inline void set_place_3(Nullable_1_t334943763  value)
	{
		___place_3 = value;
	}

	inline static int32_t get_offset_of_isTied_4() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___isTied_4)); }
	inline bool get_isTied_4() const { return ___isTied_4; }
	inline bool* get_address_of_isTied_4() { return &___isTied_4; }
	inline void set_isTied_4(bool value)
	{
		___isTied_4 = value;
	}

	inline static int32_t get_offset_of_isBuyoutSlot_5() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___isBuyoutSlot_5)); }
	inline bool get_isBuyoutSlot_5() const { return ___isBuyoutSlot_5; }
	inline bool* get_address_of_isBuyoutSlot_5() { return &___isBuyoutSlot_5; }
	inline void set_isBuyoutSlot_5(bool value)
	{
		___isBuyoutSlot_5 = value;
	}

	inline static int32_t get_offset_of_isLoggedInPlayer_6() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___isLoggedInPlayer_6)); }
	inline bool get_isLoggedInPlayer_6() const { return ___isLoggedInPlayer_6; }
	inline bool* get_address_of_isLoggedInPlayer_6() { return &___isLoggedInPlayer_6; }
	inline void set_isLoggedInPlayer_6(bool value)
	{
		___isLoggedInPlayer_6 = value;
	}

	inline static int32_t get_offset_of_stillPlaying_7() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___stillPlaying_7)); }
	inline bool get_stillPlaying_7() const { return ___stillPlaying_7; }
	inline bool* get_address_of_stillPlaying_7() { return &___stillPlaying_7; }
	inline void set_stillPlaying_7(bool value)
	{
		___stillPlaying_7 = value;
	}

	inline static int32_t get_offset_of_notStarted_8() { return static_cast<int32_t>(offsetof(Player_t2367918687, ___notStarted_8)); }
	inline bool get_notStarted_8() const { return ___notStarted_8; }
	inline bool* get_address_of_notStarted_8() { return &___notStarted_8; }
	inline void set_notStarted_8(bool value)
	{
		___notStarted_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player
struct Player_t2367918687_marshaled_pinvoke
{
	int32_t ___score_0;
	Decimal_t724701077  ___amountWon_1;
	char* ___username_2;
	Nullable_1_t334943763  ___place_3;
	int32_t ___isTied_4;
	int32_t ___isBuyoutSlot_5;
	int32_t ___isLoggedInPlayer_6;
	int32_t ___stillPlaying_7;
	int32_t ___notStarted_8;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.GetTournResultsSuccessEvent/Player
struct Player_t2367918687_marshaled_com
{
	int32_t ___score_0;
	Decimal_t724701077  ___amountWon_1;
	Il2CppChar* ___username_2;
	Nullable_1_t334943763  ___place_3;
	int32_t ___isTied_4;
	int32_t ___isBuyoutSlot_5;
	int32_t ___isLoggedInPlayer_6;
	int32_t ___stillPlaying_7;
	int32_t ___notStarted_8;
};
