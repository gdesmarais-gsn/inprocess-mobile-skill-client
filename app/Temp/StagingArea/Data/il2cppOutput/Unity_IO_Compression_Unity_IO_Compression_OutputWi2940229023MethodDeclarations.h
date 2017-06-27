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

// Unity.IO.Compression.OutputWindow
struct OutputWindow_t2940229023;
// Unity.IO.Compression.InputBuffer
struct InputBuffer_t1846781900;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_InputBuf1846781900.h"

// System.Void Unity.IO.Compression.OutputWindow::.ctor()
extern "C"  void OutputWindow__ctor_m449713240 (OutputWindow_t2940229023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputWindow::Write(System.Byte)
extern "C"  void OutputWindow_Write_m3226674178 (OutputWindow_t2940229023 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.OutputWindow::WriteLengthDistance(System.Int32,System.Int32)
extern "C"  void OutputWindow_WriteLengthDistance_m1579406872 (OutputWindow_t2940229023 * __this, int32_t ___length0, int32_t ___distance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.OutputWindow::CopyFrom(Unity.IO.Compression.InputBuffer,System.Int32)
extern "C"  int32_t OutputWindow_CopyFrom_m4141258473 (OutputWindow_t2940229023 * __this, InputBuffer_t1846781900 * ___input0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.OutputWindow::get_FreeBytes()
extern "C"  int32_t OutputWindow_get_FreeBytes_m1288593130 (OutputWindow_t2940229023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.OutputWindow::get_AvailableBytes()
extern "C"  int32_t OutputWindow_get_AvailableBytes_m3050063061 (OutputWindow_t2940229023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.OutputWindow::CopyTo(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t OutputWindow_CopyTo_m312932689 (OutputWindow_t2940229023 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
