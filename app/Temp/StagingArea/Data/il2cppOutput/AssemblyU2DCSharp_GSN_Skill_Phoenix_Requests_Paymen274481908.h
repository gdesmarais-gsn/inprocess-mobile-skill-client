#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Paymen156255494.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Payment.DepositData
struct  DepositData_t274481908 
{
public:
	// GSN.Skill.Phoenix.Requests.Payment.DepositData/Result GSN.Skill.Phoenix.Requests.Payment.DepositData::result
	Result_t156255494  ___result_0;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(DepositData_t274481908, ___result_0)); }
	inline Result_t156255494  get_result_0() const { return ___result_0; }
	inline Result_t156255494 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Result_t156255494  value)
	{
		___result_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Payment.DepositData
struct DepositData_t274481908_marshaled_pinvoke
{
	Result_t156255494_marshaled_pinvoke ___result_0;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Payment.DepositData
struct DepositData_t274481908_marshaled_com
{
	Result_t156255494_marshaled_com ___result_0;
};
