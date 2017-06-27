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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques1814137543.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Paymen274481908.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Payment.DepositRequestData
struct  DepositRequestData_t2329604405  : public WebPOSTRequest_1_t1814137543
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::_clientID
	String_t* ____clientID_8;
	// System.Int32 GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::<amount>k__BackingField
	int32_t ___U3CamountU3Ek__BackingField_13;
	// System.Int32 GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::<creditCardID>k__BackingField
	int32_t ___U3CcreditCardIDU3Ek__BackingField_14;
	// System.String GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_15;
	// GSN.Skill.Phoenix.Requests.Payment.DepositData GSN.Skill.Phoenix.Requests.Payment.DepositRequestData::<Response>k__BackingField
	DepositData_t274481908  ___U3CResponseU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of__clientID_8() { return static_cast<int32_t>(offsetof(DepositRequestData_t2329604405, ____clientID_8)); }
	inline String_t* get__clientID_8() const { return ____clientID_8; }
	inline String_t** get_address_of__clientID_8() { return &____clientID_8; }
	inline void set__clientID_8(String_t* value)
	{
		____clientID_8 = value;
		Il2CppCodeGenWriteBarrier(&____clientID_8, value);
	}

	inline static int32_t get_offset_of_U3CamountU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(DepositRequestData_t2329604405, ___U3CamountU3Ek__BackingField_13)); }
	inline int32_t get_U3CamountU3Ek__BackingField_13() const { return ___U3CamountU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CamountU3Ek__BackingField_13() { return &___U3CamountU3Ek__BackingField_13; }
	inline void set_U3CamountU3Ek__BackingField_13(int32_t value)
	{
		___U3CamountU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CcreditCardIDU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(DepositRequestData_t2329604405, ___U3CcreditCardIDU3Ek__BackingField_14)); }
	inline int32_t get_U3CcreditCardIDU3Ek__BackingField_14() const { return ___U3CcreditCardIDU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CcreditCardIDU3Ek__BackingField_14() { return &___U3CcreditCardIDU3Ek__BackingField_14; }
	inline void set_U3CcreditCardIDU3Ek__BackingField_14(int32_t value)
	{
		___U3CcreditCardIDU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DepositRequestData_t2329604405, ___U3CpasswordU3Ek__BackingField_15)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_15() const { return ___U3CpasswordU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_15() { return &___U3CpasswordU3Ek__BackingField_15; }
	inline void set_U3CpasswordU3Ek__BackingField_15(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpasswordU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DepositRequestData_t2329604405, ___U3CResponseU3Ek__BackingField_16)); }
	inline DepositData_t274481908  get_U3CResponseU3Ek__BackingField_16() const { return ___U3CResponseU3Ek__BackingField_16; }
	inline DepositData_t274481908 * get_address_of_U3CResponseU3Ek__BackingField_16() { return &___U3CResponseU3Ek__BackingField_16; }
	inline void set_U3CResponseU3Ek__BackingField_16(DepositData_t274481908  value)
	{
		___U3CResponseU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
