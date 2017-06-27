#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.LinkedList
struct LinkedList_t3867642533;
// GSN.Skill.Games.Common.Utils.LinkedListNode
struct LinkedListNode_t3062077665;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.LinkedListNode
struct  LinkedListNode_t3062077665  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.LinkedList GSN.Skill.Games.Common.Utils.LinkedListNode::_ownerList
	LinkedList_t3867642533 * ____ownerList_0;
	// GSN.Skill.Games.Common.Utils.LinkedListNode GSN.Skill.Games.Common.Utils.LinkedListNode::_prev
	LinkedListNode_t3062077665 * ____prev_1;
	// GSN.Skill.Games.Common.Utils.LinkedListNode GSN.Skill.Games.Common.Utils.LinkedListNode::_next
	LinkedListNode_t3062077665 * ____next_2;

public:
	inline static int32_t get_offset_of__ownerList_0() { return static_cast<int32_t>(offsetof(LinkedListNode_t3062077665, ____ownerList_0)); }
	inline LinkedList_t3867642533 * get__ownerList_0() const { return ____ownerList_0; }
	inline LinkedList_t3867642533 ** get_address_of__ownerList_0() { return &____ownerList_0; }
	inline void set__ownerList_0(LinkedList_t3867642533 * value)
	{
		____ownerList_0 = value;
		Il2CppCodeGenWriteBarrier(&____ownerList_0, value);
	}

	inline static int32_t get_offset_of__prev_1() { return static_cast<int32_t>(offsetof(LinkedListNode_t3062077665, ____prev_1)); }
	inline LinkedListNode_t3062077665 * get__prev_1() const { return ____prev_1; }
	inline LinkedListNode_t3062077665 ** get_address_of__prev_1() { return &____prev_1; }
	inline void set__prev_1(LinkedListNode_t3062077665 * value)
	{
		____prev_1 = value;
		Il2CppCodeGenWriteBarrier(&____prev_1, value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(LinkedListNode_t3062077665, ____next_2)); }
	inline LinkedListNode_t3062077665 * get__next_2() const { return ____next_2; }
	inline LinkedListNode_t3062077665 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(LinkedListNode_t3062077665 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier(&____next_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
