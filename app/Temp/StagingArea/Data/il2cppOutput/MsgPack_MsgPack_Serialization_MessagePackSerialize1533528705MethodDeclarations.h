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

// MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>
struct MessagePackSerializer_1_t1533528705;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.IO.Stream
struct Stream_t3255436806;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_PackerCompatibilityOptions4206945086.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Nullable_1_gen2470011401.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m3393740157_gshared (MessagePackSerializer_1_t1533528705 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m3393740157(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t1533528705 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m3393740157_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m3162249342_gshared (MessagePackSerializer_1_t1533528705 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m3162249342(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t1533528705 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m3162249342_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m1864083226_gshared (MessagePackSerializer_1_t1533528705 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1864083226(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m1864083226_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m407637901_gshared (MessagePackSerializer_1_t1533528705 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m407637901(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m407637901_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m799869533_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m799869533(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m799869533_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m1853108987_gshared (MessagePackSerializer_1_t1533528705 * __this, Stream_t3255436806 * ___stream0, MessagePackObject_t2038085051  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m1853108987(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, Stream_t3255436806 *, MessagePackObject_t2038085051 , const MethodInfo*))MessagePackSerializer_1_Pack_m1853108987_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::Unpack(System.IO.Stream)
extern "C"  MessagePackObject_t2038085051  MessagePackSerializer_1_Unpack_m1181681199_gshared (MessagePackSerializer_1_t1533528705 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m1181681199(__this, ___stream0, method) ((  MessagePackObject_t2038085051  (*) (MessagePackSerializer_1_t1533528705 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m1181681199_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m1262110875_gshared (MessagePackSerializer_1_t1533528705 * __this, Packer_t1439452732 * ___packer0, MessagePackObject_t2038085051  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m1262110875(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, Packer_t1439452732 *, MessagePackObject_t2038085051 , const MethodInfo*))MessagePackSerializer_1_PackTo_m1262110875_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::UnpackFrom(MsgPack.Unpacker)
extern "C"  MessagePackObject_t2038085051  MessagePackSerializer_1_UnpackFrom_m918696221_gshared (MessagePackSerializer_1_t1533528705 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m918696221(__this, ___unpacker0, method) ((  MessagePackObject_t2038085051  (*) (MessagePackSerializer_1_t1533528705 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m918696221_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::UnpackNil()
extern "C"  MessagePackObject_t2038085051  MessagePackSerializer_1_UnpackNil_m1250282859_gshared (MessagePackSerializer_1_t1533528705 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m1250282859(__this, method) ((  MessagePackObject_t2038085051  (*) (MessagePackSerializer_1_t1533528705 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1250282859_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m2973921111_gshared (MessagePackSerializer_1_t1533528705 * __this, Unpacker_t998931393 * ___unpacker0, MessagePackObject_t2038085051  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m2973921111(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, Unpacker_t998931393 *, MessagePackObject_t2038085051 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m2973921111_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m593580326_gshared (MessagePackSerializer_1_t1533528705 * __this, Unpacker_t998931393 * ___unpacker0, MessagePackObject_t2038085051  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m593580326(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, Unpacker_t998931393 *, MessagePackObject_t2038085051 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m593580326_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1590547758_gshared (MessagePackSerializer_1_t1533528705 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1590547758(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1590547758_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3922791702_gshared (MessagePackSerializer_1_t1533528705 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3922791702(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t1533528705 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3922791702_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3356578588_gshared (MessagePackSerializer_1_t1533528705 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3356578588(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1533528705 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3356578588_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackObject>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m420648070_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m420648070(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m420648070_gshared)(__this /* static, unused */, method)
