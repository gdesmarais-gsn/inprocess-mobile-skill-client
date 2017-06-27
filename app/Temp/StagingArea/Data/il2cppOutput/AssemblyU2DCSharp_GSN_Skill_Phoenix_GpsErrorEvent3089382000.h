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

// GSN.Skill.Phoenix.GpsErrorEvent
struct  GpsErrorEvent_t3089382000  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Phoenix.GpsErrorEvent::callback
	Action_t3226471752 * ___callback_0;
	// System.Action GSN.Skill.Phoenix.GpsErrorEvent::cancelCallback
	Action_t3226471752 * ___cancelCallback_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(GpsErrorEvent_t3089382000, ___callback_0)); }
	inline Action_t3226471752 * get_callback_0() const { return ___callback_0; }
	inline Action_t3226471752 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_t3226471752 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_cancelCallback_1() { return static_cast<int32_t>(offsetof(GpsErrorEvent_t3089382000, ___cancelCallback_1)); }
	inline Action_t3226471752 * get_cancelCallback_1() const { return ___cancelCallback_1; }
	inline Action_t3226471752 ** get_address_of_cancelCallback_1() { return &___cancelCallback_1; }
	inline void set_cancelCallback_1(Action_t3226471752 * value)
	{
		___cancelCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___cancelCallback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
