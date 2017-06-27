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

// MsgPack.Serialization.MessagePackSerializer`1<System.Int64>
struct MessagePackSerializer_1_t404521691;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m1996169082_gshared (MessagePackSerializer_1_t404521691 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m1996169082(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t404521691 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m1996169082_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m1316433517_gshared (MessagePackSerializer_1_t404521691 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m1316433517(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t404521691 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m1316433517_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m4217799357_gshared (MessagePackSerializer_1_t404521691 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m4217799357(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m4217799357_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m3939075714_gshared (MessagePackSerializer_1_t404521691 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3939075714(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m3939075714_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m3477732410_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m3477732410(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m3477732410_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m2465172214_gshared (MessagePackSerializer_1_t404521691 * __this, Stream_t3255436806 * ___stream0, int64_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m2465172214(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, Stream_t3255436806 *, int64_t, const MethodInfo*))MessagePackSerializer_1_Pack_m2465172214_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::Unpack(System.IO.Stream)
extern "C"  int64_t MessagePackSerializer_1_Unpack_m2426783938_gshared (MessagePackSerializer_1_t404521691 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2426783938(__this, ___stream0, method) ((  int64_t (*) (MessagePackSerializer_1_t404521691 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2426783938_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m682768860_gshared (MessagePackSerializer_1_t404521691 * __this, Packer_t1439452732 * ___packer0, int64_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m682768860(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, Packer_t1439452732 *, int64_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m682768860_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::UnpackFrom(MsgPack.Unpacker)
extern "C"  int64_t MessagePackSerializer_1_UnpackFrom_m575974716_gshared (MessagePackSerializer_1_t404521691 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m575974716(__this, ___unpacker0, method) ((  int64_t (*) (MessagePackSerializer_1_t404521691 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m575974716_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::UnpackNil()
extern "C"  int64_t MessagePackSerializer_1_UnpackNil_m2451385686_gshared (MessagePackSerializer_1_t404521691 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m2451385686(__this, method) ((  int64_t (*) (MessagePackSerializer_1_t404521691 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m2451385686_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m1743968550_gshared (MessagePackSerializer_1_t404521691 * __this, Unpacker_t998931393 * ___unpacker0, int64_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m1743968550(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, Unpacker_t998931393 *, int64_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m1743968550_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m1505885595_gshared (MessagePackSerializer_1_t404521691 * __this, Unpacker_t998931393 * ___unpacker0, int64_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m1505885595(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, Unpacker_t998931393 *, int64_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m1505885595_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3254171545_gshared (MessagePackSerializer_1_t404521691 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3254171545(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3254171545_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2086906063_gshared (MessagePackSerializer_1_t404521691 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2086906063(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t404521691 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2086906063_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1115074225_gshared (MessagePackSerializer_1_t404521691 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1115074225(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t404521691 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1115074225_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int64>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m934585489_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m934585489(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m934585489_gshared)(__this /* static, unused */, method)
