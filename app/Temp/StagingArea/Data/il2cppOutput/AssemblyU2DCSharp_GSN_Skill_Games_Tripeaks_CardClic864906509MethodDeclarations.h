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
// GSN.Skill.Games.Tripeaks.CardClickResultEvent
struct CardClickResultEvent_t864906509;
struct CardClickResultEvent_t864906509_marshaled_pinvoke;
struct CardClickResultEvent_t864906509_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_CardClic864906509.h"

// System.Void GSN.Skill.Games.Tripeaks.CardClickResultEvent::.ctor(System.Boolean,System.Int32,System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C"  void CardClickResultEvent__ctor_m1087406625 (CardClickResultEvent_t864906509 * __this, bool ___goodMove0, int32_t ___cardID1, List_1_t1440998580 * ___missedCards2, int32_t ___streakLevel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.CardClickResultEvent::get_eventTypeInt()
extern "C"  int32_t CardClickResultEvent_get_eventTypeInt_m2526297489 (CardClickResultEvent_t864906509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GSN.Skill.Games.Tripeaks.CardClickResultEvent::get_eventTypeEnum()
extern "C"  Type_t * CardClickResultEvent_get_eventTypeEnum_m3249292623 (CardClickResultEvent_t864906509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CardClickResultEvent_t864906509;
struct CardClickResultEvent_t864906509_marshaled_pinvoke;

extern "C" void CardClickResultEvent_t864906509_marshal_pinvoke(const CardClickResultEvent_t864906509& unmarshaled, CardClickResultEvent_t864906509_marshaled_pinvoke& marshaled);
extern "C" void CardClickResultEvent_t864906509_marshal_pinvoke_back(const CardClickResultEvent_t864906509_marshaled_pinvoke& marshaled, CardClickResultEvent_t864906509& unmarshaled);
extern "C" void CardClickResultEvent_t864906509_marshal_pinvoke_cleanup(CardClickResultEvent_t864906509_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CardClickResultEvent_t864906509;
struct CardClickResultEvent_t864906509_marshaled_com;

extern "C" void CardClickResultEvent_t864906509_marshal_com(const CardClickResultEvent_t864906509& unmarshaled, CardClickResultEvent_t864906509_marshaled_com& marshaled);
extern "C" void CardClickResultEvent_t864906509_marshal_com_back(const CardClickResultEvent_t864906509_marshaled_com& marshaled, CardClickResultEvent_t864906509& unmarshaled);
extern "C" void CardClickResultEvent_t864906509_marshal_com_cleanup(CardClickResultEvent_t864906509_marshaled_com& marshaled);
