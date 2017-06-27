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

// MsgPack.StreamPacker
struct StreamPacker_t2855948776;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "MsgPack_MsgPack_PackerCompatibilityOptions4206945086.h"

// System.Void MsgPack.StreamPacker::.ctor(System.IO.Stream,MsgPack.PackerCompatibilityOptions,System.Boolean)
extern "C"  void StreamPacker__ctor_m2003666445 (StreamPacker_t2855948776 * __this, Stream_t3255436806 * ___output0, int32_t ___compatibilityOptions1, bool ___ownsStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.StreamPacker::Dispose(System.Boolean)
extern "C"  void StreamPacker_Dispose_m2135248571 (StreamPacker_t2855948776 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.StreamPacker::WriteByte(System.Byte)
extern "C"  void StreamPacker_WriteByte_m2680072769 (StreamPacker_t2855948776 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.StreamPacker::WriteBytes(System.Byte[],System.Boolean)
extern "C"  void StreamPacker_WriteBytes_m182606399 (StreamPacker_t2855948776 * __this, ByteU5BU5D_t3397334013* ___asArray0, bool ___isImmutable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
