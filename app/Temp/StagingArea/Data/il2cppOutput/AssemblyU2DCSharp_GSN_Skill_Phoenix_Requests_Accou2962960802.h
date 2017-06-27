﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebGETRequest2886453190.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3253730133.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsRequestData
struct  GetAllCreditCardsRequestData_t2962960802  : public WebGETRequest_1_t2886453190
{
public:
	// GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsRequestData::<Response>k__BackingField
	GetAllCreditCardsData_t3253730133  ___U3CResponseU3Ek__BackingField_9;
	// System.String GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsRequestData::<creditCardID>k__BackingField
	String_t* ___U3CcreditCardIDU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GetAllCreditCardsRequestData_t2962960802, ___U3CResponseU3Ek__BackingField_9)); }
	inline GetAllCreditCardsData_t3253730133  get_U3CResponseU3Ek__BackingField_9() const { return ___U3CResponseU3Ek__BackingField_9; }
	inline GetAllCreditCardsData_t3253730133 * get_address_of_U3CResponseU3Ek__BackingField_9() { return &___U3CResponseU3Ek__BackingField_9; }
	inline void set_U3CResponseU3Ek__BackingField_9(GetAllCreditCardsData_t3253730133  value)
	{
		___U3CResponseU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CcreditCardIDU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GetAllCreditCardsRequestData_t2962960802, ___U3CcreditCardIDU3Ek__BackingField_10)); }
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