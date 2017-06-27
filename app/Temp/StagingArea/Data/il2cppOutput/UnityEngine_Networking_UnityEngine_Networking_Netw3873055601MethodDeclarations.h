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

// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.Type
struct Type_t;
// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t2573314724;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>
struct HashSet_1_t2735696056;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2573314724.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3239134783.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void UnityEngine.Networking.NetworkBehaviour::.ctor()
extern "C"  void NetworkBehaviour__ctor_m483335596 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_localPlayerAuthority()
extern "C"  bool NetworkBehaviour_get_localPlayerAuthority_m860480724 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
extern "C"  bool NetworkBehaviour_get_isServer_m3866369296 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
extern "C"  bool NetworkBehaviour_get_isClient_m3491347612 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isLocalPlayer()
extern "C"  bool NetworkBehaviour_get_isLocalPlayer_m3726148987 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_hasAuthority()
extern "C"  bool NetworkBehaviour_get_hasAuthority_m616760354 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkBehaviour::get_netId()
extern "C"  NetworkInstanceId_t33998832  NetworkBehaviour_get_netId_m1850720479 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkBehaviour::get_connectionToServer()
extern "C"  NetworkConnection_t107267906 * NetworkBehaviour_get_connectionToServer_m1901350759 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkBehaviour::get_connectionToClient()
extern "C"  NetworkConnection_t107267906 * NetworkBehaviour_get_connectionToClient_m416408723 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkBehaviour::get_playerControllerId()
extern "C"  int16_t NetworkBehaviour_get_playerControllerId_m35943077 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkBehaviour::get_syncVarDirtyBits()
extern "C"  uint32_t NetworkBehaviour_get_syncVarDirtyBits_m1228195332 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_syncVarHookGuard()
extern "C"  bool NetworkBehaviour_get_syncVarHookGuard_m3524558819 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::set_syncVarHookGuard(System.Boolean)
extern "C"  void NetworkBehaviour_set_syncVarHookGuard_m3462258874 (NetworkBehaviour_t3873055601 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::get_myView()
extern "C"  NetworkIdentity_t1766639790 * NetworkBehaviour_get_myView_m4247121008 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendCommandInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendCommandInternal_m230047279 (NetworkBehaviour_t3873055601 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___channelId1, String_t* ___cmdName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeCommand(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeCommand_m2394795584 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendRPCInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendRPCInternal_m3711097461 (NetworkBehaviour_t3873055601 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___channelId1, String_t* ___rpcName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendTargetRPCInternal(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendTargetRPCInternal_m3940667455 (NetworkBehaviour_t3873055601 * __this, NetworkConnection_t107267906 * ___conn0, NetworkWriter_t560143343 * ___writer1, int32_t ___channelId2, String_t* ___rpcName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeRPC(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeRPC_m2795501098 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendEventInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendEventInternal_m486738376 (NetworkBehaviour_t3873055601 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___channelId1, String_t* ___eventName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncEvent(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncEvent_m2053067744 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncList(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncList_m2420905748 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterCommandDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterCommandDelegate_m4196994987 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t2573314724 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterRpcDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterRpcDelegate_m2900122269 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t2573314724 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterEventDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterEventDelegate_m3438913080 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t2573314724 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterSyncListDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterSyncListDelegate_m135666981 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t2573314724 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetInvoker(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetInvoker_m895657118 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashCommand(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashCommand_m3740357022 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t2573314724 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashClientRpc(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashClientRpc_m1452021311 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t2573314724 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashSyncList(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashSyncList_m587854568 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t2573314724 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashSyncEvent(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashSyncEvent_m4169591598 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t2573314724 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHash(System.Int32,UnityEngine.Networking.NetworkBehaviour/UNetInvokeType,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHash_m3922829540 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, int32_t ___invokeType1, Type_t ** ___invokeClass2, CmdDelegate_t2573314724 ** ___invokeFunction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::DumpInvokers()
extern "C"  void NetworkBehaviour_DumpInvokers_m400136935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::ContainsCommandDelegate(System.Int32)
extern "C"  bool NetworkBehaviour_ContainsCommandDelegate_m2589621996 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeCommandDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeCommandDelegate_m2413299011 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeRpcDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeRpcDelegate_m2882449981 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncEventDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncEventDelegate_m3455510615 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncListDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncListDelegate_m1316908305 (NetworkBehaviour_t3873055601 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashHandlerName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashHandlerName_m536540783 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashPrefixName(System.Int32,System.String)
extern "C"  String_t* NetworkBehaviour_GetCmdHashPrefixName_m3612787001 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, String_t* ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashCmdName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashCmdName_m2611232581 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashRpcName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashRpcName_m160599832 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashEventName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashEventName_m2289472507 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashListName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashListName_m2807950541 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SetSyncVarGameObject(UnityEngine.GameObject,UnityEngine.GameObject&,System.UInt32,UnityEngine.Networking.NetworkInstanceId&)
extern "C"  void NetworkBehaviour_SetSyncVarGameObject_m3803733288 (NetworkBehaviour_t3873055601 * __this, GameObject_t1756533147 * ___newGameObject0, GameObject_t1756533147 ** ___gameObjectField1, uint32_t ___dirtyBit2, NetworkInstanceId_t33998832 * ___netIdField3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SetDirtyBit(System.UInt32)
extern "C"  void NetworkBehaviour_SetDirtyBit_m1587776433 (NetworkBehaviour_t3873055601 * __this, uint32_t ___dirtyBit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::ClearAllDirtyBits()
extern "C"  void NetworkBehaviour_ClearAllDirtyBits_m1989192672 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkBehaviour::GetDirtyChannel()
extern "C"  int32_t NetworkBehaviour_GetDirtyChannel_m3294604259 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkBehaviour_OnSerialize_m2017152010 (NetworkBehaviour_t3873055601 * __this, NetworkWriter_t560143343 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkBehaviour_OnDeserialize_m2481155135 (NetworkBehaviour_t3873055601 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::PreStartClient()
extern "C"  void NetworkBehaviour_PreStartClient_m1967551746 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnNetworkDestroy()
extern "C"  void NetworkBehaviour_OnNetworkDestroy_m2190608999 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartServer()
extern "C"  void NetworkBehaviour_OnStartServer_m2631729100 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartClient()
extern "C"  void NetworkBehaviour_OnStartClient_m4046227384 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartLocalPlayer()
extern "C"  void NetworkBehaviour_OnStartLocalPlayer_m3913061421 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartAuthority()
extern "C"  void NetworkBehaviour_OnStartAuthority_m3644606490 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStopAuthority()
extern "C"  void NetworkBehaviour_OnStopAuthority_m25720010 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnRebuildObservers(System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>,System.Boolean)
extern "C"  bool NetworkBehaviour_OnRebuildObservers_m2029973373 (NetworkBehaviour_t3873055601 * __this, HashSet_1_t2735696056 * ___observers0, bool ___initialize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkBehaviour_OnSetLocalVisibility_m3040502197 (NetworkBehaviour_t3873055601 * __this, bool ___vis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkBehaviour_OnCheckObserver_m1920351490 (NetworkBehaviour_t3873055601 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel()
extern "C"  int32_t NetworkBehaviour_GetNetworkChannel_m2541494979 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval()
extern "C"  float NetworkBehaviour_GetNetworkSendInterval_m3147968355 (NetworkBehaviour_t3873055601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::.cctor()
extern "C"  void NetworkBehaviour__cctor_m2869254809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
