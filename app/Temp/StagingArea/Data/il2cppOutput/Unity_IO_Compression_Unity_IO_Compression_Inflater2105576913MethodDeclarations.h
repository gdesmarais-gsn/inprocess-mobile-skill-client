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

// Unity.IO.Compression.Inflater
struct Inflater_t2105576913;
// Unity.IO.Compression.IFileFormatReader
struct IFileFormatReader_t1299669065;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Unity.IO.Compression.Inflater::.ctor()
extern "C"  void Inflater__ctor_m2843664390 (Inflater_t2105576913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.Inflater::SetFileFormatReader(Unity.IO.Compression.IFileFormatReader)
extern "C"  void Inflater_SetFileFormatReader_m4288313110 (Inflater_t2105576913 * __this, Il2CppObject * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.Inflater::Reset()
extern "C"  void Inflater_Reset_m2044726727 (Inflater_t2105576913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void Inflater_SetInput_m866908309 (Inflater_t2105576913 * __this, ByteU5BU5D_t3397334013* ___inputBytes0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.Inflater::Finished()
extern "C"  bool Inflater_Finished_m2750232570 (Inflater_t2105576913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.Inflater::get_AvailableOutput()
extern "C"  int32_t Inflater_get_AvailableOutput_m335400699 (Inflater_t2105576913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.Inflater::NeedsInput()
extern "C"  bool Inflater_NeedsInput_m2697342689 (Inflater_t2105576913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Inflater_Inflate_m615977246 (Inflater_t2105576913 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.Inflater::Decode()
extern "C"  bool Inflater_Decode_m4268909054 (Inflater_t2105576913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.Inflater::DecodeUncompressedBlock(System.Boolean&)
extern "C"  bool Inflater_DecodeUncompressedBlock_m135546634 (Inflater_t2105576913 * __this, bool* ___end_of_block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.Inflater::DecodeBlock(System.Boolean&)
extern "C"  bool Inflater_DecodeBlock_m2645363236 (Inflater_t2105576913 * __this, bool* ___end_of_block_code_seen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.Inflater::DecodeDynamicBlockHeader()
extern "C"  bool Inflater_DecodeDynamicBlockHeader_m2091659657 (Inflater_t2105576913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.Inflater::.cctor()
extern "C"  void Inflater__cctor_m2696513769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
