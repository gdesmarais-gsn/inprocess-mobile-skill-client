﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.UnicodeEncoding/UnicodeDecoder
struct UnicodeDecoder_t1968329522;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UnicodeEncoding/UnicodeDecoder::.ctor(System.Boolean)
extern "C"  void UnicodeDecoder__ctor_m1914600301 (UnicodeDecoder_t1968329522 * __this, bool ___bigEndian0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UnicodeDecoder_GetCharCount_m2948836400 (UnicodeDecoder_t1968329522 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UnicodeDecoder_GetChars_m4045891284 (UnicodeDecoder_t1968329522 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t1328083999* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;