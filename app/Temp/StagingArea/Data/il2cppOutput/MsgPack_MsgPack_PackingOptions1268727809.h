#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t663144255;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.PackingOptions
struct  PackingOptions_t1268727809  : public Il2CppObject
{
public:
	// System.Text.Encoding MsgPack.PackingOptions::_stringEncoding
	Encoding_t663144255 * ____stringEncoding_0;

public:
	inline static int32_t get_offset_of__stringEncoding_0() { return static_cast<int32_t>(offsetof(PackingOptions_t1268727809, ____stringEncoding_0)); }
	inline Encoding_t663144255 * get__stringEncoding_0() const { return ____stringEncoding_0; }
	inline Encoding_t663144255 ** get_address_of__stringEncoding_0() { return &____stringEncoding_0; }
	inline void set__stringEncoding_0(Encoding_t663144255 * value)
	{
		____stringEncoding_0 = value;
		Il2CppCodeGenWriteBarrier(&____stringEncoding_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
