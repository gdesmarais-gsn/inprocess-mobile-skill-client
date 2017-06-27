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

// GSN.Skill.Games.Common.Utils.GZipper
struct GZipper_t3097786333;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "Unity_IO_Compression_Unity_IO_Compression_Compress4084733625.h"

// System.Void GSN.Skill.Games.Common.Utils.GZipper::.ctor()
extern "C"  void GZipper__ctor_m973604742 (GZipper_t3097786333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GZipper::SetInput(System.IO.MemoryStream)
extern "C"  void GZipper_SetInput_m1450137906 (GZipper_t3097786333 * __this, MemoryStream_t743994179 * ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GZipper::SetInput(System.Byte[])
extern "C"  void GZipper_SetInput_m3590141165 (GZipper_t3097786333 * __this, ByteU5BU5D_t3397334013* ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GZipper::GetOutput(System.IO.MemoryStream,Unity.IO.Compression.CompressionMode)
extern "C"  void GZipper_GetOutput_m243039757 (GZipper_t3097786333 * __this, MemoryStream_t743994179 * ___outStream0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GZipper::GetOutput(Unity.IO.Compression.CompressionMode)
extern "C"  ByteU5BU5D_t3397334013* GZipper_GetOutput_m2561818039 (GZipper_t3097786333 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
