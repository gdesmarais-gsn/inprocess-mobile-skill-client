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

// MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>
struct ReflectionObjectMessagePackSerializer_1_t2296621229;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// MsgPack.Serialization.DataMemberContract
struct DataMemberContract_t3068833586;
// System.String
struct String_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21744001932.h"
#include "MsgPack_MsgPack_Serialization_DataMemberContract3068833586.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void ReflectionObjectMessagePackSerializer_1__ctor_m3321980633_gshared (ReflectionObjectMessagePackSerializer_1_t2296621229 * __this, SerializationContext_t1484625559 * ___context0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1__ctor_m3321980633(__this, ___context0, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t2296621229 *, SerializationContext_t1484625559 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1__ctor_m3321980633_gshared)(__this, ___context0, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::PackToCore(MsgPack.Packer,T)
extern "C"  void ReflectionObjectMessagePackSerializer_1_PackToCore_m653291367_gshared (ReflectionObjectMessagePackSerializer_1_t2296621229 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_PackToCore_m653291367(__this, ___packer0, ___objectTree1, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t2296621229 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_PackToCore_m653291367_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::PackMemberValue(MsgPack.Packer,T,System.Int32)
extern "C"  void ReflectionObjectMessagePackSerializer_1_PackMemberValue_m2622657521_gshared (ReflectionObjectMessagePackSerializer_1_t2296621229 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, int32_t ___index2, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_PackMemberValue_m2622657521(__this, ___packer0, ___objectTree1, ___index2, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t2296621229 *, Packer_t1439452732 *, Il2CppObject *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_PackMemberValue_m2622657521_gshared)(__this, ___packer0, ___objectTree1, ___index2, method)
// T MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m1121842349_gshared (ReflectionObjectMessagePackSerializer_1_t2296621229 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m1121842349(__this, ___unpacker0, method) ((  Il2CppObject * (*) (ReflectionObjectMessagePackSerializer_1_t2296621229 *, Unpacker_t998931393 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m1121842349_gshared)(__this, ___unpacker0, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::UnpackMemberValue(System.Object,MsgPack.Unpacker,System.Int32,System.Int32&,System.Int32,System.Int32)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m3492858437_gshared (ReflectionObjectMessagePackSerializer_1_t2296621229 * __this, Il2CppObject * ___objectGraph0, Unpacker_t998931393 * ___unpacker1, int32_t ___itemsCount2, int32_t* ___unpacked3, int32_t ___index4, int32_t ___unpackerOffset5, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m3492858437(__this, ___objectGraph0, ___unpacker1, ___itemsCount2, ___unpacked3, ___index4, ___unpackerOffset5, method) ((  Il2CppObject * (*) (ReflectionObjectMessagePackSerializer_1_t2296621229 *, Il2CppObject *, Unpacker_t998931393 *, int32_t, int32_t*, int32_t, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m3492858437_gshared)(__this, ___objectGraph0, ___unpacker1, ___itemsCount2, ___unpacked3, ___index4, ___unpackerOffset5, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::UnpackSingleValue(MsgPack.Unpacker,System.Int32)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m3896457542_gshared (ReflectionObjectMessagePackSerializer_1_t2296621229 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___index1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m3896457542(__this, ___unpacker0, ___index1, method) ((  Il2CppObject * (*) (ReflectionObjectMessagePackSerializer_1_t2296621229 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m3896457542_gshared)(__this, ___unpacker0, ___index1, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::UnpackAndAddCollectionItem(System.Object,MsgPack.Unpacker,System.Int32)
extern "C"  void ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m3339186465_gshared (ReflectionObjectMessagePackSerializer_1_t2296621229 * __this, Il2CppObject * ___objectGraph0, Unpacker_t998931393 * ___unpacker1, int32_t ___index2, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m3339186465(__this, ___objectGraph0, ___unpacker1, ___index2, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t2296621229 *, Il2CppObject *, Unpacker_t998931393 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m3339186465_gshared)(__this, ___objectGraph0, ___unpacker1, ___index2, method)
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::<.ctor>b__0(MsgPack.Serialization.DataMemberContract,System.Int32)
extern "C"  KeyValuePair_2_t1744001932  ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m3321011976_gshared (Il2CppObject * __this /* static, unused */, DataMemberContract_t3068833586 * ___contract0, int32_t ___index1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m3321011976(__this /* static, unused */, ___contract0, ___index1, method) ((  KeyValuePair_2_t1744001932  (*) (Il2CppObject * /* static, unused */, DataMemberContract_t3068833586 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m3321011976_gshared)(__this /* static, unused */, ___contract0, ___index1, method)
// System.Boolean MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::<.ctor>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  bool ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m3264359829_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m3264359829(__this /* static, unused */, ___kv0, method) ((  bool (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m3264359829_gshared)(__this /* static, unused */, ___kv0, method)
// System.String MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::<.ctor>b__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  String_t* ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m2791678623_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m2791678623(__this /* static, unused */, ___kv0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m2791678623_gshared)(__this /* static, unused */, ___kv0, method)
// System.Int32 MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::<.ctor>b__3(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  int32_t ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m1617186121_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m1617186121(__this /* static, unused */, ___kv0, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m1617186121_gshared)(__this /* static, unused */, ___kv0, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::<UnpackFromCore>b__c(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m3741021370_gshared (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___p0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m3741021370(__this /* static, unused */, ___p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, ParameterInfo_t2249040075 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m3741021370_gshared)(__this /* static, unused */, ___p0, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Object>::.cctor()
extern "C"  void ReflectionObjectMessagePackSerializer_1__cctor_m3777405605_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1__cctor_m3777405605(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ReflectionObjectMessagePackSerializer_1__cctor_m3777405605_gshared)(__this /* static, unused */, method)
