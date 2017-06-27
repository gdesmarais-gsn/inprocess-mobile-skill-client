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

// MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectDictionaryMessagePackSerializer
struct MsgPack_MessagePackObjectDictionaryMessagePackSerializer_t4223362754;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.MessagePackObjectDictionary
struct MessagePackObjectDictionary_t4175726983;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary4175726983.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectDictionaryMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MsgPack_MessagePackObjectDictionaryMessagePackSerializer__ctor_m3731512378 (MsgPack_MessagePackObjectDictionaryMessagePackSerializer_t4223362754 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectDictionaryMessagePackSerializer::PackToCore(MsgPack.Packer,MsgPack.MessagePackObjectDictionary)
extern "C"  void MsgPack_MessagePackObjectDictionaryMessagePackSerializer_PackToCore_m3475884233 (MsgPack_MessagePackObjectDictionaryMessagePackSerializer_t4223362754 * __this, Packer_t1439452732 * ___packer0, MessagePackObjectDictionary_t4175726983 * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObjectDictionary MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectDictionaryMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  MessagePackObjectDictionary_t4175726983 * MsgPack_MessagePackObjectDictionaryMessagePackSerializer_UnpackFromCore_m257525207 (MsgPack_MessagePackObjectDictionaryMessagePackSerializer_t4223362754 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectDictionaryMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,MsgPack.MessagePackObjectDictionary)
extern "C"  void MsgPack_MessagePackObjectDictionaryMessagePackSerializer_UnpackToCore_m1437458369 (MsgPack_MessagePackObjectDictionaryMessagePackSerializer_t4223362754 * __this, Unpacker_t998931393 * ___unpacker0, MessagePackObjectDictionary_t4175726983 * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectDictionaryMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Int32,MsgPack.MessagePackObjectDictionary)
extern "C"  void MsgPack_MessagePackObjectDictionaryMessagePackSerializer_UnpackToCore_m3438698984 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, int32_t ___count1, MessagePackObjectDictionary_t4175726983 * ___collection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectDictionaryMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * MsgPack_MessagePackObjectDictionaryMessagePackSerializer_CreateInstance_m2710998468 (MsgPack_MessagePackObjectDictionaryMessagePackSerializer_t4223362754 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
