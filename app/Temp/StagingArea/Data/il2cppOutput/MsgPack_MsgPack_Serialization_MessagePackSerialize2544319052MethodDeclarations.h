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

// MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>
struct MessagePackSerializer_1_t2544319052;
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
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::get_PackerCompatibilityOptions()
extern "C"  int32_t MessagePackSerializer_1_get_PackerCompatibilityOptions_m2840724934_gshared (MessagePackSerializer_1_t2544319052 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m2840724934(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t2544319052 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m2840724934_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * MessagePackSerializer_1_get_OwnerContext_m1059632735_gshared (MessagePackSerializer_1_t2544319052 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_get_OwnerContext_m1059632735(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t2544319052 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m1059632735_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackSerializer_1__ctor_m3065703_gshared (MessagePackSerializer_1_t2544319052 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m3065703(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m3065703_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void MessagePackSerializer_1__ctor_m1579532766_gshared (MessagePackSerializer_1_t2544319052 * __this, SerializationContext_t1484625559 * ___ownerContext0, Nullable_1_t2470011401  ___packerCompatibilityOptions1, const MethodInfo* method);
#define MessagePackSerializer_1__ctor_m1579532766(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m1579532766_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::JudgeNullable()
extern "C"  bool MessagePackSerializer_1_JudgeNullable_m3223454618_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1_JudgeNullable_m3223454618(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m3223454618_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::Pack(System.IO.Stream,T)
extern "C"  void MessagePackSerializer_1_Pack_m2590741850_gshared (MessagePackSerializer_1_t2544319052 * __this, Stream_t3255436806 * ___stream0, DictionaryEntry_t3048875398  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_Pack_m2590741850(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, Stream_t3255436806 *, DictionaryEntry_t3048875398 , const MethodInfo*))MessagePackSerializer_1_Pack_m2590741850_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::Unpack(System.IO.Stream)
extern "C"  DictionaryEntry_t3048875398  MessagePackSerializer_1_Unpack_m4199442482_gshared (MessagePackSerializer_1_t2544319052 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method);
#define MessagePackSerializer_1_Unpack_m4199442482(__this, ___stream0, method) ((  DictionaryEntry_t3048875398  (*) (MessagePackSerializer_1_t2544319052 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m4199442482_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::PackTo(MsgPack.Packer,T)
extern "C"  void MessagePackSerializer_1_PackTo_m372542836_gshared (MessagePackSerializer_1_t2544319052 * __this, Packer_t1439452732 * ___packer0, DictionaryEntry_t3048875398  ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_PackTo_m372542836(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, Packer_t1439452732 *, DictionaryEntry_t3048875398 , const MethodInfo*))MessagePackSerializer_1_PackTo_m372542836_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::UnpackFrom(MsgPack.Unpacker)
extern "C"  DictionaryEntry_t3048875398  MessagePackSerializer_1_UnpackFrom_m3412055148_gshared (MessagePackSerializer_1_t2544319052 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackFrom_m3412055148(__this, ___unpacker0, method) ((  DictionaryEntry_t3048875398  (*) (MessagePackSerializer_1_t2544319052 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m3412055148_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::UnpackNil()
extern "C"  DictionaryEntry_t3048875398  MessagePackSerializer_1_UnpackNil_m1514643646_gshared (MessagePackSerializer_1_t2544319052 * __this, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackNil_m1514643646(__this, method) ((  DictionaryEntry_t3048875398  (*) (MessagePackSerializer_1_t2544319052 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1514643646_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::UnpackTo(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackTo_m3235782870_gshared (MessagePackSerializer_1_t2544319052 * __this, Unpacker_t998931393 * ___unpacker0, DictionaryEntry_t3048875398  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackTo_m3235782870(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, Unpacker_t998931393 *, DictionaryEntry_t3048875398 , const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3235782870_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void MessagePackSerializer_1_UnpackToCore_m355953777_gshared (MessagePackSerializer_1_t2544319052 * __this, Unpacker_t998931393 * ___unpacker0, DictionaryEntry_t3048875398  ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_UnpackToCore_m355953777(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, Unpacker_t998931393 *, DictionaryEntry_t3048875398 , const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m355953777_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m918009955_gshared (MessagePackSerializer_1_t2544319052 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m918009955(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m918009955_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1132602205_gshared (MessagePackSerializer_1_t2544319052 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1132602205(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t2544319052 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m1132602205_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1933044447_gshared (MessagePackSerializer_1_t2544319052 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1933044447(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2544319052 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1933044447_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Collections.DictionaryEntry>::.cctor()
extern "C"  void MessagePackSerializer_1__cctor_m3910987619_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define MessagePackSerializer_1__cctor_m3910987619(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m3910987619_gshared)(__this /* static, unused */, method)
