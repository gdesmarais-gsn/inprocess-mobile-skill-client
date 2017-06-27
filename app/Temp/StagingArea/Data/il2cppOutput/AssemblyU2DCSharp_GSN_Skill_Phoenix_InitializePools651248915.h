#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.InitializePoolsEvent
struct  InitializePoolsEvent_t651248915  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Phoenix.InitializePoolsEvent::OnCompleteCallback
	Action_t3226471752 * ___OnCompleteCallback_0;

public:
	inline static int32_t get_offset_of_OnCompleteCallback_0() { return static_cast<int32_t>(offsetof(InitializePoolsEvent_t651248915, ___OnCompleteCallback_0)); }
	inline Action_t3226471752 * get_OnCompleteCallback_0() const { return ___OnCompleteCallback_0; }
	inline Action_t3226471752 ** get_address_of_OnCompleteCallback_0() { return &___OnCompleteCallback_0; }
	inline void set_OnCompleteCallback_0(Action_t3226471752 * value)
	{
		___OnCompleteCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnCompleteCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
