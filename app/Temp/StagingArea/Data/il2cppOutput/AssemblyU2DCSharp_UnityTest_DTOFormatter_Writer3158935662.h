#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.DTOFormatter/Writer
struct  Writer_t3158935662  : public Il2CppObject
{
public:
	// System.IO.Stream UnityTest.DTOFormatter/Writer::_stream
	Stream_t3255436806 * ____stream_0;

public:
	inline static int32_t get_offset_of__stream_0() { return static_cast<int32_t>(offsetof(Writer_t3158935662, ____stream_0)); }
	inline Stream_t3255436806 * get__stream_0() const { return ____stream_0; }
	inline Stream_t3255436806 ** get_address_of__stream_0() { return &____stream_0; }
	inline void set__stream_0(Stream_t3255436806 * value)
	{
		____stream_0 = value;
		Il2CppCodeGenWriteBarrier(&____stream_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
