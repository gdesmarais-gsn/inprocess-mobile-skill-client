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

// GSN.Skill.Phoenix.Requests.Account.GetPlayerInfoRequestData
struct  GetPlayerInfoRequestData_t245305612  : public WebPOSTRequest_1_t3469349887
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.GetPlayerInfoRequestData::_username
	String_t* ____username_9;
	// GSN.Skill.Phoenix.Requests.Account.AccountLoginData GSN.Skill.Phoenix.Requests.Account.GetPlayerInfoRequestData::<Response>k__BackingField
	AccountLoginData_t1929694252  ___U3CResponseU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__username_9() { return static_cast<int32_t>(offsetof(GetPlayerInfoRequestData_t245305612, ____username_9)); }
	inline String_t* get__username_9() const { return ____username_9; }
	inline String_t** get_address_of__username_9() { return &____username_9; }
	inline void set__username_9(String_t* value)
	{
		____username_9 = value;
		Il2CppCodeGenWriteBarrier(&____username_9, value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GetPlayerInfoRequestData_t245305612, ___U3CResponseU3Ek__BackingField_10)); }
	inline AccountLoginData_t1929694252  get_U3CResponseU3Ek__BackingField_10() const { return ___U3CResponseU3Ek__BackingField_10; }
	inline AccountLoginData_t1929694252 * get_address_of_U3CResponseU3Ek__BackingField_10() { return &___U3CResponseU3Ek__BackingField_10; }
	inline void set_U3CResponseU3Ek__BackingField_10(AccountLoginData_t1929694252  value)
	{
		___U3CResponseU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
