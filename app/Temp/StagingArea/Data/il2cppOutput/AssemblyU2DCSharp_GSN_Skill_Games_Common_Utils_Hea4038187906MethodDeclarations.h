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

// GSN.Skill.Games.Common.Utils.Heap/ItemWorker
struct ItemWorker_t4038187906;
// System.Object
struct Il2CppObject;
// GSN.Skill.Games.Common.Utils.IHeapable
struct IHeapable_t2168791121;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Utils.Heap/ItemWorker::.ctor(System.Object,System.IntPtr)
extern "C"  void ItemWorker__ctor_m1717281817 (ItemWorker_t4038187906 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap/ItemWorker::Invoke(GSN.Skill.Games.Common.Utils.IHeapable)
extern "C"  void ItemWorker_Invoke_m139784110 (ItemWorker_t4038187906 * __this, Il2CppObject * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.Heap/ItemWorker::BeginInvoke(GSN.Skill.Games.Common.Utils.IHeapable,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ItemWorker_BeginInvoke_m3898962419 (ItemWorker_t4038187906 * __this, Il2CppObject * ___item0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap/ItemWorker::EndInvoke(System.IAsyncResult)
extern "C"  void ItemWorker_EndInvoke_m3103236599 (ItemWorker_t4038187906 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
