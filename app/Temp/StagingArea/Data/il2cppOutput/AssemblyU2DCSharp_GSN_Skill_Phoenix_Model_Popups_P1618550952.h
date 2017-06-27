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
// GSN.Skill.Phoenix.Model.Data.StoredConfigData
struct StoredConfigData_t3100406041;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.ProfilePopupModel
struct  ProfilePopupModel_t1618550952  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.Popups.ProfilePopupModel::_currentUser
	CurrentUser_t3910039426 * ____currentUser_0;
	// GSN.Skill.Phoenix.Model.Data.StoredConfigData GSN.Skill.Phoenix.Model.Popups.ProfilePopupModel::_storedConfigData
	StoredConfigData_t3100406041 * ____storedConfigData_1;

public:
	inline static int32_t get_offset_of__currentUser_0() { return static_cast<int32_t>(offsetof(ProfilePopupModel_t1618550952, ____currentUser_0)); }
	inline CurrentUser_t3910039426 * get__currentUser_0() const { return ____currentUser_0; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_0() { return &____currentUser_0; }
	inline void set__currentUser_0(CurrentUser_t3910039426 * value)
	{
		____currentUser_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_0, value);
	}

	inline static int32_t get_offset_of__storedConfigData_1() { return static_cast<int32_t>(offsetof(ProfilePopupModel_t1618550952, ____storedConfigData_1)); }
	inline StoredConfigData_t3100406041 * get__storedConfigData_1() const { return ____storedConfigData_1; }
	inline StoredConfigData_t3100406041 ** get_address_of__storedConfigData_1() { return &____storedConfigData_1; }
	inline void set__storedConfigData_1(StoredConfigData_t3100406041 * value)
	{
		____storedConfigData_1 = value;
		Il2CppCodeGenWriteBarrier(&____storedConfigData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
