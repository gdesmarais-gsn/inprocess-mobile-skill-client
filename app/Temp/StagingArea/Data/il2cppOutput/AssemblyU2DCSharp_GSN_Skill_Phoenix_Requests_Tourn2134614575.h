#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/HistoryItem[]
struct HistoryItemU5BU5D_t2765614668;
struct HistoryItem_t2801689937_marshaled_pinvoke;
struct HistoryItem_t2801689937_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/Result
struct  Result_t2134614575 
{
public:
	// GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/HistoryItem[] GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/Result::tournaments
	HistoryItemU5BU5D_t2765614668* ___tournaments_0;

public:
	inline static int32_t get_offset_of_tournaments_0() { return static_cast<int32_t>(offsetof(Result_t2134614575, ___tournaments_0)); }
	inline HistoryItemU5BU5D_t2765614668* get_tournaments_0() const { return ___tournaments_0; }
	inline HistoryItemU5BU5D_t2765614668** get_address_of_tournaments_0() { return &___tournaments_0; }
	inline void set_tournaments_0(HistoryItemU5BU5D_t2765614668* value)
	{
		___tournaments_0 = value;
		Il2CppCodeGenWriteBarrier(&___tournaments_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/Result
struct Result_t2134614575_marshaled_pinvoke
{
	HistoryItem_t2801689937_marshaled_pinvoke* ___tournaments_0;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/Result
struct Result_t2134614575_marshaled_com
{
	HistoryItem_t2801689937_marshaled_com* ___tournaments_0;
};
