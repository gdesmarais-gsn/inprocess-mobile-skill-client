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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques4248893442.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Rewar2709237807.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Reward.RedeemRewardRequestData
struct  RedeemRewardRequestData_t3840310926  : public WebPOSTRequest_1_t4248893442
{
public:
	// System.Int32 GSN.Skill.Phoenix.Requests.Reward.RedeemRewardRequestData::<rewardID>k__BackingField
	int32_t ___U3CrewardIDU3Ek__BackingField_9;
	// GSN.Skill.Phoenix.Requests.Reward.RedeemRewardData GSN.Skill.Phoenix.Requests.Reward.RedeemRewardRequestData::<Response>k__BackingField
	RedeemRewardData_t2709237807  ___U3CResponseU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CrewardIDU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RedeemRewardRequestData_t3840310926, ___U3CrewardIDU3Ek__BackingField_9)); }
	inline int32_t get_U3CrewardIDU3Ek__BackingField_9() const { return ___U3CrewardIDU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CrewardIDU3Ek__BackingField_9() { return &___U3CrewardIDU3Ek__BackingField_9; }
	inline void set_U3CrewardIDU3Ek__BackingField_9(int32_t value)
	{
		___U3CrewardIDU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RedeemRewardRequestData_t3840310926, ___U3CResponseU3Ek__BackingField_10)); }
	inline RedeemRewardData_t2709237807  get_U3CResponseU3Ek__BackingField_10() const { return ___U3CResponseU3Ek__BackingField_10; }
	inline RedeemRewardData_t2709237807 * get_address_of_U3CResponseU3Ek__BackingField_10() { return &___U3CResponseU3Ek__BackingField_10; }
	inline void set_U3CResponseU3Ek__BackingField_10(RedeemRewardData_t2709237807  value)
	{
		___U3CResponseU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
