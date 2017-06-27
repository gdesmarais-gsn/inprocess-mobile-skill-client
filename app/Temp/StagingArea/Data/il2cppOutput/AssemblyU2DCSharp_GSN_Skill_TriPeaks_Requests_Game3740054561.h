#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksDataSafeFinishData/Result
struct Result_t2024108695;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksDataSafeFinishData
struct  TriPeaksDataSafeFinishData_t3740054561 
{
public:
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksDataSafeFinishData/Result GSN.Skill.TriPeaks.Requests.Game.TriPeaksDataSafeFinishData::result
	Result_t2024108695 * ___result_0;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(TriPeaksDataSafeFinishData_t3740054561, ___result_0)); }
	inline Result_t2024108695 * get_result_0() const { return ___result_0; }
	inline Result_t2024108695 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Result_t2024108695 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier(&___result_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.TriPeaks.Requests.Game.TriPeaksDataSafeFinishData
struct TriPeaksDataSafeFinishData_t3740054561_marshaled_pinvoke
{
	Result_t2024108695 * ___result_0;
};
// Native definition for COM marshalling of GSN.Skill.TriPeaks.Requests.Game.TriPeaksDataSafeFinishData
struct TriPeaksDataSafeFinishData_t3740054561_marshaled_com
{
	Result_t2024108695 * ___result_0;
};
