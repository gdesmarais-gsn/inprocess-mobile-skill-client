#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.InitWebViewEvent
struct  InitWebViewEvent_t2631083939  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.InitWebViewEvent::webObj
	WebObjectWrapper_t631940280 * ___webObj_0;

public:
	inline static int32_t get_offset_of_webObj_0() { return static_cast<int32_t>(offsetof(InitWebViewEvent_t2631083939, ___webObj_0)); }
	inline WebObjectWrapper_t631940280 * get_webObj_0() const { return ___webObj_0; }
	inline WebObjectWrapper_t631940280 ** get_address_of_webObj_0() { return &___webObj_0; }
	inline void set_webObj_0(WebObjectWrapper_t631940280 * value)
	{
		___webObj_0 = value;
		Il2CppCodeGenWriteBarrier(&___webObj_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
