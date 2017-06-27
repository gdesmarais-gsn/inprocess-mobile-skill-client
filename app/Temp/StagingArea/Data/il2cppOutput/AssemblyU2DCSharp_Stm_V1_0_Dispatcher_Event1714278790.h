#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_0.Dispatcher/Event
struct  Event_t1714278790  : public Il2CppObject
{
public:
	// System.String Stm.V1_0.Dispatcher/Event::name
	String_t* ___name_0;
	// UnityEngine.GameObject Stm.V1_0.Dispatcher/Event::target
	GameObject_t1756533147 * ___target_1;
	// System.String Stm.V1_0.Dispatcher/Event::actionName
	String_t* ___actionName_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Event_t1714278790, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(Event_t1714278790, ___target_1)); }
	inline GameObject_t1756533147 * get_target_1() const { return ___target_1; }
	inline GameObject_t1756533147 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(GameObject_t1756533147 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}

	inline static int32_t get_offset_of_actionName_2() { return static_cast<int32_t>(offsetof(Event_t1714278790, ___actionName_2)); }
	inline String_t* get_actionName_2() const { return ___actionName_2; }
	inline String_t** get_address_of_actionName_2() { return &___actionName_2; }
	inline void set_actionName_2(String_t* value)
	{
		___actionName_2 = value;
		Il2CppCodeGenWriteBarrier(&___actionName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
