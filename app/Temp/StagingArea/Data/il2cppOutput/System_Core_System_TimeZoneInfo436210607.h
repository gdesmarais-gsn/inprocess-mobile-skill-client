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
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t2338614759;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_TimeSpan3430258949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo
struct  TimeZoneInfo_t436210607  : public Il2CppObject
{
public:
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t3430258949  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_1;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_2;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_3;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t2338614759* ___adjustmentRules_4;

public:
	inline static int32_t get_offset_of_baseUtcOffset_0() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___baseUtcOffset_0)); }
	inline TimeSpan_t3430258949  get_baseUtcOffset_0() const { return ___baseUtcOffset_0; }
	inline TimeSpan_t3430258949 * get_address_of_baseUtcOffset_0() { return &___baseUtcOffset_0; }
	inline void set_baseUtcOffset_0(TimeSpan_t3430258949  value)
	{
		___baseUtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier(&___displayName_1, value);
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_disableDaylightSavingTime_3() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___disableDaylightSavingTime_3)); }
	inline bool get_disableDaylightSavingTime_3() const { return ___disableDaylightSavingTime_3; }
	inline bool* get_address_of_disableDaylightSavingTime_3() { return &___disableDaylightSavingTime_3; }
	inline void set_disableDaylightSavingTime_3(bool value)
	{
		___disableDaylightSavingTime_3 = value;
	}

	inline static int32_t get_offset_of_adjustmentRules_4() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___adjustmentRules_4)); }
	inline AdjustmentRuleU5BU5D_t2338614759* get_adjustmentRules_4() const { return ___adjustmentRules_4; }
	inline AdjustmentRuleU5BU5D_t2338614759** get_address_of_adjustmentRules_4() { return &___adjustmentRules_4; }
	inline void set_adjustmentRules_4(AdjustmentRuleU5BU5D_t2338614759* value)
	{
		___adjustmentRules_4 = value;
		Il2CppCodeGenWriteBarrier(&___adjustmentRules_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
