#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.NotaryRequest
struct  NotaryRequest_t3477508764  : public Il2CppObject
{
public:
	// System.Byte[] GSN.Skill.Games.Common.Utils.NotaryRequest::hash
	ByteU5BU5D_t3397334013* ___hash_0;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(NotaryRequest_t3477508764, ___hash_0)); }
	inline ByteU5BU5D_t3397334013* get_hash_0() const { return ___hash_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(ByteU5BU5D_t3397334013* value)
	{
		___hash_0 = value;
		Il2CppCodeGenWriteBarrier(&___hash_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
