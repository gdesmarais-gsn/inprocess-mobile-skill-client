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

// MsgPack.Serialization.MessagePackSerializer`1<System.SByte>
struct MessagePackSerializer_1_t4244828499;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m1652451538_gshared (MessagePackSerializer_1_t4244828499 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m1652451538(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t4244828499 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m1652451538_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m3331440865_gshared (MessagePackSerializer_1_t4244828499 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m3331440865(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t4244828499 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m3331440865_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m2581566393_gshared (MessagePackSerializer_1_t4244828499 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2581566393(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m2581566393_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m965410266_gshared (MessagePackSerializer_1_t4244828499 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m965410266(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m965410266_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m265357602_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m265357602(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m265357602_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m944339650_gshared (MessagePackSerializer_1_t4244828499 * __this, Stream_t3255436806 * ___stream0, int8_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m944339650(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, Stream_t3255436806 *, int8_t, const MethodInfo*))MessagePackSerializer_1_Pack_m944339650_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::Unpack(System.IO.Stream)
extern "C"  int8_t MessagePackSerializer_1_Unpack_m2989068230_gshared (MessagePackSerializer_1_t4244828499 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2989068230(__this, ___stream0, method) ((  int8_t (*) (MessagePackSerializer_1_t4244828499 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2989068230_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m3460840096_gshared (MessagePackSerializer_1_t4244828499 * __this, Packer_t1439452732 * ___packer0, int8_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m3460840096(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, Packer_t1439452732 *, int8_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m3460840096_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::UnpackFrom(MsgPack.Unpacker)
extern "C"  int8_t MessagePackSerializer_1_UnpackFrom_m3664789788_gshared (MessagePackSerializer_1_t4244828499 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3664789788(__this, ___unpacker0, method) ((  int8_t (*) (MessagePackSerializer_1_t4244828499 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3664789788_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::UnpackNil()
extern "C"  int8_t MessagePackSerializer_1_UnpackNil_m2133650690_gshared (MessagePackSerializer_1_t4244828499 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m2133650690(__this, method) ((  int8_t (*) (MessagePackSerializer_1_t4244828499 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m2133650690_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m1127040018_gshared (MessagePackSerializer_1_t4244828499 * __this, Unpacker_t998931393 * ___unpacker0, int8_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m1127040018(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, Unpacker_t998931393 *, int8_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m1127040018_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m1255634483_gshared (MessagePackSerializer_1_t4244828499 * __this, Unpacker_t998931393 * ___unpacker0, int8_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m1255634483(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, Unpacker_t998931393 *, int8_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m1255634483_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m4293601021_gshared (MessagePackSerializer_1_t4244828499 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m4293601021(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m4293601021_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m4028637623_gshared (MessagePackSerializer_1_t4244828499 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m4028637623(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t4244828499 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m4028637623_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3427866093_gshared (MessagePackSerializer_1_t4244828499 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3427866093(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t4244828499 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3427866093_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m2241083221_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m2241083221(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m2241083221_gshared)(__this /* static, unused */, method)
