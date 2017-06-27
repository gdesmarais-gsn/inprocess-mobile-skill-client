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

// System.String
struct String_t;
// System.Type
struct Type_t;
// GSN.Skill.Games.Tripeaks.ReshuffleEvent
struct ReshuffleEvent_t614706430;
struct ReshuffleEvent_t614706430_marshaled_pinvoke;
struct ReshuffleEvent_t614706430_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Reshuffl614706430.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Tripeaks.ReshuffleEvent::.ctor(System.String,System.Int32)
extern "C"  void ReshuffleEvent__ctor_m348665201 (ReshuffleEvent_t614706430 * __this, String_t* ___reshuffledCards0, int32_t ___reshuffleTimePenalty1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.ReshuffleEvent::get_eventTypeInt()
extern "C"  int32_t ReshuffleEvent_get_eventTypeInt_m3304638960 (ReshuffleEvent_t614706430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GSN.Skill.Games.Tripeaks.ReshuffleEvent::get_eventTypeEnum()
extern "C"  Type_t * ReshuffleEvent_get_eventTypeEnum_m3675002932 (ReshuffleEvent_t614706430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ReshuffleEvent_t614706430;
struct ReshuffleEvent_t614706430_marshaled_pinvoke;

extern "C" void ReshuffleEvent_t614706430_marshal_pinvoke(const ReshuffleEvent_t614706430& unmarshaled, ReshuffleEvent_t614706430_marshaled_pinvoke& marshaled);
extern "C" void ReshuffleEvent_t614706430_marshal_pinvoke_back(const ReshuffleEvent_t614706430_marshaled_pinvoke& marshaled, ReshuffleEvent_t614706430& unmarshaled);
extern "C" void ReshuffleEvent_t614706430_marshal_pinvoke_cleanup(ReshuffleEvent_t614706430_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ReshuffleEvent_t614706430;
struct ReshuffleEvent_t614706430_marshaled_com;

extern "C" void ReshuffleEvent_t614706430_marshal_com(const ReshuffleEvent_t614706430& unmarshaled, ReshuffleEvent_t614706430_marshaled_com& marshaled);
extern "C" void ReshuffleEvent_t614706430_marshal_com_back(const ReshuffleEvent_t614706430_marshaled_com& marshaled, ReshuffleEvent_t614706430& unmarshaled);
extern "C" void ReshuffleEvent_t614706430_marshal_com_cleanup(ReshuffleEvent_t614706430_marshaled_com& marshaled);
