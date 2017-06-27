#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t3378356477;
// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Games.Common.Events.EventDispatcher/PendingList`1<GSN.Skill.Games.Common.Events.EventDispatcher/EventListener>>
struct Dictionary_2_t232377512;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_t101629490;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t2011960077;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Events.EventDispatcher
struct  EventDispatcher_t3009527247  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Games.Common.Events.EventDispatcher/PendingList`1<GSN.Skill.Games.Common.Events.EventDispatcher/EventListener>> GSN.Skill.Games.Common.Events.EventDispatcher::_eventListeners
	Dictionary_2_t232377512 * ____eventListeners_1;

public:
	inline static int32_t get_offset_of__eventListeners_1() { return static_cast<int32_t>(offsetof(EventDispatcher_t3009527247, ____eventListeners_1)); }
	inline Dictionary_2_t232377512 * get__eventListeners_1() const { return ____eventListeners_1; }
	inline Dictionary_2_t232377512 ** get_address_of__eventListeners_1() { return &____eventListeners_1; }
	inline void set__eventListeners_1(Dictionary_2_t232377512 * value)
	{
		____eventListeners_1 = value;
		Il2CppCodeGenWriteBarrier(&____eventListeners_1, value);
	}
};

struct EventDispatcher_t3009527247_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Int32>> GSN.Skill.Games.Common.Events.EventDispatcher::EVENTS
	Dictionary_2_t3378356477 * ___EVENTS_0;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> GSN.Skill.Games.Common.Events.EventDispatcher::<>f__mg$cache0
	Func_2_t101629490 * ___U3CU3Ef__mgU24cache0_2;
	// System.Func`2<System.Type,System.Boolean> GSN.Skill.Games.Common.Events.EventDispatcher::<>f__am$cache0
	Func_2_t2011960077 * ___U3CU3Ef__amU24cache0_3;
	// System.Func`2<System.Type,System.Boolean> GSN.Skill.Games.Common.Events.EventDispatcher::<>f__am$cache1
	Func_2_t2011960077 * ___U3CU3Ef__amU24cache1_4;

public:
	inline static int32_t get_offset_of_EVENTS_0() { return static_cast<int32_t>(offsetof(EventDispatcher_t3009527247_StaticFields, ___EVENTS_0)); }
	inline Dictionary_2_t3378356477 * get_EVENTS_0() const { return ___EVENTS_0; }
	inline Dictionary_2_t3378356477 ** get_address_of_EVENTS_0() { return &___EVENTS_0; }
	inline void set_EVENTS_0(Dictionary_2_t3378356477 * value)
	{
		___EVENTS_0 = value;
		Il2CppCodeGenWriteBarrier(&___EVENTS_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(EventDispatcher_t3009527247_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Func_2_t101629490 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Func_2_t101629490 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Func_2_t101629490 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(EventDispatcher_t3009527247_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t2011960077 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t2011960077 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t2011960077 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_4() { return static_cast<int32_t>(offsetof(EventDispatcher_t3009527247_StaticFields, ___U3CU3Ef__amU24cache1_4)); }
	inline Func_2_t2011960077 * get_U3CU3Ef__amU24cache1_4() const { return ___U3CU3Ef__amU24cache1_4; }
	inline Func_2_t2011960077 ** get_address_of_U3CU3Ef__amU24cache1_4() { return &___U3CU3Ef__amU24cache1_4; }
	inline void set_U3CU3Ef__amU24cache1_4(Func_2_t2011960077 * value)
	{
		___U3CU3Ef__amU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
