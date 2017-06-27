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

// System.Text.Decoder
struct Decoder_t3792697818;
// System.Text.DecoderFallback
struct DecoderFallback_t1715117820;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4206371382;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderFallback1715117820.h"

// System.Void System.Text.Decoder::.ctor()
extern "C"  void Decoder__ctor_m2623573910 (Decoder_t3792697818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C"  void Decoder_set_Fallback_m1780632169 (Decoder_t3792697818 * __this, DecoderFallback_t1715117820 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C"  DecoderFallbackBuffer_t4206371382 * Decoder_get_FallbackBuffer_m2995053018 (Decoder_t3792697818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Decoder_GetCharCount_m1977791941 (Decoder_t3792697818 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___flush3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
extern "C"  int32_t Decoder_GetChars_m2378120413 (Decoder_t3792697818 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::Reset()
extern "C"  void Decoder_Reset_m1178788151 (Decoder_t3792697818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::Convert(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&)
extern "C"  void Decoder_Convert_m765272101 (Decoder_t3792697818 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, int32_t ___charCount5, bool ___flush6, int32_t* ___bytesUsed7, int32_t* ___charsUsed8, bool* ___completed9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::CheckArguments(System.Char[],System.Int32)
extern "C"  void Decoder_CheckArguments_m3277770604 (Decoder_t3792697818 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___charIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::CheckArguments(System.Byte[],System.Int32,System.Int32)
extern "C"  void Decoder_CheckArguments_m1971842947 (Decoder_t3792697818 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
