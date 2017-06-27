#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.RequestManager
struct RequestManager_t1425333340;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Utils.Singleton`1<GSN.Skill.Phoenix.Model.RequestManager>
struct  Singleton_1_t166346069  : public Il2CppObject
{
public:

public:
};

struct Singleton_1_t166346069_StaticFields
{
public:
	// T GSN.Skill.Utils.Singleton`1::_instance
	RequestManager_t1425333340 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Singleton_1_t166346069_StaticFields, ____instance_0)); }
	inline RequestManager_t1425333340 * get__instance_0() const { return ____instance_0; }
	inline RequestManager_t1425333340 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(RequestManager_t1425333340 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
