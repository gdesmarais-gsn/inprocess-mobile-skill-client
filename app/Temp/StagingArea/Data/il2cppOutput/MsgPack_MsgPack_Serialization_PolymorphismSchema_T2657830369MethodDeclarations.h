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

// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry
struct TypeTableEntry_t1006006581;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// MsgPack.Serialization.PolymorphismSchema/TypeTable
struct TypeTable_t2657830369;
struct TypeTable_t2657830369_marshaled_pinvoke;
struct TypeTable_t2657830369_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema_T2657830369.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema_T1006006581.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Void MsgPack.Serialization.PolymorphismSchema/TypeTable::.ctor(MsgPack.Serialization.PolymorphismSchema/TypeTableEntry,MsgPack.Serialization.PolymorphismSchema/TypeTableEntry,MsgPack.Serialization.PolymorphismSchema/TypeTableEntry)
extern "C"  void TypeTable__ctor_m768079379 (TypeTable_t2657830369 * __this, TypeTableEntry_t1006006581 * ___member0, TypeTableEntry_t1006006581 * ___collectionItem1, TypeTableEntry_t1006006581 * ___dictionaryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchema/TypeTable MsgPack.Serialization.PolymorphismSchema/TypeTable::Create(System.Reflection.MemberInfo)
extern "C"  TypeTable_t2657830369  TypeTable_Create_m662258814 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TypeTable_t2657830369;
struct TypeTable_t2657830369_marshaled_pinvoke;

extern "C" void TypeTable_t2657830369_marshal_pinvoke(const TypeTable_t2657830369& unmarshaled, TypeTable_t2657830369_marshaled_pinvoke& marshaled);
extern "C" void TypeTable_t2657830369_marshal_pinvoke_back(const TypeTable_t2657830369_marshaled_pinvoke& marshaled, TypeTable_t2657830369& unmarshaled);
extern "C" void TypeTable_t2657830369_marshal_pinvoke_cleanup(TypeTable_t2657830369_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TypeTable_t2657830369;
struct TypeTable_t2657830369_marshaled_com;

extern "C" void TypeTable_t2657830369_marshal_com(const TypeTable_t2657830369& unmarshaled, TypeTable_t2657830369_marshaled_com& marshaled);
extern "C" void TypeTable_t2657830369_marshal_com_back(const TypeTable_t2657830369_marshaled_com& marshaled, TypeTable_t2657830369& unmarshaled);
extern "C" void TypeTable_t2657830369_marshal_com_cleanup(TypeTable_t2657830369_marshaled_com& marshaled);
