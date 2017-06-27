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

// GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo
struct  CreditCardInfo_t685010390 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo::bill_zip
	String_t* ___bill_zip_0;
	// System.Int32 GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo::cardCount
	int32_t ___cardCount_1;
	// System.String GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo::customer_cc_expyr
	String_t* ___customer_cc_expyr_2;
	// System.String GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo::customer_cc_expmo
	String_t* ___customer_cc_expmo_3;
	// System.String GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo::last4
	String_t* ___last4_4;
	// System.String GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo::type
	String_t* ___type_5;
	// System.String GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo::id
	String_t* ___id_6;

public:
	inline static int32_t get_offset_of_bill_zip_0() { return static_cast<int32_t>(offsetof(CreditCardInfo_t685010390, ___bill_zip_0)); }
	inline String_t* get_bill_zip_0() const { return ___bill_zip_0; }
	inline String_t** get_address_of_bill_zip_0() { return &___bill_zip_0; }
	inline void set_bill_zip_0(String_t* value)
	{
		___bill_zip_0 = value;
		Il2CppCodeGenWriteBarrier(&___bill_zip_0, value);
	}

	inline static int32_t get_offset_of_cardCount_1() { return static_cast<int32_t>(offsetof(CreditCardInfo_t685010390, ___cardCount_1)); }
	inline int32_t get_cardCount_1() const { return ___cardCount_1; }
	inline int32_t* get_address_of_cardCount_1() { return &___cardCount_1; }
	inline void set_cardCount_1(int32_t value)
	{
		___cardCount_1 = value;
	}

	inline static int32_t get_offset_of_customer_cc_expyr_2() { return static_cast<int32_t>(offsetof(CreditCardInfo_t685010390, ___customer_cc_expyr_2)); }
	inline String_t* get_customer_cc_expyr_2() const { return ___customer_cc_expyr_2; }
	inline String_t** get_address_of_customer_cc_expyr_2() { return &___customer_cc_expyr_2; }
	inline void set_customer_cc_expyr_2(String_t* value)
	{
		___customer_cc_expyr_2 = value;
		Il2CppCodeGenWriteBarrier(&___customer_cc_expyr_2, value);
	}

	inline static int32_t get_offset_of_customer_cc_expmo_3() { return static_cast<int32_t>(offsetof(CreditCardInfo_t685010390, ___customer_cc_expmo_3)); }
	inline String_t* get_customer_cc_expmo_3() const { return ___customer_cc_expmo_3; }
	inline String_t** get_address_of_customer_cc_expmo_3() { return &___customer_cc_expmo_3; }
	inline void set_customer_cc_expmo_3(String_t* value)
	{
		___customer_cc_expmo_3 = value;
		Il2CppCodeGenWriteBarrier(&___customer_cc_expmo_3, value);
	}

	inline static int32_t get_offset_of_last4_4() { return static_cast<int32_t>(offsetof(CreditCardInfo_t685010390, ___last4_4)); }
	inline String_t* get_last4_4() const { return ___last4_4; }
	inline String_t** get_address_of_last4_4() { return &___last4_4; }
	inline void set_last4_4(String_t* value)
	{
		___last4_4 = value;
		Il2CppCodeGenWriteBarrier(&___last4_4, value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(CreditCardInfo_t685010390, ___type_5)); }
	inline String_t* get_type_5() const { return ___type_5; }
	inline String_t** get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(String_t* value)
	{
		___type_5 = value;
		Il2CppCodeGenWriteBarrier(&___type_5, value);
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(CreditCardInfo_t685010390, ___id_6)); }
	inline String_t* get_id_6() const { return ___id_6; }
	inline String_t** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(String_t* value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier(&___id_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo
struct CreditCardInfo_t685010390_marshaled_pinvoke
{
	char* ___bill_zip_0;
	int32_t ___cardCount_1;
	char* ___customer_cc_expyr_2;
	char* ___customer_cc_expmo_3;
	char* ___last4_4;
	char* ___type_5;
	char* ___id_6;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData/CreditCardInfo
struct CreditCardInfo_t685010390_marshaled_com
{
	Il2CppChar* ___bill_zip_0;
	int32_t ___cardCount_1;
	Il2CppChar* ___customer_cc_expyr_2;
	Il2CppChar* ___customer_cc_expmo_3;
	Il2CppChar* ___last4_4;
	Il2CppChar* ___type_5;
	Il2CppChar* ___id_6;
};
