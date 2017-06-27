#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// System.Collections.Generic.SortedDictionary`2<System.String,System.Int32>
struct SortedDictionary_2_t1341301303;
// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData/Result
struct  Result_t913656008 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData/Result::user
	User_t1577144177 * ___user_0;
	// System.Collections.Generic.SortedDictionary`2<System.String,System.Int32> GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData/Result::upgrade_bonus_amounts
	SortedDictionary_2_t1341301303 * ___upgrade_bonus_amounts_1;
	// System.String GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData/Result::bonus_conversion_dollars
	String_t* ___bonus_conversion_dollars_2;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(Result_t913656008, ___user_0)); }
	inline User_t1577144177 * get_user_0() const { return ___user_0; }
	inline User_t1577144177 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1577144177 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_upgrade_bonus_amounts_1() { return static_cast<int32_t>(offsetof(Result_t913656008, ___upgrade_bonus_amounts_1)); }
	inline SortedDictionary_2_t1341301303 * get_upgrade_bonus_amounts_1() const { return ___upgrade_bonus_amounts_1; }
	inline SortedDictionary_2_t1341301303 ** get_address_of_upgrade_bonus_amounts_1() { return &___upgrade_bonus_amounts_1; }
	inline void set_upgrade_bonus_amounts_1(SortedDictionary_2_t1341301303 * value)
	{
		___upgrade_bonus_amounts_1 = value;
		Il2CppCodeGenWriteBarrier(&___upgrade_bonus_amounts_1, value);
	}

	inline static int32_t get_offset_of_bonus_conversion_dollars_2() { return static_cast<int32_t>(offsetof(Result_t913656008, ___bonus_conversion_dollars_2)); }
	inline String_t* get_bonus_conversion_dollars_2() const { return ___bonus_conversion_dollars_2; }
	inline String_t** get_address_of_bonus_conversion_dollars_2() { return &___bonus_conversion_dollars_2; }
	inline void set_bonus_conversion_dollars_2(String_t* value)
	{
		___bonus_conversion_dollars_2 = value;
		Il2CppCodeGenWriteBarrier(&___bonus_conversion_dollars_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData/Result
struct Result_t913656008_marshaled_pinvoke
{
	User_t1577144177 * ___user_0;
	SortedDictionary_2_t1341301303 * ___upgrade_bonus_amounts_1;
	char* ___bonus_conversion_dollars_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData/Result
struct Result_t913656008_marshaled_com
{
	User_t1577144177 * ___user_0;
	SortedDictionary_2_t1341301303 * ___upgrade_bonus_amounts_1;
	Il2CppChar* ___bonus_conversion_dollars_2;
};
