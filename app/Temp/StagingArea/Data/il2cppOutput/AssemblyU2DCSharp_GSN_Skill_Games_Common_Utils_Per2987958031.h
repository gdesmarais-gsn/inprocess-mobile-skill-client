#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.IActivityIndicator
struct IActivityIndicator_t4086378995;
// GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob
struct InnerPerseverantWebRequestJob_t386910253;
// GSN.Skill.Games.Common.Utils.WebRequestJob
struct WebRequestJob_t3512327076;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Ret1640071313.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob
struct  PerseverantWebRequestJob_t2987958031  : public RetryJob_t1640071313
{
public:
	// GSN.Skill.Games.Common.Utils.IActivityIndicator GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::activityIndicator
	Il2CppObject * ___activityIndicator_41;
	// GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::innerPWRJ
	InnerPerseverantWebRequestJob_t386910253 * ___innerPWRJ_42;
	// GSN.Skill.Games.Common.Utils.WebRequestJob GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::<WebRequestJob>k__BackingField
	WebRequestJob_t3512327076 * ___U3CWebRequestJobU3Ek__BackingField_43;

public:
	inline static int32_t get_offset_of_activityIndicator_41() { return static_cast<int32_t>(offsetof(PerseverantWebRequestJob_t2987958031, ___activityIndicator_41)); }
	inline Il2CppObject * get_activityIndicator_41() const { return ___activityIndicator_41; }
	inline Il2CppObject ** get_address_of_activityIndicator_41() { return &___activityIndicator_41; }
	inline void set_activityIndicator_41(Il2CppObject * value)
	{
		___activityIndicator_41 = value;
		Il2CppCodeGenWriteBarrier(&___activityIndicator_41, value);
	}

	inline static int32_t get_offset_of_innerPWRJ_42() { return static_cast<int32_t>(offsetof(PerseverantWebRequestJob_t2987958031, ___innerPWRJ_42)); }
	inline InnerPerseverantWebRequestJob_t386910253 * get_innerPWRJ_42() const { return ___innerPWRJ_42; }
	inline InnerPerseverantWebRequestJob_t386910253 ** get_address_of_innerPWRJ_42() { return &___innerPWRJ_42; }
	inline void set_innerPWRJ_42(InnerPerseverantWebRequestJob_t386910253 * value)
	{
		___innerPWRJ_42 = value;
		Il2CppCodeGenWriteBarrier(&___innerPWRJ_42, value);
	}

	inline static int32_t get_offset_of_U3CWebRequestJobU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(PerseverantWebRequestJob_t2987958031, ___U3CWebRequestJobU3Ek__BackingField_43)); }
	inline WebRequestJob_t3512327076 * get_U3CWebRequestJobU3Ek__BackingField_43() const { return ___U3CWebRequestJobU3Ek__BackingField_43; }
	inline WebRequestJob_t3512327076 ** get_address_of_U3CWebRequestJobU3Ek__BackingField_43() { return &___U3CWebRequestJobU3Ek__BackingField_43; }
	inline void set_U3CWebRequestJobU3Ek__BackingField_43(WebRequestJob_t3512327076 * value)
	{
		___U3CWebRequestJobU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWebRequestJobU3Ek__BackingField_43, value);
	}
};

struct PerseverantWebRequestJob_t2987958031_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.IActivityIndicator GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::nullActivityIndicator
	Il2CppObject * ___nullActivityIndicator_39;
	// GSN.Skill.Games.Common.Utils.IActivityIndicator GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob::OurActivityIndicator
	Il2CppObject * ___OurActivityIndicator_40;

public:
	inline static int32_t get_offset_of_nullActivityIndicator_39() { return static_cast<int32_t>(offsetof(PerseverantWebRequestJob_t2987958031_StaticFields, ___nullActivityIndicator_39)); }
	inline Il2CppObject * get_nullActivityIndicator_39() const { return ___nullActivityIndicator_39; }
	inline Il2CppObject ** get_address_of_nullActivityIndicator_39() { return &___nullActivityIndicator_39; }
	inline void set_nullActivityIndicator_39(Il2CppObject * value)
	{
		___nullActivityIndicator_39 = value;
		Il2CppCodeGenWriteBarrier(&___nullActivityIndicator_39, value);
	}

	inline static int32_t get_offset_of_OurActivityIndicator_40() { return static_cast<int32_t>(offsetof(PerseverantWebRequestJob_t2987958031_StaticFields, ___OurActivityIndicator_40)); }
	inline Il2CppObject * get_OurActivityIndicator_40() const { return ___OurActivityIndicator_40; }
	inline Il2CppObject ** get_address_of_OurActivityIndicator_40() { return &___OurActivityIndicator_40; }
	inline void set_OurActivityIndicator_40(Il2CppObject * value)
	{
		___OurActivityIndicator_40 = value;
		Il2CppCodeGenWriteBarrier(&___OurActivityIndicator_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
