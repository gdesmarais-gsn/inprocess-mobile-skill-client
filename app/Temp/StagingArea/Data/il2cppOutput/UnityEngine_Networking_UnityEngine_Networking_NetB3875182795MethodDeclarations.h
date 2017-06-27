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

// UnityEngine.Networking.NetBuffer
struct NetBuffer_t3875182795;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ArraySegment_1_gen2594217482.h"

// System.Void UnityEngine.Networking.NetBuffer::.ctor()
extern "C"  void NetBuffer__ctor_m841492020 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::.ctor(System.Byte[])
extern "C"  void NetBuffer__ctor_m375488061 (NetBuffer_t3875182795 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetBuffer::get_Position()
extern "C"  uint32_t NetBuffer_get_Position_m1342588137 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetBuffer::get_Length()
extern "C"  int32_t NetBuffer_get_Length_m1415376057 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetBuffer::ReadByte()
extern "C"  uint8_t NetBuffer_ReadByte_m2022218264 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::ReadBytes(System.Byte[],System.UInt32)
extern "C"  void NetBuffer_ReadBytes_m2708347686 (NetBuffer_t3875182795 * __this, ByteU5BU5D_t3397334013* ___buffer0, uint32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::ReadChars(System.Char[],System.UInt32)
extern "C"  void NetBuffer_ReadChars_m2317268142 (NetBuffer_t3875182795 * __this, CharU5BU5D_t1328083999* ___buffer0, uint32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetBuffer::AsArraySegment()
extern "C"  ArraySegment_1_t2594217482  NetBuffer_AsArraySegment_m3903862780 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte(System.Byte)
extern "C"  void NetBuffer_WriteByte_m347615068 (NetBuffer_t3875182795 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte2(System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte2_m3790606963 (NetBuffer_t3875182795 * __this, uint8_t ___value00, uint8_t ___value11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte4(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte4_m2303567857 (NetBuffer_t3875182795 * __this, uint8_t ___value00, uint8_t ___value11, uint8_t ___value22, uint8_t ___value33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte8(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte8_m1394733821 (NetBuffer_t3875182795 * __this, uint8_t ___value00, uint8_t ___value11, uint8_t ___value22, uint8_t ___value33, uint8_t ___value44, uint8_t ___value55, uint8_t ___value66, uint8_t ___value77, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteBytesAtOffset(System.Byte[],System.UInt16,System.UInt16)
extern "C"  void NetBuffer_WriteBytesAtOffset_m3747389885 (NetBuffer_t3875182795 * __this, ByteU5BU5D_t3397334013* ___buffer0, uint16_t ___targetOffset1, uint16_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteBytes(System.Byte[],System.UInt16)
extern "C"  void NetBuffer_WriteBytes_m3859473987 (NetBuffer_t3875182795 * __this, ByteU5BU5D_t3397334013* ___buffer0, uint16_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteCheckForSpace(System.UInt16)
extern "C"  void NetBuffer_WriteCheckForSpace_m744909684 (NetBuffer_t3875182795 * __this, uint16_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::FinishMessage()
extern "C"  void NetBuffer_FinishMessage_m2750556250 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::SeekZero()
extern "C"  void NetBuffer_SeekZero_m2331434972 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::Replace(System.Byte[])
extern "C"  void NetBuffer_Replace_m419257073 (NetBuffer_t3875182795 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetBuffer::ToString()
extern "C"  String_t* NetBuffer_ToString_m1334591617 (NetBuffer_t3875182795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
