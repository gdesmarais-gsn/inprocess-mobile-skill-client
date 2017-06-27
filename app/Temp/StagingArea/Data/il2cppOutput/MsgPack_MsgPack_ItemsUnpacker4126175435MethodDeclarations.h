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

// MsgPack.ItemsUnpacker
struct ItemsUnpacker_t4126175435;
// System.IO.Stream
struct Stream_t3255436806;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen301151366.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "mscorlib_System_IO_Stream3255436806.h"
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
#include "MsgPack_MsgPack_ItemsUnpacker_ReadValueResult322390636.h"
#include "MsgPack_MsgPack_MessagePackExtendedTypeObject1459807206.h"
#include "mscorlib_System_Type1303803226.h"

// System.Nullable`1<MsgPack.MessagePackObject> MsgPack.ItemsUnpacker::get_Data()
extern "C"  Nullable_1_t301151366  ItemsUnpacker_get_Data_m3635588042 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::set_Data(System.Nullable`1<MsgPack.MessagePackObject>)
extern "C"  void ItemsUnpacker_set_Data_m3754701439 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t301151366  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.ItemsUnpacker::get_LastReadData()
extern "C"  MessagePackObject_t2038085051  ItemsUnpacker_get_LastReadData_m872634593 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::set_LastReadData(MsgPack.MessagePackObject)
extern "C"  void ItemsUnpacker_set_LastReadData_m2330719984 (ItemsUnpacker_t4126175435 * __this, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::get_IsArrayHeader()
extern "C"  bool ItemsUnpacker_get_IsArrayHeader_m4158844607 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::get_IsMapHeader()
extern "C"  bool ItemsUnpacker_get_IsMapHeader_m3127975196 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::get_IsCollectionHeader()
extern "C"  bool ItemsUnpacker_get_IsCollectionHeader_m1352347362 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.ItemsUnpacker::get_ItemsCount()
extern "C"  int64_t ItemsUnpacker_get_ItemsCount_m2433858823 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void ItemsUnpacker__ctor_m431688460 (ItemsUnpacker_t4126175435 * __this, Stream_t3255436806 * ___stream0, bool ___ownsStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::Dispose(System.Boolean)
extern "C"  void ItemsUnpacker_Dispose_m2756947070 (ItemsUnpacker_t4126175435 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadCore()
extern "C"  bool ItemsUnpacker_ReadCore_m2158354475 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Unpacker MsgPack.ItemsUnpacker::ReadSubtreeCore()
extern "C"  Unpacker_t998931393 * ItemsUnpacker_ReadSubtreeCore_m1481476609 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeItem()
extern "C"  bool ItemsUnpacker_ReadSubtreeItem_m3057086923 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> MsgPack.ItemsUnpacker::SkipSubtreeItem()
extern "C"  Nullable_1_t3467111648  ItemsUnpacker_SkipSubtreeItem_m798866316 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::ReadStrict(System.Byte[],System.Int32)
extern "C"  void ItemsUnpacker_ReadStrict_m3086090905 (ItemsUnpacker_t4126175435 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte MsgPack.ItemsUnpacker::ReadByteStrict()
extern "C"  uint8_t ItemsUnpacker_ReadByteStrict_m3585976287 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::ThrowEofException()
extern "C"  void ItemsUnpacker_ThrowEofException_m360361311 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::ThrowEofException(System.Int64,System.Int64)
extern "C"  void ItemsUnpacker_ThrowEofException_m180888439 (ItemsUnpacker_t4126175435 * __this, int64_t ___lastOffset0, int64_t ___reading1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadBoolean(System.Boolean&)
extern "C"  bool ItemsUnpacker_ReadBoolean_m2351622813 (ItemsUnpacker_t4126175435 * __this, bool* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeBoolean(System.Boolean&)
extern "C"  bool ItemsUnpacker_ReadSubtreeBoolean_m1880986975 (ItemsUnpacker_t4126175435 * __this, bool* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableBoolean(System.Nullable`1<System.Boolean>&)
extern "C"  bool ItemsUnpacker_ReadNullableBoolean_m887642785 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t2088641033 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableBoolean(System.Nullable`1<System.Boolean>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableBoolean_m4046188799 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t2088641033 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadByte(System.Byte&)
extern "C"  bool ItemsUnpacker_ReadByte_m3362388957 (ItemsUnpacker_t4126175435 * __this, uint8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeByte(System.Byte&)
extern "C"  bool ItemsUnpacker_ReadSubtreeByte_m1015051675 (ItemsUnpacker_t4126175435 * __this, uint8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableByte(System.Nullable`1<System.Byte>&)
extern "C"  bool ItemsUnpacker_ReadNullableByte_m1718059809 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t1946170751 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableByte(System.Nullable`1<System.Byte>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableByte_m3180511231 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t1946170751 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSByte(System.SByte&)
extern "C"  bool ItemsUnpacker_ReadSByte_m2141353553 (ItemsUnpacker_t4126175435 * __this, int8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeSByte(System.SByte&)
extern "C"  bool ItemsUnpacker_ReadSubtreeSByte_m3670043539 (ItemsUnpacker_t4126175435 * __this, int8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableSByte(System.Nullable`1<System.SByte>&)
extern "C"  bool ItemsUnpacker_ReadNullableSByte_m3390764037 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t3012451160 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableSByte(System.Nullable`1<System.SByte>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableSByte_m3559463523 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t3012451160 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadInt16(System.Int16&)
extern "C"  bool ItemsUnpacker_ReadInt16_m428024733 (ItemsUnpacker_t4126175435 * __this, int16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeInt16(System.Int16&)
extern "C"  bool ItemsUnpacker_ReadSubtreeInt16_m169998559 (ItemsUnpacker_t4126175435 * __this, int16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableInt16(System.Nullable`1<System.Int16>&)
extern "C"  bool ItemsUnpacker_ReadNullableInt16_m2594254113 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t2304312229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableInt16(System.Nullable`1<System.Int16>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableInt16_m964782719 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t2304312229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadUInt16(System.UInt16&)
extern "C"  bool ItemsUnpacker_ReadUInt16_m1292020061 (ItemsUnpacker_t4126175435 * __this, uint16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeUInt16(System.UInt16&)
extern "C"  bool ItemsUnpacker_ReadSubtreeUInt16_m1958639195 (ItemsUnpacker_t4126175435 * __this, uint16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableUInt16(System.Nullable`1<System.UInt16>&)
extern "C"  bool ItemsUnpacker_ReadNullableUInt16_m1600814049 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t3544916222 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableUInt16(System.Nullable`1<System.UInt16>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableUInt16_m4165908159 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t3544916222 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadInt32(System.Int32&)
extern "C"  bool ItemsUnpacker_ReadInt32_m2038616897 (ItemsUnpacker_t4126175435 * __this, int32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeInt32(System.Int32&)
extern "C"  bool ItemsUnpacker_ReadSubtreeInt32_m500860799 (ItemsUnpacker_t4126175435 * __this, int32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableInt32(System.Nullable`1<System.Int32>&)
extern "C"  bool ItemsUnpacker_ReadNullableInt32_m948486957 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t334943763 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableInt32(System.Nullable`1<System.Int32>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableInt32_m1515845391 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t334943763 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadUInt32(System.UInt32&)
extern "C"  bool ItemsUnpacker_ReadUInt32_m2682323101 (ItemsUnpacker_t4126175435 * __this, uint32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeUInt32(System.UInt32&)
extern "C"  bool ItemsUnpacker_ReadSubtreeUInt32_m2665292187 (ItemsUnpacker_t4126175435 * __this, uint32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableUInt32(System.Nullable`1<System.UInt32>&)
extern "C"  bool ItemsUnpacker_ReadNullableUInt32_m312130401 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t412748336 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableUInt32(System.Nullable`1<System.UInt32>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableUInt32_m2562982975 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t412748336 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadInt64(System.Int64&)
extern "C"  bool ItemsUnpacker_ReadInt64_m747970289 (ItemsUnpacker_t4126175435 * __this, int64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeInt64(System.Int64&)
extern "C"  bool ItemsUnpacker_ReadSubtreeInt64_m735712627 (ItemsUnpacker_t4126175435 * __this, int64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableInt64(System.Nullable`1<System.Int64>&)
extern "C"  bool ItemsUnpacker_ReadNullableInt64_m1930523957 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t3467111648 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableInt64(System.Nullable`1<System.Int64>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableInt64_m3391297107 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t3467111648 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadUInt64(System.UInt64&)
extern "C"  bool ItemsUnpacker_ReadUInt64_m72430589 (ItemsUnpacker_t4126175435 * __this, uint64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeUInt64(System.UInt64&)
extern "C"  bool ItemsUnpacker_ReadSubtreeUInt64_m539444283 (ItemsUnpacker_t4126175435 * __this, uint64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableUInt64(System.Nullable`1<System.UInt64>&)
extern "C"  bool ItemsUnpacker_ReadNullableUInt64_m4016413537 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t1172263229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableUInt64(System.Nullable`1<System.UInt64>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableUInt64_m143532095 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t1172263229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSingle(System.Single&)
extern "C"  bool ItemsUnpacker_ReadSingle_m1109664637 (ItemsUnpacker_t4126175435 * __this, float* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeSingle(System.Single&)
extern "C"  bool ItemsUnpacker_ReadSubtreeSingle_m839736699 (ItemsUnpacker_t4126175435 * __this, float* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableSingle(System.Nullable`1<System.Single>&)
extern "C"  bool ItemsUnpacker_ReadNullableSingle_m3062506593 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t339576247 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableSingle(System.Nullable`1<System.Single>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableSingle_m4070984127 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t339576247 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadDouble(System.Double&)
extern "C"  bool ItemsUnpacker_ReadDouble_m667816925 (ItemsUnpacker_t4126175435 * __this, double* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeDouble(System.Double&)
extern "C"  bool ItemsUnpacker_ReadSubtreeDouble_m1963522971 (ItemsUnpacker_t4126175435 * __this, double* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadNullableDouble(System.Nullable`1<System.Double>&)
extern "C"  bool ItemsUnpacker_ReadNullableDouble_m49992033 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t2341081996 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeNullableDouble(System.Nullable`1<System.Double>&)
extern "C"  bool ItemsUnpacker_ReadSubtreeNullableDouble_m2395915199 (ItemsUnpacker_t4126175435 * __this, Nullable_1_t2341081996 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadBinary(System.Byte[]&)
extern "C"  bool ItemsUnpacker_ReadBinary_m1310086522 (ItemsUnpacker_t4126175435 * __this, ByteU5BU5D_t3397334013** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeBinary(System.Byte[]&)
extern "C"  bool ItemsUnpacker_ReadSubtreeBinary_m1646615766 (ItemsUnpacker_t4126175435 * __this, ByteU5BU5D_t3397334013** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadString(System.String&)
extern "C"  bool ItemsUnpacker_ReadString_m2954738909 (ItemsUnpacker_t4126175435 * __this, String_t** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeString(System.String&)
extern "C"  bool ItemsUnpacker_ReadSubtreeString_m4242053531 (ItemsUnpacker_t4126175435 * __this, String_t** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadObject(MsgPack.MessagePackObject&)
extern "C"  bool ItemsUnpacker_ReadObject_m3560121412 (ItemsUnpacker_t4126175435 * __this, MessagePackObject_t2038085051 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ItemsUnpacker::ReadSubtreeObject(System.Boolean,MsgPack.MessagePackObject&)
extern "C"  bool ItemsUnpacker_ReadSubtreeObject_m1001149527 (ItemsUnpacker_t4126175435 * __this, bool ___isDeep0, MessagePackObject_t2038085051 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> MsgPack.ItemsUnpacker::SkipCore()
extern "C"  Nullable_1_t3467111648  ItemsUnpacker_SkipCore_m3198078138 (ItemsUnpacker_t4126175435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.ItemsUnpacker/ReadValueResult MsgPack.ItemsUnpacker::ReadValue(System.Byte&,System.Int64&,System.Single&,System.Double&)
extern "C"  int32_t ItemsUnpacker_ReadValue_m1346208178 (ItemsUnpacker_t4126175435 * __this, uint8_t* ___header0, int64_t* ___integral1, float* ___real322, double* ___real643, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::ThrowUnassingedMessageTypeException(System.Int32)
extern "C"  void ItemsUnpacker_ThrowUnassingedMessageTypeException_m29278518 (Il2CppObject * __this /* static, unused */, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.ItemsUnpacker::ReadArrayLengthCore(System.Int64)
extern "C"  int64_t ItemsUnpacker_ReadArrayLengthCore_m2315054785 (ItemsUnpacker_t4126175435 * __this, int64_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.ItemsUnpacker::ReadMapLengthCore(System.Int64)
extern "C"  int64_t ItemsUnpacker_ReadMapLengthCore_m4098833016 (ItemsUnpacker_t4126175435 * __this, int64_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MsgPack.ItemsUnpacker::ReadBinaryCore(System.Int64)
extern "C"  ByteU5BU5D_t3397334013* ItemsUnpacker_ReadBinaryCore_m2540744818 (ItemsUnpacker_t4126175435 * __this, int64_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.ItemsUnpacker::ReadStringCore(System.Int64)
extern "C"  String_t* ItemsUnpacker_ReadStringCore_m1879850573 (ItemsUnpacker_t4126175435 * __this, int64_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackExtendedTypeObject MsgPack.ItemsUnpacker::ReadMessagePackExtendedTypeObjectCore(MsgPack.ItemsUnpacker/ReadValueResult)
extern "C"  MessagePackExtendedTypeObject_t1459807206  ItemsUnpacker_ReadMessagePackExtendedTypeObjectCore_m3976114380 (ItemsUnpacker_t4126175435 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::ThrowUnexpectedExtCodeException(MsgPack.ItemsUnpacker/ReadValueResult)
extern "C"  void ItemsUnpacker_ThrowUnexpectedExtCodeException_m1068400900 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::CheckLength(System.Int64,MsgPack.ItemsUnpacker/ReadValueResult)
extern "C"  void ItemsUnpacker_CheckLength_m2076414474 (ItemsUnpacker_t4126175435 * __this, int64_t ___length0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::ThrowTooLongLengthException(System.Int64,MsgPack.ItemsUnpacker/ReadValueResult)
extern "C"  void ItemsUnpacker_ThrowTooLongLengthException_m3941367145 (ItemsUnpacker_t4126175435 * __this, int64_t ___length0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ItemsUnpacker::ThrowTypeException(System.Type,System.Byte)
extern "C"  void ItemsUnpacker_ThrowTypeException_m1959212637 (ItemsUnpacker_t4126175435 * __this, Type_t * ___type0, uint8_t ___header1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
