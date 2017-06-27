#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// GSN.Skill.Phoenix.View.DepositPopupView
struct DepositPopupView_t87145889;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_ScreenVie3652740853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.DepositSelectPageView
struct  DepositSelectPageView_t3944520720  : public ScreenView_t3652740853
{
public:
	// UnityEngine.Transform GSN.Skill.Phoenix.View.DepositSelectPageView::_depositListParent
	Transform_t3275118058 * ____depositListParent_10;
	// GSN.Skill.Phoenix.View.DepositPopupView GSN.Skill.Phoenix.View.DepositSelectPageView::_depositPopupView
	DepositPopupView_t87145889 * ____depositPopupView_11;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.DepositSelectPageView::_firstTimeDepositPromo
	GameObject_t1756533147 * ____firstTimeDepositPromo_12;

public:
	inline static int32_t get_offset_of__depositListParent_10() { return static_cast<int32_t>(offsetof(DepositSelectPageView_t3944520720, ____depositListParent_10)); }
	inline Transform_t3275118058 * get__depositListParent_10() const { return ____depositListParent_10; }
	inline Transform_t3275118058 ** get_address_of__depositListParent_10() { return &____depositListParent_10; }
	inline void set__depositListParent_10(Transform_t3275118058 * value)
	{
		____depositListParent_10 = value;
		Il2CppCodeGenWriteBarrier(&____depositListParent_10, value);
	}

	inline static int32_t get_offset_of__depositPopupView_11() { return static_cast<int32_t>(offsetof(DepositSelectPageView_t3944520720, ____depositPopupView_11)); }
	inline DepositPopupView_t87145889 * get__depositPopupView_11() const { return ____depositPopupView_11; }
	inline DepositPopupView_t87145889 ** get_address_of__depositPopupView_11() { return &____depositPopupView_11; }
	inline void set__depositPopupView_11(DepositPopupView_t87145889 * value)
	{
		____depositPopupView_11 = value;
		Il2CppCodeGenWriteBarrier(&____depositPopupView_11, value);
	}

	inline static int32_t get_offset_of__firstTimeDepositPromo_12() { return static_cast<int32_t>(offsetof(DepositSelectPageView_t3944520720, ____firstTimeDepositPromo_12)); }
	inline GameObject_t1756533147 * get__firstTimeDepositPromo_12() const { return ____firstTimeDepositPromo_12; }
	inline GameObject_t1756533147 ** get_address_of__firstTimeDepositPromo_12() { return &____firstTimeDepositPromo_12; }
	inline void set__firstTimeDepositPromo_12(GameObject_t1756533147 * value)
	{
		____firstTimeDepositPromo_12 = value;
		Il2CppCodeGenWriteBarrier(&____firstTimeDepositPromo_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
