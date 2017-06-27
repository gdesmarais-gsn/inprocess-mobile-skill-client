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

// MsgPack.Serialization.MessagePackSerializer`1<System.Single>
struct MessagePackSerializer_1_t1571953586;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Single>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m2112638445_gshared (MessagePackSerializer_1_t1571953586 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m2112638445(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t1571953586 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m2112638445_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Single>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m1618529940_gshared (MessagePackSerializer_1_t1571953586 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m1618529940(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t1571953586 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m1618529940_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m3812621040_gshared (MessagePackSerializer_1_t1571953586 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3812621040(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m3812621040_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m2578693213_gshared (MessagePackSerializer_1_t1571953586 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2578693213(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2578693213_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Single>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m2016168781_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m2016168781(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m2016168781_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m724105687_gshared (MessagePackSerializer_1_t1571953586 * __this, Stream_t3255436806 * ___stream0, float ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m724105687(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, Stream_t3255436806 *, float, const MethodInfo*))MessagePackSerializer_1_Pack_m724105687_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Single>::Unpack(System.IO.Stream)
extern "C"  float MessagePackSerializer_1_Unpack_m2215892707_gshared (MessagePackSerializer_1_t1571953586 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2215892707(__this, ___stream0, method) ((  float (*) (MessagePackSerializer_1_t1571953586 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2215892707_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m1075798863_gshared (MessagePackSerializer_1_t1571953586 * __this, Packer_t1439452732 * ___packer0, float ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m1075798863(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, Packer_t1439452732 *, float, const MethodInfo*))MessagePackSerializer_1_PackTo_m1075798863_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Single>::UnpackFrom(MsgPack.Unpacker)
extern "C"  float MessagePackSerializer_1_UnpackFrom_m3643073285_gshared (MessagePackSerializer_1_t1571953586 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3643073285(__this, ___unpacker0, method) ((  float (*) (MessagePackSerializer_1_t1571953586 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3643073285_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Single>::UnpackNil()
extern "C"  float MessagePackSerializer_1_UnpackNil_m1894507215_gshared (MessagePackSerializer_1_t1571953586 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m1894507215(__this, method) ((  float (*) (MessagePackSerializer_1_t1571953586 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1894507215_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m3891121123_gshared (MessagePackSerializer_1_t1571953586 * __this, Unpacker_t998931393 * ___unpacker0, float ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m3891121123(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, Unpacker_t998931393 *, float, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3891121123_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m2998634676_gshared (MessagePackSerializer_1_t1571953586 * __this, Unpacker_t998931393 * ___unpacker0, float ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m2998634676(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, Unpacker_t998931393 *, float, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m2998634676_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3174185028_gshared (MessagePackSerializer_1_t1571953586 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3174185028(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3174185028_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Single>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1534078516_gshared (MessagePackSerializer_1_t1571953586 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1534078516(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t1571953586 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1534078516_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3616877958_gshared (MessagePackSerializer_1_t1571953586 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3616877958(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1571953586 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3616877958_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Single>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m1891077596_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m1891077596(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1891077596_gshared)(__this /* static, unused */, method)
