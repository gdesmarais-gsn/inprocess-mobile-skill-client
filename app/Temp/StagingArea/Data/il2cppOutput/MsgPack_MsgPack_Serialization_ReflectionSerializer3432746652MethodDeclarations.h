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

// MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>
struct ReflectionObjectMessagePackSerializer_1_t3432746652;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.DataMemberContract
struct DataMemberContract_t3068833586;
// System.String
struct String_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21744001932.h"
#include "MsgPack_MsgPack_Serialization_DataMemberContract3068833586.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void ReflectionObjectMessagePackSerializer_1__ctor_m1720983074_gshared (ReflectionObjectMessagePackSerializer_1_t3432746652 * __this, SerializationContext_t1484625559 * ___context0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1__ctor_m1720983074(__this, ___context0, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t3432746652 *, SerializationContext_t1484625559 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1__ctor_m1720983074_gshared)(__this, ___context0, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::PackToCore(MsgPack.Packer,T)
extern "C"  void ReflectionObjectMessagePackSerializer_1_PackToCore_m98471528_gshared (ReflectionObjectMessagePackSerializer_1_t3432746652 * __this, Packer_t1439452732 * ___packer0, bool ___objectTree1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_PackToCore_m98471528(__this, ___packer0, ___objectTree1, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t3432746652 *, Packer_t1439452732 *, bool, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_PackToCore_m98471528_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::PackMemberValue(MsgPack.Packer,T,System.Int32)
extern "C"  void ReflectionObjectMessagePackSerializer_1_PackMemberValue_m354596066_gshared (ReflectionObjectMessagePackSerializer_1_t3432746652 * __this, Packer_t1439452732 * ___packer0, bool ___objectTree1, int32_t ___index2, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_PackMemberValue_m354596066(__this, ___packer0, ___objectTree1, ___index2, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t3432746652 *, Packer_t1439452732 *, bool, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_PackMemberValue_m354596066_gshared)(__this, ___packer0, ___objectTree1, ___index2, method)
// T MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  bool ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m3370726732_gshared (ReflectionObjectMessagePackSerializer_1_t3432746652 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m3370726732(__this, ___unpacker0, method) ((  bool (*) (ReflectionObjectMessagePackSerializer_1_t3432746652 *, Unpacker_t998931393 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m3370726732_gshared)(__this, ___unpacker0, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::UnpackMemberValue(System.Object,MsgPack.Unpacker,System.Int32,System.Int32&,System.Int32,System.Int32)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m1301224970_gshared (ReflectionObjectMessagePackSerializer_1_t3432746652 * __this, Il2CppObject * ___objectGraph0, Unpacker_t998931393 * ___unpacker1, int32_t ___itemsCount2, int32_t* ___unpacked3, int32_t ___index4, int32_t ___unpackerOffset5, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m1301224970(__this, ___objectGraph0, ___unpacker1, ___itemsCount2, ___unpacked3, ___index4, ___unpackerOffset5, method) ((  Il2CppObject * (*) (ReflectionObjectMessagePackSerializer_1_t3432746652 *, Il2CppObject *, Unpacker_t998931393 *, int32_t, int32_t*, int32_t, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m1301224970_gshared)(__this, ___objectGraph0, ___unpacker1, ___itemsCount2, ___unpacked3, ___index4, ___unpackerOffset5, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::UnpackSingleValue(MsgPack.Unpacker,System.Int32)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m1915077999_gshared (ReflectionObjectMessagePackSerializer_1_t3432746652 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___index1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m1915077999(__this, ___unpacker0, ___index1, method) ((  Il2CppObject * (*) (ReflectionObjectMessagePackSerializer_1_t3432746652 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m1915077999_gshared)(__this, ___unpacker0, ___index1, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::UnpackAndAddCollectionItem(System.Object,MsgPack.Unpacker,System.Int32)
extern "C"  void ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m994728992_gshared (ReflectionObjectMessagePackSerializer_1_t3432746652 * __this, Il2CppObject * ___objectGraph0, Unpacker_t998931393 * ___unpacker1, int32_t ___index2, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m994728992(__this, ___objectGraph0, ___unpacker1, ___index2, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t3432746652 *, Il2CppObject *, Unpacker_t998931393 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m994728992_gshared)(__this, ___objectGraph0, ___unpacker1, ___index2, method)
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::<.ctor>b__0(MsgPack.Serialization.DataMemberContract,System.Int32)
extern "C"  KeyValuePair_2_t1744001932  ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m1142809375_gshared (Il2CppObject * __this /* static, unused */, DataMemberContract_t3068833586 * ___contract0, int32_t ___index1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m1142809375(__this /* static, unused */, ___contract0, ___index1, method) ((  KeyValuePair_2_t1744001932  (*) (Il2CppObject * /* static, unused */, DataMemberContract_t3068833586 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m1142809375_gshared)(__this /* static, unused */, ___contract0, ___index1, method)
// System.Boolean MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::<.ctor>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  bool ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m2180099098_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m2180099098(__this /* static, unused */, ___kv0, method) ((  bool (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m2180099098_gshared)(__this /* static, unused */, ___kv0, method)
// System.String MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::<.ctor>b__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  String_t* ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m1558484476_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m1558484476(__this /* static, unused */, ___kv0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m1558484476_gshared)(__this /* static, unused */, ___kv0, method)
// System.Int32 MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::<.ctor>b__3(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  int32_t ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m4201005080_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m4201005080(__this /* static, unused */, ___kv0, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m4201005080_gshared)(__this /* static, unused */, ___kv0, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::<UnpackFromCore>b__c(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m2588699595_gshared (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___p0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m2588699595(__this /* static, unused */, ___p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, ParameterInfo_t2249040075 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m2588699595_gshared)(__this /* static, unused */, ___p0, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>::.cctor()
extern "C"  void ReflectionObjectMessagePackSerializer_1__cctor_m2372676006_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1__cctor_m2372676006(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ReflectionObjectMessagePackSerializer_1__cctor_m2372676006_gshared)(__this /* static, unused */, method)
