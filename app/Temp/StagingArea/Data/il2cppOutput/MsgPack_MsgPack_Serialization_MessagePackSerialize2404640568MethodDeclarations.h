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

// MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>
struct MessagePackSerializer_1_t2404640568;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m2676296323_gshared (MessagePackSerializer_1_t2404640568 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m2676296323(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t2404640568 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m2676296323_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m4157294590_gshared (MessagePackSerializer_1_t2404640568 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m4157294590(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t2404640568 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m4157294590_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m1321843018_gshared (MessagePackSerializer_1_t2404640568 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1321843018(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m1321843018_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m2248822739_gshared (MessagePackSerializer_1_t2404640568 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2248822739(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2248822739_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m1234590519_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m1234590519(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1234590519_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m3703128853_gshared (MessagePackSerializer_1_t2404640568 * __this, Stream_t3255436806 * ___stream0, uint64_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m3703128853(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, Stream_t3255436806 *, uint64_t, const MethodInfo*))MessagePackSerializer_1_Pack_m3703128853_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::Unpack(System.IO.Stream)
extern "C"  uint64_t MessagePackSerializer_1_Unpack_m2485799145_gshared (MessagePackSerializer_1_t2404640568 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2485799145(__this, ___stream0, method) ((  uint64_t (*) (MessagePackSerializer_1_t2404640568 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2485799145_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m3466944661_gshared (MessagePackSerializer_1_t2404640568 * __this, Packer_t1439452732 * ___packer0, uint64_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m3466944661(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, Packer_t1439452732 *, uint64_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m3466944661_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::UnpackFrom(MsgPack.Unpacker)
extern "C"  uint64_t MessagePackSerializer_1_UnpackFrom_m2522946903_gshared (MessagePackSerializer_1_t2404640568 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m2522946903(__this, ___unpacker0, method) ((  uint64_t (*) (MessagePackSerializer_1_t2404640568 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m2522946903_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::UnpackNil()
extern "C"  uint64_t MessagePackSerializer_1_UnpackNil_m3377867821_gshared (MessagePackSerializer_1_t2404640568 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m3377867821(__this, method) ((  uint64_t (*) (MessagePackSerializer_1_t2404640568 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m3377867821_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m81172853_gshared (MessagePackSerializer_1_t2404640568 * __this, Unpacker_t998931393 * ___unpacker0, uint64_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m81172853(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, Unpacker_t998931393 *, uint64_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m81172853_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m4208979734_gshared (MessagePackSerializer_1_t2404640568 * __this, Unpacker_t998931393 * ___unpacker0, uint64_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m4208979734(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, Unpacker_t998931393 *, uint64_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m4208979734_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1752179358_gshared (MessagePackSerializer_1_t2404640568 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1752179358(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1752179358_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2014322214_gshared (MessagePackSerializer_1_t2404640568 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2014322214(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t2404640568 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2014322214_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1417146964_gshared (MessagePackSerializer_1_t2404640568 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1417146964(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2404640568 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1417146964_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.UInt64>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m2829999598_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m2829999598(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m2829999598_gshared)(__this /* static, unused */, method)
