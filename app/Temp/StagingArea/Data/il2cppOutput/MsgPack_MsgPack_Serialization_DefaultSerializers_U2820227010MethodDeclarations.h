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

// MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer
struct UnityMultidimensionalArraySerializer_t2820227010;
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
// System.Array
struct Il2CppArray;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Action`1<System.Int32[]>
struct Action_1_t2832199023;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityMultidimensionalArraySerializer__ctor_m805364467 (UnityMultidimensionalArraySerializer_t2820227010 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___itemType1, PolymorphismSchema_t2690808062 * ___itemsSchema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityMultidimensionalArraySerializer_PackToCore_m2535775010 (UnityMultidimensionalArraySerializer_t2820227010 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::PackArrayCore(MsgPack.Packer,System.Array)
extern "C"  void UnityMultidimensionalArraySerializer_PackArrayCore_m1673116374 (UnityMultidimensionalArraySerializer_t2820227010 * __this, Packer_t1439452732 * ___packer0, Il2CppArray * ___array1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::GetArrayMetadata(System.Array,System.Int32[]&,System.Int32[]&)
extern "C"  void UnityMultidimensionalArraySerializer_GetArrayMetadata_m992807705 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Int32U5BU5D_t3030399641** ___lengths1, Int32U5BU5D_t3030399641** ___lowerBounds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityMultidimensionalArraySerializer_UnpackFromCore_m3189735414 (UnityMultidimensionalArraySerializer_t2820227010 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::ReadArrayMetadata(MsgPack.Unpacker,System.Int32[]&,System.Int32[]&)
extern "C"  void UnityMultidimensionalArraySerializer_ReadArrayMetadata_m640955758 (UnityMultidimensionalArraySerializer_t2820227010 * __this, Unpacker_t998931393 * ___metadataUnpacker0, Int32U5BU5D_t3030399641** ___lengths1, Int32U5BU5D_t3030399641** ___lowerBounds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnityMultidimensionalArraySerializer::ForEach(System.Array,System.Int32,System.Int32[],System.Int32[],System.Action`1<System.Int32[]>)
extern "C"  void UnityMultidimensionalArraySerializer_ForEach_m2933084375 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___totalLength1, Int32U5BU5D_t3030399641* ___lowerBounds2, Int32U5BU5D_t3030399641* ___lengths3, Action_1_t2832199023 * ___action4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
