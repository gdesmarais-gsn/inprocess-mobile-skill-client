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

// GSN.Skill.Games.Common.Events.EventDispatcher/EventListener
struct EventListener_t1583327324;
// System.Object
struct Il2CppObject;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Events.EventDispatcher/EventListener::.ctor(System.Object,System.IntPtr)
extern "C"  void EventListener__ctor_m1890405023 (EventListener_t1583327324 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.EventDispatcher/EventListener::Invoke(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void EventListener_Invoke_m1031373363 (EventListener_t1583327324 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Events.EventDispatcher/EventListener::BeginInvoke(GSN.Skill.Games.Common.Events.IModelEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventListener_BeginInvoke_m3785950756 (EventListener_t1583327324 * __this, Il2CppObject * ___e0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.EventDispatcher/EventListener::EndInvoke(System.IAsyncResult)
extern "C"  void EventListener_EndInvoke_m3623153261 (EventListener_t1583327324 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
