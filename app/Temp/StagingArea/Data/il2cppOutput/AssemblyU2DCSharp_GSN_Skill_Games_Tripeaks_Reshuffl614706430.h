﻿#pragma once

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

// GSN.Skill.Games.Tripeaks.ReshuffleEvent
struct  ReshuffleEvent_t614706430 
{
public:
	// System.String GSN.Skill.Games.Tripeaks.ReshuffleEvent::reshuffledCards
	String_t* ___reshuffledCards_0;
	// System.Int32 GSN.Skill.Games.Tripeaks.ReshuffleEvent::reshuffleTimePenalty
	int32_t ___reshuffleTimePenalty_1;

public:
	inline static int32_t get_offset_of_reshuffledCards_0() { return static_cast<int32_t>(offsetof(ReshuffleEvent_t614706430, ___reshuffledCards_0)); }
	inline String_t* get_reshuffledCards_0() const { return ___reshuffledCards_0; }
	inline String_t** get_address_of_reshuffledCards_0() { return &___reshuffledCards_0; }
	inline void set_reshuffledCards_0(String_t* value)
	{
		___reshuffledCards_0 = value;
		Il2CppCodeGenWriteBarrier(&___reshuffledCards_0, value);
	}

	inline static int32_t get_offset_of_reshuffleTimePenalty_1() { return static_cast<int32_t>(offsetof(ReshuffleEvent_t614706430, ___reshuffleTimePenalty_1)); }
	inline int32_t get_reshuffleTimePenalty_1() const { return ___reshuffleTimePenalty_1; }
	inline int32_t* get_address_of_reshuffleTimePenalty_1() { return &___reshuffleTimePenalty_1; }
	inline void set_reshuffleTimePenalty_1(int32_t value)
	{
		___reshuffleTimePenalty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Tripeaks.ReshuffleEvent
struct ReshuffleEvent_t614706430_marshaled_pinvoke
{
	char* ___reshuffledCards_0;
	int32_t ___reshuffleTimePenalty_1;
};
// Native definition for COM marshalling of GSN.Skill.Games.Tripeaks.ReshuffleEvent
struct ReshuffleEvent_t614706430_marshaled_com
{
	Il2CppChar* ___reshuffledCards_0;
	int32_t ___reshuffleTimePenalty_1;
};
