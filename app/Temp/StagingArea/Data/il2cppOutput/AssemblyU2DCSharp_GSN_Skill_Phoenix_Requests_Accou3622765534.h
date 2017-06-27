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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques3469349887.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou1929694252.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.CreateNewUserRequestData
struct  CreateNewUserRequestData_t3622765534  : public WebPOSTRequest_1_t3469349887
{
public:
	// GSN.Skill.Phoenix.Requests.Account.AccountLoginData GSN.Skill.Phoenix.Requests.Account.CreateNewUserRequestData::<Response>k__BackingField
	AccountLoginData_t1929694252  ___U3CResponseU3Ek__BackingField_12;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreateNewUserRequestData::<username>k__BackingField
	String_t* ___U3CusernameU3Ek__BackingField_13;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreateNewUserRequestData::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_14;
	// System.String GSN.Skill.Phoenix.Requests.Account.CreateNewUserRequestData::<email>k__BackingField
	String_t* ___U3CemailU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(CreateNewUserRequestData_t3622765534, ___U3CResponseU3Ek__BackingField_12)); }
	inline AccountLoginData_t1929694252  get_U3CResponseU3Ek__BackingField_12() const { return ___U3CResponseU3Ek__BackingField_12; }
	inline AccountLoginData_t1929694252 * get_address_of_U3CResponseU3Ek__BackingField_12() { return &___U3CResponseU3Ek__BackingField_12; }
	inline void set_U3CResponseU3Ek__BackingField_12(AccountLoginData_t1929694252  value)
	{
		___U3CResponseU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CusernameU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(CreateNewUserRequestData_t3622765534, ___U3CusernameU3Ek__BackingField_13)); }
	inline String_t* get_U3CusernameU3Ek__BackingField_13() const { return ___U3CusernameU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CusernameU3Ek__BackingField_13() { return &___U3CusernameU3Ek__BackingField_13; }
	inline void set_U3CusernameU3Ek__BackingField_13(String_t* value)
	{
		___U3CusernameU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CusernameU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CreateNewUserRequestData_t3622765534, ___U3CpasswordU3Ek__BackingField_14)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_14() const { return ___U3CpasswordU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_14() { return &___U3CpasswordU3Ek__BackingField_14; }
	inline void set_U3CpasswordU3Ek__BackingField_14(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpasswordU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CemailU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CreateNewUserRequestData_t3622765534, ___U3CemailU3Ek__BackingField_15)); }
	inline String_t* get_U3CemailU3Ek__BackingField_15() const { return ___U3CemailU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CemailU3Ek__BackingField_15() { return &___U3CemailU3Ek__BackingField_15; }
	inline void set_U3CemailU3Ek__BackingField_15(String_t* value)
	{
		___U3CemailU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CemailU3Ek__BackingField_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
