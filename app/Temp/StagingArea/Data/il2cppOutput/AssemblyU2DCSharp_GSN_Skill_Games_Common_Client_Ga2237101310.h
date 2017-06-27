#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_An2539319184.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.GameAnalyticSender
struct  GameAnalyticSender_t2237101310  : public AnalyticSender_t2539319184
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> GSN.Skill.Games.Common.Client.GameAnalyticSender::_analyticData
	Dictionary_2_t309261261 * ____analyticData_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> GSN.Skill.Games.Common.Client.GameAnalyticSender::_additionalData
	Dictionary_2_t309261261 * ____additionalData_3;

public:
	inline static int32_t get_offset_of__analyticData_2() { return static_cast<int32_t>(offsetof(GameAnalyticSender_t2237101310, ____analyticData_2)); }
	inline Dictionary_2_t309261261 * get__analyticData_2() const { return ____analyticData_2; }
	inline Dictionary_2_t309261261 ** get_address_of__analyticData_2() { return &____analyticData_2; }
	inline void set__analyticData_2(Dictionary_2_t309261261 * value)
	{
		____analyticData_2 = value;
		Il2CppCodeGenWriteBarrier(&____analyticData_2, value);
	}

	inline static int32_t get_offset_of__additionalData_3() { return static_cast<int32_t>(offsetof(GameAnalyticSender_t2237101310, ____additionalData_3)); }
	inline Dictionary_2_t309261261 * get__additionalData_3() const { return ____additionalData_3; }
	inline Dictionary_2_t309261261 ** get_address_of__additionalData_3() { return &____additionalData_3; }
	inline void set__additionalData_3(Dictionary_2_t309261261 * value)
	{
		____additionalData_3 = value;
		Il2CppCodeGenWriteBarrier(&____additionalData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
