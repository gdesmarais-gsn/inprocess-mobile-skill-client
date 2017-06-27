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

// GSN.Skill.Phoenix.Model.Popups.GenericErrorPopupModel
struct  GenericErrorPopupModel_t688377924  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.ErrorData GSN.Skill.Phoenix.Model.Popups.GenericErrorPopupModel::_errorData
	ErrorData_t2682468630  ____errorData_0;

public:
	inline static int32_t get_offset_of__errorData_0() { return static_cast<int32_t>(offsetof(GenericErrorPopupModel_t688377924, ____errorData_0)); }
	inline ErrorData_t2682468630  get__errorData_0() const { return ____errorData_0; }
	inline ErrorData_t2682468630 * get_address_of__errorData_0() { return &____errorData_0; }
	inline void set__errorData_0(ErrorData_t2682468630  value)
	{
		____errorData_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
