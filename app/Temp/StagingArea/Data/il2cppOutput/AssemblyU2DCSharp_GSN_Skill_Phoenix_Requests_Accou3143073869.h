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

// GSN.Skill.Phoenix.Requests.Account.RememberMeLoginRequestData
struct  RememberMeLoginRequestData_t3143073869  : public WebPOSTRequest_1_t3469349887
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.RememberMeLoginRequestData::_username
	String_t* ____username_10;
	// System.String GSN.Skill.Phoenix.Requests.Account.RememberMeLoginRequestData::_authToken
	String_t* ____authToken_11;
	// GSN.Skill.Phoenix.Requests.Account.AccountLoginData GSN.Skill.Phoenix.Requests.Account.RememberMeLoginRequestData::<Response>k__BackingField
	AccountLoginData_t1929694252  ___U3CResponseU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of__username_10() { return static_cast<int32_t>(offsetof(RememberMeLoginRequestData_t3143073869, ____username_10)); }
	inline String_t* get__username_10() const { return ____username_10; }
	inline String_t** get_address_of__username_10() { return &____username_10; }
	inline void set__username_10(String_t* value)
	{
		____username_10 = value;
		Il2CppCodeGenWriteBarrier(&____username_10, value);
	}

	inline static int32_t get_offset_of__authToken_11() { return static_cast<int32_t>(offsetof(RememberMeLoginRequestData_t3143073869, ____authToken_11)); }
	inline String_t* get__authToken_11() const { return ____authToken_11; }
	inline String_t** get_address_of__authToken_11() { return &____authToken_11; }
	inline void set__authToken_11(String_t* value)
	{
		____authToken_11 = value;
		Il2CppCodeGenWriteBarrier(&____authToken_11, value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RememberMeLoginRequestData_t3143073869, ___U3CResponseU3Ek__BackingField_12)); }
	inline AccountLoginData_t1929694252  get_U3CResponseU3Ek__BackingField_12() const { return ___U3CResponseU3Ek__BackingField_12; }
	inline AccountLoginData_t1929694252 * get_address_of_U3CResponseU3Ek__BackingField_12() { return &___U3CResponseU3Ek__BackingField_12; }
	inline void set_U3CResponseU3Ek__BackingField_12(AccountLoginData_t1929694252  value)
	{
		___U3CResponseU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
