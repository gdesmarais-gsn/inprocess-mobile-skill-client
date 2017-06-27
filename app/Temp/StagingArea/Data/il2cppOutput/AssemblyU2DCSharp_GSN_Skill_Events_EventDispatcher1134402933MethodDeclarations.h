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

// GSN.Skill.Events.EventDispatcher/Scope
struct Scope_t1375325630;
// System.String
struct String_t;
// GSN.Skill.Events.EventDispatcher/ListenerCollection
struct ListenerCollection_t2809404862;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Events_EventDispatcher4082466381.h"

// GSN.Skill.Events.EventDispatcher/Scope GSN.Skill.Events.EventDispatcher::FindScope(System.Int32,System.String)
extern "C"  Scope_t1375325630 * EventDispatcher_FindScope_m2451815053 (Il2CppObject * __this /* static, unused */, int32_t ___id0, String_t* ___operation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Events.EventDispatcher/ListenerCollection GSN.Skill.Events.EventDispatcher::FindListeners(System.Int32,GSN.Skill.Events.EventDispatcher/EventMetaData,System.String)
extern "C"  ListenerCollection_t2809404862 * EventDispatcher_FindListeners_m1548088659 (Il2CppObject * __this /* static, unused */, int32_t ___scopeId0, EventMetaData_t4082466381  ___evtMd1, String_t* ___operation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Events.EventDispatcher::CreateScope(System.Int32,System.Type[])
extern "C"  void EventDispatcher_CreateScope_m705257970 (Il2CppObject * __this /* static, unused */, int32_t ___scopeId0, TypeU5BU5D_t1664964607* ___eventsToRegister1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Events.EventDispatcher::RegisterEvents(System.Int32,System.Type[])
extern "C"  void EventDispatcher_RegisterEvents_m1254885812 (Il2CppObject * __this /* static, unused */, int32_t ___scopeId0, TypeU5BU5D_t1664964607* ___eventsToRegister1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Events.EventDispatcher::DispatchEvent(GSN.Skill.Events.IEvent,System.Int32)
extern "C"  void EventDispatcher_DispatchEvent_m431637002 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___evt0, int32_t ___scopeId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Events.EventDispatcher::.cctor()
extern "C"  void EventDispatcher__cctor_m73817385 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
