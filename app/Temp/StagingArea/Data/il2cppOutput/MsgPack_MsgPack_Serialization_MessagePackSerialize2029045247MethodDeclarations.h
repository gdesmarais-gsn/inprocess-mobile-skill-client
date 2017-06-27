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

// MsgPack.Serialization.MessagePackSerializer`1<System.Guid>
struct MessagePackSerializer_1_t2029045247;
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
#include "mscorlib_System_Guid2533601593.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m3802070974_gshared (MessagePackSerializer_1_t2029045247 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m3802070974(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t2029045247 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m3802070974_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m2604697943_gshared (MessagePackSerializer_1_t2029045247 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m2604697943(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t2029045247 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m2604697943_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m2012703303_gshared (MessagePackSerializer_1_t2029045247 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2012703303(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m2012703303_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m2659717824_gshared (MessagePackSerializer_1_t2029045247 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2659717824(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2659717824_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m4128567356_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m4128567356(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m4128567356_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m3285319720_gshared (MessagePackSerializer_1_t2029045247 * __this, Stream_t3255436806 * ___stream0, Guid_t2533601593  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m3285319720(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, Stream_t3255436806 *, Guid_t2533601593 , const MethodInfo*))MessagePackSerializer_1_Pack_m3285319720_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::Unpack(System.IO.Stream)
extern "C"  Guid_t2533601593  MessagePackSerializer_1_Unpack_m2537475378_gshared (MessagePackSerializer_1_t2029045247 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2537475378(__this, ___stream0, method) ((  Guid_t2533601593  (*) (MessagePackSerializer_1_t2029045247 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2537475378_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m1611624110_gshared (MessagePackSerializer_1_t2029045247 * __this, Packer_t1439452732 * ___packer0, Guid_t2533601593  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m1611624110(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, Packer_t1439452732 *, Guid_t2533601593 , const MethodInfo*))MessagePackSerializer_1_PackTo_m1611624110_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::UnpackFrom(MsgPack.Unpacker)
extern "C"  Guid_t2533601593  MessagePackSerializer_1_UnpackFrom_m1421564432_gshared (MessagePackSerializer_1_t2029045247 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m1421564432(__this, ___unpacker0, method) ((  Guid_t2533601593  (*) (MessagePackSerializer_1_t2029045247 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m1421564432_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::UnpackNil()
extern "C"  Guid_t2533601593  MessagePackSerializer_1_UnpackNil_m3848051558_gshared (MessagePackSerializer_1_t2029045247 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m3848051558(__this, method) ((  Guid_t2533601593  (*) (MessagePackSerializer_1_t2029045247 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m3848051558_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m1981930908_gshared (MessagePackSerializer_1_t2029045247 * __this, Unpacker_t998931393 * ___unpacker0, Guid_t2533601593  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m1981930908(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, Unpacker_t998931393 *, Guid_t2533601593 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m1981930908_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m1785210121_gshared (MessagePackSerializer_1_t2029045247 * __this, Unpacker_t998931393 * ___unpacker0, Guid_t2533601593  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m1785210121(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, Unpacker_t998931393 *, Guid_t2533601593 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m1785210121_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3867873787_gshared (MessagePackSerializer_1_t2029045247 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3867873787(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3867873787_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1139340393_gshared (MessagePackSerializer_1_t2029045247 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1139340393(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t2029045247 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1139340393_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2064828087_gshared (MessagePackSerializer_1_t2029045247 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2064828087(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2029045247 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2064828087_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Guid>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m3844250651_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m3844250651(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m3844250651_gshared)(__this /* static, unused */, method)
