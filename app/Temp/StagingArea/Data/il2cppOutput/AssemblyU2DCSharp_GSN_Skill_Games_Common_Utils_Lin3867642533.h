#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.LinkedListNode
struct LinkedListNode_t3062077665;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Lin3062077665.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.LinkedList
struct  LinkedList_t3867642533  : public LinkedListNode_t3062077665
{
public:
	// GSN.Skill.Games.Common.Utils.LinkedListNode GSN.Skill.Games.Common.Utils.LinkedList::_anchor
	LinkedListNode_t3062077665 * ____anchor_3;
	// System.Int32 GSN.Skill.Games.Common.Utils.LinkedList::_size
	int32_t ____size_4;

public:
	inline static int32_t get_offset_of__anchor_3() { return static_cast<int32_t>(offsetof(LinkedList_t3867642533, ____anchor_3)); }
	inline LinkedListNode_t3062077665 * get__anchor_3() const { return ____anchor_3; }
	inline LinkedListNode_t3062077665 ** get_address_of__anchor_3() { return &____anchor_3; }
	inline void set__anchor_3(LinkedListNode_t3062077665 * value)
	{
		____anchor_3 = value;
		Il2CppCodeGenWriteBarrier(&____anchor_3, value);
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(LinkedList_t3867642533, ____size_4)); }
	inline int32_t get__size_4() const { return ____size_4; }
	inline int32_t* get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(int32_t value)
	{
		____size_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
