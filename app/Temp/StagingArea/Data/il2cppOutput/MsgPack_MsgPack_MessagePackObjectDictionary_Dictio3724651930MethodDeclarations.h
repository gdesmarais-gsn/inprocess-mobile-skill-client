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
// MsgPack.MessagePackObjectDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t3724651930;
struct DictionaryEnumerator_t3724651930_marshaled_pinvoke;
struct DictionaryEnumerator_t3724651930_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary_Dictio3724651930.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary4175726983.h"

// System.Object MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::get_Current()
extern "C"  Il2CppObject * DictionaryEnumerator_get_Current_m3101471838 (DictionaryEnumerator_t3724651930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::get_Entry()
extern "C"  DictionaryEntry_t3048875398  DictionaryEnumerator_get_Entry_m637692111 (DictionaryEnumerator_t3724651930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::get_Key()
extern "C"  Il2CppObject * DictionaryEnumerator_get_Key_m2072053892 (DictionaryEnumerator_t3724651930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::get_Value()
extern "C"  Il2CppObject * DictionaryEnumerator_get_Value_m3382091282 (DictionaryEnumerator_t3724651930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::.ctor(MsgPack.MessagePackObjectDictionary)
extern "C"  void DictionaryEnumerator__ctor_m43684480 (DictionaryEnumerator_t3724651930 * __this, MessagePackObjectDictionary_t4175726983 * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::MoveNext()
extern "C"  bool DictionaryEnumerator_MoveNext_m1820779787 (DictionaryEnumerator_t3724651930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::System.Collections.IEnumerator.Reset()
extern "C"  void DictionaryEnumerator_System_Collections_IEnumerator_Reset_m2064439419 (DictionaryEnumerator_t3724651930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DictionaryEnumerator_t3724651930;
struct DictionaryEnumerator_t3724651930_marshaled_pinvoke;

extern "C" void DictionaryEnumerator_t3724651930_marshal_pinvoke(const DictionaryEnumerator_t3724651930& unmarshaled, DictionaryEnumerator_t3724651930_marshaled_pinvoke& marshaled);
extern "C" void DictionaryEnumerator_t3724651930_marshal_pinvoke_back(const DictionaryEnumerator_t3724651930_marshaled_pinvoke& marshaled, DictionaryEnumerator_t3724651930& unmarshaled);
extern "C" void DictionaryEnumerator_t3724651930_marshal_pinvoke_cleanup(DictionaryEnumerator_t3724651930_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DictionaryEnumerator_t3724651930;
struct DictionaryEnumerator_t3724651930_marshaled_com;

extern "C" void DictionaryEnumerator_t3724651930_marshal_com(const DictionaryEnumerator_t3724651930& unmarshaled, DictionaryEnumerator_t3724651930_marshaled_com& marshaled);
extern "C" void DictionaryEnumerator_t3724651930_marshal_com_back(const DictionaryEnumerator_t3724651930_marshaled_com& marshaled, DictionaryEnumerator_t3724651930& unmarshaled);
extern "C" void DictionaryEnumerator_t3724651930_marshal_com_cleanup(DictionaryEnumerator_t3724651930_marshaled_com& marshaled);
