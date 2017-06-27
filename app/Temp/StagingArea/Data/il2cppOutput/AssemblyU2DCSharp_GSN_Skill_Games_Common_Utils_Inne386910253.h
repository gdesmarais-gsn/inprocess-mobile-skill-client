#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.RetryJobController
struct RetryJobController_t1436723529;
// System.Random
struct Random_t1044426839;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// GSN.Skill.Games.Common.Utils.WebRequestJob
struct WebRequestJob_t3512327076;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Ret1640071313.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob
struct  InnerPerseverantWebRequestJob_t386910253  : public RetryJob_t1640071313
{
public:
	// System.Random GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::theRandom
	Random_t1044426839 * ___theRandom_40;
	// System.Int32 GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::firstDelay
	int32_t ___firstDelay_41;
	// System.Int32 GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::maxDelay
	int32_t ___maxDelay_43;
	// GSN.Skill.Games.Common.Utils.WebRequestJob GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::<WebRequestJob>k__BackingField
	WebRequestJob_t3512327076 * ___U3CWebRequestJobU3Ek__BackingField_44;
	// System.Boolean GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::_bullish
	bool ____bullish_46;
	// System.Int32 GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::_savedTimeout
	int32_t ____savedTimeout_47;

public:
	inline static int32_t get_offset_of_theRandom_40() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253, ___theRandom_40)); }
	inline Random_t1044426839 * get_theRandom_40() const { return ___theRandom_40; }
	inline Random_t1044426839 ** get_address_of_theRandom_40() { return &___theRandom_40; }
	inline void set_theRandom_40(Random_t1044426839 * value)
	{
		___theRandom_40 = value;
		Il2CppCodeGenWriteBarrier(&___theRandom_40, value);
	}

	inline static int32_t get_offset_of_firstDelay_41() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253, ___firstDelay_41)); }
	inline int32_t get_firstDelay_41() const { return ___firstDelay_41; }
	inline int32_t* get_address_of_firstDelay_41() { return &___firstDelay_41; }
	inline void set_firstDelay_41(int32_t value)
	{
		___firstDelay_41 = value;
	}

	inline static int32_t get_offset_of_maxDelay_43() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253, ___maxDelay_43)); }
	inline int32_t get_maxDelay_43() const { return ___maxDelay_43; }
	inline int32_t* get_address_of_maxDelay_43() { return &___maxDelay_43; }
	inline void set_maxDelay_43(int32_t value)
	{
		___maxDelay_43 = value;
	}

	inline static int32_t get_offset_of_U3CWebRequestJobU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253, ___U3CWebRequestJobU3Ek__BackingField_44)); }
	inline WebRequestJob_t3512327076 * get_U3CWebRequestJobU3Ek__BackingField_44() const { return ___U3CWebRequestJobU3Ek__BackingField_44; }
	inline WebRequestJob_t3512327076 ** get_address_of_U3CWebRequestJobU3Ek__BackingField_44() { return &___U3CWebRequestJobU3Ek__BackingField_44; }
	inline void set_U3CWebRequestJobU3Ek__BackingField_44(WebRequestJob_t3512327076 * value)
	{
		___U3CWebRequestJobU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWebRequestJobU3Ek__BackingField_44, value);
	}

	inline static int32_t get_offset_of__bullish_46() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253, ____bullish_46)); }
	inline bool get__bullish_46() const { return ____bullish_46; }
	inline bool* get_address_of__bullish_46() { return &____bullish_46; }
	inline void set__bullish_46(bool value)
	{
		____bullish_46 = value;
	}

	inline static int32_t get_offset_of__savedTimeout_47() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253, ____savedTimeout_47)); }
	inline int32_t get__savedTimeout_47() const { return ____savedTimeout_47; }
	inline int32_t* get_address_of__savedTimeout_47() { return &____savedTimeout_47; }
	inline void set__savedTimeout_47(int32_t value)
	{
		____savedTimeout_47 = value;
	}
};

struct InnerPerseverantWebRequestJob_t386910253_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.RetryJobController GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::OurController
	RetryJobController_t1436723529 * ___OurController_39;
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::AuthorizationRecoverJob
	Job_t4002496073 * ___AuthorizationRecoverJob_42;
	// System.Int32 GSN.Skill.Games.Common.Utils.InnerPerseverantWebRequestJob::DefaultTimeout
	int32_t ___DefaultTimeout_45;

public:
	inline static int32_t get_offset_of_OurController_39() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253_StaticFields, ___OurController_39)); }
	inline RetryJobController_t1436723529 * get_OurController_39() const { return ___OurController_39; }
	inline RetryJobController_t1436723529 ** get_address_of_OurController_39() { return &___OurController_39; }
	inline void set_OurController_39(RetryJobController_t1436723529 * value)
	{
		___OurController_39 = value;
		Il2CppCodeGenWriteBarrier(&___OurController_39, value);
	}

	inline static int32_t get_offset_of_AuthorizationRecoverJob_42() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253_StaticFields, ___AuthorizationRecoverJob_42)); }
	inline Job_t4002496073 * get_AuthorizationRecoverJob_42() const { return ___AuthorizationRecoverJob_42; }
	inline Job_t4002496073 ** get_address_of_AuthorizationRecoverJob_42() { return &___AuthorizationRecoverJob_42; }
	inline void set_AuthorizationRecoverJob_42(Job_t4002496073 * value)
	{
		___AuthorizationRecoverJob_42 = value;
		Il2CppCodeGenWriteBarrier(&___AuthorizationRecoverJob_42, value);
	}

	inline static int32_t get_offset_of_DefaultTimeout_45() { return static_cast<int32_t>(offsetof(InnerPerseverantWebRequestJob_t386910253_StaticFields, ___DefaultTimeout_45)); }
	inline int32_t get_DefaultTimeout_45() const { return ___DefaultTimeout_45; }
	inline int32_t* get_address_of_DefaultTimeout_45() { return &___DefaultTimeout_45; }
	inline void set_DefaultTimeout_45(int32_t value)
	{
		___DefaultTimeout_45 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
