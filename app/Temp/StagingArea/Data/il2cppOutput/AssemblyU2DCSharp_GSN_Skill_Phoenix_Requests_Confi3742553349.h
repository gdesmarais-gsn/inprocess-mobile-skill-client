#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t1298644088;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Config.ConfigData/Locations
struct  Locations_t3742553349 
{
public:
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> GSN.Skill.Phoenix.Requests.Config.ConfigData/Locations::States
	SortedDictionary_2_t1298644088 * ___States_0;
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> GSN.Skill.Phoenix.Requests.Config.ConfigData/Locations::Countries
	SortedDictionary_2_t1298644088 * ___Countries_1;
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> GSN.Skill.Phoenix.Requests.Config.ConfigData/Locations::Provinces
	SortedDictionary_2_t1298644088 * ___Provinces_2;

public:
	inline static int32_t get_offset_of_States_0() { return static_cast<int32_t>(offsetof(Locations_t3742553349, ___States_0)); }
	inline SortedDictionary_2_t1298644088 * get_States_0() const { return ___States_0; }
	inline SortedDictionary_2_t1298644088 ** get_address_of_States_0() { return &___States_0; }
	inline void set_States_0(SortedDictionary_2_t1298644088 * value)
	{
		___States_0 = value;
		Il2CppCodeGenWriteBarrier(&___States_0, value);
	}

	inline static int32_t get_offset_of_Countries_1() { return static_cast<int32_t>(offsetof(Locations_t3742553349, ___Countries_1)); }
	inline SortedDictionary_2_t1298644088 * get_Countries_1() const { return ___Countries_1; }
	inline SortedDictionary_2_t1298644088 ** get_address_of_Countries_1() { return &___Countries_1; }
	inline void set_Countries_1(SortedDictionary_2_t1298644088 * value)
	{
		___Countries_1 = value;
		Il2CppCodeGenWriteBarrier(&___Countries_1, value);
	}

	inline static int32_t get_offset_of_Provinces_2() { return static_cast<int32_t>(offsetof(Locations_t3742553349, ___Provinces_2)); }
	inline SortedDictionary_2_t1298644088 * get_Provinces_2() const { return ___Provinces_2; }
	inline SortedDictionary_2_t1298644088 ** get_address_of_Provinces_2() { return &___Provinces_2; }
	inline void set_Provinces_2(SortedDictionary_2_t1298644088 * value)
	{
		___Provinces_2 = value;
		Il2CppCodeGenWriteBarrier(&___Provinces_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Config.ConfigData/Locations
struct Locations_t3742553349_marshaled_pinvoke
{
	SortedDictionary_2_t1298644088 * ___States_0;
	SortedDictionary_2_t1298644088 * ___Countries_1;
	SortedDictionary_2_t1298644088 * ___Provinces_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Config.ConfigData/Locations
struct Locations_t3742553349_marshaled_com
{
	SortedDictionary_2_t1298644088 * ___States_0;
	SortedDictionary_2_t1298644088 * ___Countries_1;
	SortedDictionary_2_t1298644088 * ___Provinces_2;
};
