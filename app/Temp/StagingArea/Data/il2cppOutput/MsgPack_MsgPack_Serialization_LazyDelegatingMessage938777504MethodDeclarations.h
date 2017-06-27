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

// MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Boolean>
struct LazyDelegatingMessagePackSerializer_1_t938777504;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>
struct MessagePackSerializer_1_t3321018372;
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

// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext,System.Object)
extern "C"  void LazyDelegatingMessagePackSerializer_1__ctor_m3162030392_gshared (LazyDelegatingMessagePackSerializer_1_t938777504 * __this, SerializationContext_t1484625559 * ___ownerContext0, Il2CppObject * ___providerParameter1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1__ctor_m3162030392(__this, ___ownerContext0, ___providerParameter1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t938777504 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1__ctor_m3162030392_gshared)(__this, ___ownerContext0, ___providerParameter1, method)
// MsgPack.Serialization.MessagePackSerializer`1<T> MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Boolean>::GetDelegatedSerializer()
extern "C"  MessagePackSerializer_1_t3321018372 * LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m3470105778_gshared (LazyDelegatingMessagePackSerializer_1_t938777504 * __this, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m3470105778(__this, method) ((  MessagePackSerializer_1_t3321018372 * (*) (LazyDelegatingMessagePackSerializer_1_t938777504 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m3470105778_gshared)(__this, method)
// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Boolean>::PackToCore(MsgPack.Packer,T)
extern "C"  void LazyDelegatingMessagePackSerializer_1_PackToCore_m395002472_gshared (LazyDelegatingMessagePackSerializer_1_t938777504 * __this, Packer_t1439452732 * ___packer0, bool ___objectTree1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_PackToCore_m395002472(__this, ___packer0, ___objectTree1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t938777504 *, Packer_t1439452732 *, bool, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_PackToCore_m395002472_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Boolean>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  bool LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m1263270832_gshared (LazyDelegatingMessagePackSerializer_1_t938777504 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m1263270832(__this, ___unpacker0, method) ((  bool (*) (LazyDelegatingMessagePackSerializer_1_t938777504 *, Unpacker_t998931393 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m1263270832_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Boolean>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void LazyDelegatingMessagePackSerializer_1_UnpackToCore_m2807308346_gshared (LazyDelegatingMessagePackSerializer_1_t938777504 * __this, Unpacker_t998931393 * ___unpacker0, bool ___collection1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_UnpackToCore_m2807308346(__this, ___unpacker0, ___collection1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t938777504 *, Unpacker_t998931393 *, bool, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_UnpackToCore_m2807308346_gshared)(__this, ___unpacker0, ___collection1, method)
// System.String MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Boolean>::ToString()
extern "C"  String_t* LazyDelegatingMessagePackSerializer_1_ToString_m1050454132_gshared (LazyDelegatingMessagePackSerializer_1_t938777504 * __this, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_ToString_m1050454132(__this, method) ((  String_t* (*) (LazyDelegatingMessagePackSerializer_1_t938777504 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_ToString_m1050454132_gshared)(__this, method)
