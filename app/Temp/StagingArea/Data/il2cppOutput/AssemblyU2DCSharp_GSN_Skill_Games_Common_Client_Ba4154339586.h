#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Ga2237101310.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>
struct  BaseAnalytics_1_t4154339586  : public GameAnalyticSender_t2237101310
{
public:

public:
};

struct BaseAnalytics_1_t4154339586_StaticFields
{
public:
	// T GSN.Skill.Games.Common.Client.BaseAnalytics`1::_instance
	Il2CppObject * ____instance_14;

public:
	inline static int32_t get_offset_of__instance_14() { return static_cast<int32_t>(offsetof(BaseAnalytics_1_t4154339586_StaticFields, ____instance_14)); }
	inline Il2CppObject * get__instance_14() const { return ____instance_14; }
	inline Il2CppObject ** get_address_of__instance_14() { return &____instance_14; }
	inline void set__instance_14(Il2CppObject * value)
	{
		____instance_14 = value;
		Il2CppCodeGenWriteBarrier(&____instance_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
