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
// GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo[]
struct CreditCardInfoU5BU5D_t104292883;
struct CreditCardInfo_t685010390_marshaled_pinvoke;
struct CreditCardInfo_t685010390_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/Result
struct  Result_t1232178516 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/Result::user
	User_t1577144177 * ___user_0;
	// GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo[] GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/Result::cc_list
	CreditCardInfoU5BU5D_t104292883* ___cc_list_1;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(Result_t1232178516, ___user_0)); }
	inline User_t1577144177 * get_user_0() const { return ___user_0; }
	inline User_t1577144177 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1577144177 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_cc_list_1() { return static_cast<int32_t>(offsetof(Result_t1232178516, ___cc_list_1)); }
	inline CreditCardInfoU5BU5D_t104292883* get_cc_list_1() const { return ___cc_list_1; }
	inline CreditCardInfoU5BU5D_t104292883** get_address_of_cc_list_1() { return &___cc_list_1; }
	inline void set_cc_list_1(CreditCardInfoU5BU5D_t104292883* value)
	{
		___cc_list_1 = value;
		Il2CppCodeGenWriteBarrier(&___cc_list_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/Result
struct Result_t1232178516_marshaled_pinvoke
{
	User_t1577144177 * ___user_0;
	CreditCardInfo_t685010390_marshaled_pinvoke* ___cc_list_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/Result
struct Result_t1232178516_marshaled_com
{
	User_t1577144177 * ___user_0;
	CreditCardInfo_t685010390_marshaled_com* ___cc_list_1;
};
