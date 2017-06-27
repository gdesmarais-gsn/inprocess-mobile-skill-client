#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker_UnpackerMode1745652338.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Unpacker
struct  Unpacker_t998931393  : public Il2CppObject
{
public:
	// MsgPack.Unpacker/UnpackerMode MsgPack.Unpacker::_mode
	int32_t ____mode_0;
	// System.Boolean MsgPack.Unpacker::_isSubtreeReading
	bool ____isSubtreeReading_1;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(Unpacker_t998931393, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__isSubtreeReading_1() { return static_cast<int32_t>(offsetof(Unpacker_t998931393, ____isSubtreeReading_1)); }
	inline bool get__isSubtreeReading_1() const { return ____isSubtreeReading_1; }
	inline bool* get_address_of__isSubtreeReading_1() { return &____isSubtreeReading_1; }
	inline void set__isSubtreeReading_1(bool value)
	{
		____isSubtreeReading_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
