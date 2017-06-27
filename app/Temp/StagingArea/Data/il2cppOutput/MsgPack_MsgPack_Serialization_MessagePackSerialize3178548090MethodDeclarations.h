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

// MsgPack.Serialization.MessagePackSerializer`1<System.Byte>
struct MessagePackSerializer_1_t3178548090;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m1935702461_gshared (MessagePackSerializer_1_t3178548090 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m1935702461(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t3178548090 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m1935702461_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m3004445638_gshared (MessagePackSerializer_1_t3178548090 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m3004445638(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t3178548090 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m3004445638_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m2966648538_gshared (MessagePackSerializer_1_t3178548090 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2966648538(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m2966648538_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m1627388989_gshared (MessagePackSerializer_1_t3178548090 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1627388989(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m1627388989_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m459028093_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m459028093(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m459028093_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m186145715_gshared (MessagePackSerializer_1_t3178548090 * __this, Stream_t3255436806 * ___stream0, uint8_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m186145715(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, Stream_t3255436806 *, uint8_t, const MethodInfo*))MessagePackSerializer_1_Pack_m186145715_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::Unpack(System.IO.Stream)
extern "C"  uint8_t MessagePackSerializer_1_Unpack_m1935006359_gshared (MessagePackSerializer_1_t3178548090 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m1935006359(__this, ___stream0, method) ((  uint8_t (*) (MessagePackSerializer_1_t3178548090 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m1935006359_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m560861403_gshared (MessagePackSerializer_1_t3178548090 * __this, Packer_t1439452732 * ___packer0, uint8_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m560861403(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, Packer_t1439452732 *, uint8_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m560861403_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::UnpackFrom(MsgPack.Unpacker)
extern "C"  uint8_t MessagePackSerializer_1_UnpackFrom_m3925399029_gshared (MessagePackSerializer_1_t3178548090 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3925399029(__this, ___unpacker0, method) ((  uint8_t (*) (MessagePackSerializer_1_t3178548090 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3925399029_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::UnpackNil()
extern "C"  uint8_t MessagePackSerializer_1_UnpackNil_m4250937195_gshared (MessagePackSerializer_1_t3178548090 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m4250937195(__this, method) ((  uint8_t (*) (MessagePackSerializer_1_t3178548090 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m4250937195_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m184656743_gshared (MessagePackSerializer_1_t3178548090 * __this, Unpacker_t998931393 * ___unpacker0, uint8_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m184656743(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, Unpacker_t998931393 *, uint8_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m184656743_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m1268074438_gshared (MessagePackSerializer_1_t3178548090 * __this, Unpacker_t998931393 * ___unpacker0, uint8_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m1268074438(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, Unpacker_t998931393 *, uint8_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m1268074438_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3310922502_gshared (MessagePackSerializer_1_t3178548090 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3310922502(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3310922502_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2997199046_gshared (MessagePackSerializer_1_t3178548090 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2997199046(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t3178548090 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2997199046_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m221372132_gshared (MessagePackSerializer_1_t3178548090 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m221372132(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3178548090 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m221372132_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m624931326_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m624931326(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m624931326_gshared)(__this /* static, unused */, method)
