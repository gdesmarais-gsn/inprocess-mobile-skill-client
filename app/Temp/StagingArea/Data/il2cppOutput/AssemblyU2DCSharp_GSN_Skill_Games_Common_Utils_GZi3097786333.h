#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GZipper
struct  GZipper_t3097786333  : public Il2CppObject
{
public:
	// System.IO.MemoryStream GSN.Skill.Games.Common.Utils.GZipper::inStream
	MemoryStream_t743994179 * ___inStream_0;
	// System.Byte[] GSN.Skill.Games.Common.Utils.GZipper::inBytes
	ByteU5BU5D_t3397334013* ___inBytes_1;
	// System.Boolean GSN.Skill.Games.Common.Utils.GZipper::inputIsBytes
	bool ___inputIsBytes_2;

public:
	inline static int32_t get_offset_of_inStream_0() { return static_cast<int32_t>(offsetof(GZipper_t3097786333, ___inStream_0)); }
	inline MemoryStream_t743994179 * get_inStream_0() const { return ___inStream_0; }
	inline MemoryStream_t743994179 ** get_address_of_inStream_0() { return &___inStream_0; }
	inline void set_inStream_0(MemoryStream_t743994179 * value)
	{
		___inStream_0 = value;
		Il2CppCodeGenWriteBarrier(&___inStream_0, value);
	}

	inline static int32_t get_offset_of_inBytes_1() { return static_cast<int32_t>(offsetof(GZipper_t3097786333, ___inBytes_1)); }
	inline ByteU5BU5D_t3397334013* get_inBytes_1() const { return ___inBytes_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_inBytes_1() { return &___inBytes_1; }
	inline void set_inBytes_1(ByteU5BU5D_t3397334013* value)
	{
		___inBytes_1 = value;
		Il2CppCodeGenWriteBarrier(&___inBytes_1, value);
	}

	inline static int32_t get_offset_of_inputIsBytes_2() { return static_cast<int32_t>(offsetof(GZipper_t3097786333, ___inputIsBytes_2)); }
	inline bool get_inputIsBytes_2() const { return ___inputIsBytes_2; }
	inline bool* get_address_of_inputIsBytes_2() { return &___inputIsBytes_2; }
	inline void set_inputIsBytes_2(bool value)
	{
		___inputIsBytes_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
