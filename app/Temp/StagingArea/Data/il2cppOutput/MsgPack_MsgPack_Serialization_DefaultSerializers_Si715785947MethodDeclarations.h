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

// MsgPack.Serialization.DefaultSerializers.SingleArraySerializer
struct SingleArraySerializer_t715785947;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Single[]
struct SingleU5BU5D_t577127397;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.SingleArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void SingleArraySerializer__ctor_m1954243499 (SingleArraySerializer_t715785947 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.SingleArraySerializer::PackToCore(MsgPack.Packer,System.Single[])
extern "C"  void SingleArraySerializer_PackToCore_m3708675362 (SingleArraySerializer_t715785947 * __this, Packer_t1439452732 * ___packer0, SingleU5BU5D_t577127397* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] MsgPack.Serialization.DefaultSerializers.SingleArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  SingleU5BU5D_t577127397* SingleArraySerializer_UnpackFromCore_m1494635496 (SingleArraySerializer_t715785947 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.SingleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Single[])
extern "C"  void SingleArraySerializer_UnpackToCore_m4557936 (SingleArraySerializer_t715785947 * __this, Unpacker_t998931393 * ___unpacker0, SingleU5BU5D_t577127397* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.SingleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Single[],System.Int32)
extern "C"  void SingleArraySerializer_UnpackToCore_m3662890227 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, SingleU5BU5D_t577127397* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
