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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anim2dPlayState/TimeEvent
struct  TimeEvent_t3275616986  : public Il2CppObject
{
public:
	// System.String Anim2dPlayState/TimeEvent::eventName
	String_t* ___eventName_0;
	// System.Single Anim2dPlayState/TimeEvent::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(TimeEvent_t3275616986, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventName_0, value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(TimeEvent_t3275616986, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
