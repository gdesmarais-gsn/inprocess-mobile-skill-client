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
// GSN.Skill.Games.Tripeaks.BuildPlayfieldEvent
struct BuildPlayfieldEvent_t380407814;
struct BuildPlayfieldEvent_t380407814_marshaled_pinvoke;
struct BuildPlayfieldEvent_t380407814_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_BuildPla380407814.h"

// System.Void GSN.Skill.Games.Tripeaks.BuildPlayfieldEvent::.ctor(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void BuildPlayfieldEvent__ctor_m1095897505 (BuildPlayfieldEvent_t380407814 * __this, List_1_t1440998580 * ___cardIndices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Tripeaks.BuildPlayfieldEvent::get_eventTypeInt()
extern "C"  int32_t BuildPlayfieldEvent_get_eventTypeInt_m1631879634 (BuildPlayfieldEvent_t380407814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GSN.Skill.Games.Tripeaks.BuildPlayfieldEvent::get_eventTypeEnum()
extern "C"  Type_t * BuildPlayfieldEvent_get_eventTypeEnum_m447247374 (BuildPlayfieldEvent_t380407814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct BuildPlayfieldEvent_t380407814;
struct BuildPlayfieldEvent_t380407814_marshaled_pinvoke;

extern "C" void BuildPlayfieldEvent_t380407814_marshal_pinvoke(const BuildPlayfieldEvent_t380407814& unmarshaled, BuildPlayfieldEvent_t380407814_marshaled_pinvoke& marshaled);
extern "C" void BuildPlayfieldEvent_t380407814_marshal_pinvoke_back(const BuildPlayfieldEvent_t380407814_marshaled_pinvoke& marshaled, BuildPlayfieldEvent_t380407814& unmarshaled);
extern "C" void BuildPlayfieldEvent_t380407814_marshal_pinvoke_cleanup(BuildPlayfieldEvent_t380407814_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct BuildPlayfieldEvent_t380407814;
struct BuildPlayfieldEvent_t380407814_marshaled_com;

extern "C" void BuildPlayfieldEvent_t380407814_marshal_com(const BuildPlayfieldEvent_t380407814& unmarshaled, BuildPlayfieldEvent_t380407814_marshaled_com& marshaled);
extern "C" void BuildPlayfieldEvent_t380407814_marshal_com_back(const BuildPlayfieldEvent_t380407814_marshaled_com& marshaled, BuildPlayfieldEvent_t380407814& unmarshaled);
extern "C" void BuildPlayfieldEvent_t380407814_marshal_com_cleanup(BuildPlayfieldEvent_t380407814_marshaled_com& marshaled);
