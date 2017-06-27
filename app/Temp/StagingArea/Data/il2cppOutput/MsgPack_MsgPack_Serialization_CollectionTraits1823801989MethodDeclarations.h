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

// MsgPack.Serialization.CollectionTraits
struct CollectionTraits_t1823801989;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_CollectionKind2146230264.h"
#include "MsgPack_MsgPack_Serialization_CollectionDetailedKi2859259456.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Type1303803226.h"

// MsgPack.Serialization.CollectionKind MsgPack.Serialization.CollectionTraits::get_CollectionType()
extern "C"  int32_t CollectionTraits_get_CollectionType_m3199413186 (CollectionTraits_t1823801989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionTraits::.ctor(MsgPack.Serialization.CollectionDetailedKind,System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Type)
extern "C"  void CollectionTraits__ctor_m2547335780 (CollectionTraits_t1823801989 * __this, int32_t ___type0, MethodInfo_t * ___addMethod1, MethodInfo_t * ___countPropertyGetter2, MethodInfo_t * ___getEnumeratorMethod3, Type_t * ___elementType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionTraits::.cctor()
extern "C"  void CollectionTraits__cctor_m3449491709 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
