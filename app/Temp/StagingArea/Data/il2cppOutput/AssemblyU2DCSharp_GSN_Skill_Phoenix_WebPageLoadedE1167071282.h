#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.WebPageLoadedEvent
struct  WebPageLoadedEvent_t1167071282  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.WebPageLoadedEvent::url
	String_t* ___url_0;
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.WebPageLoadedEvent::webObj
	WebObjectWrapper_t631940280 * ___webObj_1;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(WebPageLoadedEvent_t1167071282, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_webObj_1() { return static_cast<int32_t>(offsetof(WebPageLoadedEvent_t1167071282, ___webObj_1)); }
	inline WebObjectWrapper_t631940280 * get_webObj_1() const { return ___webObj_1; }
	inline WebObjectWrapper_t631940280 ** get_address_of_webObj_1() { return &___webObj_1; }
	inline void set_webObj_1(WebObjectWrapper_t631940280 * value)
	{
		___webObj_1 = value;
		Il2CppCodeGenWriteBarrier(&___webObj_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
