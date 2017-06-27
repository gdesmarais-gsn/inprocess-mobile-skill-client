#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Unity.IO.Compression.OutputBuffer
struct OutputBuffer_t1763155281;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_OutputBu3750449542.h"

// System.Void Unity.IO.Compression.OutputBuffer::.ctor()
extern "C"  void OutputBuffer__ctor_m514414790 (OutputBuffer_t1763155281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::UpdateBuffer(System.Byte[])
extern "C"  void OutputBuffer_UpdateBuffer_m619458194 (OutputBuffer_t1763155281 * __this, ByteU5BU5D_t3397334013* ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.OutputBuffer::get_BytesWritten()
extern "C"  int32_t OutputBuffer_get_BytesWritten_m3466284951 (OutputBuffer_t1763155281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.OutputBuffer::get_FreeBytes()
extern "C"  int32_t OutputBuffer_get_FreeBytes_m2446269860 (OutputBuffer_t1763155281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::WriteUInt16(System.UInt16)
extern "C"  void OutputBuffer_WriteUInt16_m1286936690 (OutputBuffer_t1763155281 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::WriteBits(System.Int32,System.UInt32)
extern "C"  void OutputBuffer_WriteBits_m1340770976 (OutputBuffer_t1763155281 * __this, int32_t ___n0, uint32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::FlushBits()
extern "C"  void OutputBuffer_FlushBits_m3883914472 (OutputBuffer_t1763155281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::WriteBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void OutputBuffer_WriteBytes_m1533048325 (OutputBuffer_t1763155281 * __this, ByteU5BU5D_t3397334013* ___byteArray0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::WriteBytesUnaligned(System.Byte[],System.Int32,System.Int32)
extern "C"  void OutputBuffer_WriteBytesUnaligned_m1145102942 (OutputBuffer_t1763155281 * __this, ByteU5BU5D_t3397334013* ___byteArray0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::WriteByteUnaligned(System.Byte)
extern "C"  void OutputBuffer_WriteByteUnaligned_m603895387 (OutputBuffer_t1763155281 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.OutputBuffer::get_BitsInBuffer()
extern "C"  int32_t OutputBuffer_get_BitsInBuffer_m1853034444 (OutputBuffer_t1763155281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.OutputBuffer/BufferState Unity.IO.Compression.OutputBuffer::DumpState()
extern "C"  BufferState_t3750449542  OutputBuffer_DumpState_m3141956922 (OutputBuffer_t1763155281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputBuffer::RestoreState(Unity.IO.Compression.OutputBuffer/BufferState)
extern "C"  void OutputBuffer_RestoreState_m466299867 (OutputBuffer_t1763155281 * __this, BufferState_t3750449542  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
