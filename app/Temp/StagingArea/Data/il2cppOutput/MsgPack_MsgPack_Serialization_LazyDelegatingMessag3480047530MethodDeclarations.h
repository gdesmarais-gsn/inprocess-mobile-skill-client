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

// MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Int32>
struct LazyDelegatingMessagePackSerializer_1_t3480047530;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.MessagePackSerializer`1<System.Int32>
struct MessagePackSerializer_1_t1567321102;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Int32>::.ctor(MsgPack.Serialization.SerializationContext,System.Object)
extern "C"  void LazyDelegatingMessagePackSerializer_1__ctor_m1773413232_gshared (LazyDelegatingMessagePackSerializer_1_t3480047530 * __this, SerializationContext_t1484625559 * ___ownerContext0, Il2CppObject * ___providerParameter1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1__ctor_m1773413232(__this, ___ownerContext0, ___providerParameter1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t3480047530 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1__ctor_m1773413232_gshared)(__this, ___ownerContext0, ___providerParameter1, method)
// MsgPack.Serialization.MessagePackSerializer`1<T> MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Int32>::GetDelegatedSerializer()
extern "C"  MessagePackSerializer_1_t1567321102 * LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m1893650746_gshared (LazyDelegatingMessagePackSerializer_1_t3480047530 * __this, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m1893650746(__this, method) ((  MessagePackSerializer_1_t1567321102 * (*) (LazyDelegatingMessagePackSerializer_1_t3480047530 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m1893650746_gshared)(__this, method)
// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Int32>::PackToCore(MsgPack.Packer,T)
extern "C"  void LazyDelegatingMessagePackSerializer_1_PackToCore_m3957029592_gshared (LazyDelegatingMessagePackSerializer_1_t3480047530 * __this, Packer_t1439452732 * ___packer0, int32_t ___objectTree1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_PackToCore_m3957029592(__this, ___packer0, ___objectTree1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t3480047530 *, Packer_t1439452732 *, int32_t, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_PackToCore_m3957029592_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Int32>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  int32_t LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m3147128728_gshared (LazyDelegatingMessagePackSerializer_1_t3480047530 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m3147128728(__this, ___unpacker0, method) ((  int32_t (*) (LazyDelegatingMessagePackSerializer_1_t3480047530 *, Unpacker_t998931393 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m3147128728_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Int32>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void LazyDelegatingMessagePackSerializer_1_UnpackToCore_m1267218514_gshared (LazyDelegatingMessagePackSerializer_1_t3480047530 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___collection1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_UnpackToCore_m1267218514(__this, ___unpacker0, ___collection1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t3480047530 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_UnpackToCore_m1267218514_gshared)(__this, ___unpacker0, ___collection1, method)
// System.String MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Int32>::ToString()
extern "C"  String_t* LazyDelegatingMessagePackSerializer_1_ToString_m2426748768_gshared (LazyDelegatingMessagePackSerializer_1_t3480047530 * __this, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_ToString_m2426748768(__this, method) ((  String_t* (*) (LazyDelegatingMessagePackSerializer_1_t3480047530 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_ToString_m2426748768_gshared)(__this, method)
