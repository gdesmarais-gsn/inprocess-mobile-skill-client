#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_t3745798877;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Model.ReplayDataSafe/<FetchData>c__AnonStorey0
struct  U3CFetchDataU3Ec__AnonStorey0_t2409695908  : public Il2CppObject
{
public:
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> GSN.Skill.Games.Common.Model.ReplayDataSafe/<FetchData>c__AnonStorey0::doneAction
	Action_1_t3745798877 * ___doneAction_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Model.ReplayDataSafe/<FetchData>c__AnonStorey0::response
	Dictionary_2_t3943999495 * ___response_1;

public:
	inline static int32_t get_offset_of_doneAction_0() { return static_cast<int32_t>(offsetof(U3CFetchDataU3Ec__AnonStorey0_t2409695908, ___doneAction_0)); }
	inline Action_1_t3745798877 * get_doneAction_0() const { return ___doneAction_0; }
	inline Action_1_t3745798877 ** get_address_of_doneAction_0() { return &___doneAction_0; }
	inline void set_doneAction_0(Action_1_t3745798877 * value)
	{
		___doneAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_0, value);
	}

	inline static int32_t get_offset_of_response_1() { return static_cast<int32_t>(offsetof(U3CFetchDataU3Ec__AnonStorey0_t2409695908, ___response_1)); }
	inline Dictionary_2_t3943999495 * get_response_1() const { return ___response_1; }
	inline Dictionary_2_t3943999495 ** get_address_of_response_1() { return &___response_1; }
	inline void set_response_1(Dictionary_2_t3943999495 * value)
	{
		___response_1 = value;
		Il2CppCodeGenWriteBarrier(&___response_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
