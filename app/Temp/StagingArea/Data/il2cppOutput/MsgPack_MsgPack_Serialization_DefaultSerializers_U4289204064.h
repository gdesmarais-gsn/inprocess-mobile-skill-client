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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer/<>c__DisplayClass4
struct  U3CU3Ec__DisplayClass4_t4289204064  : public Il2CppObject
{
public:
	// MsgPack.Unpacker MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer/<>c__DisplayClass4::arrayUnpacker
	Unpacker_t998931393 * ___arrayUnpacker_0;

public:
	inline static int32_t get_offset_of_arrayUnpacker_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_t4289204064, ___arrayUnpacker_0)); }
	inline Unpacker_t998931393 * get_arrayUnpacker_0() const { return ___arrayUnpacker_0; }
	inline Unpacker_t998931393 ** get_address_of_arrayUnpacker_0() { return &___arrayUnpacker_0; }
	inline void set_arrayUnpacker_0(Unpacker_t998931393 * value)
	{
		___arrayUnpacker_0 = value;
		Il2CppCodeGenWriteBarrier(&___arrayUnpacker_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
