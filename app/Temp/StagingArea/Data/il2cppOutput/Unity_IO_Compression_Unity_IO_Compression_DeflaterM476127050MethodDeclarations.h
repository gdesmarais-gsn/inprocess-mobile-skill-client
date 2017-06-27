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

// Unity.IO.Compression.DeflaterManaged
struct DeflaterManaged_t476127050;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Unity.IO.Compression.DeflaterManaged::.ctor()
extern "C"  void DeflaterManaged__ctor_m2803454689 (DeflaterManaged_t476127050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflaterManaged::NeedsInput()
extern "C"  bool DeflaterManaged_NeedsInput_m1163991388 (DeflaterManaged_t476127050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflaterManaged::Unity.IO.Compression.IDeflater.NeedsInput()
extern "C"  bool DeflaterManaged_Unity_IO_Compression_IDeflater_NeedsInput_m2613652901 (DeflaterManaged_t476127050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflaterManaged::Unity.IO.Compression.IDeflater.SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflaterManaged_Unity_IO_Compression_IDeflater_SetInput_m3060535729 (DeflaterManaged_t476127050 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.DeflaterManaged::Unity.IO.Compression.IDeflater.GetDeflateOutput(System.Byte[])
extern "C"  int32_t DeflaterManaged_Unity_IO_Compression_IDeflater_GetDeflateOutput_m917157545 (DeflaterManaged_t476127050 * __this, ByteU5BU5D_t3397334013* ___outputBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflaterManaged::Unity.IO.Compression.IDeflater.Finish(System.Byte[],System.Int32&)
extern "C"  bool DeflaterManaged_Unity_IO_Compression_IDeflater_Finish_m1824928525 (DeflaterManaged_t476127050 * __this, ByteU5BU5D_t3397334013* ___outputBuffer0, int32_t* ___bytesRead1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflaterManaged::System.IDisposable.Dispose()
extern "C"  void DeflaterManaged_System_IDisposable_Dispose_m2795933546 (DeflaterManaged_t476127050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflaterManaged::UseCompressed(System.Double)
extern "C"  bool DeflaterManaged_UseCompressed_m1283771215 (DeflaterManaged_t476127050 * __this, double ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflaterManaged::FlushInputWindows()
extern "C"  void DeflaterManaged_FlushInputWindows_m20259444 (DeflaterManaged_t476127050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflaterManaged::WriteFinal()
extern "C"  void DeflaterManaged_WriteFinal_m857444098 (DeflaterManaged_t476127050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
