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

// MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>
struct ReflectionObjectMessagePackSerializer_1_t1679049382;
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

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void ReflectionObjectMessagePackSerializer_1__ctor_m3044239174_gshared (ReflectionObjectMessagePackSerializer_1_t1679049382 * __this, SerializationContext_t1484625559 * ___context0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1__ctor_m3044239174(__this, ___context0, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t1679049382 *, SerializationContext_t1484625559 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1__ctor_m3044239174_gshared)(__this, ___context0, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::PackToCore(MsgPack.Packer,T)
extern "C"  void ReflectionObjectMessagePackSerializer_1_PackToCore_m124240580_gshared (ReflectionObjectMessagePackSerializer_1_t1679049382 * __this, Packer_t1439452732 * ___packer0, int32_t ___objectTree1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_PackToCore_m124240580(__this, ___packer0, ___objectTree1, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t1679049382 *, Packer_t1439452732 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_PackToCore_m124240580_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::PackMemberValue(MsgPack.Packer,T,System.Int32)
extern "C"  void ReflectionObjectMessagePackSerializer_1_PackMemberValue_m1369822450_gshared (ReflectionObjectMessagePackSerializer_1_t1679049382 * __this, Packer_t1439452732 * ___packer0, int32_t ___objectTree1, int32_t ___index2, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_PackMemberValue_m1369822450(__this, ___packer0, ___objectTree1, ___index2, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t1679049382 *, Packer_t1439452732 *, int32_t, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_PackMemberValue_m1369822450_gshared)(__this, ___packer0, ___objectTree1, ___index2, method)
// T MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  int32_t ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m277745256_gshared (ReflectionObjectMessagePackSerializer_1_t1679049382 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m277745256(__this, ___unpacker0, method) ((  int32_t (*) (ReflectionObjectMessagePackSerializer_1_t1679049382 *, Unpacker_t998931393 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackFromCore_m277745256_gshared)(__this, ___unpacker0, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::UnpackMemberValue(System.Object,MsgPack.Unpacker,System.Int32,System.Int32&,System.Int32,System.Int32)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m1001329578_gshared (ReflectionObjectMessagePackSerializer_1_t1679049382 * __this, Il2CppObject * ___objectGraph0, Unpacker_t998931393 * ___unpacker1, int32_t ___itemsCount2, int32_t* ___unpacked3, int32_t ___index4, int32_t ___unpackerOffset5, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m1001329578(__this, ___objectGraph0, ___unpacker1, ___itemsCount2, ___unpacked3, ___index4, ___unpackerOffset5, method) ((  Il2CppObject * (*) (ReflectionObjectMessagePackSerializer_1_t1679049382 *, Il2CppObject *, Unpacker_t998931393 *, int32_t, int32_t*, int32_t, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackMemberValue_m1001329578_gshared)(__this, ___objectGraph0, ___unpacker1, ___itemsCount2, ___unpacked3, ___index4, ___unpackerOffset5, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::UnpackSingleValue(MsgPack.Unpacker,System.Int32)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m3311262341_gshared (ReflectionObjectMessagePackSerializer_1_t1679049382 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___index1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m3311262341(__this, ___unpacker0, ___index1, method) ((  Il2CppObject * (*) (ReflectionObjectMessagePackSerializer_1_t1679049382 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackSingleValue_m3311262341_gshared)(__this, ___unpacker0, ___index1, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::UnpackAndAddCollectionItem(System.Object,MsgPack.Unpacker,System.Int32)
extern "C"  void ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m2829904384_gshared (ReflectionObjectMessagePackSerializer_1_t1679049382 * __this, Il2CppObject * ___objectGraph0, Unpacker_t998931393 * ___unpacker1, int32_t ___index2, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m2829904384(__this, ___objectGraph0, ___unpacker1, ___index2, method) ((  void (*) (ReflectionObjectMessagePackSerializer_1_t1679049382 *, Il2CppObject *, Unpacker_t998931393 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_UnpackAndAddCollectionItem_m2829904384_gshared)(__this, ___objectGraph0, ___unpacker1, ___index2, method)
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::<.ctor>b__0(MsgPack.Serialization.DataMemberContract,System.Int32)
extern "C"  KeyValuePair_2_t1744001932  ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m2113695201_gshared (Il2CppObject * __this /* static, unused */, DataMemberContract_t3068833586 * ___contract0, int32_t ___index1, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m2113695201(__this /* static, unused */, ___contract0, ___index1, method) ((  KeyValuePair_2_t1744001932  (*) (Il2CppObject * /* static, unused */, DataMemberContract_t3068833586 *, int32_t, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__0_m2113695201_gshared)(__this /* static, unused */, ___contract0, ___index1, method)
// System.Boolean MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::<.ctor>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  bool ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m2902640778_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m2902640778(__this /* static, unused */, ___kv0, method) ((  bool (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__1_m2902640778_gshared)(__this /* static, unused */, ___kv0, method)
// System.String MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::<.ctor>b__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  String_t* ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m2892617808_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m2892617808(__this /* static, unused */, ___kv0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__2_m2892617808_gshared)(__this /* static, unused */, ___kv0, method)
// System.Int32 MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::<.ctor>b__3(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
extern "C"  int32_t ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m2745878004_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1744001932  ___kv0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m2745878004(__this /* static, unused */, ___kv0, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t1744001932 , const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3C_ctorU3Eb__3_m2745878004_gshared)(__this /* static, unused */, ___kv0, method)
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::<UnpackFromCore>b__c(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject * ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m2685722301_gshared (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___p0, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m2685722301(__this /* static, unused */, ___p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, ParameterInfo_t2249040075 *, const MethodInfo*))ReflectionObjectMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__c_m2685722301_gshared)(__this /* static, unused */, ___p0, method)
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Int32>::.cctor()
extern "C"  void ReflectionObjectMessagePackSerializer_1__cctor_m694948386_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ReflectionObjectMessagePackSerializer_1__cctor_m694948386(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ReflectionObjectMessagePackSerializer_1__cctor_m694948386_gshared)(__this /* static, unused */, method)
