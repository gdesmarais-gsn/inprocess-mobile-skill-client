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

// Unity.IO.Compression.GZipFormatter
struct GZipFormatter_t1855501794;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Unity.IO.Compression.GZipFormatter::.ctor()
extern "C"  void GZipFormatter__ctor_m1982985121 (GZipFormatter_t1855501794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipFormatter::.ctor(System.Int32)
extern "C"  void GZipFormatter__ctor_m708156220 (GZipFormatter_t1855501794 * __this, int32_t ___compressionLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Unity.IO.Compression.GZipFormatter::GetHeader()
extern "C"  ByteU5BU5D_t3397334013* GZipFormatter_GetHeader_m1625402280 (GZipFormatter_t1855501794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipFormatter::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipFormatter_UpdateWithBytesRead_m2497463622 (GZipFormatter_t1855501794 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___bytesToCopy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Unity.IO.Compression.GZipFormatter::GetFooter()
extern "C"  ByteU5BU5D_t3397334013* GZipFormatter_GetFooter_m3843495242 (GZipFormatter_t1855501794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipFormatter::WriteUInt32(System.Byte[],System.UInt32,System.Int32)
extern "C"  void GZipFormatter_WriteUInt32_m1095837717 (GZipFormatter_t1855501794 * __this, ByteU5BU5D_t3397334013* ___b0, uint32_t ___value1, int32_t ___startIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
