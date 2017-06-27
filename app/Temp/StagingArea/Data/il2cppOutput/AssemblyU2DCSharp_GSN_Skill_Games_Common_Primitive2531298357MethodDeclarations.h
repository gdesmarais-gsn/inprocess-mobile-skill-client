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
// GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent
struct DealCardsEvent_t2531298357;
struct DealCardsEvent_t2531298357_marshaled_pinvoke;
struct DealCardsEvent_t2531298357_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive2531298357.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent::.ctor(System.String)
extern "C"  void DealCardsEvent__ctor_m4050679004 (DealCardsEvent_t2531298357 * __this, String_t* ___deck0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent::get_eventTypeInt()
extern "C"  int32_t DealCardsEvent_get_eventTypeInt_m1021595514 (DealCardsEvent_t2531298357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GSN.Skill.Games.Common.Primitive.Card.DealCardsEvent::get_eventTypeEnum()
extern "C"  Type_t * DealCardsEvent_get_eventTypeEnum_m4164367430 (DealCardsEvent_t2531298357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DealCardsEvent_t2531298357;
struct DealCardsEvent_t2531298357_marshaled_pinvoke;

extern "C" void DealCardsEvent_t2531298357_marshal_pinvoke(const DealCardsEvent_t2531298357& unmarshaled, DealCardsEvent_t2531298357_marshaled_pinvoke& marshaled);
extern "C" void DealCardsEvent_t2531298357_marshal_pinvoke_back(const DealCardsEvent_t2531298357_marshaled_pinvoke& marshaled, DealCardsEvent_t2531298357& unmarshaled);
extern "C" void DealCardsEvent_t2531298357_marshal_pinvoke_cleanup(DealCardsEvent_t2531298357_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DealCardsEvent_t2531298357;
struct DealCardsEvent_t2531298357_marshaled_com;

extern "C" void DealCardsEvent_t2531298357_marshal_com(const DealCardsEvent_t2531298357& unmarshaled, DealCardsEvent_t2531298357_marshaled_com& marshaled);
extern "C" void DealCardsEvent_t2531298357_marshal_com_back(const DealCardsEvent_t2531298357_marshaled_com& marshaled, DealCardsEvent_t2531298357& unmarshaled);
extern "C" void DealCardsEvent_t2531298357_marshal_com_cleanup(DealCardsEvent_t2531298357_marshaled_com& marshaled);
