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
// System.UInt16[]
struct UInt16U5BU5D_t2527266722;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.IO.Compression.FastEncoderWindow
struct  FastEncoderWindow_t2805640970  : public Il2CppObject
{
public:
	// System.Byte[] Unity.IO.Compression.FastEncoderWindow::window
	ByteU5BU5D_t3397334013* ___window_0;
	// System.Int32 Unity.IO.Compression.FastEncoderWindow::bufPos
	int32_t ___bufPos_1;
	// System.Int32 Unity.IO.Compression.FastEncoderWindow::bufEnd
	int32_t ___bufEnd_2;
	// System.UInt16[] Unity.IO.Compression.FastEncoderWindow::prev
	UInt16U5BU5D_t2527266722* ___prev_3;
	// System.UInt16[] Unity.IO.Compression.FastEncoderWindow::lookup
	UInt16U5BU5D_t2527266722* ___lookup_4;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t2805640970, ___window_0)); }
	inline ByteU5BU5D_t3397334013* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_t3397334013* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier(&___window_0, value);
	}

	inline static int32_t get_offset_of_bufPos_1() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t2805640970, ___bufPos_1)); }
	inline int32_t get_bufPos_1() const { return ___bufPos_1; }
	inline int32_t* get_address_of_bufPos_1() { return &___bufPos_1; }
	inline void set_bufPos_1(int32_t value)
	{
		___bufPos_1 = value;
	}

	inline static int32_t get_offset_of_bufEnd_2() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t2805640970, ___bufEnd_2)); }
	inline int32_t get_bufEnd_2() const { return ___bufEnd_2; }
	inline int32_t* get_address_of_bufEnd_2() { return &___bufEnd_2; }
	inline void set_bufEnd_2(int32_t value)
	{
		___bufEnd_2 = value;
	}

	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t2805640970, ___prev_3)); }
	inline UInt16U5BU5D_t2527266722* get_prev_3() const { return ___prev_3; }
	inline UInt16U5BU5D_t2527266722** get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(UInt16U5BU5D_t2527266722* value)
	{
		___prev_3 = value;
		Il2CppCodeGenWriteBarrier(&___prev_3, value);
	}

	inline static int32_t get_offset_of_lookup_4() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t2805640970, ___lookup_4)); }
	inline UInt16U5BU5D_t2527266722* get_lookup_4() const { return ___lookup_4; }
	inline UInt16U5BU5D_t2527266722** get_address_of_lookup_4() { return &___lookup_4; }
	inline void set_lookup_4(UInt16U5BU5D_t2527266722* value)
	{
		___lookup_4 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
