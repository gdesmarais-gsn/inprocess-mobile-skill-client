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
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction>
struct List_1_t1677485496;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.AsyncFunctionCaller
struct  AsyncFunctionCaller_t3423834723  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::runningIndex
	int32_t ___runningIndex_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::count
	int32_t ___count_1;
	// System.Action GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::finalDoneAction
	Action_t3226471752 * ___finalDoneAction_2;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction> GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::funcList
	List_1_t1677485496 * ___funcList_3;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_4;

public:
	inline static int32_t get_offset_of_runningIndex_0() { return static_cast<int32_t>(offsetof(AsyncFunctionCaller_t3423834723, ___runningIndex_0)); }
	inline int32_t get_runningIndex_0() const { return ___runningIndex_0; }
	inline int32_t* get_address_of_runningIndex_0() { return &___runningIndex_0; }
	inline void set_runningIndex_0(int32_t value)
	{
		___runningIndex_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(AsyncFunctionCaller_t3423834723, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_finalDoneAction_2() { return static_cast<int32_t>(offsetof(AsyncFunctionCaller_t3423834723, ___finalDoneAction_2)); }
	inline Action_t3226471752 * get_finalDoneAction_2() const { return ___finalDoneAction_2; }
	inline Action_t3226471752 ** get_address_of_finalDoneAction_2() { return &___finalDoneAction_2; }
	inline void set_finalDoneAction_2(Action_t3226471752 * value)
	{
		___finalDoneAction_2 = value;
		Il2CppCodeGenWriteBarrier(&___finalDoneAction_2, value);
	}

	inline static int32_t get_offset_of_funcList_3() { return static_cast<int32_t>(offsetof(AsyncFunctionCaller_t3423834723, ___funcList_3)); }
	inline List_1_t1677485496 * get_funcList_3() const { return ___funcList_3; }
	inline List_1_t1677485496 ** get_address_of_funcList_3() { return &___funcList_3; }
	inline void set_funcList_3(List_1_t1677485496 * value)
	{
		___funcList_3 = value;
		Il2CppCodeGenWriteBarrier(&___funcList_3, value);
	}

	inline static int32_t get_offset_of_actionQueue_4() { return static_cast<int32_t>(offsetof(AsyncFunctionCaller_t3423834723, ___actionQueue_4)); }
	inline ActionQueue_t1924202305 * get_actionQueue_4() const { return ___actionQueue_4; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_4() { return &___actionQueue_4; }
	inline void set_actionQueue_4(ActionQueue_t1924202305 * value)
	{
		___actionQueue_4 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
