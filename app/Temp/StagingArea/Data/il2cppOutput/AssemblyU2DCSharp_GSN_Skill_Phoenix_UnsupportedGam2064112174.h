#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.UnsupportedGameListUpdatedEvent
struct  UnsupportedGameListUpdatedEvent_t2064112174  : public Il2CppObject
{
public:
	// System.Collections.Generic.HashSet`1<System.Int32> GSN.Skill.Phoenix.UnsupportedGameListUpdatedEvent::unsupportedPhoenixGames
	HashSet_1_t405338302 * ___unsupportedPhoenixGames_0;

public:
	inline static int32_t get_offset_of_unsupportedPhoenixGames_0() { return static_cast<int32_t>(offsetof(UnsupportedGameListUpdatedEvent_t2064112174, ___unsupportedPhoenixGames_0)); }
	inline HashSet_1_t405338302 * get_unsupportedPhoenixGames_0() const { return ___unsupportedPhoenixGames_0; }
	inline HashSet_1_t405338302 ** get_address_of_unsupportedPhoenixGames_0() { return &___unsupportedPhoenixGames_0; }
	inline void set_unsupportedPhoenixGames_0(HashSet_1_t405338302 * value)
	{
		___unsupportedPhoenixGames_0 = value;
		Il2CppCodeGenWriteBarrier(&___unsupportedPhoenixGames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
