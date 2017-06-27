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

// GSN.Skill.Phoenix.CreditCardDetails
struct  CreditCardDetails_t1436690111 
{
public:
	// System.String GSN.Skill.Phoenix.CreditCardDetails::type
	String_t* ___type_0;
	// System.String GSN.Skill.Phoenix.CreditCardDetails::last4
	String_t* ___last4_1;
	// System.Int32 GSN.Skill.Phoenix.CreditCardDetails::expYear
	int32_t ___expYear_2;
	// System.Int32 GSN.Skill.Phoenix.CreditCardDetails::expMonth
	int32_t ___expMonth_3;
	// System.Int32 GSN.Skill.Phoenix.CreditCardDetails::id
	int32_t ___id_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(CreditCardDetails_t1436690111, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_last4_1() { return static_cast<int32_t>(offsetof(CreditCardDetails_t1436690111, ___last4_1)); }
	inline String_t* get_last4_1() const { return ___last4_1; }
	inline String_t** get_address_of_last4_1() { return &___last4_1; }
	inline void set_last4_1(String_t* value)
	{
		___last4_1 = value;
		Il2CppCodeGenWriteBarrier(&___last4_1, value);
	}

	inline static int32_t get_offset_of_expYear_2() { return static_cast<int32_t>(offsetof(CreditCardDetails_t1436690111, ___expYear_2)); }
	inline int32_t get_expYear_2() const { return ___expYear_2; }
	inline int32_t* get_address_of_expYear_2() { return &___expYear_2; }
	inline void set_expYear_2(int32_t value)
	{
		___expYear_2 = value;
	}

	inline static int32_t get_offset_of_expMonth_3() { return static_cast<int32_t>(offsetof(CreditCardDetails_t1436690111, ___expMonth_3)); }
	inline int32_t get_expMonth_3() const { return ___expMonth_3; }
	inline int32_t* get_address_of_expMonth_3() { return &___expMonth_3; }
	inline void set_expMonth_3(int32_t value)
	{
		___expMonth_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(CreditCardDetails_t1436690111, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.CreditCardDetails
struct CreditCardDetails_t1436690111_marshaled_pinvoke
{
	char* ___type_0;
	char* ___last4_1;
	int32_t ___expYear_2;
	int32_t ___expMonth_3;
	int32_t ___id_4;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.CreditCardDetails
struct CreditCardDetails_t1436690111_marshaled_com
{
	Il2CppChar* ___type_0;
	Il2CppChar* ___last4_1;
	int32_t ___expYear_2;
	int32_t ___expMonth_3;
	int32_t ___id_4;
};
