#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionContext/LoggingSettings
struct  LoggingSettings_t1913585530 
{
public:
	// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext/LoggingSettings::Enabled
	bool ___Enabled_0;
	// System.UInt32 GSN.Skill.Games.Common.Utils.ActionContext/LoggingSettings::PreferenceStrength
	uint32_t ___PreferenceStrength_1;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(LoggingSettings_t1913585530, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_PreferenceStrength_1() { return static_cast<int32_t>(offsetof(LoggingSettings_t1913585530, ___PreferenceStrength_1)); }
	inline uint32_t get_PreferenceStrength_1() const { return ___PreferenceStrength_1; }
	inline uint32_t* get_address_of_PreferenceStrength_1() { return &___PreferenceStrength_1; }
	inline void set_PreferenceStrength_1(uint32_t value)
	{
		___PreferenceStrength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.Utils.ActionContext/LoggingSettings
struct LoggingSettings_t1913585530_marshaled_pinvoke
{
	int32_t ___Enabled_0;
	uint32_t ___PreferenceStrength_1;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.Utils.ActionContext/LoggingSettings
struct LoggingSettings_t1913585530_marshaled_com
{
	int32_t ___Enabled_0;
	uint32_t ___PreferenceStrength_1;
};
