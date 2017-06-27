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

// GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo
struct  CreditCardInfo_t3978505162 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo::customer_cc_expyr
	String_t* ___customer_cc_expyr_0;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo::customer_cc_expmo
	String_t* ___customer_cc_expmo_1;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo::last4
	String_t* ___last4_2;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo::type
	String_t* ___type_3;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo::id
	String_t* ___id_4;

public:
	inline static int32_t get_offset_of_customer_cc_expyr_0() { return static_cast<int32_t>(offsetof(CreditCardInfo_t3978505162, ___customer_cc_expyr_0)); }
	inline String_t* get_customer_cc_expyr_0() const { return ___customer_cc_expyr_0; }
	inline String_t** get_address_of_customer_cc_expyr_0() { return &___customer_cc_expyr_0; }
	inline void set_customer_cc_expyr_0(String_t* value)
	{
		___customer_cc_expyr_0 = value;
		Il2CppCodeGenWriteBarrier(&___customer_cc_expyr_0, value);
	}

	inline static int32_t get_offset_of_customer_cc_expmo_1() { return static_cast<int32_t>(offsetof(CreditCardInfo_t3978505162, ___customer_cc_expmo_1)); }
	inline String_t* get_customer_cc_expmo_1() const { return ___customer_cc_expmo_1; }
	inline String_t** get_address_of_customer_cc_expmo_1() { return &___customer_cc_expmo_1; }
	inline void set_customer_cc_expmo_1(String_t* value)
	{
		___customer_cc_expmo_1 = value;
		Il2CppCodeGenWriteBarrier(&___customer_cc_expmo_1, value);
	}

	inline static int32_t get_offset_of_last4_2() { return static_cast<int32_t>(offsetof(CreditCardInfo_t3978505162, ___last4_2)); }
	inline String_t* get_last4_2() const { return ___last4_2; }
	inline String_t** get_address_of_last4_2() { return &___last4_2; }
	inline void set_last4_2(String_t* value)
	{
		___last4_2 = value;
		Il2CppCodeGenWriteBarrier(&___last4_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(CreditCardInfo_t3978505162, ___type_3)); }
	inline String_t* get_type_3() const { return ___type_3; }
	inline String_t** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(String_t* value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(CreditCardInfo_t3978505162, ___id_4)); }
	inline String_t* get_id_4() const { return ___id_4; }
	inline String_t** get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(String_t* value)
	{
		___id_4 = value;
		Il2CppCodeGenWriteBarrier(&___id_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo
struct CreditCardInfo_t3978505162_marshaled_pinvoke
{
	char* ___customer_cc_expyr_0;
	char* ___customer_cc_expmo_1;
	char* ___last4_2;
	char* ___type_3;
	char* ___id_4;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.CreditCardData/CreditCardInfo
struct CreditCardInfo_t3978505162_marshaled_com
{
	Il2CppChar* ___customer_cc_expyr_0;
	Il2CppChar* ___customer_cc_expmo_1;
	Il2CppChar* ___last4_2;
	Il2CppChar* ___type_3;
	Il2CppChar* ___id_4;
};
