#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;
// GSN.Skill.Requests.SingleWebRequestComplete
struct SingleWebRequestComplete_t61608820;
// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Requests.WebRequester
struct WebRequester_t4254900636;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6
struct  U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::completedRequests
	int32_t ___completedRequests_0;
	// System.Int32 GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::totalRequests
	int32_t ___totalRequests_1;
	// GSN.Skill.Requests.WebRequests GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::requests
	WebRequests_t3348797540 * ___requests_2;
	// System.Boolean GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::allSuccess
	bool ___allSuccess_3;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::OnSingleWebRequestComplete
	SingleWebRequestComplete_t61608820 * ___OnSingleWebRequestComplete_4;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::OnSingleWebRequestFail
	SingleWebRequestFail_t691327747 * ___OnSingleWebRequestFail_5;
	// System.Action GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::SingleRequestDone
	Action_t3226471752 * ___SingleRequestDone_6;
	// GSN.Skill.Requests.WebRequester GSN.Skill.Requests.WebRequester/<BatchFetchRequests>c__AnonStorey6::$this
	WebRequester_t4254900636 * ___U24this_7;

public:
	inline static int32_t get_offset_of_completedRequests_0() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___completedRequests_0)); }
	inline int32_t get_completedRequests_0() const { return ___completedRequests_0; }
	inline int32_t* get_address_of_completedRequests_0() { return &___completedRequests_0; }
	inline void set_completedRequests_0(int32_t value)
	{
		___completedRequests_0 = value;
	}

	inline static int32_t get_offset_of_totalRequests_1() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___totalRequests_1)); }
	inline int32_t get_totalRequests_1() const { return ___totalRequests_1; }
	inline int32_t* get_address_of_totalRequests_1() { return &___totalRequests_1; }
	inline void set_totalRequests_1(int32_t value)
	{
		___totalRequests_1 = value;
	}

	inline static int32_t get_offset_of_requests_2() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___requests_2)); }
	inline WebRequests_t3348797540 * get_requests_2() const { return ___requests_2; }
	inline WebRequests_t3348797540 ** get_address_of_requests_2() { return &___requests_2; }
	inline void set_requests_2(WebRequests_t3348797540 * value)
	{
		___requests_2 = value;
		Il2CppCodeGenWriteBarrier(&___requests_2, value);
	}

	inline static int32_t get_offset_of_allSuccess_3() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___allSuccess_3)); }
	inline bool get_allSuccess_3() const { return ___allSuccess_3; }
	inline bool* get_address_of_allSuccess_3() { return &___allSuccess_3; }
	inline void set_allSuccess_3(bool value)
	{
		___allSuccess_3 = value;
	}

	inline static int32_t get_offset_of_OnSingleWebRequestComplete_4() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___OnSingleWebRequestComplete_4)); }
	inline SingleWebRequestComplete_t61608820 * get_OnSingleWebRequestComplete_4() const { return ___OnSingleWebRequestComplete_4; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_OnSingleWebRequestComplete_4() { return &___OnSingleWebRequestComplete_4; }
	inline void set_OnSingleWebRequestComplete_4(SingleWebRequestComplete_t61608820 * value)
	{
		___OnSingleWebRequestComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnSingleWebRequestComplete_4, value);
	}

	inline static int32_t get_offset_of_OnSingleWebRequestFail_5() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___OnSingleWebRequestFail_5)); }
	inline SingleWebRequestFail_t691327747 * get_OnSingleWebRequestFail_5() const { return ___OnSingleWebRequestFail_5; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_OnSingleWebRequestFail_5() { return &___OnSingleWebRequestFail_5; }
	inline void set_OnSingleWebRequestFail_5(SingleWebRequestFail_t691327747 * value)
	{
		___OnSingleWebRequestFail_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnSingleWebRequestFail_5, value);
	}

	inline static int32_t get_offset_of_SingleRequestDone_6() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___SingleRequestDone_6)); }
	inline Action_t3226471752 * get_SingleRequestDone_6() const { return ___SingleRequestDone_6; }
	inline Action_t3226471752 ** get_address_of_SingleRequestDone_6() { return &___SingleRequestDone_6; }
	inline void set_SingleRequestDone_6(Action_t3226471752 * value)
	{
		___SingleRequestDone_6 = value;
		Il2CppCodeGenWriteBarrier(&___SingleRequestDone_6, value);
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CBatchFetchRequestsU3Ec__AnonStorey6_t478363057, ___U24this_7)); }
	inline WebRequester_t4254900636 * get_U24this_7() const { return ___U24this_7; }
	inline WebRequester_t4254900636 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(WebRequester_t4254900636 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
