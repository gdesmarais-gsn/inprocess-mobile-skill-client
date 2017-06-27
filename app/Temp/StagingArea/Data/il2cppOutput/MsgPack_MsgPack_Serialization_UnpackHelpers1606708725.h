#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>
struct MessagePackSerializer_1_t1533528705;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.UnpackHelpers
struct  UnpackHelpers_t1606708725  : public Il2CppObject
{
public:

public:
};

struct UnpackHelpers_t1606708725_StaticFields
{
public:
	// MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject> MsgPack.Serialization.UnpackHelpers::_messagePackObjectSerializer
	MessagePackSerializer_1_t1533528705 * ____messagePackObjectSerializer_0;

public:
	inline static int32_t get_offset_of__messagePackObjectSerializer_0() { return static_cast<int32_t>(offsetof(UnpackHelpers_t1606708725_StaticFields, ____messagePackObjectSerializer_0)); }
	inline MessagePackSerializer_1_t1533528705 * get__messagePackObjectSerializer_0() const { return ____messagePackObjectSerializer_0; }
	inline MessagePackSerializer_1_t1533528705 ** get_address_of__messagePackObjectSerializer_0() { return &____messagePackObjectSerializer_0; }
	inline void set__messagePackObjectSerializer_0(MessagePackSerializer_1_t1533528705 * value)
	{
		____messagePackObjectSerializer_0 = value;
		Il2CppCodeGenWriteBarrier(&____messagePackObjectSerializer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
