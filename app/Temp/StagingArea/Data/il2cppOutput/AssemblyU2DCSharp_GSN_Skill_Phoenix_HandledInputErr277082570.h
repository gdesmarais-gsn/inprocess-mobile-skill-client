#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_ErrorTr918723703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.HandledInputErrorEvent
struct  HandledInputErrorEvent_t277082570  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Strings.ErrorTranslation GSN.Skill.Phoenix.HandledInputErrorEvent::errorTranslation
	ErrorTranslation_t918723703  ___errorTranslation_0;

public:
	inline static int32_t get_offset_of_errorTranslation_0() { return static_cast<int32_t>(offsetof(HandledInputErrorEvent_t277082570, ___errorTranslation_0)); }
	inline ErrorTranslation_t918723703  get_errorTranslation_0() const { return ___errorTranslation_0; }
	inline ErrorTranslation_t918723703 * get_address_of_errorTranslation_0() { return &___errorTranslation_0; }
	inline void set_errorTranslation_0(ErrorTranslation_t918723703  value)
	{
		___errorTranslation_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
