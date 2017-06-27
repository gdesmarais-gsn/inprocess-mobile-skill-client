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

// GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameMap
struct  GameMap_t3793343951 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameMap::desktop_gametype_id
	String_t* ___desktop_gametype_id_0;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameMap::mobile_gametype_id
	String_t* ___mobile_gametype_id_1;

public:
	inline static int32_t get_offset_of_desktop_gametype_id_0() { return static_cast<int32_t>(offsetof(GameMap_t3793343951, ___desktop_gametype_id_0)); }
	inline String_t* get_desktop_gametype_id_0() const { return ___desktop_gametype_id_0; }
	inline String_t** get_address_of_desktop_gametype_id_0() { return &___desktop_gametype_id_0; }
	inline void set_desktop_gametype_id_0(String_t* value)
	{
		___desktop_gametype_id_0 = value;
		Il2CppCodeGenWriteBarrier(&___desktop_gametype_id_0, value);
	}

	inline static int32_t get_offset_of_mobile_gametype_id_1() { return static_cast<int32_t>(offsetof(GameMap_t3793343951, ___mobile_gametype_id_1)); }
	inline String_t* get_mobile_gametype_id_1() const { return ___mobile_gametype_id_1; }
	inline String_t** get_address_of_mobile_gametype_id_1() { return &___mobile_gametype_id_1; }
	inline void set_mobile_gametype_id_1(String_t* value)
	{
		___mobile_gametype_id_1 = value;
		Il2CppCodeGenWriteBarrier(&___mobile_gametype_id_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameMap
struct GameMap_t3793343951_marshaled_pinvoke
{
	char* ___desktop_gametype_id_0;
	char* ___mobile_gametype_id_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameMap
struct GameMap_t3793343951_marshaled_com
{
	Il2CppChar* ___desktop_gametype_id_0;
	Il2CppChar* ___mobile_gametype_id_1;
};
