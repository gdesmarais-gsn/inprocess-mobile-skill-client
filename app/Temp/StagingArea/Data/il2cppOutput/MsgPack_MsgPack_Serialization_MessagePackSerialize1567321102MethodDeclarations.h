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

// MsgPack.Serialization.MessagePackSerializer`1<System.Int32>
struct MessagePackSerializer_1_t1567321102;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m3021609413_gshared (MessagePackSerializer_1_t1567321102 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m3021609413(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t1567321102 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m3021609413_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m614618692_gshared (MessagePackSerializer_1_t1567321102 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m614618692(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t1567321102 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m614618692_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m2800873072_gshared (MessagePackSerializer_1_t1567321102 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2800873072(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m2800873072_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m1966130289_gshared (MessagePackSerializer_1_t1567321102 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1966130289(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m1966130289_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m2566104601_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m2566104601(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m2566104601_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m3879822459_gshared (MessagePackSerializer_1_t1567321102 * __this, Stream_t3255436806 * ___stream0, int32_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m3879822459(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, Stream_t3255436806 *, int32_t, const MethodInfo*))MessagePackSerializer_1_Pack_m3879822459_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::Unpack(System.IO.Stream)
extern "C"  int32_t MessagePackSerializer_1_Unpack_m676191995_gshared (MessagePackSerializer_1_t1567321102 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m676191995(__this, ___stream0, method) ((  int32_t (*) (MessagePackSerializer_1_t1567321102 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m676191995_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m800572715_gshared (MessagePackSerializer_1_t1567321102 * __this, Packer_t1439452732 * ___packer0, int32_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m800572715(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, Packer_t1439452732 *, int32_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m800572715_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::UnpackFrom(MsgPack.Unpacker)
extern "C"  int32_t MessagePackSerializer_1_UnpackFrom_m3865344481_gshared (MessagePackSerializer_1_t1567321102 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3865344481(__this, ___unpacker0, method) ((  int32_t (*) (MessagePackSerializer_1_t1567321102 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3865344481_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::UnpackNil()
extern "C"  int32_t MessagePackSerializer_1_UnpackNil_m173813415_gshared (MessagePackSerializer_1_t1567321102 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m173813415(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t1567321102 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m173813415_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m3291283847_gshared (MessagePackSerializer_1_t1567321102 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m3291283847(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3291283847_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m3391867580_gshared (MessagePackSerializer_1_t1567321102 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m3391867580(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m3391867580_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3550022516_gshared (MessagePackSerializer_1_t1567321102 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3550022516(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3550022516_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2562873010_gshared (MessagePackSerializer_1_t1567321102 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2562873010(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t1567321102 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2562873010_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2542080886_gshared (MessagePackSerializer_1_t1567321102 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2542080886(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1567321102 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2542080886_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int32>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m2793622860_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m2793622860(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m2793622860_gshared)(__this /* static, unused */, method)
