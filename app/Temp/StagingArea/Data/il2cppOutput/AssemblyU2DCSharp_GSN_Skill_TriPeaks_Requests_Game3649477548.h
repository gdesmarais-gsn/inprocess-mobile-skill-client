﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData/Result
struct Result_t3010649344;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData
struct  TriPeaksNotaryData_t3649477548 
{
public:
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData/Result GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData::result
	Result_t3010649344 * ___result_0;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(TriPeaksNotaryData_t3649477548, ___result_0)); }
	inline Result_t3010649344 * get_result_0() const { return ___result_0; }
	inline Result_t3010649344 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Result_t3010649344 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier(&___result_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData
struct TriPeaksNotaryData_t3649477548_marshaled_pinvoke
{
	Result_t3010649344 * ___result_0;
};
// Native definition for COM marshalling of GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData
struct TriPeaksNotaryData_t3649477548_marshaled_com
{
	Result_t3010649344 * ___result_0;
};
