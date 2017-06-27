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

// GSN.Skill.Games.Common.Utils.WebRequestDispatcher/FakeResponseMaker
struct FakeResponseMaker_t4141588755;
// System.Object
struct Il2CppObject;
// GSN.Skill.Games.Common.Utils.FakeWebResponse
struct FakeWebResponse_t2637957952;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Utils.WebRequestDispatcher/FakeResponseMaker::.ctor(System.Object,System.IntPtr)
extern "C"  void FakeResponseMaker__ctor_m1561182850 (FakeResponseMaker_t4141588755 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.FakeWebResponse GSN.Skill.Games.Common.Utils.WebRequestDispatcher/FakeResponseMaker::Invoke(System.Net.WebRequest,System.Byte[],System.IO.Stream)
extern "C"  FakeWebResponse_t2637957952 * FakeResponseMaker_Invoke_m2355373198 (FakeResponseMaker_t4141588755 * __this, WebRequest_t1365124353 * ___wr0, ByteU5BU5D_t3397334013* ___postBytes1, Stream_t3255436806 * ___postStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.WebRequestDispatcher/FakeResponseMaker::BeginInvoke(System.Net.WebRequest,System.Byte[],System.IO.Stream,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FakeResponseMaker_BeginInvoke_m945805500 (FakeResponseMaker_t4141588755 * __this, WebRequest_t1365124353 * ___wr0, ByteU5BU5D_t3397334013* ___postBytes1, Stream_t3255436806 * ___postStream2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.FakeWebResponse GSN.Skill.Games.Common.Utils.WebRequestDispatcher/FakeResponseMaker::EndInvoke(System.IAsyncResult)
extern "C"  FakeWebResponse_t2637957952 * FakeResponseMaker_EndInvoke_m456373783 (FakeResponseMaker_t4141588755 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
