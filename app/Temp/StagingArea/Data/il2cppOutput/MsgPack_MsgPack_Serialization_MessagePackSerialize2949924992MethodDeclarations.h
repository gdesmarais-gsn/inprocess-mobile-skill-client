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

// MsgPack.Serialization.MessagePackSerializer`1<System.Char>
struct MessagePackSerializer_1_t2949924992;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Char>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m605570347_gshared (MessagePackSerializer_1_t2949924992 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m605570347(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t2949924992 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m605570347_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Char>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m1590148336_gshared (MessagePackSerializer_1_t2949924992 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m1590148336(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t2949924992 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m1590148336_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m1905618228_gshared (MessagePackSerializer_1_t2949924992 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1905618228(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m1905618228_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m4169256899_gshared (MessagePackSerializer_1_t2949924992 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m4169256899(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m4169256899_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Char>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m3423025295_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m3423025295(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m3423025295_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m2300985329_gshared (MessagePackSerializer_1_t2949924992 * __this, Stream_t3255436806 * ___stream0, Il2CppChar ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m2300985329(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, Stream_t3255436806 *, Il2CppChar, const MethodInfo*))MessagePackSerializer_1_Pack_m2300985329_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Char>::Unpack(System.IO.Stream)
extern "C"  Il2CppChar MessagePackSerializer_1_Unpack_m1209364693_gshared (MessagePackSerializer_1_t2949924992 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m1209364693(__this, ___stream0, method) ((  Il2CppChar (*) (MessagePackSerializer_1_t2949924992 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m1209364693_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m2828876193_gshared (MessagePackSerializer_1_t2949924992 * __this, Packer_t1439452732 * ___packer0, Il2CppChar ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m2828876193(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, Packer_t1439452732 *, Il2CppChar, const MethodInfo*))MessagePackSerializer_1_PackTo_m2828876193_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Char>::UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppChar MessagePackSerializer_1_UnpackFrom_m3971019607_gshared (MessagePackSerializer_1_t2949924992 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3971019607(__this, ___unpacker0, method) ((  Il2CppChar (*) (MessagePackSerializer_1_t2949924992 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3971019607_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Char>::UnpackNil()
extern "C"  Il2CppChar MessagePackSerializer_1_UnpackNil_m1811975937_gshared (MessagePackSerializer_1_t2949924992 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m1811975937(__this, method) ((  Il2CppChar (*) (MessagePackSerializer_1_t2949924992 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1811975937_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m3353136593_gshared (MessagePackSerializer_1_t2949924992 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppChar ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m3353136593(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, Unpacker_t998931393 *, Il2CppChar, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3353136593_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m1177757040_gshared (MessagePackSerializer_1_t2949924992 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppChar ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m1177757040(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, Unpacker_t998931393 *, Il2CppChar, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m1177757040_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m618292648_gshared (MessagePackSerializer_1_t2949924992 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m618292648(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m618292648_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Char>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3128047696_gshared (MessagePackSerializer_1_t2949924992 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3128047696(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t2949924992 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3128047696_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3332312994_gshared (MessagePackSerializer_1_t2949924992 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3332312994(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2949924992 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3332312994_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Char>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m2234144352_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m2234144352(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m2234144352_gshared)(__this /* static, unused */, method)
