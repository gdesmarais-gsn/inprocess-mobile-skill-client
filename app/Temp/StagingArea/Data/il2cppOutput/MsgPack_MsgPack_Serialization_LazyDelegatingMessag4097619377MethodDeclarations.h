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

// MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>
struct LazyDelegatingMessagePackSerializer_1_t4097619377;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.MessagePackSerializer`1<System.Object>
struct MessagePackSerializer_1_t2184892949;
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

// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>::.ctor(MsgPack.Serialization.SerializationContext,System.Object)
extern "C"  void LazyDelegatingMessagePackSerializer_1__ctor_m4290594087_gshared (LazyDelegatingMessagePackSerializer_1_t4097619377 * __this, SerializationContext_t1484625559 * ___ownerContext0, Il2CppObject * ___providerParameter1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1__ctor_m4290594087(__this, ___ownerContext0, ___providerParameter1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t4097619377 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1__ctor_m4290594087_gshared)(__this, ___ownerContext0, ___providerParameter1, method)
// MsgPack.Serialization.MessagePackSerializer`1<T> MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>::GetDelegatedSerializer()
extern "C"  MessagePackSerializer_1_t2184892949 * LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m1860852167_gshared (LazyDelegatingMessagePackSerializer_1_t4097619377 * __this, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m1860852167(__this, method) ((  MessagePackSerializer_1_t2184892949 * (*) (LazyDelegatingMessagePackSerializer_1_t4097619377 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_GetDelegatedSerializer_m1860852167_gshared)(__this, method)
// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>::PackToCore(MsgPack.Packer,T)
extern "C"  void LazyDelegatingMessagePackSerializer_1_PackToCore_m3472461831_gshared (LazyDelegatingMessagePackSerializer_1_t4097619377 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_PackToCore_m3472461831(__this, ___packer0, ___objectTree1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t4097619377 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_PackToCore_m3472461831_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m2269859593_gshared (LazyDelegatingMessagePackSerializer_1_t4097619377 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m2269859593(__this, ___unpacker0, method) ((  Il2CppObject * (*) (LazyDelegatingMessagePackSerializer_1_t4097619377 *, Unpacker_t998931393 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_UnpackFromCore_m2269859593_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void LazyDelegatingMessagePackSerializer_1_UnpackToCore_m3395025931_gshared (LazyDelegatingMessagePackSerializer_1_t4097619377 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_UnpackToCore_m3395025931(__this, ___unpacker0, ___collection1, method) ((  void (*) (LazyDelegatingMessagePackSerializer_1_t4097619377 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_UnpackToCore_m3395025931_gshared)(__this, ___unpacker0, ___collection1, method)
// System.String MsgPack.Serialization.LazyDelegatingMessagePackSerializer`1<System.Object>::ToString()
extern "C"  String_t* LazyDelegatingMessagePackSerializer_1_ToString_m1936740393_gshared (LazyDelegatingMessagePackSerializer_1_t4097619377 * __this, const MethodInfo* method);
#define LazyDelegatingMessagePackSerializer_1_ToString_m1936740393(__this, method) ((  String_t* (*) (LazyDelegatingMessagePackSerializer_1_t4097619377 *, const MethodInfo*))LazyDelegatingMessagePackSerializer_1_ToString_m1936740393_gshared)(__this, method)
