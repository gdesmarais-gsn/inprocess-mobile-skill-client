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

// Unity.IO.Compression.DeflateStream
struct DeflateStream_t255841283;
// System.IO.Stream
struct Stream_t3255436806;
// Unity.IO.Compression.IDeflater
struct IDeflater_t1816632622;
// Unity.IO.Compression.IFileFormatReader
struct IFileFormatReader_t1299669065;
// Unity.IO.Compression.IFileFormatWriter
struct IFileFormatWriter_t449992597;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// Unity.IO.Compression.DeflateStreamAsyncResult
struct DeflateStreamAsyncResult_t260109294;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "Unity_IO_Compression_Unity_IO_Compression_Compress4084733625.h"
#include "Unity_IO_Compression_Unity_IO_Compression_DeflateS1576665961.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "Unity_IO_Compression_Unity_IO_Compression_DeflateSt260109294.h"

// System.Void Unity.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Unity.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void DeflateStream__ctor_m2393266186 (DeflateStream_t255841283 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.IDeflater Unity.IO.Compression.DeflateStream::CreateDeflater()
extern "C"  Il2CppObject * DeflateStream_CreateDeflater_m2741797421 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.DeflateStream/WorkerType Unity.IO.Compression.DeflateStream::GetDeflaterType()
extern "C"  uint8_t DeflateStream_GetDeflaterType_m3517455957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::SetFileFormatReader(Unity.IO.Compression.IFileFormatReader)
extern "C"  void DeflateStream_SetFileFormatReader_m2338249050 (DeflateStream_t255841283 * __this, Il2CppObject * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::SetFileFormatWriter(Unity.IO.Compression.IFileFormatWriter)
extern "C"  void DeflateStream_SetFileFormatWriter_m309319646 (DeflateStream_t255841283 * __this, Il2CppObject * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m234492021 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m2817510504 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m33237299 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Unity.IO.Compression.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m2845646232 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Unity.IO.Compression.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m3229273015 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m855848338 (DeflateStream_t255841283 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m2889086124 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Unity.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m1530637836 (DeflateStream_t255841283 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m2504055030 (DeflateStream_t255841283 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m3141063149 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_ValidateParameters_m4087410205 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::EnsureNotDisposed()
extern "C"  void DeflateStream_EnsureNotDisposed_m12855174 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::EnsureDecompressionMode()
extern "C"  void DeflateStream_EnsureDecompressionMode_m712541316 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::EnsureCompressionMode()
extern "C"  void DeflateStream_EnsureCompressionMode_m2258314741 (DeflateStream_t255841283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Unity.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeflateStream_BeginRead_m4260995006 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___asyncCallback3, Il2CppObject * ___asyncState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::ReadCallback(System.IAsyncResult)
extern "C"  void DeflateStream_ReadCallback_m388598064 (DeflateStream_t255841283 * __this, Il2CppObject * ___baseStreamResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern "C"  int32_t DeflateStream_EndRead_m409542144 (DeflateStream_t255841283 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m1100153858 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::InternalWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateStream_InternalWrite_m2937343554 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::WriteDeflaterOutput(System.Boolean)
extern "C"  void DeflateStream_WriteDeflaterOutput_m4154398494 (DeflateStream_t255841283 * __this, bool ___isAsync0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::DoWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateStream_DoWrite_m467216418 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::DoMaintenance(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_DoMaintenance_m1792429215 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::PurgeBuffers(System.Boolean)
extern "C"  void DeflateStream_PurgeBuffers_m225110935 (DeflateStream_t255841283 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m513600570 (DeflateStream_t255841283 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Unity.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeflateStream_BeginWrite_m3055832863 (DeflateStream_t255841283 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___asyncCallback3, Il2CppObject * ___asyncState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::WriteCallback(System.IAsyncResult)
extern "C"  void DeflateStream_WriteCallback_m1763279463 (DeflateStream_t255841283 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern "C"  void DeflateStream_EndWrite_m2181038797 (DeflateStream_t255841283 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::CheckEndXxxxLegalStateAndParams(System.IAsyncResult)
extern "C"  void DeflateStream_CheckEndXxxxLegalStateAndParams_m3217216409 (DeflateStream_t255841283 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream::AwaitAsyncResultCompletion(Unity.IO.Compression.DeflateStreamAsyncResult)
extern "C"  void DeflateStream_AwaitAsyncResultCompletion_m3745695186 (DeflateStream_t255841283 * __this, DeflateStreamAsyncResult_t260109294 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
