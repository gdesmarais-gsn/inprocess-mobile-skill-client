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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques1883044279.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "mscorlib_System_Decimal724701077.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Paymen343388644.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData
struct  WithdrawRequestData_t4266650011  : public WebPOSTRequest_1_t1883044279
{
public:
	// System.Decimal GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::<amount>k__BackingField
	Decimal_t724701077  ___U3CamountU3Ek__BackingField_11;
	// System.String GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_12;
	// System.String GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::_clientID
	String_t* ____clientID_13;
	// GSN.Skill.Phoenix.Requests.Payment.WithdrawData GSN.Skill.Phoenix.Requests.Payment.WithdrawRequestData::<Response>k__BackingField
	WithdrawData_t343388644  ___U3CResponseU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CamountU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WithdrawRequestData_t4266650011, ___U3CamountU3Ek__BackingField_11)); }
	inline Decimal_t724701077  get_U3CamountU3Ek__BackingField_11() const { return ___U3CamountU3Ek__BackingField_11; }
	inline Decimal_t724701077 * get_address_of_U3CamountU3Ek__BackingField_11() { return &___U3CamountU3Ek__BackingField_11; }
	inline void set_U3CamountU3Ek__BackingField_11(Decimal_t724701077  value)
	{
		___U3CamountU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WithdrawRequestData_t4266650011, ___U3CpasswordU3Ek__BackingField_12)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_12() const { return ___U3CpasswordU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_12() { return &___U3CpasswordU3Ek__BackingField_12; }
	inline void set_U3CpasswordU3Ek__BackingField_12(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpasswordU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of__clientID_13() { return static_cast<int32_t>(offsetof(WithdrawRequestData_t4266650011, ____clientID_13)); }
	inline String_t* get__clientID_13() const { return ____clientID_13; }
	inline String_t** get_address_of__clientID_13() { return &____clientID_13; }
	inline void set__clientID_13(String_t* value)
	{
		____clientID_13 = value;
		Il2CppCodeGenWriteBarrier(&____clientID_13, value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WithdrawRequestData_t4266650011, ___U3CResponseU3Ek__BackingField_14)); }
	inline WithdrawData_t343388644  get_U3CResponseU3Ek__BackingField_14() const { return ___U3CResponseU3Ek__BackingField_14; }
	inline WithdrawData_t343388644 * get_address_of_U3CResponseU3Ek__BackingField_14() { return &___U3CResponseU3Ek__BackingField_14; }
	inline void set_U3CResponseU3Ek__BackingField_14(WithdrawData_t343388644  value)
	{
		___U3CResponseU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
