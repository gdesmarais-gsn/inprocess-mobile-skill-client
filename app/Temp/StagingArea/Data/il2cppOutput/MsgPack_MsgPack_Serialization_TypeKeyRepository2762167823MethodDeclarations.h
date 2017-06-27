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

// MsgPack.Serialization.TypeKeyRepository
struct TypeKeyRepository_t2762167823;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_TypeKeyRepository2762167823.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Serialization_SerializerRegistratio603011963.h"

// System.Void MsgPack.Serialization.TypeKeyRepository::.ctor(MsgPack.Serialization.TypeKeyRepository)
extern "C"  void TypeKeyRepository__ctor_m1496447847 (TypeKeyRepository_t2762167823 * __this, TypeKeyRepository_t2762167823 * ___copiedFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.TypeKeyRepository::.ctor(System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>)
extern "C"  void TypeKeyRepository__ctor_m3200201880 (TypeKeyRepository_t2762167823 * __this, Dictionary_2_t613314382 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object> MsgPack.Serialization.TypeKeyRepository::GetClonedTable()
extern "C"  Dictionary_2_t613314382 * TypeKeyRepository_GetClonedTable_m1184097822 (TypeKeyRepository_t2762167823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.TypeKeyRepository::Get(System.Type,System.Object&,System.Object&)
extern "C"  bool TypeKeyRepository_Get_m2466143341 (TypeKeyRepository_t2762167823 * __this, Type_t * ___type0, Il2CppObject ** ___matched1, Il2CppObject ** ___genericDefinitionMatched2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.TypeKeyRepository::GetCore(System.Type,System.Object&,System.Object&)
extern "C"  bool TypeKeyRepository_GetCore_m1065387820 (TypeKeyRepository_t2762167823 * __this, Type_t * ___type0, Il2CppObject ** ___matched1, Il2CppObject ** ___genericDefinitionMatched2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.TypeKeyRepository::Register(System.Type,System.Object,System.Type,System.Object,MsgPack.Serialization.SerializerRegistrationOptions)
extern "C"  bool TypeKeyRepository_Register_m913302528 (TypeKeyRepository_t2762167823 * __this, Type_t * ___type0, Il2CppObject * ___entry1, Type_t * ___nullableType2, Il2CppObject * ___nullableValue3, int32_t ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.TypeKeyRepository::RegisterCore(System.Type,System.Object,System.Type,System.Object,MsgPack.Serialization.SerializerRegistrationOptions)
extern "C"  bool TypeKeyRepository_RegisterCore_m1204293521 (TypeKeyRepository_t2762167823 * __this, Type_t * ___key0, Il2CppObject * ___value1, Type_t * ___nullableType2, Il2CppObject * ___nullableValue3, int32_t ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.TypeKeyRepository::ContainsType(System.Type,System.Type)
extern "C"  bool TypeKeyRepository_ContainsType_m648645731 (TypeKeyRepository_t2762167823 * __this, Type_t * ___baseType0, Type_t * ___nullableType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.TypeKeyRepository::Contains(System.Type)
extern "C"  bool TypeKeyRepository_Contains_m466321420 (TypeKeyRepository_t2762167823 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
