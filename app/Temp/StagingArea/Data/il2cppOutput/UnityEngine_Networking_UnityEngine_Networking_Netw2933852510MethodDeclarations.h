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

// UnityEngine.Networking.NetworkTransformChild
struct NetworkTransformChild_t2933852510;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t1738312058;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1308292611.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo888528802.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1738312058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"

// System.Void UnityEngine.Networking.NetworkTransformChild::.ctor()
extern "C"  void NetworkTransformChild__ctor_m1312356733 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkTransformChild::get_target()
extern "C"  Transform_t3275118058 * NetworkTransformChild_get_target_m1346958521 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_target(UnityEngine.Transform)
extern "C"  void NetworkTransformChild_set_target_m2243311760 (NetworkTransformChild_t2933852510 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkTransformChild::get_childIndex()
extern "C"  uint32_t NetworkTransformChild_get_childIndex_m1474183675 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_sendInterval()
extern "C"  float NetworkTransformChild_get_sendInterval_m4242391481 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_sendInterval(System.Single)
extern "C"  void NetworkTransformChild_set_sendInterval_m3234093786 (NetworkTransformChild_t2933852510 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransformChild::get_syncRotationAxis()
extern "C"  int32_t NetworkTransformChild_get_syncRotationAxis_m3214592356 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C"  void NetworkTransformChild_set_syncRotationAxis_m352660933 (NetworkTransformChild_t2933852510 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransformChild::get_rotationSyncCompression()
extern "C"  int32_t NetworkTransformChild_get_rotationSyncCompression_m3702383308 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransformChild_set_rotationSyncCompression_m959149777 (NetworkTransformChild_t2933852510 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_movementThreshold()
extern "C"  float NetworkTransformChild_get_movementThreshold_m1580907422 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_movementThreshold(System.Single)
extern "C"  void NetworkTransformChild_set_movementThreshold_m3981574425 (NetworkTransformChild_t2933852510 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateRotation()
extern "C"  float NetworkTransformChild_get_interpolateRotation_m469756017 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateRotation(System.Single)
extern "C"  void NetworkTransformChild_set_interpolateRotation_m2061544010 (NetworkTransformChild_t2933852510 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateMovement()
extern "C"  float NetworkTransformChild_get_interpolateMovement_m4263543636 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateMovement(System.Single)
extern "C"  void NetworkTransformChild_set_interpolateMovement_m1243208501 (NetworkTransformChild_t2933852510 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransformChild::get_clientMoveCallback3D()
extern "C"  ClientMoveCallback3D_t1738312058 * NetworkTransformChild_get_clientMoveCallback3D_m476724609 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C"  void NetworkTransformChild_set_clientMoveCallback3D_m3950116290 (NetworkTransformChild_t2933852510 * __this, ClientMoveCallback3D_t1738312058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_lastSyncTime()
extern "C"  float NetworkTransformChild_get_lastSyncTime_m3936483410 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::get_targetSyncPosition()
extern "C"  Vector3_t2243707580  NetworkTransformChild_get_targetSyncPosition_m2050625809 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::get_targetSyncRotation3D()
extern "C"  Quaternion_t4030073918  NetworkTransformChild_get_targetSyncRotation3D_m1686951389 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::OnValidate()
extern "C"  void NetworkTransformChild_OnValidate_m727995608 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::Awake()
extern "C"  void NetworkTransformChild_Awake_m3934744436 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransformChild::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkTransformChild_OnSerialize_m960311615 (NetworkTransformChild_t2933852510 * __this, NetworkWriter_t560143343 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransformChild_SerializeModeTransform_m3325045634 (NetworkTransformChild_t2933852510 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransformChild_OnDeserialize_m1873500872 (NetworkTransformChild_t2933852510 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransformChild_UnserializeModeTransform_m3708958376 (NetworkTransformChild_t2933852510 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdate()
extern "C"  void NetworkTransformChild_FixedUpdate_m3531532256 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateServer()
extern "C"  void NetworkTransformChild_FixedUpdateServer_m832166807 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateClient()
extern "C"  void NetworkTransformChild_FixedUpdateClient_m506436427 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::Update()
extern "C"  void NetworkTransformChild_Update_m2220588898 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransformChild::HasMoved()
extern "C"  bool NetworkTransformChild_HasMoved_m2347441768 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::SendTransform()
extern "C"  void NetworkTransformChild_SendTransform_m3196395725 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::HandleChildTransform(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkTransformChild_HandleChildTransform_m1222002467 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransformChild::GetNetworkChannel()
extern "C"  int32_t NetworkTransformChild_GetNetworkChannel_m3335374982 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::GetNetworkSendInterval()
extern "C"  float NetworkTransformChild_GetNetworkSendInterval_m2658334616 (NetworkTransformChild_t2933852510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
