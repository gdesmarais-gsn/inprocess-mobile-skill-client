#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameMap>
struct Dictionary_2_t1413155917;
// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType>
struct Dictionary_2_t341500141;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/Result
struct  Result_t1223245258 
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameMap> GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/Result::gameMap
	Dictionary_2_t1413155917 * ___gameMap_0;
	// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType> GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/Result::gametypes
	Dictionary_2_t341500141 * ___gametypes_1;

public:
	inline static int32_t get_offset_of_gameMap_0() { return static_cast<int32_t>(offsetof(Result_t1223245258, ___gameMap_0)); }
	inline Dictionary_2_t1413155917 * get_gameMap_0() const { return ___gameMap_0; }
	inline Dictionary_2_t1413155917 ** get_address_of_gameMap_0() { return &___gameMap_0; }
	inline void set_gameMap_0(Dictionary_2_t1413155917 * value)
	{
		___gameMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameMap_0, value);
	}

	inline static int32_t get_offset_of_gametypes_1() { return static_cast<int32_t>(offsetof(Result_t1223245258, ___gametypes_1)); }
	inline Dictionary_2_t341500141 * get_gametypes_1() const { return ___gametypes_1; }
	inline Dictionary_2_t341500141 ** get_address_of_gametypes_1() { return &___gametypes_1; }
	inline void set_gametypes_1(Dictionary_2_t341500141 * value)
	{
		___gametypes_1 = value;
		Il2CppCodeGenWriteBarrier(&___gametypes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/Result
struct Result_t1223245258_marshaled_pinvoke
{
	Dictionary_2_t1413155917 * ___gameMap_0;
	Dictionary_2_t341500141 * ___gametypes_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/Result
struct Result_t1223245258_marshaled_com
{
	Dictionary_2_t1413155917 * ___gameMap_0;
	Dictionary_2_t341500141 * ___gametypes_1;
};
