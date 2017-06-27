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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Type
struct Type_t;
// GSN.Skill.Games.Tripeaks.FlipCardEvent
struct FlipCardEvent_t531222657;
struct FlipCardEvent_t531222657_marshaled_pinvoke;
struct FlipCardEvent_t531222657_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_FlipCard531222657.h"

// System.Void GSN.Skill.Games.Tripeaks.FlipCardEvent::.ctor(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void FlipCardEvent__ctor_m3667687046 (FlipCardEvent_t531222657 * __this, List_1_t1440998580 * ___cardIndices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.FlipCardEvent::get_eventTypeInt()
extern "C"  int32_t FlipCardEvent_get_eventTypeInt_m13828289 (FlipCardEvent_t531222657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GSN.Skill.Games.Tripeaks.FlipCardEvent::get_eventTypeEnum()
extern "C"  Type_t * FlipCardEvent_get_eventTypeEnum_m2604475839 (FlipCardEvent_t531222657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct FlipCardEvent_t531222657;
struct FlipCardEvent_t531222657_marshaled_pinvoke;

extern "C" void FlipCardEvent_t531222657_marshal_pinvoke(const FlipCardEvent_t531222657& unmarshaled, FlipCardEvent_t531222657_marshaled_pinvoke& marshaled);
extern "C" void FlipCardEvent_t531222657_marshal_pinvoke_back(const FlipCardEvent_t531222657_marshaled_pinvoke& marshaled, FlipCardEvent_t531222657& unmarshaled);
extern "C" void FlipCardEvent_t531222657_marshal_pinvoke_cleanup(FlipCardEvent_t531222657_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct FlipCardEvent_t531222657;
struct FlipCardEvent_t531222657_marshaled_com;

extern "C" void FlipCardEvent_t531222657_marshal_com(const FlipCardEvent_t531222657& unmarshaled, FlipCardEvent_t531222657_marshaled_com& marshaled);
extern "C" void FlipCardEvent_t531222657_marshal_com_back(const FlipCardEvent_t531222657_marshaled_com& marshaled, FlipCardEvent_t531222657& unmarshaled);
extern "C" void FlipCardEvent_t531222657_marshal_com_cleanup(FlipCardEvent_t531222657_marshaled_com& marshaled);
