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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.UIGenericYesNoDialog
struct  UIGenericYesNoDialog_t4091332271  : public MonoBehaviour_t1158329972
{
public:
	// System.Action GSN.Skill.Games.Common.Client.UIGenericYesNoDialog::CancelAction
	Action_t3226471752 * ___CancelAction_2;
	// System.Action GSN.Skill.Games.Common.Client.UIGenericYesNoDialog::ConfirmAction
	Action_t3226471752 * ___ConfirmAction_3;

public:
	inline static int32_t get_offset_of_CancelAction_2() { return static_cast<int32_t>(offsetof(UIGenericYesNoDialog_t4091332271, ___CancelAction_2)); }
	inline Action_t3226471752 * get_CancelAction_2() const { return ___CancelAction_2; }
	inline Action_t3226471752 ** get_address_of_CancelAction_2() { return &___CancelAction_2; }
	inline void set_CancelAction_2(Action_t3226471752 * value)
	{
		___CancelAction_2 = value;
		Il2CppCodeGenWriteBarrier(&___CancelAction_2, value);
	}

	inline static int32_t get_offset_of_ConfirmAction_3() { return static_cast<int32_t>(offsetof(UIGenericYesNoDialog_t4091332271, ___ConfirmAction_3)); }
	inline Action_t3226471752 * get_ConfirmAction_3() const { return ___ConfirmAction_3; }
	inline Action_t3226471752 ** get_address_of_ConfirmAction_3() { return &___ConfirmAction_3; }
	inline void set_ConfirmAction_3(Action_t3226471752 * value)
	{
		___ConfirmAction_3 = value;
		Il2CppCodeGenWriteBarrier(&___ConfirmAction_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
