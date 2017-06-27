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

// MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>
struct MessagePackSerializer_1_t955250860;
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
#include "MsgPack_MsgPack_MessagePackExtendedTypeObject1459807206.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m3905446684_gshared (MessagePackSerializer_1_t955250860 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m3905446684(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t955250860 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m3905446684_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m3329274501_gshared (MessagePackSerializer_1_t955250860 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m3329274501(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t955250860 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m3329274501_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m3297259389_gshared (MessagePackSerializer_1_t955250860 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3297259389(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m3297259389_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m1183059366_gshared (MessagePackSerializer_1_t955250860 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1183059366(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m1183059366_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m2270467646_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m2270467646(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m2270467646_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m178465202_gshared (MessagePackSerializer_1_t955250860 * __this, Stream_t3255436806 * ___stream0, MessagePackExtendedTypeObject_t1459807206  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m178465202(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, Stream_t3255436806 *, MessagePackExtendedTypeObject_t1459807206 , const MethodInfo*))MessagePackSerializer_1_Pack_m178465202_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::Unpack(System.IO.Stream)
extern "C"  MessagePackExtendedTypeObject_t1459807206  MessagePackSerializer_1_Unpack_m342227212_gshared (MessagePackSerializer_1_t955250860 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m342227212(__this, ___stream0, method) ((  MessagePackExtendedTypeObject_t1459807206  (*) (MessagePackSerializer_1_t955250860 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m342227212_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m3981318456_gshared (MessagePackSerializer_1_t955250860 * __this, Packer_t1439452732 * ___packer0, MessagePackExtendedTypeObject_t1459807206  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m3981318456(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, Packer_t1439452732 *, MessagePackExtendedTypeObject_t1459807206 , const MethodInfo*))MessagePackSerializer_1_PackTo_m3981318456_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::UnpackFrom(MsgPack.Unpacker)
extern "C"  MessagePackExtendedTypeObject_t1459807206  MessagePackSerializer_1_UnpackFrom_m113871466_gshared (MessagePackSerializer_1_t955250860 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m113871466(__this, ___unpacker0, method) ((  MessagePackExtendedTypeObject_t1459807206  (*) (MessagePackSerializer_1_t955250860 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m113871466_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::UnpackNil()
extern "C"  MessagePackExtendedTypeObject_t1459807206  MessagePackSerializer_1_UnpackNil_m3507628096_gshared (MessagePackSerializer_1_t955250860 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m3507628096(__this, method) ((  MessagePackExtendedTypeObject_t1459807206  (*) (MessagePackSerializer_1_t955250860 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m3507628096_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m3613130898_gshared (MessagePackSerializer_1_t955250860 * __this, Unpacker_t998931393 * ___unpacker0, MessagePackExtendedTypeObject_t1459807206  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m3613130898(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, Unpacker_t998931393 *, MessagePackExtendedTypeObject_t1459807206 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3613130898_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m2578441187_gshared (MessagePackSerializer_1_t955250860 * __this, Unpacker_t998931393 * ___unpacker0, MessagePackExtendedTypeObject_t1459807206  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m2578441187(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, Unpacker_t998931393 *, MessagePackExtendedTypeObject_t1459807206 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m2578441187_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m4066213649_gshared (MessagePackSerializer_1_t955250860 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m4066213649(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m4066213649_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m4246021283_gshared (MessagePackSerializer_1_t955250860 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m4246021283(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t955250860 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m4246021283_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3655566497_gshared (MessagePackSerializer_1_t955250860 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3655566497(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t955250860 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3655566497_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<MsgPack.MessagePackExtendedTypeObject>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m3521515329_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m3521515329(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m3521515329_gshared)(__this /* static, unused */, method)
