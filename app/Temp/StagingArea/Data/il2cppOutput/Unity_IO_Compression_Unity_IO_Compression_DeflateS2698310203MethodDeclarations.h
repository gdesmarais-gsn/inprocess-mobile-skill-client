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

// Unity.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t2698310203;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Unity.IO.Compression.DeflateStream/AsyncWriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncWriteDelegate__ctor_m2542061265 (AsyncWriteDelegate_t2698310203 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream/AsyncWriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void AsyncWriteDelegate_Invoke_m795821841 (AsyncWriteDelegate_t2698310203 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Unity.IO.Compression.DeflateStream/AsyncWriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncWriteDelegate_BeginInvoke_m3362539360 (AsyncWriteDelegate_t2698310203 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateStream/AsyncWriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncWriteDelegate_EndInvoke_m4136757491 (AsyncWriteDelegate_t2698310203 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
