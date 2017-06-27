#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.Base64Encoder
struct  Base64Encoder_t2682770749  : public Il2CppObject
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.Base64Encoder::_charsLine
	CharU5BU5D_t1328083999* ____charsLine_2;
	// System.IO.TextWriter Newtonsoft.Json.Utilities.Base64Encoder::_writer
	TextWriter_t4027217640 * ____writer_3;
	// System.Byte[] Newtonsoft.Json.Utilities.Base64Encoder::_leftOverBytes
	ByteU5BU5D_t3397334013* ____leftOverBytes_4;
	// System.Int32 Newtonsoft.Json.Utilities.Base64Encoder::_leftOverBytesCount
	int32_t ____leftOverBytesCount_5;

public:
	inline static int32_t get_offset_of__charsLine_2() { return static_cast<int32_t>(offsetof(Base64Encoder_t2682770749, ____charsLine_2)); }
	inline CharU5BU5D_t1328083999* get__charsLine_2() const { return ____charsLine_2; }
	inline CharU5BU5D_t1328083999** get_address_of__charsLine_2() { return &____charsLine_2; }
	inline void set__charsLine_2(CharU5BU5D_t1328083999* value)
	{
		____charsLine_2 = value;
		Il2CppCodeGenWriteBarrier(&____charsLine_2, value);
	}

	inline static int32_t get_offset_of__writer_3() { return static_cast<int32_t>(offsetof(Base64Encoder_t2682770749, ____writer_3)); }
	inline TextWriter_t4027217640 * get__writer_3() const { return ____writer_3; }
	inline TextWriter_t4027217640 ** get_address_of__writer_3() { return &____writer_3; }
	inline void set__writer_3(TextWriter_t4027217640 * value)
	{
		____writer_3 = value;
		Il2CppCodeGenWriteBarrier(&____writer_3, value);
	}

	inline static int32_t get_offset_of__leftOverBytes_4() { return static_cast<int32_t>(offsetof(Base64Encoder_t2682770749, ____leftOverBytes_4)); }
	inline ByteU5BU5D_t3397334013* get__leftOverBytes_4() const { return ____leftOverBytes_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__leftOverBytes_4() { return &____leftOverBytes_4; }
	inline void set__leftOverBytes_4(ByteU5BU5D_t3397334013* value)
	{
		____leftOverBytes_4 = value;
		Il2CppCodeGenWriteBarrier(&____leftOverBytes_4, value);
	}

	inline static int32_t get_offset_of__leftOverBytesCount_5() { return static_cast<int32_t>(offsetof(Base64Encoder_t2682770749, ____leftOverBytesCount_5)); }
	inline int32_t get__leftOverBytesCount_5() const { return ____leftOverBytesCount_5; }
	inline int32_t* get_address_of__leftOverBytesCount_5() { return &____leftOverBytesCount_5; }
	inline void set__leftOverBytesCount_5(int32_t value)
	{
		____leftOverBytesCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
