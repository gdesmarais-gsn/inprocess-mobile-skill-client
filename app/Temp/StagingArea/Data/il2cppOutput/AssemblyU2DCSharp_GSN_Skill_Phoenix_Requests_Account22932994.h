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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques1479100236.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou4234411897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.CreditCardRequestData
struct  CreditCardRequestData_t22932994  : public WebPOSTRequest_1_t1479100236
{
public:
	// GSN.Skill.Phoenix.Requests.Account.CreditCardData GSN.Skill.Phoenix.Requests.Account.CreditCardRequestData::<Response>k__BackingField
	CreditCardData_t4234411897  ___U3CResponseU3Ek__BackingField_9;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreditCardRequestData::<creditCardID>k__BackingField
	String_t* ___U3CcreditCardIDU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CreditCardRequestData_t22932994, ___U3CResponseU3Ek__BackingField_9)); }
	inline CreditCardData_t4234411897  get_U3CResponseU3Ek__BackingField_9() const { return ___U3CResponseU3Ek__BackingField_9; }
	inline CreditCardData_t4234411897 * get_address_of_U3CResponseU3Ek__BackingField_9() { return &___U3CResponseU3Ek__BackingField_9; }
	inline void set_U3CResponseU3Ek__BackingField_9(CreditCardData_t4234411897  value)
	{
		___U3CResponseU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CcreditCardIDU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CreditCardRequestData_t22932994, ___U3CcreditCardIDU3Ek__BackingField_10)); }
	inline String_t* get_U3CcreditCardIDU3Ek__BackingField_10() const { return ___U3CcreditCardIDU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CcreditCardIDU3Ek__BackingField_10() { return &___U3CcreditCardIDU3Ek__BackingField_10; }
	inline void set_U3CcreditCardIDU3Ek__BackingField_10(String_t* value)
	{
		___U3CcreditCardIDU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcreditCardIDU3Ek__BackingField_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
