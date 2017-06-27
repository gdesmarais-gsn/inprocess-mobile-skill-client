#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.GetTournResultsSuccessEvent>
struct Dictionary_2_t3334588704;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.TournamentResultDataCache
struct  TournamentResultDataCache_t1061086862  : public Il2CppObject
{
public:

public:
};

struct TournamentResultDataCache_t1061086862_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.GetTournResultsSuccessEvent> GSN.Skill.Phoenix.Model.Popups.TournamentResultDataCache::_cachedTournamentResultData
	Dictionary_2_t3334588704 * ____cachedTournamentResultData_0;

public:
	inline static int32_t get_offset_of__cachedTournamentResultData_0() { return static_cast<int32_t>(offsetof(TournamentResultDataCache_t1061086862_StaticFields, ____cachedTournamentResultData_0)); }
	inline Dictionary_2_t3334588704 * get__cachedTournamentResultData_0() const { return ____cachedTournamentResultData_0; }
	inline Dictionary_2_t3334588704 ** get_address_of__cachedTournamentResultData_0() { return &____cachedTournamentResultData_0; }
	inline void set__cachedTournamentResultData_0(Dictionary_2_t3334588704 * value)
	{
		____cachedTournamentResultData_0 = value;
		Il2CppCodeGenWriteBarrier(&____cachedTournamentResultData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
