#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.WebLogging.IWebLogger
struct IWebLogger_t2337370261;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.WebLogging.WebLogger
struct  WebLogger_t482813702  : public Il2CppObject
{
public:

public:
};

struct WebLogger_t482813702_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.WebLogging.IWebLogger GSN.Skill.Games.Common.Utils.WebLogging.WebLogger::_instance
	Il2CppObject * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(WebLogger_t482813702_StaticFields, ____instance_0)); }
	inline Il2CppObject * get__instance_0() const { return ____instance_0; }
	inline Il2CppObject ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(Il2CppObject * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
