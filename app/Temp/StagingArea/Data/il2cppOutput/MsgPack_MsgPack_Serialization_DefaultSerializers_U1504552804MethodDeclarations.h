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

// MsgPack.Serialization.DefaultSerializers.UnityArraySerializer
struct UnityArraySerializer_t1504552804;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.UnityArraySerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityArraySerializer__ctor_m2707137291 (UnityArraySerializer_t1504552804 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___itemType1, PolymorphismSchema_t2690808062 * ___itemsSchema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityArraySerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityArraySerializer_PackToCore_m600361604 (UnityArraySerializer_t1504552804 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.UnityArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityArraySerializer_UnpackFromCore_m3127576964 (UnityArraySerializer_t1504552804 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Object)
extern "C"  void UnityArraySerializer_UnpackToCore_m3236568870 (UnityArraySerializer_t1504552804 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Collections.IList,System.Int32)
extern "C"  void UnityArraySerializer_UnpackToCore_m2879834894 (UnityArraySerializer_t1504552804 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
