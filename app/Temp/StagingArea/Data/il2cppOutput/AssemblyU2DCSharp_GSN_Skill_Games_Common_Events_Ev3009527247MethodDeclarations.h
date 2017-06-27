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

// GSN.Skill.Games.Common.Events.EventDispatcher
struct EventDispatcher_t3009527247;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;
// System.Func`1<GSN.Skill.Games.Common.Events.IModelEvent>
struct Func_1_t2597079228;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void GSN.Skill.Games.Common.Events.EventDispatcher::.ctor(System.Type[])
extern "C"  void EventDispatcher__ctor_m3158127471 (EventDispatcher_t3009527247 * __this, TypeU5BU5D_t1664964607* ___eventTypeEnums0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.EventDispatcher::InitializeEVENTS()
extern "C"  void EventDispatcher_InitializeEVENTS_m970948625 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.EventDispatcher::DispatchEvent(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void EventDispatcher_DispatchEvent_m4139058996 (EventDispatcher_t3009527247 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.EventDispatcher::dispatchEvent(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void EventDispatcher_dispatchEvent_m2740062292 (EventDispatcher_t3009527247 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.EventDispatcher::DispatchEvent(System.Int32,System.Func`1<GSN.Skill.Games.Common.Events.IModelEvent>)
extern "C"  void EventDispatcher_DispatchEvent_m1635927457 (EventDispatcher_t3009527247 * __this, int32_t ___eventTypeInt0, Func_1_t2597079228 * ___eventCreationFunc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.EventDispatcher::.cctor()
extern "C"  void EventDispatcher__cctor_m3403560053 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Events.EventDispatcher::<InitializeEVENTS>m__0(System.Type)
extern "C"  bool EventDispatcher_U3CInitializeEVENTSU3Em__0_m2623082945 (Il2CppObject * __this /* static, unused */, Type_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Events.EventDispatcher::<InitializeEVENTS>m__1(System.Type)
extern "C"  bool EventDispatcher_U3CInitializeEVENTSU3Em__1_m2875707174 (Il2CppObject * __this /* static, unused */, Type_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
