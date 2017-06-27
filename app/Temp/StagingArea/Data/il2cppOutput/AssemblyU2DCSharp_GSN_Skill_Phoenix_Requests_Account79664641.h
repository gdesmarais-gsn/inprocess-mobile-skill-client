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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTRequest735116563.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3490428224.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.ResetPasswordRequestData
struct  ResetPasswordRequestData_t79664641  : public WebPOSTRequest_1_t735116563
{
public:
	// GSN.Skill.Phoenix.Requests.Account.ResetPasswordData GSN.Skill.Phoenix.Requests.Account.ResetPasswordRequestData::<Response>k__BackingField
	ResetPasswordData_t3490428224  ___U3CResponseU3Ek__BackingField_10;
	// System.String GSN.Skill.Phoenix.Requests.Account.ResetPasswordRequestData::<username>k__BackingField
	String_t* ___U3CusernameU3Ek__BackingField_11;
	// System.String GSN.Skill.Phoenix.Requests.Account.ResetPasswordRequestData::<email>k__BackingField
	String_t* ___U3CemailU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ResetPasswordRequestData_t79664641, ___U3CResponseU3Ek__BackingField_10)); }
	inline ResetPasswordData_t3490428224  get_U3CResponseU3Ek__BackingField_10() const { return ___U3CResponseU3Ek__BackingField_10; }
	inline ResetPasswordData_t3490428224 * get_address_of_U3CResponseU3Ek__BackingField_10() { return &___U3CResponseU3Ek__BackingField_10; }
	inline void set_U3CResponseU3Ek__BackingField_10(ResetPasswordData_t3490428224  value)
	{
		___U3CResponseU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CusernameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ResetPasswordRequestData_t79664641, ___U3CusernameU3Ek__BackingField_11)); }
	inline String_t* get_U3CusernameU3Ek__BackingField_11() const { return ___U3CusernameU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CusernameU3Ek__BackingField_11() { return &___U3CusernameU3Ek__BackingField_11; }
	inline void set_U3CusernameU3Ek__BackingField_11(String_t* value)
	{
		___U3CusernameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CusernameU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CemailU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ResetPasswordRequestData_t79664641, ___U3CemailU3Ek__BackingField_12)); }
	inline String_t* get_U3CemailU3Ek__BackingField_12() const { return ___U3CemailU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CemailU3Ek__BackingField_12() { return &___U3CemailU3Ek__BackingField_12; }
	inline void set_U3CemailU3Ek__BackingField_12(String_t* value)
	{
		___U3CemailU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CemailU3Ek__BackingField_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
