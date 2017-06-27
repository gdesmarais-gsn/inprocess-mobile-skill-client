#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.EnumeratedUIInfoTab
struct EnumeratedUIInfoTab_t1095787909;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Nullable_1_gen2577834036.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.UIStartScreenBase
struct  UIStartScreenBase_t566610785  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GSN.Skill.Games.Common.Client.UIStartScreenBase::INITIAL_TIMER_SEC
	float ___INITIAL_TIMER_SEC_2;
	// System.Single GSN.Skill.Games.Common.Client.UIStartScreenBase::REVEAL_TIMER_SEC
	float ___REVEAL_TIMER_SEC_3;
	// System.Int32 GSN.Skill.Games.Common.Client.UIStartScreenBase::_pauseTimeStart
	int32_t ____pauseTimeStart_5;
	// System.Boolean GSN.Skill.Games.Common.Client.UIStartScreenBase::_paused
	bool ____paused_6;
	// GSN.Skill.Games.Common.Client.EnumeratedUIInfoTab GSN.Skill.Games.Common.Client.UIStartScreenBase::tabs
	EnumeratedUIInfoTab_t1095787909 * ___tabs_7;
	// System.Nullable`1<GSN.Skill.Games.Common.Client.UIStartScreenBase/InfoTab> GSN.Skill.Games.Common.Client.UIStartScreenBase::_currentTab
	Nullable_1_t2577834036  ____currentTab_8;
	// System.Single GSN.Skill.Games.Common.Client.UIStartScreenBase::<count>k__BackingField
	float ___U3CcountU3Ek__BackingField_9;
	// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.UIStartScreenBase::_coBringUpStartTime
	Il2CppObject * ____coBringUpStartTime_10;
	// System.Boolean GSN.Skill.Games.Common.Client.UIStartScreenBase::<autoStart>k__BackingField
	bool ___U3CautoStartU3Ek__BackingField_11;
	// System.Action GSN.Skill.Games.Common.Client.UIStartScreenBase::transitionToStartAction
	Action_t3226471752 * ___transitionToStartAction_12;

public:
	inline static int32_t get_offset_of_INITIAL_TIMER_SEC_2() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ___INITIAL_TIMER_SEC_2)); }
	inline float get_INITIAL_TIMER_SEC_2() const { return ___INITIAL_TIMER_SEC_2; }
	inline float* get_address_of_INITIAL_TIMER_SEC_2() { return &___INITIAL_TIMER_SEC_2; }
	inline void set_INITIAL_TIMER_SEC_2(float value)
	{
		___INITIAL_TIMER_SEC_2 = value;
	}

	inline static int32_t get_offset_of_REVEAL_TIMER_SEC_3() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ___REVEAL_TIMER_SEC_3)); }
	inline float get_REVEAL_TIMER_SEC_3() const { return ___REVEAL_TIMER_SEC_3; }
	inline float* get_address_of_REVEAL_TIMER_SEC_3() { return &___REVEAL_TIMER_SEC_3; }
	inline void set_REVEAL_TIMER_SEC_3(float value)
	{
		___REVEAL_TIMER_SEC_3 = value;
	}

	inline static int32_t get_offset_of__pauseTimeStart_5() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ____pauseTimeStart_5)); }
	inline int32_t get__pauseTimeStart_5() const { return ____pauseTimeStart_5; }
	inline int32_t* get_address_of__pauseTimeStart_5() { return &____pauseTimeStart_5; }
	inline void set__pauseTimeStart_5(int32_t value)
	{
		____pauseTimeStart_5 = value;
	}

	inline static int32_t get_offset_of__paused_6() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ____paused_6)); }
	inline bool get__paused_6() const { return ____paused_6; }
	inline bool* get_address_of__paused_6() { return &____paused_6; }
	inline void set__paused_6(bool value)
	{
		____paused_6 = value;
	}

	inline static int32_t get_offset_of_tabs_7() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ___tabs_7)); }
	inline EnumeratedUIInfoTab_t1095787909 * get_tabs_7() const { return ___tabs_7; }
	inline EnumeratedUIInfoTab_t1095787909 ** get_address_of_tabs_7() { return &___tabs_7; }
	inline void set_tabs_7(EnumeratedUIInfoTab_t1095787909 * value)
	{
		___tabs_7 = value;
		Il2CppCodeGenWriteBarrier(&___tabs_7, value);
	}

	inline static int32_t get_offset_of__currentTab_8() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ____currentTab_8)); }
	inline Nullable_1_t2577834036  get__currentTab_8() const { return ____currentTab_8; }
	inline Nullable_1_t2577834036 * get_address_of__currentTab_8() { return &____currentTab_8; }
	inline void set__currentTab_8(Nullable_1_t2577834036  value)
	{
		____currentTab_8 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ___U3CcountU3Ek__BackingField_9)); }
	inline float get_U3CcountU3Ek__BackingField_9() const { return ___U3CcountU3Ek__BackingField_9; }
	inline float* get_address_of_U3CcountU3Ek__BackingField_9() { return &___U3CcountU3Ek__BackingField_9; }
	inline void set_U3CcountU3Ek__BackingField_9(float value)
	{
		___U3CcountU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__coBringUpStartTime_10() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ____coBringUpStartTime_10)); }
	inline Il2CppObject * get__coBringUpStartTime_10() const { return ____coBringUpStartTime_10; }
	inline Il2CppObject ** get_address_of__coBringUpStartTime_10() { return &____coBringUpStartTime_10; }
	inline void set__coBringUpStartTime_10(Il2CppObject * value)
	{
		____coBringUpStartTime_10 = value;
		Il2CppCodeGenWriteBarrier(&____coBringUpStartTime_10, value);
	}

	inline static int32_t get_offset_of_U3CautoStartU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ___U3CautoStartU3Ek__BackingField_11)); }
	inline bool get_U3CautoStartU3Ek__BackingField_11() const { return ___U3CautoStartU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CautoStartU3Ek__BackingField_11() { return &___U3CautoStartU3Ek__BackingField_11; }
	inline void set_U3CautoStartU3Ek__BackingField_11(bool value)
	{
		___U3CautoStartU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_transitionToStartAction_12() { return static_cast<int32_t>(offsetof(UIStartScreenBase_t566610785, ___transitionToStartAction_12)); }
	inline Action_t3226471752 * get_transitionToStartAction_12() const { return ___transitionToStartAction_12; }
	inline Action_t3226471752 ** get_address_of_transitionToStartAction_12() { return &___transitionToStartAction_12; }
	inline void set_transitionToStartAction_12(Action_t3226471752 * value)
	{
		___transitionToStartAction_12 = value;
		Il2CppCodeGenWriteBarrier(&___transitionToStartAction_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
