#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Games.Common.Client.UIGenericYesNoDialog
struct UIGenericYesNoDialog_t4091332271;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.UIHudBase
struct  UIHudBase_t4131117260  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.UIHudBase::_coSpeedUpTimeTap
	Il2CppObject * ____coSpeedUpTimeTap_5;
	// System.Single GSN.Skill.Games.Common.Client.UIHudBase::_speedButtonDownTime
	float ____speedButtonDownTime_6;
	// System.Int32 GSN.Skill.Games.Common.Client.UIHudBase::<currentTime>k__BackingField
	int32_t ___U3CcurrentTimeU3Ek__BackingField_7;
	// GSN.Skill.Games.Common.Client.UIGenericYesNoDialog GSN.Skill.Games.Common.Client.UIHudBase::_abortDialogPrefab
	UIGenericYesNoDialog_t4091332271 * ____abortDialogPrefab_8;
	// GSN.Skill.Games.Common.Client.UIGenericYesNoDialog GSN.Skill.Games.Common.Client.UIHudBase::_uiAbortDialog
	UIGenericYesNoDialog_t4091332271 * ____uiAbortDialog_9;
	// UnityEngine.GameObject GSN.Skill.Games.Common.Client.UIHudBase::_fastForwardButton
	GameObject_t1756533147 * ____fastForwardButton_10;
	// System.Boolean GSN.Skill.Games.Common.Client.UIHudBase::isGameOver
	bool ___isGameOver_11;

public:
	inline static int32_t get_offset_of__coSpeedUpTimeTap_5() { return static_cast<int32_t>(offsetof(UIHudBase_t4131117260, ____coSpeedUpTimeTap_5)); }
	inline Il2CppObject * get__coSpeedUpTimeTap_5() const { return ____coSpeedUpTimeTap_5; }
	inline Il2CppObject ** get_address_of__coSpeedUpTimeTap_5() { return &____coSpeedUpTimeTap_5; }
	inline void set__coSpeedUpTimeTap_5(Il2CppObject * value)
	{
		____coSpeedUpTimeTap_5 = value;
		Il2CppCodeGenWriteBarrier(&____coSpeedUpTimeTap_5, value);
	}

	inline static int32_t get_offset_of__speedButtonDownTime_6() { return static_cast<int32_t>(offsetof(UIHudBase_t4131117260, ____speedButtonDownTime_6)); }
	inline float get__speedButtonDownTime_6() const { return ____speedButtonDownTime_6; }
	inline float* get_address_of__speedButtonDownTime_6() { return &____speedButtonDownTime_6; }
	inline void set__speedButtonDownTime_6(float value)
	{
		____speedButtonDownTime_6 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentTimeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UIHudBase_t4131117260, ___U3CcurrentTimeU3Ek__BackingField_7)); }
	inline int32_t get_U3CcurrentTimeU3Ek__BackingField_7() const { return ___U3CcurrentTimeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CcurrentTimeU3Ek__BackingField_7() { return &___U3CcurrentTimeU3Ek__BackingField_7; }
	inline void set_U3CcurrentTimeU3Ek__BackingField_7(int32_t value)
	{
		___U3CcurrentTimeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__abortDialogPrefab_8() { return static_cast<int32_t>(offsetof(UIHudBase_t4131117260, ____abortDialogPrefab_8)); }
	inline UIGenericYesNoDialog_t4091332271 * get__abortDialogPrefab_8() const { return ____abortDialogPrefab_8; }
	inline UIGenericYesNoDialog_t4091332271 ** get_address_of__abortDialogPrefab_8() { return &____abortDialogPrefab_8; }
	inline void set__abortDialogPrefab_8(UIGenericYesNoDialog_t4091332271 * value)
	{
		____abortDialogPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&____abortDialogPrefab_8, value);
	}

	inline static int32_t get_offset_of__uiAbortDialog_9() { return static_cast<int32_t>(offsetof(UIHudBase_t4131117260, ____uiAbortDialog_9)); }
	inline UIGenericYesNoDialog_t4091332271 * get__uiAbortDialog_9() const { return ____uiAbortDialog_9; }
	inline UIGenericYesNoDialog_t4091332271 ** get_address_of__uiAbortDialog_9() { return &____uiAbortDialog_9; }
	inline void set__uiAbortDialog_9(UIGenericYesNoDialog_t4091332271 * value)
	{
		____uiAbortDialog_9 = value;
		Il2CppCodeGenWriteBarrier(&____uiAbortDialog_9, value);
	}

	inline static int32_t get_offset_of__fastForwardButton_10() { return static_cast<int32_t>(offsetof(UIHudBase_t4131117260, ____fastForwardButton_10)); }
	inline GameObject_t1756533147 * get__fastForwardButton_10() const { return ____fastForwardButton_10; }
	inline GameObject_t1756533147 ** get_address_of__fastForwardButton_10() { return &____fastForwardButton_10; }
	inline void set__fastForwardButton_10(GameObject_t1756533147 * value)
	{
		____fastForwardButton_10 = value;
		Il2CppCodeGenWriteBarrier(&____fastForwardButton_10, value);
	}

	inline static int32_t get_offset_of_isGameOver_11() { return static_cast<int32_t>(offsetof(UIHudBase_t4131117260, ___isGameOver_11)); }
	inline bool get_isGameOver_11() const { return ___isGameOver_11; }
	inline bool* get_address_of_isGameOver_11() { return &___isGameOver_11; }
	inline void set_isGameOver_11(bool value)
	{
		___isGameOver_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
