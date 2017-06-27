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

// Unity.IO.Compression.GZipStream
struct GZipStream_t4289057286;
// System.IO.Stream
struct Stream_t3255436806;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "Unity_IO_Compression_Unity_IO_Compression_Compress4084733625.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Unity.IO.Compression.GZipStream::.ctor(System.IO.Stream,Unity.IO.Compression.CompressionMode)
extern "C"  void GZipStream__ctor_m4070703852 (GZipStream_t4289057286 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::.ctor(System.IO.Stream,Unity.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void GZipStream__ctor_m2227748605 (GZipStream_t4289057286 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::SetDeflateStreamFileFormatter(Unity.IO.Compression.CompressionMode)
extern "C"  void GZipStream_SetDeflateStreamFileFormatter_m3958838000 (GZipStream_t4289057286 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m1346769722 (GZipStream_t4289057286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m1138962165 (GZipStream_t4289057286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m3094156294 (GZipStream_t4289057286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Unity.IO.Compression.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m2312717741 (GZipStream_t4289057286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Unity.IO.Compression.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m1751132910 (GZipStream_t4289057286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m786633719 (GZipStream_t4289057286 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m1485683521 (GZipStream_t4289057286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Unity.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m705860445 (GZipStream_t4289057286 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m3592886373 (GZipStream_t4289057286 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Unity.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GZipStream_BeginRead_m3035786147 (GZipStream_t4289057286 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___asyncCallback3, Il2CppObject * ___asyncState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
extern "C"  int32_t GZipStream_EndRead_m4230625527 (GZipStream_t4289057286 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Unity.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GZipStream_BeginWrite_m642621234 (GZipStream_t4289057286 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___asyncCallback3, Il2CppObject * ___asyncState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
extern "C"  void GZipStream_EndWrite_m2280402200 (GZipStream_t4289057286 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m1265170212 (GZipStream_t4289057286 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m3092453507 (GZipStream_t4289057286 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m1623790661 (GZipStream_t4289057286 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
