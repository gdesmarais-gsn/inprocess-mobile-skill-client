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

// System.Object
struct Il2CppObject;
// MsgPack.MessagePackObjectDictionary
struct MessagePackObjectDictionary_t4175726983;
// MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator
struct Enumerator_t159588354;
struct Enumerator_t159588354_marshaled_pinvoke;
struct Enumerator_t159588354_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary_KeyColl159588354.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary4175726983.h"

// MsgPack.MessagePackObject MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator::get_Current()
extern "C"  MessagePackObject_t2038085051  Enumerator_get_Current_m3925676049 (Enumerator_t159588354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m718280609 (Enumerator_t159588354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator::.ctor(MsgPack.MessagePackObjectDictionary)
extern "C"  void Enumerator__ctor_m1262591536 (Enumerator_t159588354 * __this, MessagePackObjectDictionary_t4175726983 * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator::Dispose()
extern "C"  void Enumerator_Dispose_m240281048 (Enumerator_t159588354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1478552213 (Enumerator_t159588354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m1285636621 (Enumerator_t159588354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Enumerator_t159588354;
struct Enumerator_t159588354_marshaled_pinvoke;

extern "C" void Enumerator_t159588354_marshal_pinvoke(const Enumerator_t159588354& unmarshaled, Enumerator_t159588354_marshaled_pinvoke& marshaled);
extern "C" void Enumerator_t159588354_marshal_pinvoke_back(const Enumerator_t159588354_marshaled_pinvoke& marshaled, Enumerator_t159588354& unmarshaled);
extern "C" void Enumerator_t159588354_marshal_pinvoke_cleanup(Enumerator_t159588354_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Enumerator_t159588354;
struct Enumerator_t159588354_marshaled_com;

extern "C" void Enumerator_t159588354_marshal_com(const Enumerator_t159588354& unmarshaled, Enumerator_t159588354_marshaled_com& marshaled);
extern "C" void Enumerator_t159588354_marshal_com_back(const Enumerator_t159588354_marshaled_com& marshaled, Enumerator_t159588354& unmarshaled);
extern "C" void Enumerator_t159588354_marshal_com_cleanup(Enumerator_t159588354_marshaled_com& marshaled);
