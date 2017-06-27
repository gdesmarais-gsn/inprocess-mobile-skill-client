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

// MsgPack.Serialization.DefaultSerializers.StringArraySerializer
struct StringArraySerializer_t2935457984;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.String[]
struct StringU5BU5D_t1642385972;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.StringArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void StringArraySerializer__ctor_m2987465264 (StringArraySerializer_t2935457984 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.StringArraySerializer::PackToCore(MsgPack.Packer,System.String[])
extern "C"  void StringArraySerializer_PackToCore_m3260018658 (StringArraySerializer_t2935457984 * __this, Packer_t1439452732 * ___packer0, StringU5BU5D_t1642385972* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] MsgPack.Serialization.DefaultSerializers.StringArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  StringU5BU5D_t1642385972* StringArraySerializer_UnpackFromCore_m2212441544 (StringArraySerializer_t2935457984 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.StringArraySerializer::UnpackToCore(MsgPack.Unpacker,System.String[])
extern "C"  void StringArraySerializer_UnpackToCore_m3886956336 (StringArraySerializer_t2935457984 * __this, Unpacker_t998931393 * ___unpacker0, StringU5BU5D_t1642385972* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.StringArraySerializer::UnpackToCore(MsgPack.Unpacker,System.String[],System.Int32)
extern "C"  void StringArraySerializer_UnpackToCore_m2250047155 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, StringU5BU5D_t1642385972* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
