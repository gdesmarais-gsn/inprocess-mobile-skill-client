#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Unpacker/<GetEnumerator>d__0
struct  U3CGetEnumeratorU3Ed__0_t2624324454  : public Il2CppObject
{
public:
	// MsgPack.MessagePackObject MsgPack.Unpacker/<GetEnumerator>d__0::<>2__current
	MessagePackObject_t2038085051  ___U3CU3E2__current_0;
	// System.Int32 MsgPack.Unpacker/<GetEnumerator>d__0::<>1__state
	int32_t ___U3CU3E1__state_1;
	// MsgPack.Unpacker MsgPack.Unpacker/<GetEnumerator>d__0::<>4__this
	Unpacker_t998931393 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E2__current_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t2624324454, ___U3CU3E2__current_0)); }
	inline MessagePackObject_t2038085051  get_U3CU3E2__current_0() const { return ___U3CU3E2__current_0; }
	inline MessagePackObject_t2038085051 * get_address_of_U3CU3E2__current_0() { return &___U3CU3E2__current_0; }
	inline void set_U3CU3E2__current_0(MessagePackObject_t2038085051  value)
	{
		___U3CU3E2__current_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E1__state_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t2624324454, ___U3CU3E1__state_1)); }
	inline int32_t get_U3CU3E1__state_1() const { return ___U3CU3E1__state_1; }
	inline int32_t* get_address_of_U3CU3E1__state_1() { return &___U3CU3E1__state_1; }
	inline void set_U3CU3E1__state_1(int32_t value)
	{
		___U3CU3E1__state_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t2624324454, ___U3CU3E4__this_2)); }
	inline Unpacker_t998931393 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Unpacker_t998931393 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Unpacker_t998931393 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E4__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
