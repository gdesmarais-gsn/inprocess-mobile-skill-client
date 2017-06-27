#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Pool_Pool3748385124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.AddNewCardTile
struct  AddNewCardTile_t1990035065  : public PooledGameObject_t3748385124
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.AddNewCardTile::_button
	Button_t2872111280 * ____button_4;
	// System.Action GSN.Skill.Phoenix.View.AddNewCardTile::_buttonAction
	Action_t3226471752 * ____buttonAction_5;

public:
	inline static int32_t get_offset_of__button_4() { return static_cast<int32_t>(offsetof(AddNewCardTile_t1990035065, ____button_4)); }
	inline Button_t2872111280 * get__button_4() const { return ____button_4; }
	inline Button_t2872111280 ** get_address_of__button_4() { return &____button_4; }
	inline void set__button_4(Button_t2872111280 * value)
	{
		____button_4 = value;
		Il2CppCodeGenWriteBarrier(&____button_4, value);
	}

	inline static int32_t get_offset_of__buttonAction_5() { return static_cast<int32_t>(offsetof(AddNewCardTile_t1990035065, ____buttonAction_5)); }
	inline Action_t3226471752 * get__buttonAction_5() const { return ____buttonAction_5; }
	inline Action_t3226471752 ** get_address_of__buttonAction_5() { return &____buttonAction_5; }
	inline void set__buttonAction_5(Action_t3226471752 * value)
	{
		____buttonAction_5 = value;
		Il2CppCodeGenWriteBarrier(&____buttonAction_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
