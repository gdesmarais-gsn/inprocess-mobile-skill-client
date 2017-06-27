#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ErrorDat2682468630.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.WebRequestErrorEvent
struct  WebRequestErrorEvent_t2748703781  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.ErrorData GSN.Skill.Phoenix.WebRequestErrorEvent::error
	ErrorData_t2682468630  ___error_0;

public:
	inline static int32_t get_offset_of_error_0() { return static_cast<int32_t>(offsetof(WebRequestErrorEvent_t2748703781, ___error_0)); }
	inline ErrorData_t2682468630  get_error_0() const { return ___error_0; }
	inline ErrorData_t2682468630 * get_address_of_error_0() { return &___error_0; }
	inline void set_error_0(ErrorData_t2682468630  value)
	{
		___error_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
