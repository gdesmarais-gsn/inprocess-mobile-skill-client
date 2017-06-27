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

// MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>
struct MessagePackSerializer_1_t3321018372;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m1589430079_gshared (MessagePackSerializer_1_t3321018372 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m1589430079(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t3321018372 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m1589430079_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m149209476_gshared (MessagePackSerializer_1_t3321018372 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m149209476(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t3321018372 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m149209476_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m3639557744_gshared (MessagePackSerializer_1_t3321018372 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3639557744(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m3639557744_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m3293352099_gshared (MessagePackSerializer_1_t3321018372 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3293352099(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m3293352099_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m3088418295_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m3088418295(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m3088418295_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m623967481_gshared (MessagePackSerializer_1_t3321018372 * __this, Stream_t3255436806 * ___stream0, bool ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m623967481(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, Stream_t3255436806 *, bool, const MethodInfo*))MessagePackSerializer_1_Pack_m623967481_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::Unpack(System.IO.Stream)
extern "C"  bool MessagePackSerializer_1_Unpack_m3363420389_gshared (MessagePackSerializer_1_t3321018372 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m3363420389(__this, ___stream0, method) ((  bool (*) (MessagePackSerializer_1_t3321018372 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m3363420389_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m1984249385_gshared (MessagePackSerializer_1_t3321018372 * __this, Packer_t1439452732 * ___packer0, bool ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m1984249385(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, Packer_t1439452732 *, bool, const MethodInfo*))MessagePackSerializer_1_PackTo_m1984249385_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::UnpackFrom(MsgPack.Unpacker)
extern "C"  bool MessagePackSerializer_1_UnpackFrom_m83351531_gshared (MessagePackSerializer_1_t3321018372 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m83351531(__this, ___unpacker0, method) ((  bool (*) (MessagePackSerializer_1_t3321018372 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m83351531_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::UnpackNil()
extern "C"  bool MessagePackSerializer_1_UnpackNil_m886195129_gshared (MessagePackSerializer_1_t3321018372 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m886195129(__this, method) ((  bool (*) (MessagePackSerializer_1_t3321018372 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m886195129_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m677038593_gshared (MessagePackSerializer_1_t3321018372 * __this, Unpacker_t998931393 * ___unpacker0, bool ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m677038593(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, Unpacker_t998931393 *, bool, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m677038593_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m1180021868_gshared (MessagePackSerializer_1_t3321018372 * __this, Unpacker_t998931393 * ___unpacker0, bool ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m1180021868(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, Unpacker_t998931393 *, bool, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m1180021868_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1068377588_gshared (MessagePackSerializer_1_t3321018372 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1068377588(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1068377588_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1531492662_gshared (MessagePackSerializer_1_t3321018372 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1531492662(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t3321018372 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1531492662_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1253767742_gshared (MessagePackSerializer_1_t3321018372 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1253767742(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3321018372 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1253767742_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Boolean>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m3107626612_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m3107626612(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m3107626612_gshared)(__this /* static, unused */, method)
