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

// MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>
struct MessagePackSerializer_1_t858432560;
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
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m1591434923_gshared (MessagePackSerializer_1_t858432560 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m1591434923(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t858432560 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m1591434923_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m2958105558_gshared (MessagePackSerializer_1_t858432560 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m2958105558(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t858432560 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m2958105558_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m2852348626_gshared (MessagePackSerializer_1_t858432560 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2852348626(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m2852348626_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m1979589275_gshared (MessagePackSerializer_1_t858432560 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1979589275(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m1979589275_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m1762226959_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m1762226959(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1762226959_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m823502173_gshared (MessagePackSerializer_1_t858432560 * __this, Stream_t3255436806 * ___stream0, DateTimeOffset_t1362988906  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m823502173(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, Stream_t3255436806 *, DateTimeOffset_t1362988906 , const MethodInfo*))MessagePackSerializer_1_Pack_m823502173_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::Unpack(System.IO.Stream)
extern "C"  DateTimeOffset_t1362988906  MessagePackSerializer_1_Unpack_m2126695137_gshared (MessagePackSerializer_1_t858432560 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2126695137(__this, ___stream0, method) ((  DateTimeOffset_t1362988906  (*) (MessagePackSerializer_1_t858432560 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2126695137_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m572413901_gshared (MessagePackSerializer_1_t858432560 * __this, Packer_t1439452732 * ___packer0, DateTimeOffset_t1362988906  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m572413901(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, Packer_t1439452732 *, DateTimeOffset_t1362988906 , const MethodInfo*))MessagePackSerializer_1_PackTo_m572413901_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::UnpackFrom(MsgPack.Unpacker)
extern "C"  DateTimeOffset_t1362988906  MessagePackSerializer_1_UnpackFrom_m720135519_gshared (MessagePackSerializer_1_t858432560 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m720135519(__this, ___unpacker0, method) ((  DateTimeOffset_t1362988906  (*) (MessagePackSerializer_1_t858432560 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m720135519_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::UnpackNil()
extern "C"  DateTimeOffset_t1362988906  MessagePackSerializer_1_UnpackNil_m26008309_gshared (MessagePackSerializer_1_t858432560 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m26008309(__this, method) ((  DateTimeOffset_t1362988906  (*) (MessagePackSerializer_1_t858432560 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m26008309_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m3517514365_gshared (MessagePackSerializer_1_t858432560 * __this, Unpacker_t998931393 * ___unpacker0, DateTimeOffset_t1362988906  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m3517514365(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, Unpacker_t998931393 *, DateTimeOffset_t1362988906 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3517514365_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m82148814_gshared (MessagePackSerializer_1_t858432560 * __this, Unpacker_t998931393 * ___unpacker0, DateTimeOffset_t1362988906  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m82148814(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, Unpacker_t998931393 *, DateTimeOffset_t1362988906 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m82148814_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1494552102_gshared (MessagePackSerializer_1_t858432560 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1494552102(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1494552102_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m824029294_gshared (MessagePackSerializer_1_t858432560 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m824029294(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t858432560 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m824029294_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m859819148_gshared (MessagePackSerializer_1_t858432560 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m859819148(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t858432560 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m859819148_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.DateTimeOffset>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m1011451510_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m1011451510(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1011451510_gshared)(__this /* static, unused */, method)
