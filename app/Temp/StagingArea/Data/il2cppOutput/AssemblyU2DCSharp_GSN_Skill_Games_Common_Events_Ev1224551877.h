﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Events.EventDispatcher/EventListener>
struct List_1_t952448456;

#include "mscorlib_System_Collections_Generic_List_1_gen952448456.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Events.EventDispatcher/PendingList`1<GSN.Skill.Games.Common.Events.EventDispatcher/EventListener>
struct  PendingList_1_t1224551877  : public List_1_t952448456
{
public:
	// System.Int32 GSN.Skill.Games.Common.Events.EventDispatcher/PendingList`1::_lockCounter
	int32_t ____lockCounter_5;
	// System.Collections.Generic.List`1<T> GSN.Skill.Games.Common.Events.EventDispatcher/PendingList`1::_pendingAdds
	List_1_t952448456 * ____pendingAdds_6;
	// System.Collections.Generic.List`1<T> GSN.Skill.Games.Common.Events.EventDispatcher/PendingList`1::_pendingRemoves
	List_1_t952448456 * ____pendingRemoves_7;

public:
	inline static int32_t get_offset_of__lockCounter_5() { return static_cast<int32_t>(offsetof(PendingList_1_t1224551877, ____lockCounter_5)); }
	inline int32_t get__lockCounter_5() const { return ____lockCounter_5; }
	inline int32_t* get_address_of__lockCounter_5() { return &____lockCounter_5; }
	inline void set__lockCounter_5(int32_t value)
	{
		____lockCounter_5 = value;
	}

	inline static int32_t get_offset_of__pendingAdds_6() { return static_cast<int32_t>(offsetof(PendingList_1_t1224551877, ____pendingAdds_6)); }
	inline List_1_t952448456 * get__pendingAdds_6() const { return ____pendingAdds_6; }
	inline List_1_t952448456 ** get_address_of__pendingAdds_6() { return &____pendingAdds_6; }
	inline void set__pendingAdds_6(List_1_t952448456 * value)
	{
		____pendingAdds_6 = value;
		Il2CppCodeGenWriteBarrier(&____pendingAdds_6, value);
	}

	inline static int32_t get_offset_of__pendingRemoves_7() { return static_cast<int32_t>(offsetof(PendingList_1_t1224551877, ____pendingRemoves_7)); }
	inline List_1_t952448456 * get__pendingRemoves_7() const { return ____pendingRemoves_7; }
	inline List_1_t952448456 ** get_address_of__pendingRemoves_7() { return &____pendingRemoves_7; }
	inline void set__pendingRemoves_7(List_1_t952448456 * value)
	{
		____pendingRemoves_7 = value;
		Il2CppCodeGenWriteBarrier(&____pendingRemoves_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
