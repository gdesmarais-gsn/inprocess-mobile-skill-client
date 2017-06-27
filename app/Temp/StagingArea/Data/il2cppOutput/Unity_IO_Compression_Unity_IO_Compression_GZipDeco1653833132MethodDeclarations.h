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

// Unity.IO.Compression.GZipDecoder
struct GZipDecoder_t1653833132;
// Unity.IO.Compression.InputBuffer
struct InputBuffer_t1846781900;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_InputBuf1846781900.h"

// System.Void Unity.IO.Compression.GZipDecoder::.ctor()
extern "C"  void GZipDecoder__ctor_m1392204963 (GZipDecoder_t1653833132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipDecoder::Reset()
extern "C"  void GZipDecoder_Reset_m429873072 (GZipDecoder_t1653833132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.GZipDecoder::ReadHeader(Unity.IO.Compression.InputBuffer)
extern "C"  bool GZipDecoder_ReadHeader_m348560889 (GZipDecoder_t1653833132 * __this, InputBuffer_t1846781900 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.GZipDecoder::ReadFooter(Unity.IO.Compression.InputBuffer)
extern "C"  bool GZipDecoder_ReadFooter_m3210161751 (GZipDecoder_t1653833132 * __this, InputBuffer_t1846781900 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipDecoder::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipDecoder_UpdateWithBytesRead_m324478148 (GZipDecoder_t1653833132 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___copied2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipDecoder::Validate()
extern "C"  void GZipDecoder_Validate_m1381904189 (GZipDecoder_t1653833132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
