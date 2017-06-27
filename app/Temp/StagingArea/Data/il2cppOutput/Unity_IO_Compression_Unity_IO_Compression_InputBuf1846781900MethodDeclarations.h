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

// Unity.IO.Compression.InputBuffer
struct InputBuffer_t1846781900;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Unity.IO.Compression.InputBuffer::.ctor()
extern "C"  void InputBuffer__ctor_m308263275 (InputBuffer_t1846781900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.InputBuffer::get_AvailableBits()
extern "C"  int32_t InputBuffer_get_AvailableBits_m1754843801 (InputBuffer_t1846781900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.InputBuffer::get_AvailableBytes()
extern "C"  int32_t InputBuffer_get_AvailableBytes_m1855284002 (InputBuffer_t1846781900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.InputBuffer::EnsureBitsAvailable(System.Int32)
extern "C"  bool InputBuffer_EnsureBitsAvailable_m267212901 (InputBuffer_t1846781900 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Unity.IO.Compression.InputBuffer::TryLoad16Bits()
extern "C"  uint32_t InputBuffer_TryLoad16Bits_m1624150976 (InputBuffer_t1846781900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Unity.IO.Compression.InputBuffer::GetBitMask(System.Int32)
extern "C"  uint32_t InputBuffer_GetBitMask_m2399937814 (InputBuffer_t1846781900 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.InputBuffer::GetBits(System.Int32)
extern "C"  int32_t InputBuffer_GetBits_m2697775596 (InputBuffer_t1846781900 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.InputBuffer::CopyTo(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t InputBuffer_CopyTo_m3521899006 (InputBuffer_t1846781900 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.InputBuffer::NeedsInput()
extern "C"  bool InputBuffer_NeedsInput_m550737358 (InputBuffer_t1846781900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.InputBuffer::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void InputBuffer_SetInput_m600408614 (InputBuffer_t1846781900 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.InputBuffer::SkipBits(System.Int32)
extern "C"  void InputBuffer_SkipBits_m3572829939 (InputBuffer_t1846781900 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.InputBuffer::SkipToByteBoundary()
extern "C"  void InputBuffer_SkipToByteBoundary_m3132719095 (InputBuffer_t1846781900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
