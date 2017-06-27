#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game_T10378600.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateData/Result
struct  Result_t1091743635  : public TriPeaksResult_t10378600
{
public:
	// System.Boolean GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateData/Result::accepted
	bool ___accepted_2;

public:
	inline static int32_t get_offset_of_accepted_2() { return static_cast<int32_t>(offsetof(Result_t1091743635, ___accepted_2)); }
	inline bool get_accepted_2() const { return ___accepted_2; }
	inline bool* get_address_of_accepted_2() { return &___accepted_2; }
	inline void set_accepted_2(bool value)
	{
		___accepted_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
