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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.VersionInfo/GameVersionInfo
struct  GameVersionInfo_t2993854658 
{
public:
	// System.String GSN.Skill.Games.Common.VersionInfo/GameVersionInfo::gameVersion
	String_t* ___gameVersion_0;
	// System.String GSN.Skill.Games.Common.VersionInfo/GameVersionInfo::sDKVersion
	String_t* ___sDKVersion_1;
	// System.String GSN.Skill.Games.Common.VersionInfo/GameVersionInfo::buildNumber
	String_t* ___buildNumber_2;

public:
	inline static int32_t get_offset_of_gameVersion_0() { return static_cast<int32_t>(offsetof(GameVersionInfo_t2993854658, ___gameVersion_0)); }
	inline String_t* get_gameVersion_0() const { return ___gameVersion_0; }
	inline String_t** get_address_of_gameVersion_0() { return &___gameVersion_0; }
	inline void set_gameVersion_0(String_t* value)
	{
		___gameVersion_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameVersion_0, value);
	}

	inline static int32_t get_offset_of_sDKVersion_1() { return static_cast<int32_t>(offsetof(GameVersionInfo_t2993854658, ___sDKVersion_1)); }
	inline String_t* get_sDKVersion_1() const { return ___sDKVersion_1; }
	inline String_t** get_address_of_sDKVersion_1() { return &___sDKVersion_1; }
	inline void set_sDKVersion_1(String_t* value)
	{
		___sDKVersion_1 = value;
		Il2CppCodeGenWriteBarrier(&___sDKVersion_1, value);
	}

	inline static int32_t get_offset_of_buildNumber_2() { return static_cast<int32_t>(offsetof(GameVersionInfo_t2993854658, ___buildNumber_2)); }
	inline String_t* get_buildNumber_2() const { return ___buildNumber_2; }
	inline String_t** get_address_of_buildNumber_2() { return &___buildNumber_2; }
	inline void set_buildNumber_2(String_t* value)
	{
		___buildNumber_2 = value;
		Il2CppCodeGenWriteBarrier(&___buildNumber_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.VersionInfo/GameVersionInfo
struct GameVersionInfo_t2993854658_marshaled_pinvoke
{
	char* ___gameVersion_0;
	char* ___sDKVersion_1;
	char* ___buildNumber_2;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.VersionInfo/GameVersionInfo
struct GameVersionInfo_t2993854658_marshaled_com
{
	Il2CppChar* ___gameVersion_0;
	Il2CppChar* ___sDKVersion_1;
	Il2CppChar* ___buildNumber_2;
};
