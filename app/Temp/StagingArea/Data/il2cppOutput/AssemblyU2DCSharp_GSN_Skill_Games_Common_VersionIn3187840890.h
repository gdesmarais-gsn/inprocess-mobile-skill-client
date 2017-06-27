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
// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Games.Common.VersionInfo/GameVersionInfo>
struct Dictionary_2_t613666624;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.VersionInfo
struct  VersionInfo_t3187840890  : public Il2CppObject
{
public:

public:
};

struct VersionInfo_t3187840890_StaticFields
{
public:
	// System.String GSN.Skill.Games.Common.VersionInfo::BUILD_NUMBER
	String_t* ___BUILD_NUMBER_0;
	// System.String GSN.Skill.Games.Common.VersionInfo::sdkVersion
	String_t* ___sdkVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Games.Common.VersionInfo/GameVersionInfo> GSN.Skill.Games.Common.VersionInfo::gameVersions
	Dictionary_2_t613666624 * ___gameVersions_2;
	// System.String GSN.Skill.Games.Common.VersionInfo::build
	String_t* ___build_3;

public:
	inline static int32_t get_offset_of_BUILD_NUMBER_0() { return static_cast<int32_t>(offsetof(VersionInfo_t3187840890_StaticFields, ___BUILD_NUMBER_0)); }
	inline String_t* get_BUILD_NUMBER_0() const { return ___BUILD_NUMBER_0; }
	inline String_t** get_address_of_BUILD_NUMBER_0() { return &___BUILD_NUMBER_0; }
	inline void set_BUILD_NUMBER_0(String_t* value)
	{
		___BUILD_NUMBER_0 = value;
		Il2CppCodeGenWriteBarrier(&___BUILD_NUMBER_0, value);
	}

	inline static int32_t get_offset_of_sdkVersion_1() { return static_cast<int32_t>(offsetof(VersionInfo_t3187840890_StaticFields, ___sdkVersion_1)); }
	inline String_t* get_sdkVersion_1() const { return ___sdkVersion_1; }
	inline String_t** get_address_of_sdkVersion_1() { return &___sdkVersion_1; }
	inline void set_sdkVersion_1(String_t* value)
	{
		___sdkVersion_1 = value;
		Il2CppCodeGenWriteBarrier(&___sdkVersion_1, value);
	}

	inline static int32_t get_offset_of_gameVersions_2() { return static_cast<int32_t>(offsetof(VersionInfo_t3187840890_StaticFields, ___gameVersions_2)); }
	inline Dictionary_2_t613666624 * get_gameVersions_2() const { return ___gameVersions_2; }
	inline Dictionary_2_t613666624 ** get_address_of_gameVersions_2() { return &___gameVersions_2; }
	inline void set_gameVersions_2(Dictionary_2_t613666624 * value)
	{
		___gameVersions_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameVersions_2, value);
	}

	inline static int32_t get_offset_of_build_3() { return static_cast<int32_t>(offsetof(VersionInfo_t3187840890_StaticFields, ___build_3)); }
	inline String_t* get_build_3() const { return ___build_3; }
	inline String_t** get_address_of_build_3() { return &___build_3; }
	inline void set_build_3(String_t* value)
	{
		___build_3 = value;
		Il2CppCodeGenWriteBarrier(&___build_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
