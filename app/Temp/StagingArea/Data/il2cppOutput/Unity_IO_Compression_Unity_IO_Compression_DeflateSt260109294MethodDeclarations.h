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

// Unity.IO.Compression.DeflateStreamAsyncResult
struct DeflateStreamAsyncResult_t260109294;
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Unity.IO.Compression.DeflateStreamAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback,System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStreamAsyncResult__ctor_m2232090596 (DeflateStreamAsyncResult_t260109294 * __this, Il2CppObject * ___asyncObject0, Il2CppObject * ___asyncState1, AsyncCallback_t163412349 * ___asyncCallback2, ByteU5BU5D_t3397334013* ___buffer3, int32_t ___offset4, int32_t ___count5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Unity.IO.Compression.DeflateStreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * DeflateStreamAsyncResult_get_AsyncState_m2738101882 (DeflateStreamAsyncResult_t260109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Unity.IO.Compression.DeflateStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * DeflateStreamAsyncResult_get_AsyncWaitHandle_m4075235638 (DeflateStreamAsyncResult_t260109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflateStreamAsyncResult::get_CompletedSynchronously()
extern "C"  bool DeflateStreamAsyncResult_get_CompletedSynchronously_m2971864773 (DeflateStreamAsyncResult_t260109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unity.IO.Compression.DeflateStreamAsyncResult::get_IsCompleted()
extern "C"  bool DeflateStreamAsyncResult_get_IsCompleted_m1006620287 (DeflateStreamAsyncResult_t260109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Unity.IO.Compression.DeflateStreamAsyncResult::get_Result()
extern "C"  Il2CppObject * DeflateStreamAsyncResult_get_Result_m4226843806 (DeflateStreamAsyncResult_t260109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStreamAsyncResult::Close()
extern "C"  void DeflateStreamAsyncResult_Close_m2528825255 (DeflateStreamAsyncResult_t260109294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Boolean,System.Object)
extern "C"  void DeflateStreamAsyncResult_InvokeCallback_m1678662533 (DeflateStreamAsyncResult_t260109294 * __this, bool ___completedSynchronously0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Object)
extern "C"  void DeflateStreamAsyncResult_InvokeCallback_m1832215760 (DeflateStreamAsyncResult_t260109294 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStreamAsyncResult::Complete(System.Boolean,System.Object)
extern "C"  void DeflateStreamAsyncResult_Complete_m58829085 (DeflateStreamAsyncResult_t260109294 * __this, bool ___completedSynchronously0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStreamAsyncResult::Complete(System.Object)
extern "C"  void DeflateStreamAsyncResult_Complete_m3668393928 (DeflateStreamAsyncResult_t260109294 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
