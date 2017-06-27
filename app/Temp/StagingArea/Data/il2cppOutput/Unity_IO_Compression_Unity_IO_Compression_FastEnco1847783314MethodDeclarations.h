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

// Unity.IO.Compression.FastEncoder
struct FastEncoder_t1847783314;
// Unity.IO.Compression.DeflateInput
struct DeflateInput_t3774384619;
// Unity.IO.Compression.OutputBuffer
struct OutputBuffer_t1763155281;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_DeflateI3774384619.h"
#include "Unity_IO_Compression_Unity_IO_Compression_OutputBu1763155281.h"

// System.Void Unity.IO.Compression.FastEncoder::.ctor()
extern "C"  void FastEncoder__ctor_m4085399585 (FastEncoder_t1847783314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.FastEncoder::get_BytesInHistory()
extern "C"  int32_t FastEncoder_get_BytesInHistory_m1958604792 (FastEncoder_t1847783314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.DeflateInput Unity.IO.Compression.FastEncoder::get_UnprocessedInput()
extern "C"  DeflateInput_t3774384619 * FastEncoder_get_UnprocessedInput_m764508730 (FastEncoder_t1847783314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::FlushInput()
extern "C"  void FastEncoder_FlushInput_m2140909959 (FastEncoder_t1847783314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Unity.IO.Compression.FastEncoder::get_LastCompressionRatio()
extern "C"  double FastEncoder_get_LastCompressionRatio_m1365280796 (FastEncoder_t1847783314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::GetBlock(Unity.IO.Compression.DeflateInput,Unity.IO.Compression.OutputBuffer,System.Int32)
extern "C"  void FastEncoder_GetBlock_m1719667585 (FastEncoder_t1847783314 * __this, DeflateInput_t3774384619 * ___input0, OutputBuffer_t1763155281 * ___output1, int32_t ___maxBytesToCopy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::GetCompressedData(Unity.IO.Compression.DeflateInput,Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetCompressedData_m3219419348 (FastEncoder_t1847783314 * __this, DeflateInput_t3774384619 * ___input0, OutputBuffer_t1763155281 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::GetBlockHeader(Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetBlockHeader_m1020413887 (FastEncoder_t1847783314 * __this, OutputBuffer_t1763155281 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::GetBlockFooter(Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetBlockFooter_m396013913 (FastEncoder_t1847783314 * __this, OutputBuffer_t1763155281 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::GetCompressedOutput(Unity.IO.Compression.DeflateInput,Unity.IO.Compression.OutputBuffer,System.Int32)
extern "C"  void FastEncoder_GetCompressedOutput_m811103366 (FastEncoder_t1847783314 * __this, DeflateInput_t3774384619 * ___input0, OutputBuffer_t1763155281 * ___output1, int32_t ___maxBytesToCopy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::GetCompressedOutput(Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetCompressedOutput_m1098824581 (FastEncoder_t1847783314 * __this, OutputBuffer_t1763155281 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.FastEncoder::InputAvailable(Unity.IO.Compression.DeflateInput)
extern "C"  bool FastEncoder_InputAvailable_m1488677984 (FastEncoder_t1847783314 * __this, DeflateInput_t3774384619 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.FastEncoder::SafeToWriteTo(Unity.IO.Compression.OutputBuffer)
extern "C"  bool FastEncoder_SafeToWriteTo_m2650464335 (FastEncoder_t1847783314 * __this, OutputBuffer_t1763155281 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::WriteEndOfBlock(Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteEndOfBlock_m4013823385 (FastEncoder_t1847783314 * __this, OutputBuffer_t1763155281 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::WriteMatch(System.Int32,System.Int32,Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteMatch_m2423076733 (Il2CppObject * __this /* static, unused */, int32_t ___matchLen0, int32_t ___matchPos1, OutputBuffer_t1763155281 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::WriteChar(System.Byte,Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteChar_m3268186315 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, OutputBuffer_t1763155281 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoder::WriteDeflatePreamble(Unity.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteDeflatePreamble_m4287261713 (Il2CppObject * __this /* static, unused */, OutputBuffer_t1763155281 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
