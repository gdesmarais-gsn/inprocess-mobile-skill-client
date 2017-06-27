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

// Unity.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_t2805640970;
// Unity.IO.Compression.DeflateInput
struct DeflateInput_t3774384619;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Unity.IO.Compression.Match
struct Match_t828265445;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_Match828265445.h"

// System.Void Unity.IO.Compression.FastEncoderWindow::.ctor()
extern "C"  void FastEncoderWindow__ctor_m1495900825 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.FastEncoderWindow::get_BytesAvailable()
extern "C"  int32_t FastEncoderWindow_get_BytesAvailable_m2412801450 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.DeflateInput Unity.IO.Compression.FastEncoderWindow::get_UnprocessedInput()
extern "C"  DeflateInput_t3774384619 * FastEncoderWindow_get_UnprocessedInput_m940400042 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoderWindow::FlushWindow()
extern "C"  void FastEncoderWindow_FlushWindow_m2593039385 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoderWindow::ResetWindow()
extern "C"  void FastEncoderWindow_ResetWindow_m327074934 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.FastEncoderWindow::get_FreeWindowSpace()
extern "C"  int32_t FastEncoderWindow_get_FreeWindowSpace_m3685987350 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoderWindow::CopyBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void FastEncoderWindow_CopyBytes_m3499080358 (FastEncoderWindow_t2805640970 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoderWindow::MoveWindows()
extern "C"  void FastEncoderWindow_MoveWindows_m3668064931 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Unity.IO.Compression.FastEncoderWindow::HashValue(System.UInt32,System.Byte)
extern "C"  uint32_t FastEncoderWindow_HashValue_m3824367118 (FastEncoderWindow_t2805640970 * __this, uint32_t ___hash0, uint8_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Unity.IO.Compression.FastEncoderWindow::InsertString(System.UInt32&)
extern "C"  uint32_t FastEncoderWindow_InsertString_m1499207942 (FastEncoderWindow_t2805640970 * __this, uint32_t* ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoderWindow::InsertStrings(System.UInt32&,System.Int32)
extern "C"  void FastEncoderWindow_InsertStrings_m3745400203 (FastEncoderWindow_t2805640970 * __this, uint32_t* ___hash0, int32_t ___matchLen1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.FastEncoderWindow::GetNextSymbolOrMatch(Unity.IO.Compression.Match)
extern "C"  bool FastEncoderWindow_GetNextSymbolOrMatch_m3819401422 (FastEncoderWindow_t2805640970 * __this, Match_t828265445 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.FastEncoderWindow::FindMatch(System.Int32,System.Int32&,System.Int32,System.Int32)
extern "C"  int32_t FastEncoderWindow_FindMatch_m3727336563 (FastEncoderWindow_t2805640970 * __this, int32_t ___search0, int32_t* ___matchPos1, int32_t ___searchDepth2, int32_t ___niceLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.FastEncoderWindow::VerifyHashes()
extern "C"  void FastEncoderWindow_VerifyHashes_m1196413188 (FastEncoderWindow_t2805640970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Unity.IO.Compression.FastEncoderWindow::RecalculateHash(System.Int32)
extern "C"  uint32_t FastEncoderWindow_RecalculateHash_m1914841556 (FastEncoderWindow_t2805640970 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
