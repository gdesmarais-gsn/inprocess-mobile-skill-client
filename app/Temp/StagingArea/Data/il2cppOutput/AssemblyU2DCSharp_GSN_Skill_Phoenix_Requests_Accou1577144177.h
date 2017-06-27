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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.User
struct  User_t1577144177  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.User::epid
	String_t* ___epid_0;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::cash_balance
	String_t* ___cash_balance_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GSN.Skill.Phoenix.Requests.Account.User::upgrade_bonus_amounts
	Dictionary_2_t3986656710 * ___upgrade_bonus_amounts_2;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::pp_user
	String_t* ___pp_user_3;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::auth_token
	String_t* ___auth_token_4;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::game_credits
	String_t* ___game_credits_5;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::is_guest
	String_t* ___is_guest_6;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::username
	String_t* ___username_7;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::reward_points
	String_t* ___reward_points_8;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::createPasswordOnUpgrade
	String_t* ___createPasswordOnUpgrade_9;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::user_id
	String_t* ___user_id_10;
	// System.String GSN.Skill.Phoenix.Requests.Account.User::token
	String_t* ___token_11;
	// System.Object GSN.Skill.Phoenix.Requests.Account.User::cc_data
	Il2CppObject * ___cc_data_12;
	// System.Boolean GSN.Skill.Phoenix.Requests.Account.User::showP1Experience
	bool ___showP1Experience_13;

public:
	inline static int32_t get_offset_of_epid_0() { return static_cast<int32_t>(offsetof(User_t1577144177, ___epid_0)); }
	inline String_t* get_epid_0() const { return ___epid_0; }
	inline String_t** get_address_of_epid_0() { return &___epid_0; }
	inline void set_epid_0(String_t* value)
	{
		___epid_0 = value;
		Il2CppCodeGenWriteBarrier(&___epid_0, value);
	}

	inline static int32_t get_offset_of_cash_balance_1() { return static_cast<int32_t>(offsetof(User_t1577144177, ___cash_balance_1)); }
	inline String_t* get_cash_balance_1() const { return ___cash_balance_1; }
	inline String_t** get_address_of_cash_balance_1() { return &___cash_balance_1; }
	inline void set_cash_balance_1(String_t* value)
	{
		___cash_balance_1 = value;
		Il2CppCodeGenWriteBarrier(&___cash_balance_1, value);
	}

	inline static int32_t get_offset_of_upgrade_bonus_amounts_2() { return static_cast<int32_t>(offsetof(User_t1577144177, ___upgrade_bonus_amounts_2)); }
	inline Dictionary_2_t3986656710 * get_upgrade_bonus_amounts_2() const { return ___upgrade_bonus_amounts_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_upgrade_bonus_amounts_2() { return &___upgrade_bonus_amounts_2; }
	inline void set_upgrade_bonus_amounts_2(Dictionary_2_t3986656710 * value)
	{
		___upgrade_bonus_amounts_2 = value;
		Il2CppCodeGenWriteBarrier(&___upgrade_bonus_amounts_2, value);
	}

	inline static int32_t get_offset_of_pp_user_3() { return static_cast<int32_t>(offsetof(User_t1577144177, ___pp_user_3)); }
	inline String_t* get_pp_user_3() const { return ___pp_user_3; }
	inline String_t** get_address_of_pp_user_3() { return &___pp_user_3; }
	inline void set_pp_user_3(String_t* value)
	{
		___pp_user_3 = value;
		Il2CppCodeGenWriteBarrier(&___pp_user_3, value);
	}

	inline static int32_t get_offset_of_auth_token_4() { return static_cast<int32_t>(offsetof(User_t1577144177, ___auth_token_4)); }
	inline String_t* get_auth_token_4() const { return ___auth_token_4; }
	inline String_t** get_address_of_auth_token_4() { return &___auth_token_4; }
	inline void set_auth_token_4(String_t* value)
	{
		___auth_token_4 = value;
		Il2CppCodeGenWriteBarrier(&___auth_token_4, value);
	}

	inline static int32_t get_offset_of_game_credits_5() { return static_cast<int32_t>(offsetof(User_t1577144177, ___game_credits_5)); }
	inline String_t* get_game_credits_5() const { return ___game_credits_5; }
	inline String_t** get_address_of_game_credits_5() { return &___game_credits_5; }
	inline void set_game_credits_5(String_t* value)
	{
		___game_credits_5 = value;
		Il2CppCodeGenWriteBarrier(&___game_credits_5, value);
	}

	inline static int32_t get_offset_of_is_guest_6() { return static_cast<int32_t>(offsetof(User_t1577144177, ___is_guest_6)); }
	inline String_t* get_is_guest_6() const { return ___is_guest_6; }
	inline String_t** get_address_of_is_guest_6() { return &___is_guest_6; }
	inline void set_is_guest_6(String_t* value)
	{
		___is_guest_6 = value;
		Il2CppCodeGenWriteBarrier(&___is_guest_6, value);
	}

	inline static int32_t get_offset_of_username_7() { return static_cast<int32_t>(offsetof(User_t1577144177, ___username_7)); }
	inline String_t* get_username_7() const { return ___username_7; }
	inline String_t** get_address_of_username_7() { return &___username_7; }
	inline void set_username_7(String_t* value)
	{
		___username_7 = value;
		Il2CppCodeGenWriteBarrier(&___username_7, value);
	}

	inline static int32_t get_offset_of_reward_points_8() { return static_cast<int32_t>(offsetof(User_t1577144177, ___reward_points_8)); }
	inline String_t* get_reward_points_8() const { return ___reward_points_8; }
	inline String_t** get_address_of_reward_points_8() { return &___reward_points_8; }
	inline void set_reward_points_8(String_t* value)
	{
		___reward_points_8 = value;
		Il2CppCodeGenWriteBarrier(&___reward_points_8, value);
	}

	inline static int32_t get_offset_of_createPasswordOnUpgrade_9() { return static_cast<int32_t>(offsetof(User_t1577144177, ___createPasswordOnUpgrade_9)); }
	inline String_t* get_createPasswordOnUpgrade_9() const { return ___createPasswordOnUpgrade_9; }
	inline String_t** get_address_of_createPasswordOnUpgrade_9() { return &___createPasswordOnUpgrade_9; }
	inline void set_createPasswordOnUpgrade_9(String_t* value)
	{
		___createPasswordOnUpgrade_9 = value;
		Il2CppCodeGenWriteBarrier(&___createPasswordOnUpgrade_9, value);
	}

	inline static int32_t get_offset_of_user_id_10() { return static_cast<int32_t>(offsetof(User_t1577144177, ___user_id_10)); }
	inline String_t* get_user_id_10() const { return ___user_id_10; }
	inline String_t** get_address_of_user_id_10() { return &___user_id_10; }
	inline void set_user_id_10(String_t* value)
	{
		___user_id_10 = value;
		Il2CppCodeGenWriteBarrier(&___user_id_10, value);
	}

	inline static int32_t get_offset_of_token_11() { return static_cast<int32_t>(offsetof(User_t1577144177, ___token_11)); }
	inline String_t* get_token_11() const { return ___token_11; }
	inline String_t** get_address_of_token_11() { return &___token_11; }
	inline void set_token_11(String_t* value)
	{
		___token_11 = value;
		Il2CppCodeGenWriteBarrier(&___token_11, value);
	}

	inline static int32_t get_offset_of_cc_data_12() { return static_cast<int32_t>(offsetof(User_t1577144177, ___cc_data_12)); }
	inline Il2CppObject * get_cc_data_12() const { return ___cc_data_12; }
	inline Il2CppObject ** get_address_of_cc_data_12() { return &___cc_data_12; }
	inline void set_cc_data_12(Il2CppObject * value)
	{
		___cc_data_12 = value;
		Il2CppCodeGenWriteBarrier(&___cc_data_12, value);
	}

	inline static int32_t get_offset_of_showP1Experience_13() { return static_cast<int32_t>(offsetof(User_t1577144177, ___showP1Experience_13)); }
	inline bool get_showP1Experience_13() const { return ___showP1Experience_13; }
	inline bool* get_address_of_showP1Experience_13() { return &___showP1Experience_13; }
	inline void set_showP1Experience_13(bool value)
	{
		___showP1Experience_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
