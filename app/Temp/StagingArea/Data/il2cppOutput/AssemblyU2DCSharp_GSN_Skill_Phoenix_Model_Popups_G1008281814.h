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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.GpsPermissionPopupModel
struct  GpsPermissionPopupModel_t1008281814  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Phoenix.Model.Popups.GpsPermissionPopupModel::_callback
	Action_t3226471752 * ____callback_0;
	// System.Action GSN.Skill.Phoenix.Model.Popups.GpsPermissionPopupModel::_cancelCallback
	Action_t3226471752 * ____cancelCallback_1;

public:
	inline static int32_t get_offset_of__callback_0() { return static_cast<int32_t>(offsetof(GpsPermissionPopupModel_t1008281814, ____callback_0)); }
	inline Action_t3226471752 * get__callback_0() const { return ____callback_0; }
	inline Action_t3226471752 ** get_address_of__callback_0() { return &____callback_0; }
	inline void set__callback_0(Action_t3226471752 * value)
	{
		____callback_0 = value;
		Il2CppCodeGenWriteBarrier(&____callback_0, value);
	}

	inline static int32_t get_offset_of__cancelCallback_1() { return static_cast<int32_t>(offsetof(GpsPermissionPopupModel_t1008281814, ____cancelCallback_1)); }
	inline Action_t3226471752 * get__cancelCallback_1() const { return ____cancelCallback_1; }
	inline Action_t3226471752 ** get_address_of__cancelCallback_1() { return &____cancelCallback_1; }
	inline void set__cancelCallback_1(Action_t3226471752 * value)
	{
		____cancelCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&____cancelCallback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
