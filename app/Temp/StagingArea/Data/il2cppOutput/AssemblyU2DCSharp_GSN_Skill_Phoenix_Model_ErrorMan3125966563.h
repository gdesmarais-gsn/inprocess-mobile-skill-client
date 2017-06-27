#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Requests.SingleWebRequestBegin
struct SingleWebRequestBegin_t714235414;
// GSN.Skill.Requests.SingleWebRequestComplete
struct SingleWebRequestComplete_t61608820;
// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeh3052248436.h"
#include "mscorlib_System_Nullable_1_gen945534945.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.ErrorManager
struct  ErrorManager_t3125966563  : public SingletonMonoBehaviour_1_t3052248436
{
public:
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.ErrorManager::_currentUser
	CurrentUser_t3910039426 * ____currentUser_7;
	// System.Nullable`1<GSN.Skill.Phoenix.Model.ErrorData> GSN.Skill.Phoenix.Model.ErrorManager::_currentError
	Nullable_1_t945534945  ____currentError_8;
	// System.Action GSN.Skill.Phoenix.Model.ErrorManager::_onSuccessCallback
	Action_t3226471752 * ____onSuccessCallback_9;

public:
	inline static int32_t get_offset_of__currentUser_7() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563, ____currentUser_7)); }
	inline CurrentUser_t3910039426 * get__currentUser_7() const { return ____currentUser_7; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_7() { return &____currentUser_7; }
	inline void set__currentUser_7(CurrentUser_t3910039426 * value)
	{
		____currentUser_7 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_7, value);
	}

	inline static int32_t get_offset_of__currentError_8() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563, ____currentError_8)); }
	inline Nullable_1_t945534945  get__currentError_8() const { return ____currentError_8; }
	inline Nullable_1_t945534945 * get_address_of__currentError_8() { return &____currentError_8; }
	inline void set__currentError_8(Nullable_1_t945534945  value)
	{
		____currentError_8 = value;
	}

	inline static int32_t get_offset_of__onSuccessCallback_9() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563, ____onSuccessCallback_9)); }
	inline Action_t3226471752 * get__onSuccessCallback_9() const { return ____onSuccessCallback_9; }
	inline Action_t3226471752 ** get_address_of__onSuccessCallback_9() { return &____onSuccessCallback_9; }
	inline void set__onSuccessCallback_9(Action_t3226471752 * value)
	{
		____onSuccessCallback_9 = value;
		Il2CppCodeGenWriteBarrier(&____onSuccessCallback_9, value);
	}
};

struct ErrorManager_t3125966563_StaticFields
{
public:
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache0
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache0_10;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache1
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache1_11;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache2
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache2_12;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache3
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache3_13;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache4
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache4_14;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache5
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache5_15;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache6
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache6_16;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache7
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache7_17;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.ErrorManager::<>f__mg$cache8
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache8_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_10() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache0_10)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache0_10() const { return ___U3CU3Ef__mgU24cache0_10; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache0_10() { return &___U3CU3Ef__mgU24cache0_10; }
	inline void set_U3CU3Ef__mgU24cache0_10(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_11() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache1_11)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache1_11() const { return ___U3CU3Ef__mgU24cache1_11; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache1_11() { return &___U3CU3Ef__mgU24cache1_11; }
	inline void set_U3CU3Ef__mgU24cache1_11(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_12() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache2_12)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache2_12() const { return ___U3CU3Ef__mgU24cache2_12; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache2_12() { return &___U3CU3Ef__mgU24cache2_12; }
	inline void set_U3CU3Ef__mgU24cache2_12(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache2_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_13() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache3_13)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache3_13() const { return ___U3CU3Ef__mgU24cache3_13; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache3_13() { return &___U3CU3Ef__mgU24cache3_13; }
	inline void set_U3CU3Ef__mgU24cache3_13(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache3_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_14() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache4_14)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache4_14() const { return ___U3CU3Ef__mgU24cache4_14; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache4_14() { return &___U3CU3Ef__mgU24cache4_14; }
	inline void set_U3CU3Ef__mgU24cache4_14(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache4_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_15() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache5_15)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache5_15() const { return ___U3CU3Ef__mgU24cache5_15; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache5_15() { return &___U3CU3Ef__mgU24cache5_15; }
	inline void set_U3CU3Ef__mgU24cache5_15(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache5_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_16() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache6_16)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache6_16() const { return ___U3CU3Ef__mgU24cache6_16; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache6_16() { return &___U3CU3Ef__mgU24cache6_16; }
	inline void set_U3CU3Ef__mgU24cache6_16(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache6_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_17() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache7_17)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache7_17() const { return ___U3CU3Ef__mgU24cache7_17; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache7_17() { return &___U3CU3Ef__mgU24cache7_17; }
	inline void set_U3CU3Ef__mgU24cache7_17(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache7_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_18() { return static_cast<int32_t>(offsetof(ErrorManager_t3125966563_StaticFields, ___U3CU3Ef__mgU24cache8_18)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache8_18() const { return ___U3CU3Ef__mgU24cache8_18; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache8_18() { return &___U3CU3Ef__mgU24cache8_18; }
	inline void set_U3CU3Ef__mgU24cache8_18(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache8_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
