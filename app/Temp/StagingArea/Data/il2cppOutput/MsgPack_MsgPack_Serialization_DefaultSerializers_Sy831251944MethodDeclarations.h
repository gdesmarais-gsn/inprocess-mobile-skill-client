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

// MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer
struct System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_t831251944;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Collections.Generic.List`1<MsgPack.MessagePackObject>
struct List_1_t1407206183;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer__ctor_m539266200 (System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_t831251944 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer::PackToCore(MsgPack.Packer,System.Collections.Generic.List`1<MsgPack.MessagePackObject>)
extern "C"  void System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_PackToCore_m3754782545 (System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_t831251944 * __this, Packer_t1439452732 * ___packer0, List_1_t1407206183 * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MsgPack.MessagePackObject> MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  List_1_t1407206183 * System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_UnpackFromCore_m2365623135 (System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_t831251944 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Collections.Generic.List`1<MsgPack.MessagePackObject>)
extern "C"  void System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_UnpackToCore_m3995194289 (System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_t831251944 * __this, Unpacker_t998931393 * ___unpacker0, List_1_t1407206183 * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Collections.Generic.List`1<MsgPack.MessagePackObject>,System.Int32)
extern "C"  void System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_UnpackToCore_m1778158676 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, List_1_t1407206183 * ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_CreateInstance_m1520166860 (System_Collections_Generic_ListOfMessagePackObjectMessagePackSerializer_t831251944 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
