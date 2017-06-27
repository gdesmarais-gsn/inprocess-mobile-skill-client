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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GroupLoadingData
struct  GroupLoadingData_t3963712907  : public Il2CppObject
{
public:
	// System.Single GSN.Skill.Games.Common.Utils.GroupLoadingData::toLoad
	float ___toLoad_0;
	// System.Single GSN.Skill.Games.Common.Utils.GroupLoadingData::loaded
	float ___loaded_1;
	// System.String GSN.Skill.Games.Common.Utils.GroupLoadingData::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_toLoad_0() { return static_cast<int32_t>(offsetof(GroupLoadingData_t3963712907, ___toLoad_0)); }
	inline float get_toLoad_0() const { return ___toLoad_0; }
	inline float* get_address_of_toLoad_0() { return &___toLoad_0; }
	inline void set_toLoad_0(float value)
	{
		___toLoad_0 = value;
	}

	inline static int32_t get_offset_of_loaded_1() { return static_cast<int32_t>(offsetof(GroupLoadingData_t3963712907, ___loaded_1)); }
	inline float get_loaded_1() const { return ___loaded_1; }
	inline float* get_address_of_loaded_1() { return &___loaded_1; }
	inline void set_loaded_1(float value)
	{
		___loaded_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(GroupLoadingData_t3963712907, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
