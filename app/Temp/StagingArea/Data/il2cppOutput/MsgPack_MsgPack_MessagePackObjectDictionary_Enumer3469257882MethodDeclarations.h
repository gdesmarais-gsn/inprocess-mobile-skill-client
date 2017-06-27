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
// MsgPack.MessagePackObjectDictionary/Enumerator
struct Enumerator_t3469257882;
struct Enumerator_t3469257882_marshaled_pinvoke;
struct Enumerator_t3469257882_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary_Enumer3469257882.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22208478405.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary4175726983.h"

// System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary/Enumerator::get_Current()
extern "C"  KeyValuePair_2_t2208478405  Enumerator_get_Current_m212756695 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/Enumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m250906459 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry MsgPack.MessagePackObjectDictionary/Enumerator::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t3048875398  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2811778614 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/Enumerator::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m551396113 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/Enumerator::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16985745 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary/Enumerator::GetCurrentStrict()
extern "C"  KeyValuePair_2_t2208478405  Enumerator_GetCurrentStrict_m486437859 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/Enumerator::.ctor(MsgPack.MessagePackObjectDictionary)
extern "C"  void Enumerator__ctor_m3130410476 (Enumerator_t3469257882 * __this, MessagePackObjectDictionary_t4175726983 * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/Enumerator::VerifyVersion()
extern "C"  void Enumerator_VerifyVersion_m542866026 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/Enumerator::Dispose()
extern "C"  void Enumerator_Dispose_m2539356940 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/Enumerator::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2549831435 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/Enumerator::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m1955946635 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/Enumerator::ResetCore()
extern "C"  void Enumerator_ResetCore_m3058503431 (Enumerator_t3469257882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Enumerator_t3469257882;
struct Enumerator_t3469257882_marshaled_pinvoke;

extern "C" void Enumerator_t3469257882_marshal_pinvoke(const Enumerator_t3469257882& unmarshaled, Enumerator_t3469257882_marshaled_pinvoke& marshaled);
extern "C" void Enumerator_t3469257882_marshal_pinvoke_back(const Enumerator_t3469257882_marshaled_pinvoke& marshaled, Enumerator_t3469257882& unmarshaled);
extern "C" void Enumerator_t3469257882_marshal_pinvoke_cleanup(Enumerator_t3469257882_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Enumerator_t3469257882;
struct Enumerator_t3469257882_marshaled_com;

extern "C" void Enumerator_t3469257882_marshal_com(const Enumerator_t3469257882& unmarshaled, Enumerator_t3469257882_marshaled_com& marshaled);
extern "C" void Enumerator_t3469257882_marshal_com_back(const Enumerator_t3469257882_marshaled_com& marshaled, Enumerator_t3469257882& unmarshaled);
extern "C" void Enumerator_t3469257882_marshal_com_cleanup(Enumerator_t3469257882_marshaled_com& marshaled);
