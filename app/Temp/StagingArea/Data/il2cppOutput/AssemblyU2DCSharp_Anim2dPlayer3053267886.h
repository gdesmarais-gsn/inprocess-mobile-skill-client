#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Anim2dPlayState[]
struct Anim2dPlayStateU5BU5D_t1150042131;
// System.String
struct String_t;
// Anim2d[]
struct Anim2dU5BU5D_t1177073858;
// System.Collections.Generic.Dictionary`2<System.String,Anim2dPlayState>
struct Dictionary_2_t3074924116;
// Anim2dPlayState
struct Anim2dPlayState_t1160144854;
// System.Collections.Generic.List`1<Anim2dPlayState>
struct List_1_t529265986;
// System.Comparison`1<Anim2dPlayState/TimeEvent>
struct Comparison_1_t242388541;

#include "AssemblyU2DCSharp_Stm_V1_0_DynamicDispatcher3371015830.h"
#include "AssemblyU2DCSharp_TimeCategory4008096495.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anim2dPlayer
struct  Anim2dPlayer_t3053267886  : public DynamicDispatcher_t3371015830
{
public:
	// Anim2dPlayState[] Anim2dPlayer::states
	Anim2dPlayStateU5BU5D_t1150042131* ___states_6;
	// System.Boolean Anim2dPlayer::isPaused
	bool ___isPaused_7;
	// System.String Anim2dPlayer::startupAction
	String_t* ___startupAction_8;
	// System.String Anim2dPlayer::lastAction
	String_t* ___lastAction_9;
	// TimeCategory Anim2dPlayer::timeType
	int32_t ___timeType_10;
	// Anim2d[] Anim2dPlayer::anims
	Anim2dU5BU5D_t1177073858* ___anims_11;
	// System.Collections.Generic.Dictionary`2<System.String,Anim2dPlayState> Anim2dPlayer::playStateLookup
	Dictionary_2_t3074924116 * ___playStateLookup_12;
	// System.Collections.Generic.Dictionary`2<System.String,Anim2dPlayState> Anim2dPlayer::queueStateLookup
	Dictionary_2_t3074924116 * ___queueStateLookup_13;
	// System.Collections.Generic.Dictionary`2<System.String,Anim2dPlayState> Anim2dPlayer::resetStateLookup
	Dictionary_2_t3074924116 * ___resetStateLookup_14;
	// System.String Anim2dPlayer::nextEndEventName
	String_t* ___nextEndEventName_15;
	// System.String Anim2dPlayer::nextExitEventName
	String_t* ___nextExitEventName_16;
	// Anim2dPlayState Anim2dPlayer::lastStatePlayed
	Anim2dPlayState_t1160144854 * ___lastStatePlayed_17;
	// System.Single Anim2dPlayer::stateTimeAtLastUpdate
	float ___stateTimeAtLastUpdate_18;
	// System.Boolean Anim2dPlayer::legacySetupPerformed
	bool ___legacySetupPerformed_19;
	// System.Collections.Generic.List`1<Anim2dPlayState> Anim2dPlayer::queuedStates
	List_1_t529265986 * ___queuedStates_20;

public:
	inline static int32_t get_offset_of_states_6() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___states_6)); }
	inline Anim2dPlayStateU5BU5D_t1150042131* get_states_6() const { return ___states_6; }
	inline Anim2dPlayStateU5BU5D_t1150042131** get_address_of_states_6() { return &___states_6; }
	inline void set_states_6(Anim2dPlayStateU5BU5D_t1150042131* value)
	{
		___states_6 = value;
		Il2CppCodeGenWriteBarrier(&___states_6, value);
	}

	inline static int32_t get_offset_of_isPaused_7() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___isPaused_7)); }
	inline bool get_isPaused_7() const { return ___isPaused_7; }
	inline bool* get_address_of_isPaused_7() { return &___isPaused_7; }
	inline void set_isPaused_7(bool value)
	{
		___isPaused_7 = value;
	}

	inline static int32_t get_offset_of_startupAction_8() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___startupAction_8)); }
	inline String_t* get_startupAction_8() const { return ___startupAction_8; }
	inline String_t** get_address_of_startupAction_8() { return &___startupAction_8; }
	inline void set_startupAction_8(String_t* value)
	{
		___startupAction_8 = value;
		Il2CppCodeGenWriteBarrier(&___startupAction_8, value);
	}

	inline static int32_t get_offset_of_lastAction_9() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___lastAction_9)); }
	inline String_t* get_lastAction_9() const { return ___lastAction_9; }
	inline String_t** get_address_of_lastAction_9() { return &___lastAction_9; }
	inline void set_lastAction_9(String_t* value)
	{
		___lastAction_9 = value;
		Il2CppCodeGenWriteBarrier(&___lastAction_9, value);
	}

	inline static int32_t get_offset_of_timeType_10() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___timeType_10)); }
	inline int32_t get_timeType_10() const { return ___timeType_10; }
	inline int32_t* get_address_of_timeType_10() { return &___timeType_10; }
	inline void set_timeType_10(int32_t value)
	{
		___timeType_10 = value;
	}

	inline static int32_t get_offset_of_anims_11() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___anims_11)); }
	inline Anim2dU5BU5D_t1177073858* get_anims_11() const { return ___anims_11; }
	inline Anim2dU5BU5D_t1177073858** get_address_of_anims_11() { return &___anims_11; }
	inline void set_anims_11(Anim2dU5BU5D_t1177073858* value)
	{
		___anims_11 = value;
		Il2CppCodeGenWriteBarrier(&___anims_11, value);
	}

	inline static int32_t get_offset_of_playStateLookup_12() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___playStateLookup_12)); }
	inline Dictionary_2_t3074924116 * get_playStateLookup_12() const { return ___playStateLookup_12; }
	inline Dictionary_2_t3074924116 ** get_address_of_playStateLookup_12() { return &___playStateLookup_12; }
	inline void set_playStateLookup_12(Dictionary_2_t3074924116 * value)
	{
		___playStateLookup_12 = value;
		Il2CppCodeGenWriteBarrier(&___playStateLookup_12, value);
	}

	inline static int32_t get_offset_of_queueStateLookup_13() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___queueStateLookup_13)); }
	inline Dictionary_2_t3074924116 * get_queueStateLookup_13() const { return ___queueStateLookup_13; }
	inline Dictionary_2_t3074924116 ** get_address_of_queueStateLookup_13() { return &___queueStateLookup_13; }
	inline void set_queueStateLookup_13(Dictionary_2_t3074924116 * value)
	{
		___queueStateLookup_13 = value;
		Il2CppCodeGenWriteBarrier(&___queueStateLookup_13, value);
	}

	inline static int32_t get_offset_of_resetStateLookup_14() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___resetStateLookup_14)); }
	inline Dictionary_2_t3074924116 * get_resetStateLookup_14() const { return ___resetStateLookup_14; }
	inline Dictionary_2_t3074924116 ** get_address_of_resetStateLookup_14() { return &___resetStateLookup_14; }
	inline void set_resetStateLookup_14(Dictionary_2_t3074924116 * value)
	{
		___resetStateLookup_14 = value;
		Il2CppCodeGenWriteBarrier(&___resetStateLookup_14, value);
	}

	inline static int32_t get_offset_of_nextEndEventName_15() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___nextEndEventName_15)); }
	inline String_t* get_nextEndEventName_15() const { return ___nextEndEventName_15; }
	inline String_t** get_address_of_nextEndEventName_15() { return &___nextEndEventName_15; }
	inline void set_nextEndEventName_15(String_t* value)
	{
		___nextEndEventName_15 = value;
		Il2CppCodeGenWriteBarrier(&___nextEndEventName_15, value);
	}

	inline static int32_t get_offset_of_nextExitEventName_16() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___nextExitEventName_16)); }
	inline String_t* get_nextExitEventName_16() const { return ___nextExitEventName_16; }
	inline String_t** get_address_of_nextExitEventName_16() { return &___nextExitEventName_16; }
	inline void set_nextExitEventName_16(String_t* value)
	{
		___nextExitEventName_16 = value;
		Il2CppCodeGenWriteBarrier(&___nextExitEventName_16, value);
	}

	inline static int32_t get_offset_of_lastStatePlayed_17() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___lastStatePlayed_17)); }
	inline Anim2dPlayState_t1160144854 * get_lastStatePlayed_17() const { return ___lastStatePlayed_17; }
	inline Anim2dPlayState_t1160144854 ** get_address_of_lastStatePlayed_17() { return &___lastStatePlayed_17; }
	inline void set_lastStatePlayed_17(Anim2dPlayState_t1160144854 * value)
	{
		___lastStatePlayed_17 = value;
		Il2CppCodeGenWriteBarrier(&___lastStatePlayed_17, value);
	}

	inline static int32_t get_offset_of_stateTimeAtLastUpdate_18() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___stateTimeAtLastUpdate_18)); }
	inline float get_stateTimeAtLastUpdate_18() const { return ___stateTimeAtLastUpdate_18; }
	inline float* get_address_of_stateTimeAtLastUpdate_18() { return &___stateTimeAtLastUpdate_18; }
	inline void set_stateTimeAtLastUpdate_18(float value)
	{
		___stateTimeAtLastUpdate_18 = value;
	}

	inline static int32_t get_offset_of_legacySetupPerformed_19() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___legacySetupPerformed_19)); }
	inline bool get_legacySetupPerformed_19() const { return ___legacySetupPerformed_19; }
	inline bool* get_address_of_legacySetupPerformed_19() { return &___legacySetupPerformed_19; }
	inline void set_legacySetupPerformed_19(bool value)
	{
		___legacySetupPerformed_19 = value;
	}

	inline static int32_t get_offset_of_queuedStates_20() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886, ___queuedStates_20)); }
	inline List_1_t529265986 * get_queuedStates_20() const { return ___queuedStates_20; }
	inline List_1_t529265986 ** get_address_of_queuedStates_20() { return &___queuedStates_20; }
	inline void set_queuedStates_20(List_1_t529265986 * value)
	{
		___queuedStates_20 = value;
		Il2CppCodeGenWriteBarrier(&___queuedStates_20, value);
	}
};

struct Anim2dPlayer_t3053267886_StaticFields
{
public:
	// System.Comparison`1<Anim2dPlayState/TimeEvent> Anim2dPlayer::<>f__mg$cache0
	Comparison_1_t242388541 * ___U3CU3Ef__mgU24cache0_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_21() { return static_cast<int32_t>(offsetof(Anim2dPlayer_t3053267886_StaticFields, ___U3CU3Ef__mgU24cache0_21)); }
	inline Comparison_1_t242388541 * get_U3CU3Ef__mgU24cache0_21() const { return ___U3CU3Ef__mgU24cache0_21; }
	inline Comparison_1_t242388541 ** get_address_of_U3CU3Ef__mgU24cache0_21() { return &___U3CU3Ef__mgU24cache0_21; }
	inline void set_U3CU3Ef__mgU24cache0_21(Comparison_1_t242388541 * value)
	{
		___U3CU3Ef__mgU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
