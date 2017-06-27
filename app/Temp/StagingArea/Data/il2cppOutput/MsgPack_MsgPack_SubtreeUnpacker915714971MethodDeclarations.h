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

// MsgPack.SubtreeUnpacker
struct SubtreeUnpacker_t915714971;
// MsgPack.ItemsUnpacker
struct ItemsUnpacker_t4126175435;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen301151366.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "MsgPack_MsgPack_ItemsUnpacker4126175435.h"
#include "MsgPack_MsgPack_SubtreeUnpacker915714971.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen1946170751.h"
#include "mscorlib_System_Nullable_1_gen3012451160.h"
#include "mscorlib_System_Nullable_1_gen2304312229.h"
#include "mscorlib_System_Nullable_1_gen3544916222.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen1172263229.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_String2029220233.h"

// System.Int64 MsgPack.SubtreeUnpacker::get_ItemsCount()
extern "C"  int64_t SubtreeUnpacker_get_ItemsCount_m1929755559 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::get_IsArrayHeader()
extern "C"  bool SubtreeUnpacker_get_IsArrayHeader_m1247190383 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::get_IsMapHeader()
extern "C"  bool SubtreeUnpacker_get_IsMapHeader_m113269570 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::get_IsCollectionHeader()
extern "C"  bool SubtreeUnpacker_get_IsCollectionHeader_m2729881048 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<MsgPack.MessagePackObject> MsgPack.SubtreeUnpacker::get_Data()
extern "C"  Nullable_1_t301151366  SubtreeUnpacker_get_Data_m4163092752 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::set_Data(System.Nullable`1<MsgPack.MessagePackObject>)
extern "C"  void SubtreeUnpacker_set_Data_m1979429583 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t301151366  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.SubtreeUnpacker::get_LastReadData()
extern "C"  MessagePackObject_t2038085051  SubtreeUnpacker_get_LastReadData_m2517812289 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::set_LastReadData(MsgPack.MessagePackObject)
extern "C"  void SubtreeUnpacker_set_LastReadData_m1249916478 (SubtreeUnpacker_t915714971 * __this, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::.ctor(MsgPack.ItemsUnpacker)
extern "C"  void SubtreeUnpacker__ctor_m353741383 (SubtreeUnpacker_t915714971 * __this, ItemsUnpacker_t4126175435 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::.ctor(MsgPack.ItemsUnpacker,MsgPack.SubtreeUnpacker)
extern "C"  void SubtreeUnpacker__ctor_m2516195860 (SubtreeUnpacker_t915714971 * __this, ItemsUnpacker_t4126175435 * ___root0, SubtreeUnpacker_t915714971 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::Dispose(System.Boolean)
extern "C"  void SubtreeUnpacker_Dispose_m2995610800 (SubtreeUnpacker_t915714971 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::EndReadSubtree()
extern "C"  void SubtreeUnpacker_EndReadSubtree_m1049961645 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Unpacker MsgPack.SubtreeUnpacker::ReadSubtreeCore()
extern "C"  Unpacker_t998931393 * SubtreeUnpacker_ReadSubtreeCore_m2331063769 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::ThrowInTailException()
extern "C"  void SubtreeUnpacker_ThrowInTailException_m2478736148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::ThrowNotInHeadOfCollectionException()
extern "C"  void SubtreeUnpacker_ThrowNotInHeadOfCollectionException_m2045090294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadCore()
extern "C"  bool SubtreeUnpacker_ReadCore_m3132117899 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> MsgPack.SubtreeUnpacker::SkipCore()
extern "C"  Nullable_1_t3467111648  SubtreeUnpacker_SkipCore_m122556400 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.SubtreeUnpacker::DiscardCompletedStacks()
extern "C"  void SubtreeUnpacker_DiscardCompletedStacks_m4221329032 (SubtreeUnpacker_t915714971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadBoolean(System.Boolean&)
extern "C"  bool SubtreeUnpacker_ReadBoolean_m2016298973 (SubtreeUnpacker_t915714971 * __this, bool* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableBoolean(System.Nullable`1<System.Boolean>&)
extern "C"  bool SubtreeUnpacker_ReadNullableBoolean_m781297105 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t2088641033 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadByte(System.Byte&)
extern "C"  bool SubtreeUnpacker_ReadByte_m1306098781 (SubtreeUnpacker_t915714971 * __this, uint8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableByte(System.Nullable`1<System.Byte>&)
extern "C"  bool SubtreeUnpacker_ReadNullableByte_m1123126353 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t1946170751 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadSByte(System.SByte&)
extern "C"  bool SubtreeUnpacker_ReadSByte_m552615185 (SubtreeUnpacker_t915714971 * __this, int8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableSByte(System.Nullable`1<System.SByte>&)
extern "C"  bool SubtreeUnpacker_ReadNullableSByte_m3894395029 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t3012451160 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadInt16(System.Int16&)
extern "C"  bool SubtreeUnpacker_ReadInt16_m385078877 (SubtreeUnpacker_t915714971 * __this, int16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableInt16(System.Nullable`1<System.Int16>&)
extern "C"  bool SubtreeUnpacker_ReadNullableInt16_m1023650897 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t2304312229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadUInt16(System.UInt16&)
extern "C"  bool SubtreeUnpacker_ReadUInt16_m130868125 (SubtreeUnpacker_t915714971 * __this, uint16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableUInt16(System.Nullable`1<System.UInt16>&)
extern "C"  bool SubtreeUnpacker_ReadNullableUInt16_m2176510481 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t3544916222 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadInt32(System.Int32&)
extern "C"  bool SubtreeUnpacker_ReadInt32_m368960761 (SubtreeUnpacker_t915714971 * __this, int32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableInt32(System.Nullable`1<System.Int32>&)
extern "C"  bool SubtreeUnpacker_ReadNullableInt32_m1895278677 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t334943763 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadUInt32(System.UInt32&)
extern "C"  bool SubtreeUnpacker_ReadUInt32_m2949897181 (SubtreeUnpacker_t915714971 * __this, uint32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableUInt32(System.Nullable`1<System.UInt32>&)
extern "C"  bool SubtreeUnpacker_ReadNullableUInt32_m4291119249 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t412748336 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadInt64(System.Int64&)
extern "C"  bool SubtreeUnpacker_ReadInt64_m1063728433 (SubtreeUnpacker_t915714971 * __this, int64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableInt64(System.Nullable`1<System.Int64>&)
extern "C"  bool SubtreeUnpacker_ReadNullableInt64_m2606799845 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t3467111648 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadUInt64(System.UInt64&)
extern "C"  bool SubtreeUnpacker_ReadUInt64_m113889405 (SubtreeUnpacker_t915714971 * __this, uint64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableUInt64(System.Nullable`1<System.UInt64>&)
extern "C"  bool SubtreeUnpacker_ReadNullableUInt64_m1366114705 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t1172263229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadSingle(System.Single&)
extern "C"  bool SubtreeUnpacker_ReadSingle_m1383487677 (SubtreeUnpacker_t915714971 * __this, float* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableSingle(System.Nullable`1<System.Single>&)
extern "C"  bool SubtreeUnpacker_ReadNullableSingle_m2885982865 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t339576247 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadDouble(System.Double&)
extern "C"  bool SubtreeUnpacker_ReadDouble_m1442339805 (SubtreeUnpacker_t915714971 * __this, double* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadNullableDouble(System.Nullable`1<System.Double>&)
extern "C"  bool SubtreeUnpacker_ReadNullableDouble_m115910289 (SubtreeUnpacker_t915714971 * __this, Nullable_1_t2341081996 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadBinary(System.Byte[]&)
extern "C"  bool SubtreeUnpacker_ReadBinary_m4162743356 (SubtreeUnpacker_t915714971 * __this, ByteU5BU5D_t3397334013** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadString(System.String&)
extern "C"  bool SubtreeUnpacker_ReadString_m192568413 (SubtreeUnpacker_t915714971 * __this, String_t** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.SubtreeUnpacker::ReadObject(MsgPack.MessagePackObject&)
extern "C"  bool SubtreeUnpacker_ReadObject_m95051042 (SubtreeUnpacker_t915714971 * __this, MessagePackObject_t2038085051 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
