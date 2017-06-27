#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2509106130;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ObjectPool`1<System.Object>
struct  ObjectPool_1_t930499256  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Games.Common.Utils.ObjectPool`1::objectsGot
	int32_t ___objectsGot_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.ObjectPool`1::objectsReturned
	int32_t ___objectsReturned_1;
	// System.Collections.Generic.Queue`1<T> GSN.Skill.Games.Common.Utils.ObjectPool`1::m_queue
	Queue_1_t2509106130 * ___m_queue_2;

public:
	inline static int32_t get_offset_of_objectsGot_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t930499256, ___objectsGot_0)); }
	inline int32_t get_objectsGot_0() const { return ___objectsGot_0; }
	inline int32_t* get_address_of_objectsGot_0() { return &___objectsGot_0; }
	inline void set_objectsGot_0(int32_t value)
	{
		___objectsGot_0 = value;
	}

	inline static int32_t get_offset_of_objectsReturned_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t930499256, ___objectsReturned_1)); }
	inline int32_t get_objectsReturned_1() const { return ___objectsReturned_1; }
	inline int32_t* get_address_of_objectsReturned_1() { return &___objectsReturned_1; }
	inline void set_objectsReturned_1(int32_t value)
	{
		___objectsReturned_1 = value;
	}

	inline static int32_t get_offset_of_m_queue_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t930499256, ___m_queue_2)); }
	inline Queue_1_t2509106130 * get_m_queue_2() const { return ___m_queue_2; }
	inline Queue_1_t2509106130 ** get_address_of_m_queue_2() { return &___m_queue_2; }
	inline void set_m_queue_2(Queue_1_t2509106130 * value)
	{
		___m_queue_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_queue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
