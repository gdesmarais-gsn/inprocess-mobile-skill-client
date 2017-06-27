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

// MsgPack.Serialization.MessagePackSerializer`1<System.Int16>
struct MessagePackSerializer_1_t3536689568;
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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m1569122195_gshared (MessagePackSerializer_1_t3536689568 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m1569122195(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t3536689568 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m1569122195_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m4060329298_gshared (MessagePackSerializer_1_t3536689568 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m4060329298(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t3536689568 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m4060329298_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m2056135046_gshared (MessagePackSerializer_1_t3536689568 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m2056135046(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m2056135046_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m527385119_gshared (MessagePackSerializer_1_t3536689568 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m527385119(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m527385119_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m2180004363_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m2180004363(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m2180004363_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m2523828581_gshared (MessagePackSerializer_1_t3536689568 * __this, Stream_t3255436806 * ___stream0, int16_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m2523828581(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, Stream_t3255436806 *, int16_t, const MethodInfo*))MessagePackSerializer_1_Pack_m2523828581_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::Unpack(System.IO.Stream)
extern "C"  int16_t MessagePackSerializer_1_Unpack_m2683858449_gshared (MessagePackSerializer_1_t3536689568 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m2683858449(__this, ___stream0, method) ((  int16_t (*) (MessagePackSerializer_1_t3536689568 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2683858449_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m1359423381_gshared (MessagePackSerializer_1_t3536689568 * __this, Packer_t1439452732 * ___packer0, int16_t ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m1359423381(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, Packer_t1439452732 *, int16_t, const MethodInfo*))MessagePackSerializer_1_PackTo_m1359423381_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::UnpackFrom(MsgPack.Unpacker)
extern "C"  int16_t MessagePackSerializer_1_UnpackFrom_m3183487479_gshared (MessagePackSerializer_1_t3536689568 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3183487479(__this, ___unpacker0, method) ((  int16_t (*) (MessagePackSerializer_1_t3536689568 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3183487479_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::UnpackNil()
extern "C"  int16_t MessagePackSerializer_1_UnpackNil_m3279980541_gshared (MessagePackSerializer_1_t3536689568 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m3279980541(__this, method) ((  int16_t (*) (MessagePackSerializer_1_t3536689568 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m3279980541_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m661636213_gshared (MessagePackSerializer_1_t3536689568 * __this, Unpacker_t998931393 * ___unpacker0, int16_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m661636213(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, Unpacker_t998931393 *, int16_t, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m661636213_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m1058487334_gshared (MessagePackSerializer_1_t3536689568 * __this, Unpacker_t998931393 * ___unpacker0, int16_t ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m1058487334(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, Unpacker_t998931393 *, int16_t, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m1058487334_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1019568226_gshared (MessagePackSerializer_1_t3536689568 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1019568226(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1019568226_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2818871964_gshared (MessagePackSerializer_1_t3536689568 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2818871964(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t3536689568 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2818871964_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2217386080_gshared (MessagePackSerializer_1_t3536689568 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2217386080(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3536689568 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2217386080_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Int16>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m2562766434_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m2562766434(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m2562766434_gshared)(__this /* static, unused */, method)
