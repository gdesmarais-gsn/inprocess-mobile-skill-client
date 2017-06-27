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

// MsgPack.Serialization.MessagePackSerializer`1<System.Double>
struct MessagePackSerializer_1_t3573459335;
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
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Double>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m937881966_gshared (MessagePackSerializer_1_t3573459335 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m937881966(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t3573459335 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m937881966_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Double>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m3094723241_gshared (MessagePackSerializer_1_t3573459335 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m3094723241(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t3573459335 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m3094723241_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m2054437273_gshared (MessagePackSerializer_1_t3573459335 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2054437273(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m2054437273_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m896261636_gshared (MessagePackSerializer_1_t3573459335 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m896261636(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m896261636_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Double>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m2914222476_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m2914222476(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m2914222476_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m1911390756_gshared (MessagePackSerializer_1_t3573459335 * __this, Stream_t3255436806 * ___stream0, double ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m1911390756(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, Stream_t3255436806 *, double, const MethodInfo*))MessagePackSerializer_1_Pack_m1911390756_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Double>::Unpack(System.IO.Stream)
extern "C"  double MessagePackSerializer_1_Unpack_m2470259098_gshared (MessagePackSerializer_1_t3573459335 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2470259098(__this, ___stream0, method) ((  double (*) (MessagePackSerializer_1_t3573459335 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2470259098_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m2825811782_gshared (MessagePackSerializer_1_t3573459335 * __this, Packer_t1439452732 * ___packer0, double ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m2825811782(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, Packer_t1439452732 *, double, const MethodInfo*))MessagePackSerializer_1_PackTo_m2825811782_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Double>::UnpackFrom(MsgPack.Unpacker)
extern "C"  double MessagePackSerializer_1_UnpackFrom_m2101534056_gshared (MessagePackSerializer_1_t3573459335 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m2101534056(__this, ___unpacker0, method) ((  double (*) (MessagePackSerializer_1_t3573459335 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m2101534056_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Double>::UnpackNil()
extern "C"  double MessagePackSerializer_1_UnpackNil_m2501448990_gshared (MessagePackSerializer_1_t3573459335 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m2501448990(__this, method) ((  double (*) (MessagePackSerializer_1_t3573459335 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m2501448990_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m336395268_gshared (MessagePackSerializer_1_t3573459335 * __this, Unpacker_t998931393 * ___unpacker0, double ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m336395268(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, Unpacker_t998931393 *, double, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m336395268_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m954954791_gshared (MessagePackSerializer_1_t3573459335 * __this, Unpacker_t998931393 * ___unpacker0, double ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m954954791(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, Unpacker_t998931393 *, double, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m954954791_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m941557421_gshared (MessagePackSerializer_1_t3573459335 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m941557421(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m941557421_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Double>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3047384695_gshared (MessagePackSerializer_1_t3573459335 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3047384695(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t3573459335 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3047384695_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m688398789_gshared (MessagePackSerializer_1_t3573459335 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m688398789(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3573459335 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m688398789_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Double>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m224581501_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m224581501(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m224581501_gshared)(__this /* static, unused */, method)
