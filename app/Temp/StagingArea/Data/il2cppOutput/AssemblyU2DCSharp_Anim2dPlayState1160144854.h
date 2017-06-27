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
// System.Single[]
struct SingleU5BU5D_t577127397;
// Anim2dPlayState/TimeEvent[]
struct TimeEventU5BU5D_t982561919;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anim2dPlayState
struct  Anim2dPlayState_t1160144854  : public Il2CppObject
{
public:
	// System.String Anim2dPlayState::name
	String_t* ___name_0;
	// System.Int32 Anim2dPlayState::trackNumber
	int32_t ___trackNumber_1;
	// System.Single Anim2dPlayState::blendTime
	float ___blendTime_2;
	// System.Single Anim2dPlayState::skipTime
	float ___skipTime_3;
	// System.Boolean Anim2dPlayState::looped
	bool ___looped_4;
	// System.Single Anim2dPlayState::speed
	float ___speed_5;
	// System.Boolean Anim2dPlayState::eventOnEnter
	bool ___eventOnEnter_6;
	// System.Boolean Anim2dPlayState::eventOnStart
	bool ___eventOnStart_7;
	// System.Single[] Anim2dPlayState::eventsAtTimes
	SingleU5BU5D_t577127397* ___eventsAtTimes_8;
	// System.Boolean Anim2dPlayState::eventOnEnd
	bool ___eventOnEnd_9;
	// System.Boolean Anim2dPlayState::eventOnExit
	bool ___eventOnExit_10;
	// Anim2dPlayState/TimeEvent[] Anim2dPlayState::sortedTimeEvents
	TimeEventU5BU5D_t982561919* ___sortedTimeEvents_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_trackNumber_1() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___trackNumber_1)); }
	inline int32_t get_trackNumber_1() const { return ___trackNumber_1; }
	inline int32_t* get_address_of_trackNumber_1() { return &___trackNumber_1; }
	inline void set_trackNumber_1(int32_t value)
	{
		___trackNumber_1 = value;
	}

	inline static int32_t get_offset_of_blendTime_2() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___blendTime_2)); }
	inline float get_blendTime_2() const { return ___blendTime_2; }
	inline float* get_address_of_blendTime_2() { return &___blendTime_2; }
	inline void set_blendTime_2(float value)
	{
		___blendTime_2 = value;
	}

	inline static int32_t get_offset_of_skipTime_3() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___skipTime_3)); }
	inline float get_skipTime_3() const { return ___skipTime_3; }
	inline float* get_address_of_skipTime_3() { return &___skipTime_3; }
	inline void set_skipTime_3(float value)
	{
		___skipTime_3 = value;
	}

	inline static int32_t get_offset_of_looped_4() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___looped_4)); }
	inline bool get_looped_4() const { return ___looped_4; }
	inline bool* get_address_of_looped_4() { return &___looped_4; }
	inline void set_looped_4(bool value)
	{
		___looped_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_eventOnEnter_6() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___eventOnEnter_6)); }
	inline bool get_eventOnEnter_6() const { return ___eventOnEnter_6; }
	inline bool* get_address_of_eventOnEnter_6() { return &___eventOnEnter_6; }
	inline void set_eventOnEnter_6(bool value)
	{
		___eventOnEnter_6 = value;
	}

	inline static int32_t get_offset_of_eventOnStart_7() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___eventOnStart_7)); }
	inline bool get_eventOnStart_7() const { return ___eventOnStart_7; }
	inline bool* get_address_of_eventOnStart_7() { return &___eventOnStart_7; }
	inline void set_eventOnStart_7(bool value)
	{
		___eventOnStart_7 = value;
	}

	inline static int32_t get_offset_of_eventsAtTimes_8() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___eventsAtTimes_8)); }
	inline SingleU5BU5D_t577127397* get_eventsAtTimes_8() const { return ___eventsAtTimes_8; }
	inline SingleU5BU5D_t577127397** get_address_of_eventsAtTimes_8() { return &___eventsAtTimes_8; }
	inline void set_eventsAtTimes_8(SingleU5BU5D_t577127397* value)
	{
		___eventsAtTimes_8 = value;
		Il2CppCodeGenWriteBarrier(&___eventsAtTimes_8, value);
	}

	inline static int32_t get_offset_of_eventOnEnd_9() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___eventOnEnd_9)); }
	inline bool get_eventOnEnd_9() const { return ___eventOnEnd_9; }
	inline bool* get_address_of_eventOnEnd_9() { return &___eventOnEnd_9; }
	inline void set_eventOnEnd_9(bool value)
	{
		___eventOnEnd_9 = value;
	}

	inline static int32_t get_offset_of_eventOnExit_10() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___eventOnExit_10)); }
	inline bool get_eventOnExit_10() const { return ___eventOnExit_10; }
	inline bool* get_address_of_eventOnExit_10() { return &___eventOnExit_10; }
	inline void set_eventOnExit_10(bool value)
	{
		___eventOnExit_10 = value;
	}

	inline static int32_t get_offset_of_sortedTimeEvents_11() { return static_cast<int32_t>(offsetof(Anim2dPlayState_t1160144854, ___sortedTimeEvents_11)); }
	inline TimeEventU5BU5D_t982561919* get_sortedTimeEvents_11() const { return ___sortedTimeEvents_11; }
	inline TimeEventU5BU5D_t982561919** get_address_of_sortedTimeEvents_11() { return &___sortedTimeEvents_11; }
	inline void set_sortedTimeEvents_11(TimeEventU5BU5D_t982561919* value)
	{
		___sortedTimeEvents_11 = value;
		Il2CppCodeGenWriteBarrier(&___sortedTimeEvents_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
