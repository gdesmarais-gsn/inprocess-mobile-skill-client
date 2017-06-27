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

// Unity.IO.Compression.CopyEncoder
struct CopyEncoder_t1573993243;
// Unity.IO.Compression.DeflateInput
struct DeflateInput_t3774384619;
// Unity.IO.Compression.OutputBuffer
struct OutputBuffer_t1763155281;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_DeflateI3774384619.h"
#include "Unity_IO_Compression_Unity_IO_Compression_OutputBu1763155281.h"

// System.Void Unity.IO.Compression.CopyEncoder::.ctor()
extern "C"  void CopyEncoder__ctor_m2475726302 (CopyEncoder_t1573993243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.CopyEncoder::GetBlock(Unity.IO.Compression.DeflateInput,Unity.IO.Compression.OutputBuffer,System.Boolean)
extern "C"  void CopyEncoder_GetBlock_m1454577206 (CopyEncoder_t1573993243 * __this, DeflateInput_t3774384619 * ___input0, OutputBuffer_t1763155281 * ___output1, bool ___isFinal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.CopyEncoder::WriteLenNLen(System.UInt16,Unity.IO.Compression.OutputBuffer)
extern "C"  void CopyEncoder_WriteLenNLen_m2506903407 (CopyEncoder_t1573993243 * __this, uint16_t ___len0, OutputBuffer_t1763155281 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
