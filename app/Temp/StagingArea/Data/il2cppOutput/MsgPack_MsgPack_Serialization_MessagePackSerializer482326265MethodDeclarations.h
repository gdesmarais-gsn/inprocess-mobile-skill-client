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

// MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>
struct MessagePackSerializer_1_t482326265;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m1440478008_gshared (MessagePackSerializer_1_t482326265 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m1440478008(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t482326265 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m1440478008_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m545119661_gshared (MessagePackSerializer_1_t482326265 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m545119661(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t482326265 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m545119661_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m388515229_gshared (MessagePackSerializer_1_t482326265 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m388515229(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m388515229_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m134894186_gshared (MessagePackSerializer_1_t482326265 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m134894186(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m134894186_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m3301248354_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m3301248354(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m3301248354_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m2785598554_gshared (MessagePackSerializer_1_t482326265 * __this, Stream_t3255436806 * ___stream0, uint16_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m2785598554(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, Stream_t3255436806 *, uint16_t, const MethodInfo*))MessagePackSerializer_1_Pack_m2785598554_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::Unpack(System.IO.Stream)
extern "C"  uint16_t MessagePackSerializer_1_Unpack_m3273844556_gshared (MessagePackSerializer_1_t482326265 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m3273844556(__this, ___stream0, method) ((  uint16_t (*) (MessagePackSerializer_1_t482326265 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m3273844556_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m3427642616_gshared (MessagePackSerializer_1_t482326265 * __this, Packer_t1439452732 * ___packer0, uint16_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m3427642616(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, Packer_t1439452732 *, uint16_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m3427642616_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::UnpackFrom(MsgPack.Unpacker)
extern "C"  uint16_t MessagePackSerializer_1_UnpackFrom_m2271382718_gshared (MessagePackSerializer_1_t482326265 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m2271382718(__this, ___unpacker0, method) ((  uint16_t (*) (MessagePackSerializer_1_t482326265 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m2271382718_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::UnpackNil()
extern "C"  uint16_t MessagePackSerializer_1_UnpackNil_m4037049032_gshared (MessagePackSerializer_1_t482326265 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m4037049032(__this, method) ((  uint16_t (*) (MessagePackSerializer_1_t482326265 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m4037049032_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m4169208634_gshared (MessagePackSerializer_1_t482326265 * __this, Unpacker_t998931393 * ___unpacker0, uint16_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m4169208634(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, Unpacker_t998931393 *, uint16_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m4169208634_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m248577543_gshared (MessagePackSerializer_1_t482326265 * __this, Unpacker_t998931393 * ___unpacker0, uint16_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m248577543(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, Unpacker_t998931393 *, uint16_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m248577543_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m579848945_gshared (MessagePackSerializer_1_t482326265 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m579848945(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m579848945_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3405212887_gshared (MessagePackSerializer_1_t482326265 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3405212887(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t482326265 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3405212887_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1823933529_gshared (MessagePackSerializer_1_t482326265 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1823933529(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t482326265 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1823933529_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt16>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m172701417_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m172701417(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m172701417_gshared)(__this /* static, unused */, method)
