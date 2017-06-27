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

// MsgPack.Packer
struct Packer_t1439452732;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t3746608383;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_PackerCompatibilityOptions4206945086.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "MsgPack_MsgPack_MessagePackExtendedTypeObject1459807206.h"
#include "mscorlib_System_Nullable_1_gen3012451160.h"
#include "mscorlib_System_Nullable_1_gen1946170751.h"
#include "mscorlib_System_Nullable_1_gen2304312229.h"
#include "mscorlib_System_Nullable_1_gen3544916222.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen1172263229.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Packer::get_DefaultCompatibilityOptions()
extern "C"  int32_t Packer_get_DefaultCompatibilityOptions_m155289620 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::.ctor(MsgPack.PackerCompatibilityOptions)
extern "C"  void Packer__ctor_m1704092361 (Packer_t1439452732 * __this, int32_t ___compatibilityOptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Create(System.IO.Stream,MsgPack.PackerCompatibilityOptions)
extern "C"  Packer_t1439452732 * Packer_Create_m2797350637 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___compatibilityOptions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Create(System.IO.Stream,System.Boolean)
extern "C"  Packer_t1439452732 * Packer_Create_m2883584766 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, bool ___ownsStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Create(System.IO.Stream,MsgPack.PackerCompatibilityOptions,System.Boolean)
extern "C"  Packer_t1439452732 * Packer_Create_m3297201212 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___compatibilityOptions1, bool ___ownsStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::Dispose()
extern "C"  void Packer_Dispose_m3220312386 (Packer_t1439452732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::Dispose(System.Boolean)
extern "C"  void Packer_Dispose_m141596455 (Packer_t1439452732 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::VerifyNotDisposed()
extern "C"  void Packer_VerifyNotDisposed_m1489419154 (Packer_t1439452732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::WriteBytes(System.Byte[],System.Boolean)
extern "C"  void Packer_WriteBytes_m72271923 (Packer_t1439452732 * __this, ByteU5BU5D_t3397334013* ___value0, bool ___isImmutable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.SByte)
extern "C"  Packer_t1439452732 * Packer_Pack_m3466535255 (Packer_t1439452732 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.SByte)
extern "C"  void Packer_PrivatePackCore_m3472788478 (Packer_t1439452732 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackInt8(System.Int64)
extern "C"  bool Packer_TryPackInt8_m2875537394 (Packer_t1439452732 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Byte)
extern "C"  Packer_t1439452732 * Packer_Pack_m3637760392 (Packer_t1439452732 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.Byte)
extern "C"  void Packer_PrivatePackCore_m4122424913 (Packer_t1439452732 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackUInt8(System.UInt64)
extern "C"  bool Packer_TryPackUInt8_m3841431292 (Packer_t1439452732 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Int16)
extern "C"  Packer_t1439452732 * Packer_Pack_m1840656730 (Packer_t1439452732 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.Int16)
extern "C"  void Packer_PrivatePackCore_m1107670595 (Packer_t1439452732 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackInt16(System.Int64)
extern "C"  bool Packer_TryPackInt16_m3715475567 (Packer_t1439452732 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.UInt16)
extern "C"  Packer_t1439452732 * Packer_Pack_m2412140895 (Packer_t1439452732 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.UInt16)
extern "C"  void Packer_PrivatePackCore_m1199418038 (Packer_t1439452732 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackUInt16(System.UInt64)
extern "C"  bool Packer_TryPackUInt16_m1782444251 (Packer_t1439452732 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Int32)
extern "C"  Packer_t1439452732 * Packer_Pack_m3810025264 (Packer_t1439452732 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.Int32)
extern "C"  void Packer_PrivatePackCore_m3077039129 (Packer_t1439452732 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackInt32(System.Int64)
extern "C"  bool Packer_TryPackInt32_m382395753 (Packer_t1439452732 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.UInt32)
extern "C"  Packer_t1439452732 * Packer_Pack_m2129815889 (Packer_t1439452732 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.UInt32)
extern "C"  void Packer_PrivatePackCore_m917093032 (Packer_t1439452732 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackUInt32(System.UInt64)
extern "C"  bool Packer_TryPackUInt32_m4227009093 (Packer_t1439452732 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Int64)
extern "C"  Packer_t1439452732 * Packer_Pack_m3003456375 (Packer_t1439452732 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.Int64)
extern "C"  void Packer_PrivatePackCore_m2270470302 (Packer_t1439452732 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackInt64(System.Int64)
extern "C"  bool Packer_TryPackInt64_m2705196150 (Packer_t1439452732 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.UInt64)
extern "C"  Packer_t1439452732 * Packer_Pack_m2835628400 (Packer_t1439452732 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.UInt64)
extern "C"  void Packer_PrivatePackCore_m1622905543 (Packer_t1439452732 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackUInt64(System.UInt64)
extern "C"  bool Packer_TryPackUInt64_m428345438 (Packer_t1439452732 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Single)
extern "C"  Packer_t1439452732 * Packer_Pack_m3636631010 (Packer_t1439452732 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.Single)
extern "C"  void Packer_PrivatePackCore_m3035353929 (Packer_t1439452732 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Double)
extern "C"  Packer_t1439452732 * Packer_Pack_m3985284383 (Packer_t1439452732 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.Double)
extern "C"  void Packer_PrivatePackCore_m3511796600 (Packer_t1439452732 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Boolean)
extern "C"  Packer_t1439452732 * Packer_Pack_m2455739064 (Packer_t1439452732 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackCore(System.Boolean)
extern "C"  void Packer_PrivatePackCore_m3374345071 (Packer_t1439452732 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackArrayHeader(System.Int32)
extern "C"  Packer_t1439452732 * Packer_PackArrayHeader_m2467366488 (Packer_t1439452732 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PackArrayHeaderCore(System.Int32)
extern "C"  void Packer_PackArrayHeaderCore_m854124198 (Packer_t1439452732 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackArrayHeaderCore(System.Int32)
extern "C"  void Packer_PrivatePackArrayHeaderCore_m1021824147 (Packer_t1439452732 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackMapHeader(System.Int32)
extern "C"  Packer_t1439452732 * Packer_PackMapHeader_m2236046007 (Packer_t1439452732 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PackMapHeaderCore(System.Int32)
extern "C"  void Packer_PackMapHeaderCore_m405001451 (Packer_t1439452732 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackMapHeaderCore(System.Int32)
extern "C"  void Packer_PrivatePackMapHeaderCore_m429871500 (Packer_t1439452732 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackRawHeaderCore(System.Int32,System.Boolean)
extern "C"  void Packer_PrivatePackRawHeaderCore_m2014506069 (Packer_t1439452732 * __this, int32_t ___length0, bool ___isString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackRaw(System.Byte[])
extern "C"  Packer_t1439452732 * Packer_PackRaw_m3094368454 (Packer_t1439452732 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackRaw(System.Byte[])
extern "C"  void Packer_PrivatePackRaw_m2000520126 (Packer_t1439452732 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackRawCore(System.Byte[],System.Boolean)
extern "C"  void Packer_PrivatePackRawCore_m2955239114 (Packer_t1439452732 * __this, ByteU5BU5D_t3397334013* ___value0, bool ___isImmutable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackString(System.Collections.Generic.IEnumerable`1<System.Char>)
extern "C"  Packer_t1439452732 * Packer_PackString_m3822887932 (Packer_t1439452732 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackString(System.String)
extern "C"  Packer_t1439452732 * Packer_PackString_m1580487238 (Packer_t1439452732 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PackStringCore(System.Collections.Generic.IEnumerable`1<System.Char>,System.Text.Encoding)
extern "C"  void Packer_PackStringCore_m2574716031 (Packer_t1439452732 * __this, Il2CppObject* ___value0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackString(System.Collections.Generic.IEnumerable`1<System.Char>,System.Text.Encoding)
extern "C"  void Packer_PrivatePackString_m4229551525 (Packer_t1439452732 * __this, Il2CppObject* ___value0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackStringCore(System.Collections.Generic.IEnumerable`1<System.Char>,System.Text.Encoding)
extern "C"  void Packer_PrivatePackStringCore_m3478987238 (Packer_t1439452732 * __this, Il2CppObject* ___value0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PackStringCore(System.String,System.Text.Encoding)
extern "C"  void Packer_PackStringCore_m3046934085 (Packer_t1439452732 * __this, String_t* ___value0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackString(System.String,System.Text.Encoding)
extern "C"  void Packer_PrivatePackString_m2945399911 (Packer_t1439452732 * __this, String_t* ___value0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackStringCore(System.String,System.Text.Encoding)
extern "C"  void Packer_PrivatePackStringCore_m2442038008 (Packer_t1439452732 * __this, String_t* ___value0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackBinary(System.Byte[])
extern "C"  Packer_t1439452732 * Packer_PackBinary_m3128186997 (Packer_t1439452732 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackBinary(System.Byte[])
extern "C"  void Packer_PrivatePackBinary_m58221807 (Packer_t1439452732 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackBinaryCore(System.Byte[],System.Boolean)
extern "C"  void Packer_PrivatePackBinaryCore_m3044673775 (Packer_t1439452732 * __this, ByteU5BU5D_t3397334013* ___value0, bool ___isImmutable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackTinySignedInteger(System.Int64)
extern "C"  bool Packer_TryPackTinySignedInteger_m2897372701 (Packer_t1439452732 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Packer::TryPackTinyUnsignedInteger(System.UInt64)
extern "C"  bool Packer_TryPackTinyUnsignedInteger_m409393839 (Packer_t1439452732 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackNull()
extern "C"  Packer_t1439452732 * Packer_PackNull_m2263564820 (Packer_t1439452732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackNullCore()
extern "C"  void Packer_PrivatePackNullCore_m745291755 (Packer_t1439452732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackExtendedTypeValue(System.Byte,System.Byte[])
extern "C"  Packer_t1439452732 * Packer_PackExtendedTypeValue_m4178401599 (Packer_t1439452732 * __this, uint8_t ___typeCode0, ByteU5BU5D_t3397334013* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::PackExtendedTypeValue(MsgPack.MessagePackExtendedTypeObject)
extern "C"  Packer_t1439452732 * Packer_PackExtendedTypeValue_m3793858999 (Packer_t1439452732 * __this, MessagePackExtendedTypeObject_t1459807206  ___mpeto0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::PrivatePackExtendedTypeValueCore(System.Byte,System.Byte[])
extern "C"  void Packer_PrivatePackExtendedTypeValueCore_m2390071290 (Packer_t1439452732 * __this, uint8_t ___typeCode0, ByteU5BU5D_t3397334013* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.SByte>)
extern "C"  Packer_t1439452732 * Packer_Pack_m1406242646 (Packer_t1439452732 * __this, Nullable_1_t3012451160  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.Byte>)
extern "C"  Packer_t1439452732 * Packer_Pack_m2307443377 (Packer_t1439452732 * __this, Nullable_1_t1946170751  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.Int16>)
extern "C"  Packer_t1439452732 * Packer_Pack_m2810677019 (Packer_t1439452732 * __this, Nullable_1_t2304312229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.UInt16>)
extern "C"  Packer_t1439452732 * Packer_Pack_m3132378982 (Packer_t1439452732 * __this, Nullable_1_t3544916222  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.Int32>)
extern "C"  Packer_t1439452732 * Packer_Pack_m3375327085 (Packer_t1439452732 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.UInt32>)
extern "C"  Packer_t1439452732 * Packer_Pack_m1445335648 (Packer_t1439452732 * __this, Nullable_1_t412748336  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.Int64>)
extern "C"  Packer_t1439452732 * Packer_Pack_m3093001862 (Packer_t1439452732 * __this, Nullable_1_t3467111648  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.UInt64>)
extern "C"  Packer_t1439452732 * Packer_Pack_m1062254031 (Packer_t1439452732 * __this, Nullable_1_t1172263229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.Single>)
extern "C"  Packer_t1439452732 * Packer_Pack_m1366023017 (Packer_t1439452732 * __this, Nullable_1_t339576247  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.Double>)
extern "C"  Packer_t1439452732 * Packer_Pack_m2375031648 (Packer_t1439452732 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.Packer::Pack(System.Nullable`1<System.Boolean>)
extern "C"  Packer_t1439452732 * Packer_Pack_m1269191559 (Packer_t1439452732 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Packer::.cctor()
extern "C"  void Packer__cctor_m1243234702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
