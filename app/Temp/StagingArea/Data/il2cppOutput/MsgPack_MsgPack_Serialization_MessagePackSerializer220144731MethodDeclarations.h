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

// MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>
struct MessagePackSerializer_1_t220144731;
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
#include "mscorlib_System_Decimal724701077.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m246293374_gshared (MessagePackSerializer_1_t220144731 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m246293374(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t220144731 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m246293374_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m3014234331_gshared (MessagePackSerializer_1_t220144731 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m3014234331(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t220144731 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m3014234331_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m69797571_gshared (MessagePackSerializer_1_t220144731 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m69797571(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m69797571_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m987771102_gshared (MessagePackSerializer_1_t220144731 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m987771102(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m987771102_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m282410722_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m282410722(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m282410722_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m1410053262_gshared (MessagePackSerializer_1_t220144731 * __this, Stream_t3255436806 * ___stream0, Decimal_t724701077  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m1410053262(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, Stream_t3255436806 *, Decimal_t724701077 , const MethodInfo*))MessagePackSerializer_1_Pack_m1410053262_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::Unpack(System.IO.Stream)
extern "C"  Decimal_t724701077  MessagePackSerializer_1_Unpack_m942579006_gshared (MessagePackSerializer_1_t220144731 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m942579006(__this, ___stream0, method) ((  Decimal_t724701077  (*) (MessagePackSerializer_1_t220144731 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m942579006_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m2157797848_gshared (MessagePackSerializer_1_t220144731 * __this, Packer_t1439452732 * ___packer0, Decimal_t724701077  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m2157797848(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, Packer_t1439452732 *, Decimal_t724701077 , const MethodInfo*))MessagePackSerializer_1_PackTo_m2157797848_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::UnpackFrom(MsgPack.Unpacker)
extern "C"  Decimal_t724701077  MessagePackSerializer_1_UnpackFrom_m2607010964_gshared (MessagePackSerializer_1_t220144731 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m2607010964(__this, ___unpacker0, method) ((  Decimal_t724701077  (*) (MessagePackSerializer_1_t220144731 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m2607010964_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::UnpackNil()
extern "C"  Decimal_t724701077  MessagePackSerializer_1_UnpackNil_m1785380090_gshared (MessagePackSerializer_1_t220144731 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m1785380090(__this, method) ((  Decimal_t724701077  (*) (MessagePackSerializer_1_t220144731 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1785380090_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m2107941914_gshared (MessagePackSerializer_1_t220144731 * __this, Unpacker_t998931393 * ___unpacker0, Decimal_t724701077  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m2107941914(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, Unpacker_t998931393 *, Decimal_t724701077 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m2107941914_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m3160246617_gshared (MessagePackSerializer_1_t220144731 * __this, Unpacker_t998931393 * ___unpacker0, Decimal_t724701077  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m3160246617(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, Unpacker_t998931393 *, Decimal_t724701077 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m3160246617_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2587228359_gshared (MessagePackSerializer_1_t220144731 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2587228359(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m2587228359_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3563141845_gshared (MessagePackSerializer_1_t220144731 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3563141845(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t220144731 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3563141845_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3939318051_gshared (MessagePackSerializer_1_t220144731 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3939318051(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t220144731 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3939318051_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Decimal>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m3387344271_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m3387344271(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m3387344271_gshared)(__this /* static, unused */, method)
