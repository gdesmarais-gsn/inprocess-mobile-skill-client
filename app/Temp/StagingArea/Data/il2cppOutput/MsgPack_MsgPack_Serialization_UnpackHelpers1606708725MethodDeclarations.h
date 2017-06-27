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

// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Type1303803226.h"

// System.Int32 MsgPack.Serialization.UnpackHelpers::GetItemsCount(MsgPack.Unpacker)
extern "C"  int32_t UnpackHelpers_GetItemsCount_m3227815250 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo MsgPack.Serialization.UnpackHelpers::GetCollectionConstructor(System.Type)
extern "C"  ConstructorInfo_t2851816542 * UnpackHelpers_GetCollectionConstructor_m672510730 (Il2CppObject * __this /* static, unused */, Type_t * ___instanceType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.UnpackHelpers::IsIEqualityComparer(System.Type)
extern "C"  bool UnpackHelpers_IsIEqualityComparer_m4191876843 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.UnpackHelpers::GetEqualityComparer(System.Type)
extern "C"  Il2CppObject * UnpackHelpers_GetEqualityComparer_m1699531559 (Il2CppObject * __this /* static, unused */, Type_t * ___comparerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.UnpackHelpers::.cctor()
extern "C"  void UnpackHelpers__cctor_m1245684937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
