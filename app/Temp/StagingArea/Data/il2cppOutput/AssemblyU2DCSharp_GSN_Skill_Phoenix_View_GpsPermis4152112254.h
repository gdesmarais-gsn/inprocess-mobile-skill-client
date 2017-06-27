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

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_PopupView1248909057.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.GpsPermissionPopupView
struct  GpsPermissionPopupView_t4152112254  : public PopupView_t1248909057
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.GpsPermissionPopupView::_okButton
	Button_t2872111280 * ____okButton_11;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.GpsPermissionPopupView::_cancelButton
	Button_t2872111280 * ____cancelButton_12;
	// System.Action GSN.Skill.Phoenix.View.GpsPermissionPopupView::_callback
	Action_t3226471752 * ____callback_13;
	// System.Action GSN.Skill.Phoenix.View.GpsPermissionPopupView::_cancelCallback
	Action_t3226471752 * ____cancelCallback_14;

public:
	inline static int32_t get_offset_of__okButton_11() { return static_cast<int32_t>(offsetof(GpsPermissionPopupView_t4152112254, ____okButton_11)); }
	inline Button_t2872111280 * get__okButton_11() const { return ____okButton_11; }
	inline Button_t2872111280 ** get_address_of__okButton_11() { return &____okButton_11; }
	inline void set__okButton_11(Button_t2872111280 * value)
	{
		____okButton_11 = value;
		Il2CppCodeGenWriteBarrier(&____okButton_11, value);
	}

	inline static int32_t get_offset_of__cancelButton_12() { return static_cast<int32_t>(offsetof(GpsPermissionPopupView_t4152112254, ____cancelButton_12)); }
	inline Button_t2872111280 * get__cancelButton_12() const { return ____cancelButton_12; }
	inline Button_t2872111280 ** get_address_of__cancelButton_12() { return &____cancelButton_12; }
	inline void set__cancelButton_12(Button_t2872111280 * value)
	{
		____cancelButton_12 = value;
		Il2CppCodeGenWriteBarrier(&____cancelButton_12, value);
	}

	inline static int32_t get_offset_of__callback_13() { return static_cast<int32_t>(offsetof(GpsPermissionPopupView_t4152112254, ____callback_13)); }
	inline Action_t3226471752 * get__callback_13() const { return ____callback_13; }
	inline Action_t3226471752 ** get_address_of__callback_13() { return &____callback_13; }
	inline void set__callback_13(Action_t3226471752 * value)
	{
		____callback_13 = value;
		Il2CppCodeGenWriteBarrier(&____callback_13, value);
	}

	inline static int32_t get_offset_of__cancelCallback_14() { return static_cast<int32_t>(offsetof(GpsPermissionPopupView_t4152112254, ____cancelCallback_14)); }
	inline Action_t3226471752 * get__cancelCallback_14() const { return ____cancelCallback_14; }
	inline Action_t3226471752 ** get_address_of__cancelCallback_14() { return &____cancelCallback_14; }
	inline void set__cancelCallback_14(Action_t3226471752 * value)
	{
		____cancelCallback_14 = value;
		Il2CppCodeGenWriteBarrier(&____cancelCallback_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
