#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetTournResult3917028247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GetTournResultsSuccessEvent
struct  GetTournResultsSuccessEvent_t31795773  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData GSN.Skill.Phoenix.GetTournResultsSuccessEvent::results
	TournResultData_t3917028247  ___results_0;
	// System.Boolean GSN.Skill.Phoenix.GetTournResultsSuccessEvent::animate
	bool ___animate_1;

public:
	inline static int32_t get_offset_of_results_0() { return static_cast<int32_t>(offsetof(GetTournResultsSuccessEvent_t31795773, ___results_0)); }
	inline TournResultData_t3917028247  get_results_0() const { return ___results_0; }
	inline TournResultData_t3917028247 * get_address_of_results_0() { return &___results_0; }
	inline void set_results_0(TournResultData_t3917028247  value)
	{
		___results_0 = value;
	}

	inline static int32_t get_offset_of_animate_1() { return static_cast<int32_t>(offsetof(GetTournResultsSuccessEvent_t31795773, ___animate_1)); }
	inline bool get_animate_1() const { return ___animate_1; }
	inline bool* get_address_of_animate_1() { return &___animate_1; }
	inline void set_animate_1(bool value)
	{
		___animate_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
