#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel
struct  RewardsPopupModel_t407090095  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::_currentUser
	CurrentUser_t3910039426 * ____currentUser_0;

public:
	inline static int32_t get_offset_of__currentUser_0() { return static_cast<int32_t>(offsetof(RewardsPopupModel_t407090095, ____currentUser_0)); }
	inline CurrentUser_t3910039426 * get__currentUser_0() const { return ____currentUser_0; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_0() { return &____currentUser_0; }
	inline void set__currentUser_0(CurrentUser_t3910039426 * value)
	{
		____currentUser_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
