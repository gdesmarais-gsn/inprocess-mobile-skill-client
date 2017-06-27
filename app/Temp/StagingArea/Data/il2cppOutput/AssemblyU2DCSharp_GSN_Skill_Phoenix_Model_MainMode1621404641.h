#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.VersionCheckEvent
struct VersionCheckEvent_t894034262;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.MainModel/<OnVersionCheckComplete>c__AnonStorey0
struct  U3COnVersionCheckCompleteU3Ec__AnonStorey0_t1621404641  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.VersionCheckEvent GSN.Skill.Phoenix.Model.MainModel/<OnVersionCheckComplete>c__AnonStorey0::versionCheckEvent
	VersionCheckEvent_t894034262 * ___versionCheckEvent_0;

public:
	inline static int32_t get_offset_of_versionCheckEvent_0() { return static_cast<int32_t>(offsetof(U3COnVersionCheckCompleteU3Ec__AnonStorey0_t1621404641, ___versionCheckEvent_0)); }
	inline VersionCheckEvent_t894034262 * get_versionCheckEvent_0() const { return ___versionCheckEvent_0; }
	inline VersionCheckEvent_t894034262 ** get_address_of_versionCheckEvent_0() { return &___versionCheckEvent_0; }
	inline void set_versionCheckEvent_0(VersionCheckEvent_t894034262 * value)
	{
		___versionCheckEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___versionCheckEvent_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
