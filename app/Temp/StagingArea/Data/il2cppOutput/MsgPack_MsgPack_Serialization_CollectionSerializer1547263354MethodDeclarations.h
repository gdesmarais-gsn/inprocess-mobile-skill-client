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

// MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>
struct DictionaryMessagePackSerializerBase_3_t1547263354;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>::PackToCore(MsgPack.Packer,TDictionary)
extern "C"  void DictionaryMessagePackSerializerBase_3_PackToCore_m541141871_gshared (DictionaryMessagePackSerializerBase_3_t1547263354 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define DictionaryMessagePackSerializerBase_3_PackToCore_m541141871(__this, ___packer0, ___objectTree1, method) ((  void (*) (DictionaryMessagePackSerializerBase_3_t1547263354 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))DictionaryMessagePackSerializerBase_3_PackToCore_m541141871_gshared)(__this, ___packer0, ___objectTree1, method)
// TDictionary MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * DictionaryMessagePackSerializerBase_3_UnpackFromCore_m1168939365_gshared (DictionaryMessagePackSerializerBase_3_t1547263354 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define DictionaryMessagePackSerializerBase_3_UnpackFromCore_m1168939365(__this, ___unpacker0, method) ((  Il2CppObject * (*) (DictionaryMessagePackSerializerBase_3_t1547263354 *, Unpacker_t998931393 *, const MethodInfo*))DictionaryMessagePackSerializerBase_3_UnpackFromCore_m1168939365_gshared)(__this, ___unpacker0, method)
// TDictionary MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>::InternalUnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * DictionaryMessagePackSerializerBase_3_InternalUnpackFromCore_m3817826988_gshared (DictionaryMessagePackSerializerBase_3_t1547263354 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define DictionaryMessagePackSerializerBase_3_InternalUnpackFromCore_m3817826988(__this, ___unpacker0, method) ((  Il2CppObject * (*) (DictionaryMessagePackSerializerBase_3_t1547263354 *, Unpacker_t998931393 *, const MethodInfo*))DictionaryMessagePackSerializerBase_3_InternalUnpackFromCore_m3817826988_gshared)(__this, ___unpacker0, method)
// System.Object MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>::MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory.CreateInstance(System.Int32)
extern "C"  Il2CppObject * DictionaryMessagePackSerializerBase_3_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m2278744238_gshared (DictionaryMessagePackSerializerBase_3_t1547263354 * __this, int32_t ___initialCapacity0, const MethodInfo* method);
#define DictionaryMessagePackSerializerBase_3_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m2278744238(__this, ___initialCapacity0, method) ((  Il2CppObject * (*) (DictionaryMessagePackSerializerBase_3_t1547263354 *, int32_t, const MethodInfo*))DictionaryMessagePackSerializerBase_3_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m2278744238_gshared)(__this, ___initialCapacity0, method)
// System.Void MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>::UnpackToCore(MsgPack.Unpacker,TDictionary)
extern "C"  void DictionaryMessagePackSerializerBase_3_UnpackToCore_m52527547_gshared (DictionaryMessagePackSerializerBase_3_t1547263354 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define DictionaryMessagePackSerializerBase_3_UnpackToCore_m52527547(__this, ___unpacker0, ___collection1, method) ((  void (*) (DictionaryMessagePackSerializerBase_3_t1547263354 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))DictionaryMessagePackSerializerBase_3_UnpackToCore_m52527547_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>::UnpackToCore(MsgPack.Unpacker,TDictionary,System.Int32)
extern "C"  void DictionaryMessagePackSerializerBase_3_UnpackToCore_m1835256288_gshared (DictionaryMessagePackSerializerBase_3_t1547263354 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, int32_t ___itemsCount2, const MethodInfo* method);
#define DictionaryMessagePackSerializerBase_3_UnpackToCore_m1835256288(__this, ___unpacker0, ___collection1, ___itemsCount2, method) ((  void (*) (DictionaryMessagePackSerializerBase_3_t1547263354 *, Unpacker_t998931393 *, Il2CppObject *, int32_t, const MethodInfo*))DictionaryMessagePackSerializerBase_3_UnpackToCore_m1835256288_gshared)(__this, ___unpacker0, ___collection1, ___itemsCount2, method)
// System.Void MsgPack.Serialization.CollectionSerializers.DictionaryMessagePackSerializerBase`3<System.Object,System.Object,System.Object>::AddItem(TDictionary,TKey,TValue)
extern "C"  void DictionaryMessagePackSerializerBase_3_AddItem_m2113376736_gshared (DictionaryMessagePackSerializerBase_3_t1547263354 * __this, Il2CppObject * ___dictionary0, Il2CppObject * ___key1, Il2CppObject * ___value2, const MethodInfo* method);
#define DictionaryMessagePackSerializerBase_3_AddItem_m2113376736(__this, ___dictionary0, ___key1, ___value2, method) ((  void (*) (DictionaryMessagePackSerializerBase_3_t1547263354 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))DictionaryMessagePackSerializerBase_3_AddItem_m2113376736_gshared)(__this, ___dictionary0, ___key1, ___value2, method)
