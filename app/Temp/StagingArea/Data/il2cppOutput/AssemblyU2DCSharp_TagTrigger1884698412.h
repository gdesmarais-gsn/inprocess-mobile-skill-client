#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Stm.V1_0.Dispatcher/Callback
struct Callback_t2944324525;
// System.String
struct String_t;
// Delegates/Action`1<UnityEngine.Collider>
struct Action_1_t2127853809;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,System.Int32>
struct Dictionary_2_t2807114367;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher2840725577.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TagTrigger
struct  TagTrigger_t1884698412  : public Dispatcher_t2840725577
{
public:
	// Stm.V1_0.Dispatcher/Callback TagTrigger::onTriggered
	Callback_t2944324525 * ___onTriggered_3;
	// Stm.V1_0.Dispatcher/Callback TagTrigger::onExited
	Callback_t2944324525 * ___onExited_4;
	// System.Boolean TagTrigger::oneShot
	bool ___oneShot_5;
	// System.Boolean TagTrigger::doEnter
	bool ___doEnter_6;
	// System.Boolean TagTrigger::doExit
	bool ___doExit_7;
	// System.String TagTrigger::tagFilter
	String_t* ___tagFilter_8;
	// System.String TagTrigger::ignoreTagFilter
	String_t* ___ignoreTagFilter_9;
	// Delegates/Action`1<UnityEngine.Collider> TagTrigger::onTriggered2
	Action_1_t2127853809 * ___onTriggered2_10;
	// Delegates/Action`1<UnityEngine.Collider> TagTrigger::onExited2
	Action_1_t2127853809 * ___onExited2_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,System.Int32> TagTrigger::inTrigger
	Dictionary_2_t2807114367 * ___inTrigger_12;
	// System.Boolean TagTrigger::runningInactiveCheckCoroutine
	bool ___runningInactiveCheckCoroutine_13;
	// UnityEngine.Transform TagTrigger::Root
	Transform_t3275118058 * ___Root_14;

public:
	inline static int32_t get_offset_of_onTriggered_3() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___onTriggered_3)); }
	inline Callback_t2944324525 * get_onTriggered_3() const { return ___onTriggered_3; }
	inline Callback_t2944324525 ** get_address_of_onTriggered_3() { return &___onTriggered_3; }
	inline void set_onTriggered_3(Callback_t2944324525 * value)
	{
		___onTriggered_3 = value;
		Il2CppCodeGenWriteBarrier(&___onTriggered_3, value);
	}

	inline static int32_t get_offset_of_onExited_4() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___onExited_4)); }
	inline Callback_t2944324525 * get_onExited_4() const { return ___onExited_4; }
	inline Callback_t2944324525 ** get_address_of_onExited_4() { return &___onExited_4; }
	inline void set_onExited_4(Callback_t2944324525 * value)
	{
		___onExited_4 = value;
		Il2CppCodeGenWriteBarrier(&___onExited_4, value);
	}

	inline static int32_t get_offset_of_oneShot_5() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___oneShot_5)); }
	inline bool get_oneShot_5() const { return ___oneShot_5; }
	inline bool* get_address_of_oneShot_5() { return &___oneShot_5; }
	inline void set_oneShot_5(bool value)
	{
		___oneShot_5 = value;
	}

	inline static int32_t get_offset_of_doEnter_6() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___doEnter_6)); }
	inline bool get_doEnter_6() const { return ___doEnter_6; }
	inline bool* get_address_of_doEnter_6() { return &___doEnter_6; }
	inline void set_doEnter_6(bool value)
	{
		___doEnter_6 = value;
	}

	inline static int32_t get_offset_of_doExit_7() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___doExit_7)); }
	inline bool get_doExit_7() const { return ___doExit_7; }
	inline bool* get_address_of_doExit_7() { return &___doExit_7; }
	inline void set_doExit_7(bool value)
	{
		___doExit_7 = value;
	}

	inline static int32_t get_offset_of_tagFilter_8() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___tagFilter_8)); }
	inline String_t* get_tagFilter_8() const { return ___tagFilter_8; }
	inline String_t** get_address_of_tagFilter_8() { return &___tagFilter_8; }
	inline void set_tagFilter_8(String_t* value)
	{
		___tagFilter_8 = value;
		Il2CppCodeGenWriteBarrier(&___tagFilter_8, value);
	}

	inline static int32_t get_offset_of_ignoreTagFilter_9() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___ignoreTagFilter_9)); }
	inline String_t* get_ignoreTagFilter_9() const { return ___ignoreTagFilter_9; }
	inline String_t** get_address_of_ignoreTagFilter_9() { return &___ignoreTagFilter_9; }
	inline void set_ignoreTagFilter_9(String_t* value)
	{
		___ignoreTagFilter_9 = value;
		Il2CppCodeGenWriteBarrier(&___ignoreTagFilter_9, value);
	}

	inline static int32_t get_offset_of_onTriggered2_10() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___onTriggered2_10)); }
	inline Action_1_t2127853809 * get_onTriggered2_10() const { return ___onTriggered2_10; }
	inline Action_1_t2127853809 ** get_address_of_onTriggered2_10() { return &___onTriggered2_10; }
	inline void set_onTriggered2_10(Action_1_t2127853809 * value)
	{
		___onTriggered2_10 = value;
		Il2CppCodeGenWriteBarrier(&___onTriggered2_10, value);
	}

	inline static int32_t get_offset_of_onExited2_11() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___onExited2_11)); }
	inline Action_1_t2127853809 * get_onExited2_11() const { return ___onExited2_11; }
	inline Action_1_t2127853809 ** get_address_of_onExited2_11() { return &___onExited2_11; }
	inline void set_onExited2_11(Action_1_t2127853809 * value)
	{
		___onExited2_11 = value;
		Il2CppCodeGenWriteBarrier(&___onExited2_11, value);
	}

	inline static int32_t get_offset_of_inTrigger_12() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___inTrigger_12)); }
	inline Dictionary_2_t2807114367 * get_inTrigger_12() const { return ___inTrigger_12; }
	inline Dictionary_2_t2807114367 ** get_address_of_inTrigger_12() { return &___inTrigger_12; }
	inline void set_inTrigger_12(Dictionary_2_t2807114367 * value)
	{
		___inTrigger_12 = value;
		Il2CppCodeGenWriteBarrier(&___inTrigger_12, value);
	}

	inline static int32_t get_offset_of_runningInactiveCheckCoroutine_13() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___runningInactiveCheckCoroutine_13)); }
	inline bool get_runningInactiveCheckCoroutine_13() const { return ___runningInactiveCheckCoroutine_13; }
	inline bool* get_address_of_runningInactiveCheckCoroutine_13() { return &___runningInactiveCheckCoroutine_13; }
	inline void set_runningInactiveCheckCoroutine_13(bool value)
	{
		___runningInactiveCheckCoroutine_13 = value;
	}

	inline static int32_t get_offset_of_Root_14() { return static_cast<int32_t>(offsetof(TagTrigger_t1884698412, ___Root_14)); }
	inline Transform_t3275118058 * get_Root_14() const { return ___Root_14; }
	inline Transform_t3275118058 ** get_address_of_Root_14() { return &___Root_14; }
	inline void set_Root_14(Transform_t3275118058 * value)
	{
		___Root_14 = value;
		Il2CppCodeGenWriteBarrier(&___Root_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
