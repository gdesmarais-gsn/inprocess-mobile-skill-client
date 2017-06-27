#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Phoenix.Requests.Config.ConfigData/PhoenixConfigItem[]
struct PhoenixConfigItemU5BU5D_t966650264;
struct PhoenixConfigItem_t1757580021_marshaled_pinvoke;
struct PhoenixConfigItem_t1757580021_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Confi3742553349.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Config.ConfigData/Result
struct  Result_t3232657682 
{
public:
	// GSN.Skill.Phoenix.Requests.Config.ConfigData/Locations GSN.Skill.Phoenix.Requests.Config.ConfigData/Result::locations
	Locations_t3742553349  ___locations_0;
	// System.String[] GSN.Skill.Phoenix.Requests.Config.ConfigData/Result::depositAmounts
	StringU5BU5D_t1642385972* ___depositAmounts_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.Requests.Config.ConfigData/Result::links
	Dictionary_2_t3943999495 * ___links_2;
	// GSN.Skill.Phoenix.Requests.Config.ConfigData/PhoenixConfigItem[] GSN.Skill.Phoenix.Requests.Config.ConfigData/Result::phoenixConfig
	PhoenixConfigItemU5BU5D_t966650264* ___phoenixConfig_3;

public:
	inline static int32_t get_offset_of_locations_0() { return static_cast<int32_t>(offsetof(Result_t3232657682, ___locations_0)); }
	inline Locations_t3742553349  get_locations_0() const { return ___locations_0; }
	inline Locations_t3742553349 * get_address_of_locations_0() { return &___locations_0; }
	inline void set_locations_0(Locations_t3742553349  value)
	{
		___locations_0 = value;
	}

	inline static int32_t get_offset_of_depositAmounts_1() { return static_cast<int32_t>(offsetof(Result_t3232657682, ___depositAmounts_1)); }
	inline StringU5BU5D_t1642385972* get_depositAmounts_1() const { return ___depositAmounts_1; }
	inline StringU5BU5D_t1642385972** get_address_of_depositAmounts_1() { return &___depositAmounts_1; }
	inline void set_depositAmounts_1(StringU5BU5D_t1642385972* value)
	{
		___depositAmounts_1 = value;
		Il2CppCodeGenWriteBarrier(&___depositAmounts_1, value);
	}

	inline static int32_t get_offset_of_links_2() { return static_cast<int32_t>(offsetof(Result_t3232657682, ___links_2)); }
	inline Dictionary_2_t3943999495 * get_links_2() const { return ___links_2; }
	inline Dictionary_2_t3943999495 ** get_address_of_links_2() { return &___links_2; }
	inline void set_links_2(Dictionary_2_t3943999495 * value)
	{
		___links_2 = value;
		Il2CppCodeGenWriteBarrier(&___links_2, value);
	}

	inline static int32_t get_offset_of_phoenixConfig_3() { return static_cast<int32_t>(offsetof(Result_t3232657682, ___phoenixConfig_3)); }
	inline PhoenixConfigItemU5BU5D_t966650264* get_phoenixConfig_3() const { return ___phoenixConfig_3; }
	inline PhoenixConfigItemU5BU5D_t966650264** get_address_of_phoenixConfig_3() { return &___phoenixConfig_3; }
	inline void set_phoenixConfig_3(PhoenixConfigItemU5BU5D_t966650264* value)
	{
		___phoenixConfig_3 = value;
		Il2CppCodeGenWriteBarrier(&___phoenixConfig_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Config.ConfigData/Result
struct Result_t3232657682_marshaled_pinvoke
{
	Locations_t3742553349_marshaled_pinvoke ___locations_0;
	char** ___depositAmounts_1;
	Dictionary_2_t3943999495 * ___links_2;
	PhoenixConfigItem_t1757580021_marshaled_pinvoke* ___phoenixConfig_3;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Config.ConfigData/Result
struct Result_t3232657682_marshaled_com
{
	Locations_t3742553349_marshaled_com ___locations_0;
	Il2CppChar** ___depositAmounts_1;
	Dictionary_2_t3943999495 * ___links_2;
	PhoenixConfigItem_t1757580021_marshaled_com* ___phoenixConfig_3;
};
