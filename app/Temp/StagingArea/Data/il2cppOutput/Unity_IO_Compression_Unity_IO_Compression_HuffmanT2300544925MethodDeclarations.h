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

// Unity.IO.Compression.HuffmanTree
struct HuffmanTree_t2300544925;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Unity.IO.Compression.InputBuffer
struct InputBuffer_t1846781900;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_InputBuf1846781900.h"

// System.Void Unity.IO.Compression.HuffmanTree::.cctor()
extern "C"  void HuffmanTree__cctor_m2539421375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.HuffmanTree::.ctor(System.Byte[])
extern "C"  void HuffmanTree__ctor_m3783420635 (HuffmanTree_t2300544925 * __this, ByteU5BU5D_t3397334013* ___codeLengths0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.HuffmanTree Unity.IO.Compression.HuffmanTree::get_StaticLiteralLengthTree()
extern "C"  HuffmanTree_t2300544925 * HuffmanTree_get_StaticLiteralLengthTree_m260679223 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.HuffmanTree Unity.IO.Compression.HuffmanTree::get_StaticDistanceTree()
extern "C"  HuffmanTree_t2300544925 * HuffmanTree_get_StaticDistanceTree_m385458123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Unity.IO.Compression.HuffmanTree::GetStaticLiteralTreeLength()
extern "C"  ByteU5BU5D_t3397334013* HuffmanTree_GetStaticLiteralTreeLength_m2816718839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Unity.IO.Compression.HuffmanTree::GetStaticDistanceTreeLength()
extern "C"  ByteU5BU5D_t3397334013* HuffmanTree_GetStaticDistanceTreeLength_m3347216143 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Unity.IO.Compression.HuffmanTree::CalculateHuffmanCode()
extern "C"  UInt32U5BU5D_t59386216* HuffmanTree_CalculateHuffmanCode_m1040700859 (HuffmanTree_t2300544925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.HuffmanTree::CreateTable()
extern "C"  void HuffmanTree_CreateTable_m142767484 (HuffmanTree_t2300544925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.HuffmanTree::GetNextSymbol(Unity.IO.Compression.InputBuffer)
extern "C"  int32_t HuffmanTree_GetNextSymbol_m4284788274 (HuffmanTree_t2300544925 * __this, InputBuffer_t1846781900 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
