#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.PlayfieldDataDB/SmartEntryCostConfig
struct  SmartEntryCostConfig_t1863879830  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Games.Tripeaks.PlayfieldDataDB/SmartEntryCostConfig::useSmartEntryCost
	bool ___useSmartEntryCost_0;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB/SmartEntryCostConfig::smartEntryCostStartPoint
	float ___smartEntryCostStartPoint_1;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB/SmartEntryCostConfig::smartEntryCostTaxRate
	float ___smartEntryCostTaxRate_2;

public:
	inline static int32_t get_offset_of_useSmartEntryCost_0() { return static_cast<int32_t>(offsetof(SmartEntryCostConfig_t1863879830, ___useSmartEntryCost_0)); }
	inline bool get_useSmartEntryCost_0() const { return ___useSmartEntryCost_0; }
	inline bool* get_address_of_useSmartEntryCost_0() { return &___useSmartEntryCost_0; }
	inline void set_useSmartEntryCost_0(bool value)
	{
		___useSmartEntryCost_0 = value;
	}

	inline static int32_t get_offset_of_smartEntryCostStartPoint_1() { return static_cast<int32_t>(offsetof(SmartEntryCostConfig_t1863879830, ___smartEntryCostStartPoint_1)); }
	inline float get_smartEntryCostStartPoint_1() const { return ___smartEntryCostStartPoint_1; }
	inline float* get_address_of_smartEntryCostStartPoint_1() { return &___smartEntryCostStartPoint_1; }
	inline void set_smartEntryCostStartPoint_1(float value)
	{
		___smartEntryCostStartPoint_1 = value;
	}

	inline static int32_t get_offset_of_smartEntryCostTaxRate_2() { return static_cast<int32_t>(offsetof(SmartEntryCostConfig_t1863879830, ___smartEntryCostTaxRate_2)); }
	inline float get_smartEntryCostTaxRate_2() const { return ___smartEntryCostTaxRate_2; }
	inline float* get_address_of_smartEntryCostTaxRate_2() { return &___smartEntryCostTaxRate_2; }
	inline void set_smartEntryCostTaxRate_2(float value)
	{
		___smartEntryCostTaxRate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
