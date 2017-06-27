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

// MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>
struct MessagePackSerializer_1_t188649323;
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
#include "mscorlib_System_DateTime693205669.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m691935642_gshared (MessagePackSerializer_1_t188649323 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m691935642(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t188649323 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m691935642_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m2840516893_gshared (MessagePackSerializer_1_t188649323 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m2840516893(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t188649323 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m2840516893_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m3136838709_gshared (MessagePackSerializer_1_t188649323 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3136838709(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m3136838709_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m993670152_gshared (MessagePackSerializer_1_t188649323 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m993670152(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m993670152_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m4132282176_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m4132282176(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m4132282176_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m2786429280_gshared (MessagePackSerializer_1_t188649323 * __this, Stream_t3255436806 * ___stream0, DateTime_t693205669  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m2786429280(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, Stream_t3255436806 *, DateTime_t693205669 , const MethodInfo*))MessagePackSerializer_1_Pack_m2786429280_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::Unpack(System.IO.Stream)
extern "C"  DateTime_t693205669  MessagePackSerializer_1_Unpack_m4241876734_gshared (MessagePackSerializer_1_t188649323 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m4241876734(__this, ___stream0, method) ((  DateTime_t693205669  (*) (MessagePackSerializer_1_t188649323 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m4241876734_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m190950666_gshared (MessagePackSerializer_1_t188649323 * __this, Packer_t1439452732 * ___packer0, DateTime_t693205669  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m190950666(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, Packer_t1439452732 *, DateTime_t693205669 , const MethodInfo*))MessagePackSerializer_1_PackTo_m190950666_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::UnpackFrom(MsgPack.Unpacker)
extern "C"  DateTime_t693205669  MessagePackSerializer_1_UnpackFrom_m3962739500_gshared (MessagePackSerializer_1_t188649323 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3962739500(__this, ___unpacker0, method) ((  DateTime_t693205669  (*) (MessagePackSerializer_1_t188649323 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3962739500_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::UnpackNil()
extern "C"  DateTime_t693205669  MessagePackSerializer_1_UnpackNil_m1262530010_gshared (MessagePackSerializer_1_t188649323 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m1262530010(__this, method) ((  DateTime_t693205669  (*) (MessagePackSerializer_1_t188649323 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1262530010_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m308367720_gshared (MessagePackSerializer_1_t188649323 * __this, Unpacker_t998931393 * ___unpacker0, DateTime_t693205669  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m308367720(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, Unpacker_t998931393 *, DateTime_t693205669 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m308367720_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m3479167051_gshared (MessagePackSerializer_1_t188649323 * __this, Unpacker_t998931393 * ___unpacker0, DateTime_t693205669  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m3479167051(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, Unpacker_t998931393 *, DateTime_t693205669 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m3479167051_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1444745993_gshared (MessagePackSerializer_1_t188649323 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1444745993(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1444745993_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2392441115_gshared (MessagePackSerializer_1_t188649323 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2392441115(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t188649323 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2392441115_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2785518273_gshared (MessagePackSerializer_1_t188649323 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2785518273(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t188649323 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2785518273_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTime>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m3521022305_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m3521022305(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m3521022305_gshared)(__this /* static, unused */, method)
