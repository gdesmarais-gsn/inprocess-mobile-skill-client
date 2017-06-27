#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.GameManager/DisconnectHandler
struct  DisconnectHandler_t3071104101  : public Il2CppObject
{
public:
	// System.DateTime GSN.Skill.Phoenix.Model.GameManager/DisconnectHandler::_disconnectTime
	DateTime_t693205669  ____disconnectTime_0;

public:
	inline static int32_t get_offset_of__disconnectTime_0() { return static_cast<int32_t>(offsetof(DisconnectHandler_t3071104101, ____disconnectTime_0)); }
	inline DateTime_t693205669  get__disconnectTime_0() const { return ____disconnectTime_0; }
	inline DateTime_t693205669 * get_address_of__disconnectTime_0() { return &____disconnectTime_0; }
	inline void set__disconnectTime_0(DateTime_t693205669  value)
	{
		____disconnectTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
