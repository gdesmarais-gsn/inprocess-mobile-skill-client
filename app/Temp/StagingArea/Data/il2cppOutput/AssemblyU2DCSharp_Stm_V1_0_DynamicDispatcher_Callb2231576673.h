#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Stm.V1_0.Dispatcher/Callback
struct Callback_t2944324525;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_0.DynamicDispatcher/CallbackAndCallee
struct  CallbackAndCallee_t2231576673 
{
public:
	// Stm.V1_0.Dispatcher/Callback Stm.V1_0.DynamicDispatcher/CallbackAndCallee::callback
	Callback_t2944324525 * ___callback_0;
	// UnityEngine.MonoBehaviour Stm.V1_0.DynamicDispatcher/CallbackAndCallee::callee
	MonoBehaviour_t1158329972 * ___callee_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(CallbackAndCallee_t2231576673, ___callback_0)); }
	inline Callback_t2944324525 * get_callback_0() const { return ___callback_0; }
	inline Callback_t2944324525 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Callback_t2944324525 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_callee_1() { return static_cast<int32_t>(offsetof(CallbackAndCallee_t2231576673, ___callee_1)); }
	inline MonoBehaviour_t1158329972 * get_callee_1() const { return ___callee_1; }
	inline MonoBehaviour_t1158329972 ** get_address_of_callee_1() { return &___callee_1; }
	inline void set_callee_1(MonoBehaviour_t1158329972 * value)
	{
		___callee_1 = value;
		Il2CppCodeGenWriteBarrier(&___callee_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Stm.V1_0.DynamicDispatcher/CallbackAndCallee
struct CallbackAndCallee_t2231576673_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback_0;
	MonoBehaviour_t1158329972 * ___callee_1;
};
// Native definition for COM marshalling of Stm.V1_0.DynamicDispatcher/CallbackAndCallee
struct CallbackAndCallee_t2231576673_marshaled_com
{
	Il2CppMethodPointer ___callback_0;
	MonoBehaviour_t1158329972 * ___callee_1;
};
