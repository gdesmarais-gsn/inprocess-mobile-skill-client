#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si2435014031.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.AnalyticSender
struct  AnalyticSender_t2539319184  : public SingletonManual_1_t2435014031
{
public:
	// System.Action`1<System.String> GSN.Skill.Games.Common.Client.AnalyticSender::logFunction
	Action_1_t1831019615 * ___logFunction_1;

public:
	inline static int32_t get_offset_of_logFunction_1() { return static_cast<int32_t>(offsetof(AnalyticSender_t2539319184, ___logFunction_1)); }
	inline Action_1_t1831019615 * get_logFunction_1() const { return ___logFunction_1; }
	inline Action_1_t1831019615 ** get_address_of_logFunction_1() { return &___logFunction_1; }
	inline void set_logFunction_1(Action_1_t1831019615 * value)
	{
		___logFunction_1 = value;
		Il2CppCodeGenWriteBarrier(&___logFunction_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
