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

// MsgPack.Serialization.DefaultSerializers.Int16ArraySerializer
struct Int16ArraySerializer_t2119299061;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.Int16ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void Int16ArraySerializer__ctor_m1751819657 (Int16ArraySerializer_t2119299061 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int16ArraySerializer::PackToCore(MsgPack.Packer,System.Int16[])
extern "C"  void Int16ArraySerializer_PackToCore_m854469240 (Int16ArraySerializer_t2119299061 * __this, Packer_t1439452732 * ___packer0, Int16U5BU5D_t3104283263* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] MsgPack.Serialization.DefaultSerializers.Int16ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Int16U5BU5D_t3104283263* Int16ArraySerializer_UnpackFromCore_m2497796076 (Int16ArraySerializer_t2119299061 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Int16[])
extern "C"  void Int16ArraySerializer_UnpackToCore_m135330442 (Int16ArraySerializer_t2119299061 * __this, Unpacker_t998931393 * ___unpacker0, Int16U5BU5D_t3104283263* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Int16[],System.Int32)
extern "C"  void Int16ArraySerializer_UnpackToCore_m1975763303 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Int16U5BU5D_t3104283263* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
