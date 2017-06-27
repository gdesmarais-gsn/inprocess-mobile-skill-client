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
// Unity.IO.Compression.Inflater
struct Inflater_t2105576913;
// Unity.IO.Compression.IDeflater
struct IDeflater_t1816632622;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// Unity.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t2698310203;
// Unity.IO.Compression.IFileFormatWriter
struct IFileFormatWriter_t449992597;

#include "mscorlib_System_IO_Stream3255436806.h"
#include "Unity_IO_Compression_Unity_IO_Compression_Compress4084733625.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.IO.Compression.DeflateStream
struct  DeflateStream_t255841283  : public Stream_t3255436806
{
public:
	// System.IO.Stream Unity.IO.Compression.DeflateStream::_stream
	Stream_t3255436806 * ____stream_1;
	// Unity.IO.Compression.CompressionMode Unity.IO.Compression.DeflateStream::_mode
	int32_t ____mode_2;
	// System.Boolean Unity.IO.Compression.DeflateStream::_leaveOpen
	bool ____leaveOpen_3;
	// Unity.IO.Compression.Inflater Unity.IO.Compression.DeflateStream::inflater
	Inflater_t2105576913 * ___inflater_4;
	// Unity.IO.Compression.IDeflater Unity.IO.Compression.DeflateStream::deflater
	Il2CppObject * ___deflater_5;
	// System.Byte[] Unity.IO.Compression.DeflateStream::buffer
	ByteU5BU5D_t3397334013* ___buffer_6;
	// System.Int32 Unity.IO.Compression.DeflateStream::asyncOperations
	int32_t ___asyncOperations_7;
	// System.AsyncCallback Unity.IO.Compression.DeflateStream::m_CallBack
	AsyncCallback_t163412349 * ___m_CallBack_8;
	// Unity.IO.Compression.DeflateStream/AsyncWriteDelegate Unity.IO.Compression.DeflateStream::m_AsyncWriterDelegate
	AsyncWriteDelegate_t2698310203 * ___m_AsyncWriterDelegate_9;
	// Unity.IO.Compression.IFileFormatWriter Unity.IO.Compression.DeflateStream::formatWriter
	Il2CppObject * ___formatWriter_10;
	// System.Boolean Unity.IO.Compression.DeflateStream::wroteHeader
	bool ___wroteHeader_11;
	// System.Boolean Unity.IO.Compression.DeflateStream::wroteBytes
	bool ___wroteBytes_12;

public:
	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ____stream_1)); }
	inline Stream_t3255436806 * get__stream_1() const { return ____stream_1; }
	inline Stream_t3255436806 ** get_address_of__stream_1() { return &____stream_1; }
	inline void set__stream_1(Stream_t3255436806 * value)
	{
		____stream_1 = value;
		Il2CppCodeGenWriteBarrier(&____stream_1, value);
	}

	inline static int32_t get_offset_of__mode_2() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ____mode_2)); }
	inline int32_t get__mode_2() const { return ____mode_2; }
	inline int32_t* get_address_of__mode_2() { return &____mode_2; }
	inline void set__mode_2(int32_t value)
	{
		____mode_2 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_3() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ____leaveOpen_3)); }
	inline bool get__leaveOpen_3() const { return ____leaveOpen_3; }
	inline bool* get_address_of__leaveOpen_3() { return &____leaveOpen_3; }
	inline void set__leaveOpen_3(bool value)
	{
		____leaveOpen_3 = value;
	}

	inline static int32_t get_offset_of_inflater_4() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___inflater_4)); }
	inline Inflater_t2105576913 * get_inflater_4() const { return ___inflater_4; }
	inline Inflater_t2105576913 ** get_address_of_inflater_4() { return &___inflater_4; }
	inline void set_inflater_4(Inflater_t2105576913 * value)
	{
		___inflater_4 = value;
		Il2CppCodeGenWriteBarrier(&___inflater_4, value);
	}

	inline static int32_t get_offset_of_deflater_5() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___deflater_5)); }
	inline Il2CppObject * get_deflater_5() const { return ___deflater_5; }
	inline Il2CppObject ** get_address_of_deflater_5() { return &___deflater_5; }
	inline void set_deflater_5(Il2CppObject * value)
	{
		___deflater_5 = value;
		Il2CppCodeGenWriteBarrier(&___deflater_5, value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___buffer_6)); }
	inline ByteU5BU5D_t3397334013* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t3397334013* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_6, value);
	}

	inline static int32_t get_offset_of_asyncOperations_7() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___asyncOperations_7)); }
	inline int32_t get_asyncOperations_7() const { return ___asyncOperations_7; }
	inline int32_t* get_address_of_asyncOperations_7() { return &___asyncOperations_7; }
	inline void set_asyncOperations_7(int32_t value)
	{
		___asyncOperations_7 = value;
	}

	inline static int32_t get_offset_of_m_CallBack_8() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___m_CallBack_8)); }
	inline AsyncCallback_t163412349 * get_m_CallBack_8() const { return ___m_CallBack_8; }
	inline AsyncCallback_t163412349 ** get_address_of_m_CallBack_8() { return &___m_CallBack_8; }
	inline void set_m_CallBack_8(AsyncCallback_t163412349 * value)
	{
		___m_CallBack_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CallBack_8, value);
	}

	inline static int32_t get_offset_of_m_AsyncWriterDelegate_9() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___m_AsyncWriterDelegate_9)); }
	inline AsyncWriteDelegate_t2698310203 * get_m_AsyncWriterDelegate_9() const { return ___m_AsyncWriterDelegate_9; }
	inline AsyncWriteDelegate_t2698310203 ** get_address_of_m_AsyncWriterDelegate_9() { return &___m_AsyncWriterDelegate_9; }
	inline void set_m_AsyncWriterDelegate_9(AsyncWriteDelegate_t2698310203 * value)
	{
		___m_AsyncWriterDelegate_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsyncWriterDelegate_9, value);
	}

	inline static int32_t get_offset_of_formatWriter_10() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___formatWriter_10)); }
	inline Il2CppObject * get_formatWriter_10() const { return ___formatWriter_10; }
	inline Il2CppObject ** get_address_of_formatWriter_10() { return &___formatWriter_10; }
	inline void set_formatWriter_10(Il2CppObject * value)
	{
		___formatWriter_10 = value;
		Il2CppCodeGenWriteBarrier(&___formatWriter_10, value);
	}

	inline static int32_t get_offset_of_wroteHeader_11() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___wroteHeader_11)); }
	inline bool get_wroteHeader_11() const { return ___wroteHeader_11; }
	inline bool* get_address_of_wroteHeader_11() { return &___wroteHeader_11; }
	inline void set_wroteHeader_11(bool value)
	{
		___wroteHeader_11 = value;
	}

	inline static int32_t get_offset_of_wroteBytes_12() { return static_cast<int32_t>(offsetof(DeflateStream_t255841283, ___wroteBytes_12)); }
	inline bool get_wroteBytes_12() const { return ___wroteBytes_12; }
	inline bool* get_address_of_wroteBytes_12() { return &___wroteBytes_12; }
	inline void set_wroteBytes_12(bool value)
	{
		___wroteBytes_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
