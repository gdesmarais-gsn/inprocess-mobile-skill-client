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

// Unity.IO.Compression.OutputWindow
struct  OutputWindow_t2940229023  : public Il2CppObject
{
public:
	// System.Byte[] Unity.IO.Compression.OutputWindow::window
	ByteU5BU5D_t3397334013* ___window_0;
	// System.Int32 Unity.IO.Compression.OutputWindow::end
	int32_t ___end_1;
	// System.Int32 Unity.IO.Compression.OutputWindow::bytesUsed
	int32_t ___bytesUsed_2;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(OutputWindow_t2940229023, ___window_0)); }
	inline ByteU5BU5D_t3397334013* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_t3397334013* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier(&___window_0, value);
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(OutputWindow_t2940229023, ___end_1)); }
	inline int32_t get_end_1() const { return ___end_1; }
	inline int32_t* get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(int32_t value)
	{
		___end_1 = value;
	}

	inline static int32_t get_offset_of_bytesUsed_2() { return static_cast<int32_t>(offsetof(OutputWindow_t2940229023, ___bytesUsed_2)); }
	inline int32_t get_bytesUsed_2() const { return ___bytesUsed_2; }
	inline int32_t* get_address_of_bytesUsed_2() { return &___bytesUsed_2; }
	inline void set_bytesUsed_2(int32_t value)
	{
		___bytesUsed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
