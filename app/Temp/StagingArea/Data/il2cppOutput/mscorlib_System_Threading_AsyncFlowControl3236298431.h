#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Thread
struct Thread_t241561612;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Threading_AsyncFlowControlType792122991.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AsyncFlowControl
struct  AsyncFlowControl_t3236298431 
{
public:
	// System.Threading.Thread System.Threading.AsyncFlowControl::_t
	Thread_t241561612 * ____t_0;
	// System.Threading.AsyncFlowControlType System.Threading.AsyncFlowControl::_type
	int32_t ____type_1;

public:
	inline static int32_t get_offset_of__t_0() { return static_cast<int32_t>(offsetof(AsyncFlowControl_t3236298431, ____t_0)); }
	inline Thread_t241561612 * get__t_0() const { return ____t_0; }
	inline Thread_t241561612 ** get_address_of__t_0() { return &____t_0; }
	inline void set__t_0(Thread_t241561612 * value)
	{
		____t_0 = value;
		Il2CppCodeGenWriteBarrier(&____t_0, value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(AsyncFlowControl_t3236298431, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t3236298431_marshaled_pinvoke
{
	Thread_t241561612 * ____t_0;
	int32_t ____type_1;
};
// Native definition for COM marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t3236298431_marshaled_com
{
	Thread_t241561612 * ____t_0;
	int32_t ____type_1;
};
