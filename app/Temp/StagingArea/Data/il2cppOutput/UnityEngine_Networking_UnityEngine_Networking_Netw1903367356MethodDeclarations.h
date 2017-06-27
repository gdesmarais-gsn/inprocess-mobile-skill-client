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

// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t1903367356;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t1738312058;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t1738312059;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3916231876.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1308292611.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo888528802.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1738312058.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1738312059.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UnityEngine.Networking.NetworkTransform::.ctor()
extern "C"  void NetworkTransform__ctor_m3041015043 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::get_transformSyncMode()
extern "C"  int32_t NetworkTransform_get_transformSyncMode_m548556111 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_transformSyncMode(UnityEngine.Networking.NetworkTransform/TransformSyncMode)
extern "C"  void NetworkTransform_set_transformSyncMode_m2252874936 (NetworkTransform_t1903367356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_sendInterval()
extern "C"  float NetworkTransform_get_sendInterval_m794972231 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_sendInterval(System.Single)
extern "C"  void NetworkTransform_set_sendInterval_m3056899036 (NetworkTransform_t1903367356 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::get_syncRotationAxis()
extern "C"  int32_t NetworkTransform_get_syncRotationAxis_m132614742 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C"  void NetworkTransform_set_syncRotationAxis_m2481257735 (NetworkTransform_t1903367356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::get_rotationSyncCompression()
extern "C"  int32_t NetworkTransform_get_rotationSyncCompression_m3880248592 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_set_rotationSyncCompression_m3357053547 (NetworkTransform_t1903367356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::get_syncSpin()
extern "C"  bool NetworkTransform_get_syncSpin_m2019059709 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_syncSpin(System.Boolean)
extern "C"  void NetworkTransform_set_syncSpin_m19476558 (NetworkTransform_t1903367356 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_movementTheshold()
extern "C"  float NetworkTransform_get_movementTheshold_m992827974 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_movementTheshold(System.Single)
extern "C"  void NetworkTransform_set_movementTheshold_m4285731697 (NetworkTransform_t1903367356 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_snapThreshold()
extern "C"  float NetworkTransform_get_snapThreshold_m2578364943 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_snapThreshold(System.Single)
extern "C"  void NetworkTransform_set_snapThreshold_m852758214 (NetworkTransform_t1903367356 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateRotation()
extern "C"  float NetworkTransform_get_interpolateRotation_m1991938819 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateRotation(System.Single)
extern "C"  void NetworkTransform_set_interpolateRotation_m658497064 (NetworkTransform_t1903367356 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateMovement()
extern "C"  float NetworkTransform_get_interpolateMovement_m1402726986 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateMovement(System.Single)
extern "C"  void NetworkTransform_set_interpolateMovement_m3370877875 (NetworkTransform_t1903367356 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback3D()
extern "C"  ClientMoveCallback3D_t1738312058 * NetworkTransform_get_clientMoveCallback3D_m817907223 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C"  void NetworkTransform_set_clientMoveCallback3D_m1738702320 (NetworkTransform_t1903367356 * __this, ClientMoveCallback3D_t1738312058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback2D()
extern "C"  ClientMoveCallback2D_t1738312059 * NetworkTransform_get_clientMoveCallback2D_m1399136567 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback2D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D)
extern "C"  void NetworkTransform_set_clientMoveCallback2D_m3455317782 (NetworkTransform_t1903367356 * __this, ClientMoveCallback2D_t1738312059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterController UnityEngine.Networking.NetworkTransform::get_characterContoller()
extern "C"  CharacterController_t4094781467 * NetworkTransform_get_characterContoller_m253664942 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::get_rigidbody3D()
extern "C"  Rigidbody_t4233889191 * NetworkTransform_get_rigidbody3D_m151894969 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::get_rigidbody2D()
extern "C"  Rigidbody2D_t502193897 * NetworkTransform_get_rigidbody2D_m528782678 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_lastSyncTime()
extern "C"  float NetworkTransform_get_lastSyncTime_m2879976800 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncPosition()
extern "C"  Vector3_t2243707580  NetworkTransform_get_targetSyncPosition_m922659323 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncVelocity()
extern "C"  Vector3_t2243707580  NetworkTransform_get_targetSyncVelocity_m2458336229 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::get_targetSyncRotation3D()
extern "C"  Quaternion_t4030073918  NetworkTransform_get_targetSyncRotation3D_m852974831 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_targetSyncRotation2D()
extern "C"  float NetworkTransform_get_targetSyncRotation2D_m2352403808 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::get_grounded()
extern "C"  bool NetworkTransform_get_grounded_m2456361962 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_grounded(System.Boolean)
extern "C"  void NetworkTransform_set_grounded_m2933587333 (NetworkTransform_t1903367356 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnValidate()
extern "C"  void NetworkTransform_OnValidate_m2052326842 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::Awake()
extern "C"  void NetworkTransform_Awake_m636276110 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnStartServer()
extern "C"  void NetworkTransform_OnStartServer_m101960163 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkTransform_OnSerialize_m4166154621 (NetworkTransform_t1903367356 * __this, NetworkWriter_t560143343 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeModeTransform_m4218131472 (NetworkTransform_t1903367356 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode3D(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeMode3D_m1411697195 (NetworkTransform_t1903367356 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeCharacterController(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeModeCharacterController_m1030022377 (NetworkTransform_t1903367356 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode2D(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeMode2D_m3640266928 (NetworkTransform_t1903367356 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_OnDeserialize_m2113487294 (NetworkTransform_t1903367356 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeModeTransform_m3464038434 (NetworkTransform_t1903367356 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode3D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeMode3D_m3802612221 (NetworkTransform_t1903367356 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode2D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeMode2D_m3763805368 (NetworkTransform_t1903367356 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeCharacterController(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeModeCharacterController_m48748599 (NetworkTransform_t1903367356 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdate()
extern "C"  void NetworkTransform_FixedUpdate_m2635105214 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateServer()
extern "C"  void NetworkTransform_FixedUpdateServer_m2984665865 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateClient()
extern "C"  void NetworkTransform_FixedUpdateClient_m1508673229 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode3D()
extern "C"  void NetworkTransform_InterpolateTransformMode3D_m3935661568 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformModeCharacterController()
extern "C"  void NetworkTransform_InterpolateTransformModeCharacterController_m4154150440 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode2D()
extern "C"  void NetworkTransform_InterpolateTransformMode2D_m3935661537 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::Update()
extern "C"  void NetworkTransform_Update_m583841164 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::HasMoved()
extern "C"  bool NetworkTransform_HasMoved_m1145576206 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SendTransform()
extern "C"  void NetworkTransform_SendTransform_m3580002315 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::HandleTransform(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkTransform_HandleTransform_m1659521187 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::WriteAngle(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_WriteAngle_m3254515608 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, float ___angle1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::ReadAngle(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_ReadAngle_m1277625040 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeVelocity3D_m2838662040 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, Vector3_t2243707580  ___velocity1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity2D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector2,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeVelocity2D_m692511928 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, Vector2_t2243707579  ___velocity1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Quaternion,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeRotation3D_m1824430250 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, Quaternion_t4030073918  ___rot1, int32_t ___mode2, int32_t ___compression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeRotation2D_m2826599428 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, float ___rot1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeSpin3D_m214885232 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, Vector3_t2243707580  ___angularVelocity1, int32_t ___mode2, int32_t ___compression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeSpin2D_m4291953974 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, float ___angularVelocity1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t2243707580  NetworkTransform_UnserializeVelocity3D_m2549351012 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t2243707580  NetworkTransform_UnserializeVelocity2D_m1348526057 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::UnserializeRotation3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Quaternion_t4030073918  NetworkTransform_UnserializeRotation3D_m3351428472 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, int32_t ___mode1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeRotation2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_UnserializeRotation2D_m1959061564 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeSpin3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t2243707580  NetworkTransform_UnserializeSpin3D_m2601173080 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, int32_t ___mode1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeSpin2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_UnserializeSpin2D_m3674521246 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransform::GetNetworkChannel()
extern "C"  int32_t NetworkTransform_GetNetworkChannel_m1296792024 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::GetNetworkSendInterval()
extern "C"  float NetworkTransform_GetNetworkSendInterval_m1985418434 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnStartAuthority()
extern "C"  void NetworkTransform_OnStartAuthority_m1000865027 (NetworkTransform_t1903367356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
