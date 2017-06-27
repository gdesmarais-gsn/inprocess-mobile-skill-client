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

// GSN.Skill.Phoenix.IJSEvent
struct  IJSEvent_t1699644414  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.IJSEvent::detail
	String_t* ___detail_0;
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.IJSEvent::webObj
	WebObjectWrapper_t631940280 * ___webObj_1;

public:
	inline static int32_t get_offset_of_detail_0() { return static_cast<int32_t>(offsetof(IJSEvent_t1699644414, ___detail_0)); }
	inline String_t* get_detail_0() const { return ___detail_0; }
	inline String_t** get_address_of_detail_0() { return &___detail_0; }
	inline void set_detail_0(String_t* value)
	{
		___detail_0 = value;
		Il2CppCodeGenWriteBarrier(&___detail_0, value);
	}

	inline static int32_t get_offset_of_webObj_1() { return static_cast<int32_t>(offsetof(IJSEvent_t1699644414, ___webObj_1)); }
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
