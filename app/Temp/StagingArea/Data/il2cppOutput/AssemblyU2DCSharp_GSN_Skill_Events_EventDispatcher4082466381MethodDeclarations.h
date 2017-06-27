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

// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// System.Type
struct Type_t;
// System.String
struct String_t;
// GSN.Skill.Events.EventDispatcher/EventMetaData
struct EventMetaData_t4082466381;
struct EventMetaData_t4082466381_marshaled_pinvoke;
struct EventMetaData_t4082466381_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Events_EventDispatcher4082466381.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void GSN.Skill.Events.EventDispatcher/EventMetaData::.ctor(GSN.Skill.Events.IEvent)
extern "C"  void EventMetaData__ctor_m3156315487 (EventMetaData_t4082466381 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Events.EventDispatcher/EventMetaData::.ctor(System.Type)
extern "C"  void EventMetaData__ctor_m1423796003 (EventMetaData_t4082466381 * __this, Type_t * ___evtType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Events.EventDispatcher/EventMetaData::ToString()
extern "C"  String_t* EventMetaData_ToString_m4149842791 (EventMetaData_t4082466381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EventMetaData_t4082466381;
struct EventMetaData_t4082466381_marshaled_pinvoke;

extern "C" void EventMetaData_t4082466381_marshal_pinvoke(const EventMetaData_t4082466381& unmarshaled, EventMetaData_t4082466381_marshaled_pinvoke& marshaled);
extern "C" void EventMetaData_t4082466381_marshal_pinvoke_back(const EventMetaData_t4082466381_marshaled_pinvoke& marshaled, EventMetaData_t4082466381& unmarshaled);
extern "C" void EventMetaData_t4082466381_marshal_pinvoke_cleanup(EventMetaData_t4082466381_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EventMetaData_t4082466381;
struct EventMetaData_t4082466381_marshaled_com;

extern "C" void EventMetaData_t4082466381_marshal_com(const EventMetaData_t4082466381& unmarshaled, EventMetaData_t4082466381_marshaled_com& marshaled);
extern "C" void EventMetaData_t4082466381_marshal_com_back(const EventMetaData_t4082466381_marshaled_com& marshaled, EventMetaData_t4082466381& unmarshaled);
extern "C" void EventMetaData_t4082466381_marshal_com_cleanup(EventMetaData_t4082466381_marshaled_com& marshaled);
