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
// System.String
struct String_t;
// GSN.Skill.Games.Common.Client.Session.MockGameSession
struct MockGameSession_t1302467586;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.MockGameSession/<FinishedWithGameLog>c__AnonStorey0
struct  U3CFinishedWithGameLogU3Ec__AnonStorey0_t1324421346  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Games.Common.Client.Session.MockGameSession/<FinishedWithGameLog>c__AnonStorey0::doneAction
	Action_t3226471752 * ___doneAction_0;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession/<FinishedWithGameLog>c__AnonStorey0::header
	String_t* ___header_1;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession/<FinishedWithGameLog>c__AnonStorey0::body
	String_t* ___body_2;
	// GSN.Skill.Games.Common.Client.Session.MockGameSession GSN.Skill.Games.Common.Client.Session.MockGameSession/<FinishedWithGameLog>c__AnonStorey0::$this
	MockGameSession_t1302467586 * ___U24this_3;

public:
	inline static int32_t get_offset_of_doneAction_0() { return static_cast<int32_t>(offsetof(U3CFinishedWithGameLogU3Ec__AnonStorey0_t1324421346, ___doneAction_0)); }
	inline Action_t3226471752 * get_doneAction_0() const { return ___doneAction_0; }
	inline Action_t3226471752 ** get_address_of_doneAction_0() { return &___doneAction_0; }
	inline void set_doneAction_0(Action_t3226471752 * value)
	{
		___doneAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_0, value);
	}

	inline static int32_t get_offset_of_header_1() { return static_cast<int32_t>(offsetof(U3CFinishedWithGameLogU3Ec__AnonStorey0_t1324421346, ___header_1)); }
	inline String_t* get_header_1() const { return ___header_1; }
	inline String_t** get_address_of_header_1() { return &___header_1; }
	inline void set_header_1(String_t* value)
	{
		___header_1 = value;
		Il2CppCodeGenWriteBarrier(&___header_1, value);
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(U3CFinishedWithGameLogU3Ec__AnonStorey0_t1324421346, ___body_2)); }
	inline String_t* get_body_2() const { return ___body_2; }
	inline String_t** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(String_t* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier(&___body_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CFinishedWithGameLogU3Ec__AnonStorey0_t1324421346, ___U24this_3)); }
	inline MockGameSession_t1302467586 * get_U24this_3() const { return ___U24this_3; }
	inline MockGameSession_t1302467586 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(MockGameSession_t1302467586 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
