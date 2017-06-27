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

// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2931030083.h"
#include "mscorlib_System_Decimal724701077.h"
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

// System.Void UnityEngine.Networking.NetworkReader::.ctor()
extern "C"  void NetworkReader__ctor_m4099863488 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::.ctor(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkReader__ctor_m2123222090 (NetworkReader_t3187690923 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::.ctor(System.Byte[])
extern "C"  void NetworkReader__ctor_m2056184109 (NetworkReader_t3187690923 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Initialize()
extern "C"  void NetworkReader_Initialize_m1286041580 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::get_Position()
extern "C"  uint32_t NetworkReader_get_Position_m2171389729 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkReader::get_Length()
extern "C"  int32_t NetworkReader_get_Length_m3568004449 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::SeekZero()
extern "C"  void NetworkReader_SeekZero_m1670043636 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Replace(System.Byte[])
extern "C"  void NetworkReader_Replace_m3201360577 (NetworkReader_t3187690923 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
extern "C"  uint32_t NetworkReader_ReadPackedUInt32_m3078633978 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.NetworkReader::ReadPackedUInt64()
extern "C"  uint64_t NetworkReader_ReadPackedUInt64_m3699236616 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkReader::ReadNetworkId()
extern "C"  NetworkInstanceId_t33998832  NetworkReader_ReadNetworkId_m3062096545 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkReader::ReadSceneId()
extern "C"  NetworkSceneId_t2931030083  NetworkReader_ReadSceneId_m3774470736 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
extern "C"  uint8_t NetworkReader_ReadByte_m3670356752 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte UnityEngine.Networking.NetworkReader::ReadSByte()
extern "C"  int8_t NetworkReader_ReadSByte_m3772226232 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkReader::ReadInt16()
extern "C"  int16_t NetworkReader_ReadInt16_m2270874296 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.NetworkReader::ReadUInt16()
extern "C"  uint16_t NetworkReader_ReadUInt16_m986646626 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkReader::ReadInt32()
extern "C"  int32_t NetworkReader_ReadInt32_m2172679224 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadUInt32()
extern "C"  uint32_t NetworkReader_ReadUInt32_m2945630654 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Networking.NetworkReader::ReadInt64()
extern "C"  int64_t NetworkReader_ReadInt64_m4068763896 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.NetworkReader::ReadUInt64()
extern "C"  uint64_t NetworkReader_ReadUInt64_m918690692 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal UnityEngine.Networking.NetworkReader::ReadDecimal()
extern "C"  Decimal_t724701077  NetworkReader_ReadDecimal_m2659611672 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkReader::ReadSingle()
extern "C"  float NetworkReader_ReadSingle_m3965937584 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Networking.NetworkReader::ReadDouble()
extern "C"  double NetworkReader_ReadDouble_m2189529578 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ReadString()
extern "C"  String_t* NetworkReader_ReadString_m172969450 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Networking.NetworkReader::ReadChar()
extern "C"  Il2CppChar NetworkReader_ReadChar_m1711197404 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkReader::ReadBoolean()
extern "C"  bool NetworkReader_ReadBoolean_m3418091832 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* NetworkReader_ReadBytes_m2012254458 (NetworkReader_t3187690923 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytesAndSize()
extern "C"  ByteU5BU5D_t3397334013* NetworkReader_ReadBytesAndSize_m152912911 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Networking.NetworkReader::ReadVector2()
extern "C"  Vector2_t2243707579  NetworkReader_ReadVector2_m3538507070 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkReader::ReadVector3()
extern "C"  Vector3_t2243707580  NetworkReader_ReadVector3_m3799097566 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Networking.NetworkReader::ReadVector4()
extern "C"  Vector4_t2243707581  NetworkReader_ReadVector4_m283794302 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Networking.NetworkReader::ReadColor()
extern "C"  Color_t2020392075  NetworkReader_ReadColor_m3987730590 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Networking.NetworkReader::ReadColor32()
extern "C"  Color32_t874517518  NetworkReader_ReadColor32_m1441150046 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkReader::ReadQuaternion()
extern "C"  Quaternion_t4030073918  NetworkReader_ReadQuaternion_m3077522050 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Networking.NetworkReader::ReadRect()
extern "C"  Rect_t3681755626  NetworkReader_ReadRect_m2004839522 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane UnityEngine.Networking.NetworkReader::ReadPlane()
extern "C"  Plane_t3727654732  NetworkReader_ReadPlane_m3833744158 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Networking.NetworkReader::ReadRay()
extern "C"  Ray_t2469606224  NetworkReader_ReadRay_m239531102 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Networking.NetworkReader::ReadMatrix4x4()
extern "C"  Matrix4x4_t2933234003  NetworkReader_ReadMatrix4x4_m2887266782 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkReader::ReadNetworkHash128()
extern "C"  NetworkHash128_t835211239  NetworkReader_ReadNetworkHash128_m1259725454 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkReader::ReadTransform()
extern "C"  Transform_t3275118058 * NetworkReader_ReadTransform_m735334046 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkReader::ReadGameObject()
extern "C"  GameObject_t1756533147 * NetworkReader_ReadGameObject_m591613096 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkReader::ReadNetworkIdentity()
extern "C"  NetworkIdentity_t1766639790 * NetworkReader_ReadNetworkIdentity_m2568163368 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ToString()
extern "C"  String_t* NetworkReader_ToString_m3094792761 (NetworkReader_t3187690923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
