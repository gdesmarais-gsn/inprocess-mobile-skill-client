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

// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.Generic.IEnumerator`1<MsgPack.MessagePackObject>
struct IEnumerator_1_t3808576174;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "MsgPack_MsgPack_Unpacker_UnpackerMode1745652338.h"
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

// MsgPack.MessagePackObject MsgPack.Unpacker::get_LastReadData()
extern "C"  MessagePackObject_t2038085051  Unpacker_get_LastReadData_m3360989731 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::set_LastReadData(MsgPack.MessagePackObject)
extern "C"  void Unpacker_set_LastReadData_m3697778444 (Unpacker_t998931393 * __this, MessagePackObject_t2038085051  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::get_IsCollectionHeader()
extern "C"  bool Unpacker_get_IsCollectionHeader_m462793050 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::VerifyMode(MsgPack.Unpacker/UnpackerMode)
extern "C"  void Unpacker_VerifyMode_m491694238 (Unpacker_t998931393 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::VerifyIsNotDisposed()
extern "C"  void Unpacker_VerifyIsNotDisposed_m3967222463 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::ThrowObjectDisposedException()
extern "C"  void Unpacker_ThrowObjectDisposedException_m2641345595 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::ThrowInvalidModeException()
extern "C"  void Unpacker_ThrowInvalidModeException_m2429922311 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Unpacker MsgPack.Unpacker::Create(System.IO.Stream)
extern "C"  Unpacker_t998931393 * Unpacker_Create_m1360000335 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Unpacker MsgPack.Unpacker::Create(System.IO.Stream,System.Boolean)
extern "C"  Unpacker_t998931393 * Unpacker_Create_m2006669068 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, bool ___ownsStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::.ctor()
extern "C"  void Unpacker__ctor_m349086554 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::Dispose()
extern "C"  void Unpacker_Dispose_m3978708355 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::Dispose(System.Boolean)
extern "C"  void Unpacker_Dispose_m2337556302 (Unpacker_t998931393 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Unpacker MsgPack.Unpacker::ReadSubtree()
extern "C"  Unpacker_t998931393 * Unpacker_ReadSubtree_m3430570170 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::ThrowCannotBeSubtreeModeException()
extern "C"  void Unpacker_ThrowCannotBeSubtreeModeException_m1740143406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::ThrowInSubtreeModeException()
extern "C"  void Unpacker_ThrowInSubtreeModeException_m2007597643 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::EndReadSubtree()
extern "C"  void Unpacker_EndReadSubtree_m996856971 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::Read()
extern "C"  bool Unpacker_Read_m301469818 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::EnsureNotInSubtreeMode()
extern "C"  void Unpacker_EnsureNotInSubtreeMode_m3951705657 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::SetStable()
extern "C"  void Unpacker_SetStable_m213172951 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<MsgPack.MessagePackObject> MsgPack.Unpacker::GetEnumerator()
extern "C"  Il2CppObject* Unpacker_GetEnumerator_m4243062385 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MsgPack.Unpacker::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Unpacker_System_Collections_IEnumerable_GetEnumerator_m3735573921 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> MsgPack.Unpacker::Skip()
extern "C"  Nullable_1_t3467111648  Unpacker_Skip_m1982976521 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.Unpacker::ReadItemData()
extern "C"  MessagePackObject_t2038085051  Unpacker_ReadItemData_m221884693 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Unpacker::ThrowEofException()
extern "C"  void Unpacker_ThrowEofException_m398732349 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.Unpacker::UnpackSubtreeData()
extern "C"  MessagePackObject_t2038085051  Unpacker_UnpackSubtreeData_m1148315142 (Unpacker_t998931393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::UnpackSubtreeDataCore(MsgPack.MessagePackObject&)
extern "C"  bool Unpacker_UnpackSubtreeDataCore_m2408479302 (Unpacker_t998931393 * __this, MessagePackObject_t2038085051 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadBoolean(System.Boolean&)
extern "C"  bool Unpacker_ReadBoolean_m3405399123 (Unpacker_t998931393 * __this, bool* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableBoolean(System.Nullable`1<System.Boolean>&)
extern "C"  bool Unpacker_ReadNullableBoolean_m861488387 (Unpacker_t998931393 * __this, Nullable_1_t2088641033 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadByte(System.Byte&)
extern "C"  bool Unpacker_ReadByte_m2854809575 (Unpacker_t998931393 * __this, uint8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableByte(System.Nullable`1<System.Byte>&)
extern "C"  bool Unpacker_ReadNullableByte_m2203205443 (Unpacker_t998931393 * __this, Nullable_1_t1946170751 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadSByte(System.SByte&)
extern "C"  bool Unpacker_ReadSByte_m1666315679 (Unpacker_t998931393 * __this, int8_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableSByte(System.Nullable`1<System.SByte>&)
extern "C"  bool Unpacker_ReadNullableSByte_m2778178911 (Unpacker_t998931393 * __this, Nullable_1_t3012451160 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadInt16(System.Int16&)
extern "C"  bool Unpacker_ReadInt16_m3554344787 (Unpacker_t998931393 * __this, int16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableInt16(System.Nullable`1<System.Int16>&)
extern "C"  bool Unpacker_ReadNullableInt16_m3260088643 (Unpacker_t998931393 * __this, Nullable_1_t2304312229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadUInt16(System.UInt16&)
extern "C"  bool Unpacker_ReadUInt16_m2885944231 (Unpacker_t998931393 * __this, uint16_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableUInt16(System.Nullable`1<System.UInt16>&)
extern "C"  bool Unpacker_ReadNullableUInt16_m3568977923 (Unpacker_t998931393 * __this, Nullable_1_t3544916222 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadInt32(System.Int32&)
extern "C"  bool Unpacker_ReadInt32_m91991499 (Unpacker_t998931393 * __this, int32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableInt32(System.Nullable`1<System.Int32>&)
extern "C"  bool Unpacker_ReadNullableInt32_m2465945515 (Unpacker_t998931393 * __this, Nullable_1_t334943763 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadUInt32(System.UInt32&)
extern "C"  bool Unpacker_ReadUInt32_m3592597223 (Unpacker_t998931393 * __this, uint32_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableUInt32(System.Nullable`1<System.UInt32>&)
extern "C"  bool Unpacker_ReadNullableUInt32_m1966052739 (Unpacker_t998931393 * __this, Nullable_1_t412748336 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadInt64(System.Int64&)
extern "C"  bool Unpacker_ReadInt64_m1666852287 (Unpacker_t998931393 * __this, int64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableInt64(System.Nullable`1<System.Int64>&)
extern "C"  bool Unpacker_ReadNullableInt64_m2040197615 (Unpacker_t998931393 * __this, Nullable_1_t3467111648 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadUInt64(System.UInt64&)
extern "C"  bool Unpacker_ReadUInt64_m2713232007 (Unpacker_t998931393 * __this, uint64_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableUInt64(System.Nullable`1<System.UInt64>&)
extern "C"  bool Unpacker_ReadNullableUInt64_m713983363 (Unpacker_t998931393 * __this, Nullable_1_t1172263229 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadSingle(System.Single&)
extern "C"  bool Unpacker_ReadSingle_m846316743 (Unpacker_t998931393 * __this, float* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableSingle(System.Nullable`1<System.Single>&)
extern "C"  bool Unpacker_ReadNullableSingle_m2706347779 (Unpacker_t998931393 * __this, Nullable_1_t339576247 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadDouble(System.Double&)
extern "C"  bool Unpacker_ReadDouble_m1682631143 (Unpacker_t998931393 * __this, double* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadNullableDouble(System.Nullable`1<System.Double>&)
extern "C"  bool Unpacker_ReadNullableDouble_m3795012867 (Unpacker_t998931393 * __this, Nullable_1_t2341081996 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadBinary(System.Byte[]&)
extern "C"  bool Unpacker_ReadBinary_m3388452514 (Unpacker_t998931393 * __this, ByteU5BU5D_t3397334013** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadString(System.String&)
extern "C"  bool Unpacker_ReadString_m1686041575 (Unpacker_t998931393 * __this, String_t** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Unpacker::ReadObject(MsgPack.MessagePackObject&)
extern "C"  bool Unpacker_ReadObject_m1447087436 (Unpacker_t998931393 * __this, MessagePackObject_t2038085051 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
