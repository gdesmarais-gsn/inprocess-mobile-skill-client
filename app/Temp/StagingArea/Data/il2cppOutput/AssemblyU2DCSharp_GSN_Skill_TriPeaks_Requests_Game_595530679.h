#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameData/TriPeaksStartData
struct TriPeaksStartData_t3895845265;

#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game_T10378600.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameData/Result
struct  Result_t595530679  : public TriPeaksResult_t10378600
{
public:
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameData/TriPeaksStartData GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameData/Result::start_data
	TriPeaksStartData_t3895845265 * ___start_data_2;

public:
	inline static int32_t get_offset_of_start_data_2() { return static_cast<int32_t>(offsetof(Result_t595530679, ___start_data_2)); }
	inline TriPeaksStartData_t3895845265 * get_start_data_2() const { return ___start_data_2; }
	inline TriPeaksStartData_t3895845265 ** get_address_of_start_data_2() { return &___start_data_2; }
	inline void set_start_data_2(TriPeaksStartData_t3895845265 * value)
	{
		___start_data_2 = value;
		Il2CppCodeGenWriteBarrier(&___start_data_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
