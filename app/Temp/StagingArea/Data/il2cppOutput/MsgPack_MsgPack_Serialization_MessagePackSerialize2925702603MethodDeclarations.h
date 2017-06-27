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

// MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>
struct MessagePackSerializer_1_t2925702603;
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
#include "mscorlib_System_TimeSpan3430258949.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m3035544138_gshared (MessagePackSerializer_1_t2925702603 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m3035544138(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t2925702603 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m3035544138_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m4076071105_gshared (MessagePackSerializer_1_t2925702603 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m4076071105(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t2925702603 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m4076071105_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m1039570937_gshared (MessagePackSerializer_1_t2925702603 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1039570937(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m1039570937_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m3672894360_gshared (MessagePackSerializer_1_t2925702603 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3672894360(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m3672894360_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m2230272208_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m2230272208(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m2230272208_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m3161098476_gshared (MessagePackSerializer_1_t2925702603 * __this, Stream_t3255436806 * ___stream0, TimeSpan_t3430258949  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m3161098476(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, Stream_t3255436806 *, TimeSpan_t3430258949 , const MethodInfo*))MessagePackSerializer_1_Pack_m3161098476_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::Unpack(System.IO.Stream)
extern "C"  TimeSpan_t3430258949  MessagePackSerializer_1_Unpack_m3177862378_gshared (MessagePackSerializer_1_t2925702603 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m3177862378(__this, ___stream0, method) ((  TimeSpan_t3430258949  (*) (MessagePackSerializer_1_t2925702603 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m3177862378_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m1307634918_gshared (MessagePackSerializer_1_t2925702603 * __this, Packer_t1439452732 * ___packer0, TimeSpan_t3430258949  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m1307634918(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, Packer_t1439452732 *, TimeSpan_t3430258949 , const MethodInfo*))MessagePackSerializer_1_PackTo_m1307634918_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::UnpackFrom(MsgPack.Unpacker)
extern "C"  TimeSpan_t3430258949  MessagePackSerializer_1_UnpackFrom_m2529069452_gshared (MessagePackSerializer_1_t2925702603 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m2529069452(__this, ___unpacker0, method) ((  TimeSpan_t3430258949  (*) (MessagePackSerializer_1_t2925702603 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m2529069452_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::UnpackNil()
extern "C"  TimeSpan_t3430258949  MessagePackSerializer_1_UnpackNil_m1517121942_gshared (MessagePackSerializer_1_t2925702603 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m1517121942(__this, method) ((  TimeSpan_t3430258949  (*) (MessagePackSerializer_1_t2925702603 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1517121942_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m4017527180_gshared (MessagePackSerializer_1_t2925702603 * __this, Unpacker_t998931393 * ___unpacker0, TimeSpan_t3430258949  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m4017527180(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, Unpacker_t998931393 *, TimeSpan_t3430258949 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m4017527180_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m4254014459_gshared (MessagePackSerializer_1_t2925702603 * __this, Unpacker_t998931393 * ___unpacker0, TimeSpan_t3430258949  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m4254014459(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, Unpacker_t998931393 *, TimeSpan_t3430258949 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m4254014459_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2449964589_gshared (MessagePackSerializer_1_t2925702603 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2449964589(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2449964589_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3903131323_gshared (MessagePackSerializer_1_t2925702603 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3903131323(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t2925702603 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3903131323_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2090523293_gshared (MessagePackSerializer_1_t2925702603 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2090523293(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2925702603 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2090523293_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.TimeSpan>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m3490456021_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m3490456021(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m3490456021_gshared)(__this /* static, unused */, method)
