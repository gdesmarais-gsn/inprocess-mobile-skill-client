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

// MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>
struct MessagePackSerializer_1_t1645125675;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m3996402890_gshared (MessagePackSerializer_1_t1645125675 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m3996402890(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t1645125675 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m3996402890_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m4067003647_gshared (MessagePackSerializer_1_t1645125675 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m4067003647(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t1645125675 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m4067003647_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m3923079511_gshared (MessagePackSerializer_1_t1645125675 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3923079511(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m3923079511_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m1540097628_gshared (MessagePackSerializer_1_t1645125675 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1540097628(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m1540097628_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m3764693008_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m3764693008(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m3764693008_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m759526560_gshared (MessagePackSerializer_1_t1645125675 * __this, Stream_t3255436806 * ___stream0, uint32_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m759526560(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, Stream_t3255436806 *, uint32_t, const MethodInfo*))MessagePackSerializer_1_Pack_m759526560_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::Unpack(System.IO.Stream)
extern "C"  uint32_t MessagePackSerializer_1_Unpack_m2862441114_gshared (MessagePackSerializer_1_t1645125675 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2862441114(__this, ___stream0, method) ((  uint32_t (*) (MessagePackSerializer_1_t1645125675 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2862441114_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m510096830_gshared (MessagePackSerializer_1_t1645125675 * __this, Packer_t1439452732 * ___packer0, uint32_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m510096830(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, Packer_t1439452732 *, uint32_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m510096830_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::UnpackFrom(MsgPack.Unpacker)
extern "C"  uint32_t MessagePackSerializer_1_UnpackFrom_m2258263308_gshared (MessagePackSerializer_1_t1645125675 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m2258263308(__this, ___unpacker0, method) ((  uint32_t (*) (MessagePackSerializer_1_t1645125675 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m2258263308_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::UnpackNil()
extern "C"  uint32_t MessagePackSerializer_1_UnpackNil_m2650611286_gshared (MessagePackSerializer_1_t1645125675 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m2650611286(__this, method) ((  uint32_t (*) (MessagePackSerializer_1_t1645125675 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m2650611286_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m2219600620_gshared (MessagePackSerializer_1_t1645125675 * __this, Unpacker_t998931393 * ___unpacker0, uint32_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m2219600620(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, Unpacker_t998931393 *, uint32_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m2219600620_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m117190349_gshared (MessagePackSerializer_1_t1645125675 * __this, Unpacker_t998931393 * ___unpacker0, uint32_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m117190349(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, Unpacker_t998931393 *, uint32_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m117190349_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2921338275_gshared (MessagePackSerializer_1_t1645125675 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2921338275(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2921338275_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3461148701_gshared (MessagePackSerializer_1_t1645125675 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3461148701(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t1645125675 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3461148701_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1599292575_gshared (MessagePackSerializer_1_t1645125675 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1599292575(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1645125675 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1599292575_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt32>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m4006515619_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m4006515619(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m4006515619_gshared)(__this /* static, unused */, method)
