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

// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ArraySegment_1_gen2594217482.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2931030083.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo835211239.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1766639790.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"

// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
extern "C"  void NetworkWriter__ctor_m2809346428 (NetworkWriter_t560143343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::.ctor(System.Byte[])
extern "C"  void NetworkWriter__ctor_m2313991515 (NetworkWriter_t560143343 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkWriter::get_Position()
extern "C"  int16_t NetworkWriter_get_Position_m1619096582 (NetworkWriter_t560143343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::ToArray()
extern "C"  ByteU5BU5D_t3397334013* NetworkWriter_ToArray_m2874381158 (NetworkWriter_t560143343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C"  ByteU5BU5D_t3397334013* NetworkWriter_AsArray_m2291992611 (NetworkWriter_t560143343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C"  ArraySegment_1_t2594217482  NetworkWriter_AsArraySegment_m4153237820 (NetworkWriter_t560143343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C"  void NetworkWriter_WritePackedUInt32_m2634533176 (NetworkWriter_t560143343 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt64(System.UInt64)
extern "C"  void NetworkWriter_WritePackedUInt64_m1356303704 (NetworkWriter_t560143343 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C"  void NetworkWriter_Write_m688344706 (NetworkWriter_t560143343 * __this, NetworkInstanceId_t33998832  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
extern "C"  void NetworkWriter_Write_m2366704139 (NetworkWriter_t560143343 * __this, NetworkSceneId_t2931030083  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Char)
extern "C"  void NetworkWriter_Write_m599451968 (NetworkWriter_t560143343 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C"  void NetworkWriter_Write_m1305006738 (NetworkWriter_t560143343 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.SByte)
extern "C"  void NetworkWriter_Write_m1157592083 (NetworkWriter_t560143343 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C"  void NetworkWriter_Write_m1323472300 (NetworkWriter_t560143343 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C"  void NetworkWriter_Write_m3179733651 (NetworkWriter_t560143343 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int32)
extern "C"  void NetworkWriter_Write_m1605797306 (NetworkWriter_t560143343 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C"  void NetworkWriter_Write_m854134757 (NetworkWriter_t560143343 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int64)
extern "C"  void NetworkWriter_Write_m899984795 (NetworkWriter_t560143343 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt64)
extern "C"  void NetworkWriter_Write_m2016934270 (NetworkWriter_t560143343 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C"  void NetworkWriter_Write_m3536413208 (NetworkWriter_t560143343 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Double)
extern "C"  void NetworkWriter_Write_m998858835 (NetworkWriter_t560143343 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Decimal)
extern "C"  void NetworkWriter_Write_m3882494321 (NetworkWriter_t560143343 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
extern "C"  void NetworkWriter_Write_m1047077131 (NetworkWriter_t560143343 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
extern "C"  void NetworkWriter_Write_m2448218134 (NetworkWriter_t560143343 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32)
extern "C"  void NetworkWriter_Write_m1435528567 (NetworkWriter_t560143343 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkWriter_Write_m795058476 (NetworkWriter_t560143343 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
extern "C"  void NetworkWriter_WriteBytesAndSize_m3519684108 (NetworkWriter_t560143343 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
extern "C"  void NetworkWriter_WriteBytesFull_m2790675920 (NetworkWriter_t560143343 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector2)
extern "C"  void NetworkWriter_Write_m2893180349 (NetworkWriter_t560143343 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
extern "C"  void NetworkWriter_Write_m1327096408 (NetworkWriter_t560143343 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector4)
extern "C"  void NetworkWriter_Write_m2086611295 (NetworkWriter_t560143343 * __this, Vector4_t2243707581  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color)
extern "C"  void NetworkWriter_Write_m2943354803 (NetworkWriter_t560143343 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color32)
extern "C"  void NetworkWriter_Write_m1666845610 (NetworkWriter_t560143343 * __this, Color32_t874517518  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
extern "C"  void NetworkWriter_Write_m2545439198 (NetworkWriter_t560143343 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Rect)
extern "C"  void NetworkWriter_Write_m2933119988 (NetworkWriter_t560143343 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Plane)
extern "C"  void NetworkWriter_Write_m1708651458 (NetworkWriter_t560143343 * __this, Plane_t3727654732  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Ray)
extern "C"  void NetworkWriter_Write_m3562709484 (NetworkWriter_t560143343 * __this, Ray_t2469606224  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Matrix4x4)
extern "C"  void NetworkWriter_Write_m2277504965 (NetworkWriter_t560143343 * __this, Matrix4x4_t2933234003  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkWriter_Write_m883549857 (NetworkWriter_t560143343 * __this, NetworkHash128_t835211239  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkWriter_Write_m84076862 (NetworkWriter_t560143343 * __this, NetworkIdentity_t1766639790 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Transform)
extern "C"  void NetworkWriter_Write_m3202094376 (NetworkWriter_t560143343 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.GameObject)
extern "C"  void NetworkWriter_Write_m772250841 (NetworkWriter_t560143343 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.MessageBase)
extern "C"  void NetworkWriter_Write_m3222266072 (NetworkWriter_t560143343 * __this, MessageBase_t2552428296 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C"  void NetworkWriter_SeekZero_m4173714628 (NetworkWriter_t560143343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
extern "C"  void NetworkWriter_StartMessage_m931021002 (NetworkWriter_t560143343 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
extern "C"  void NetworkWriter_FinishMessage_m3604322206 (NetworkWriter_t560143343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
