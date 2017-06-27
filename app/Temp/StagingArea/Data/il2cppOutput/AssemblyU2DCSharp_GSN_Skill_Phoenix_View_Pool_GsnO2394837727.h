#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<GSN.Skill.Phoenix.View.Pool.IGsnPooledObject>
struct Queue_1_t3815499376;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.Pool.GsnObjectPool
struct  GsnObjectPool_t2394837727  : public Il2CppObject
{
public:
	// System.Collections.Generic.Queue`1<GSN.Skill.Phoenix.View.Pool.IGsnPooledObject> GSN.Skill.Phoenix.View.Pool.GsnObjectPool::_pool
	Queue_1_t3815499376 * ____pool_0;
	// System.Int32 GSN.Skill.Phoenix.View.Pool.GsnObjectPool::_size
	int32_t ____size_1;
	// System.Int32 GSN.Skill.Phoenix.View.Pool.GsnObjectPool::_nextAvailable
	int32_t ____nextAvailable_2;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(GsnObjectPool_t2394837727, ____pool_0)); }
	inline Queue_1_t3815499376 * get__pool_0() const { return ____pool_0; }
	inline Queue_1_t3815499376 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Queue_1_t3815499376 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier(&____pool_0, value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(GsnObjectPool_t2394837727, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__nextAvailable_2() { return static_cast<int32_t>(offsetof(GsnObjectPool_t2394837727, ____nextAvailable_2)); }
	inline int32_t get__nextAvailable_2() const { return ____nextAvailable_2; }
	inline int32_t* get_address_of__nextAvailable_2() { return &____nextAvailable_2; }
	inline void set__nextAvailable_2(int32_t value)
	{
		____nextAvailable_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
