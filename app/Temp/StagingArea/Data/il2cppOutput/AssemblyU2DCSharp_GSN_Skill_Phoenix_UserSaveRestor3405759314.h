#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.GlobalSaveRestoreGroup
struct GlobalSaveRestoreGroup_t3946994789;
// GSN.Skill.Phoenix.DeviceSaveRestoreGroup
struct DeviceSaveRestoreGroup_t3622796768;
// GSN.Skill.Phoenix.UserSaveRestoreGroup
struct UserSaveRestoreGroup_t1897411735;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.UserSaveRestore
struct  UserSaveRestore_t3405759314  : public Il2CppObject
{
public:

public:
};

struct UserSaveRestore_t3405759314_StaticFields
{
public:
	// GSN.Skill.Phoenix.GlobalSaveRestoreGroup GSN.Skill.Phoenix.UserSaveRestore::Global
	GlobalSaveRestoreGroup_t3946994789 * ___Global_0;
	// GSN.Skill.Phoenix.DeviceSaveRestoreGroup GSN.Skill.Phoenix.UserSaveRestore::Device
	DeviceSaveRestoreGroup_t3622796768 * ___Device_1;
	// GSN.Skill.Phoenix.UserSaveRestoreGroup GSN.Skill.Phoenix.UserSaveRestore::User
	UserSaveRestoreGroup_t1897411735 * ___User_2;

public:
	inline static int32_t get_offset_of_Global_0() { return static_cast<int32_t>(offsetof(UserSaveRestore_t3405759314_StaticFields, ___Global_0)); }
	inline GlobalSaveRestoreGroup_t3946994789 * get_Global_0() const { return ___Global_0; }
	inline GlobalSaveRestoreGroup_t3946994789 ** get_address_of_Global_0() { return &___Global_0; }
	inline void set_Global_0(GlobalSaveRestoreGroup_t3946994789 * value)
	{
		___Global_0 = value;
		Il2CppCodeGenWriteBarrier(&___Global_0, value);
	}

	inline static int32_t get_offset_of_Device_1() { return static_cast<int32_t>(offsetof(UserSaveRestore_t3405759314_StaticFields, ___Device_1)); }
	inline DeviceSaveRestoreGroup_t3622796768 * get_Device_1() const { return ___Device_1; }
	inline DeviceSaveRestoreGroup_t3622796768 ** get_address_of_Device_1() { return &___Device_1; }
	inline void set_Device_1(DeviceSaveRestoreGroup_t3622796768 * value)
	{
		___Device_1 = value;
		Il2CppCodeGenWriteBarrier(&___Device_1, value);
	}

	inline static int32_t get_offset_of_User_2() { return static_cast<int32_t>(offsetof(UserSaveRestore_t3405759314_StaticFields, ___User_2)); }
	inline UserSaveRestoreGroup_t1897411735 * get_User_2() const { return ___User_2; }
	inline UserSaveRestoreGroup_t1897411735 ** get_address_of_User_2() { return &___User_2; }
	inline void set_User_2(UserSaveRestoreGroup_t1897411735 * value)
	{
		___User_2 = value;
		Il2CppCodeGenWriteBarrier(&___User_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
