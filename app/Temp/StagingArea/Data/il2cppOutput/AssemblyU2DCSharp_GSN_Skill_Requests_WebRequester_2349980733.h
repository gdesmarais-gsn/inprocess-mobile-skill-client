#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t3932231376;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/RequestFilter
struct  RequestFilter_t2349980733  : public Il2CppObject
{
public:
	// System.Collections.Generic.HashSet`1<System.Type> GSN.Skill.Requests.WebRequester/RequestFilter::typeBlacklist
	HashSet_1_t3932231376 * ___typeBlacklist_0;

public:
	inline static int32_t get_offset_of_typeBlacklist_0() { return static_cast<int32_t>(offsetof(RequestFilter_t2349980733, ___typeBlacklist_0)); }
	inline HashSet_1_t3932231376 * get_typeBlacklist_0() const { return ___typeBlacklist_0; }
	inline HashSet_1_t3932231376 ** get_address_of_typeBlacklist_0() { return &___typeBlacklist_0; }
	inline void set_typeBlacklist_0(HashSet_1_t3932231376 * value)
	{
		___typeBlacklist_0 = value;
		Il2CppCodeGenWriteBarrier(&___typeBlacklist_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
