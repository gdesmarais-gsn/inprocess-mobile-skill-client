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

// GSN.Skill.Phoenix.Requests.Account.User/CreditCardData
struct  CreditCardData_t1909721734 
{
public:
	// System.Boolean GSN.Skill.Phoenix.Requests.Account.User/CreditCardData::multipleCards
	bool ___multipleCards_0;
	// System.String GSN.Skill.Phoenix.Requests.Account.User/CreditCardData::type
	String_t* ___type_1;
	// System.String GSN.Skill.Phoenix.Requests.Account.User/CreditCardData::id
	String_t* ___id_2;

public:
	inline static int32_t get_offset_of_multipleCards_0() { return static_cast<int32_t>(offsetof(CreditCardData_t1909721734, ___multipleCards_0)); }
	inline bool get_multipleCards_0() const { return ___multipleCards_0; }
	inline bool* get_address_of_multipleCards_0() { return &___multipleCards_0; }
	inline void set_multipleCards_0(bool value)
	{
		___multipleCards_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(CreditCardData_t1909721734, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(CreditCardData_t1909721734, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.User/CreditCardData
struct CreditCardData_t1909721734_marshaled_pinvoke
{
	int32_t ___multipleCards_0;
	char* ___type_1;
	char* ___id_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.User/CreditCardData
struct CreditCardData_t1909721734_marshaled_com
{
	int32_t ___multipleCards_0;
	Il2CppChar* ___type_1;
	Il2CppChar* ___id_2;
};
