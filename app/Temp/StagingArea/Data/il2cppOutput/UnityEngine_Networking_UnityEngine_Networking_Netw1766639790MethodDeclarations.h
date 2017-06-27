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

// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t293053598;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.Type
struct Type_t;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2931030083.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo835211239.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"

// System.Void UnityEngine.Networking.NetworkIdentity::.ctor()
extern "C"  void NetworkIdentity__ctor_m1485272197 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isClient()
extern "C"  bool NetworkIdentity_get_isClient_m2436568915 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isServer()
extern "C"  bool NetworkIdentity_get_isServer_m1468412663 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_hasAuthority()
extern "C"  bool NetworkIdentity_get_hasAuthority_m3369946311 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
extern "C"  NetworkInstanceId_t33998832  NetworkIdentity_get_netId_m1164915858 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::get_sceneId()
extern "C"  NetworkSceneId_t2931030083  NetworkIdentity_get_sceneId_m3513054000 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_serverOnly()
extern "C"  bool NetworkIdentity_get_serverOnly_m1762744341 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::set_serverOnly(System.Boolean)
extern "C"  void NetworkIdentity_set_serverOnly_m3702321878 (NetworkIdentity_t1766639790 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_localPlayerAuthority()
extern "C"  bool NetworkIdentity_get_localPlayerAuthority_m2174937439 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::set_localPlayerAuthority(System.Boolean)
extern "C"  void NetworkIdentity_set_localPlayerAuthority_m3562961116 (NetworkIdentity_t1766639790 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_clientAuthorityOwner()
extern "C"  NetworkConnection_t107267906 * NetworkIdentity_get_clientAuthorityOwner_m310627525 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::get_assetId()
extern "C"  NetworkHash128_t835211239  NetworkIdentity_get_assetId_m1552375196 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetDynamicAssetId(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkIdentity_SetDynamicAssetId_m2695685323 (NetworkIdentity_t1766639790 * __this, NetworkHash128_t835211239  ___newAssetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetClientOwner(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_SetClientOwner_m434713254 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ClearClientOwner()
extern "C"  void NetworkIdentity_ClearClientOwner_m3706201070 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ForceAuthority(System.Boolean)
extern "C"  void NetworkIdentity_ForceAuthority_m1750563918 (NetworkIdentity_t1766639790 * __this, bool ___authority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isLocalPlayer()
extern "C"  bool NetworkIdentity_get_isLocalPlayer_m3717507190 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkIdentity::get_playerControllerId()
extern "C"  int16_t NetworkIdentity_get_playerControllerId_m270044236 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_connectionToServer()
extern "C"  NetworkConnection_t107267906 * NetworkIdentity_get_connectionToServer_m3850043610 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_connectionToClient()
extern "C"  NetworkConnection_t107267906 * NetworkIdentity_get_connectionToClient_m1310949350 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::get_observers()
extern "C"  ReadOnlyCollection_1_t293053598 * NetworkIdentity_get_observers_m515151866 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::GetNextNetworkId()
extern "C"  NetworkInstanceId_t33998832  NetworkIdentity_GetNextNetworkId_m2945923653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::CacheBehaviours()
extern "C"  void NetworkIdentity_CacheBehaviours_m3242833079 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::AddNetworkId(System.UInt32)
extern "C"  void NetworkIdentity_AddNetworkId_m2403376759 (Il2CppObject * __this /* static, unused */, uint32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNetworkInstanceId(UnityEngine.Networking.NetworkInstanceId)
extern "C"  void NetworkIdentity_SetNetworkInstanceId_m424513834 (NetworkIdentity_t1766639790 * __this, NetworkInstanceId_t33998832  ___newNetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ForceSceneId(System.Int32)
extern "C"  void NetworkIdentity_ForceSceneId_m2730454522 (NetworkIdentity_t1766639790 * __this, int32_t ___newSceneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UpdateClientServer(System.Boolean,System.Boolean)
extern "C"  void NetworkIdentity_UpdateClientServer_m835943566 (NetworkIdentity_t1766639790 * __this, bool ___isClientFlag0, bool ___isServerFlag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNotLocalPlayer()
extern "C"  void NetworkIdentity_SetNotLocalPlayer_m2015056618 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RemoveObserverInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_RemoveObserverInternal_m1582561231 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnDestroy()
extern "C"  void NetworkIdentity_OnDestroy_m3764055014 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartServer(System.Boolean)
extern "C"  void NetworkIdentity_OnStartServer_m3944986054 (NetworkIdentity_t1766639790 * __this, bool ___allowNonZeroNetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartClient()
extern "C"  void NetworkIdentity_OnStartClient_m2065467561 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartAuthority()
extern "C"  void NetworkIdentity_OnStartAuthority_m3081724313 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStopAuthority()
extern "C"  void NetworkIdentity_OnStopAuthority_m3029217909 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkIdentity_OnSetLocalVisibility_m2152779416 (NetworkIdentity_t1766639790 * __this, bool ___vis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_OnCheckObserver_m1764155865 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetSerializeAllVars(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkIdentity_UNetSerializeAllVars_m3810529360 (NetworkIdentity_t1766639790 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleClientAuthority(System.Boolean)
extern "C"  void NetworkIdentity_HandleClientAuthority_m2378058784 (NetworkIdentity_t1766639790 * __this, bool ___authority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::GetInvokeComponent(System.Int32,System.Type,UnityEngine.Networking.NetworkBehaviour&)
extern "C"  bool NetworkIdentity_GetInvokeComponent_m4250138282 (NetworkIdentity_t1766639790 * __this, int32_t ___cmdHash0, Type_t * ___invokeClass1, NetworkBehaviour_t3873055601 ** ___invokeComponent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleSyncEvent(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleSyncEvent_m2608963017 (NetworkIdentity_t1766639790 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleSyncList(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleSyncList_m3226497359 (NetworkIdentity_t1766639790 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleCommand(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleCommand_m2165985337 (NetworkIdentity_t1766639790 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleRPC(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleRPC_m4278786415 (NetworkIdentity_t1766639790 * __this, int32_t ___cmdHash0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetUpdate()
extern "C"  void NetworkIdentity_UNetUpdate_m701128140 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnUpdateVars(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkIdentity_OnUpdateVars_m4188644322 (NetworkIdentity_t1766639790 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetLocalPlayer(System.Int16)
extern "C"  void NetworkIdentity_SetLocalPlayer_m4175728022 (NetworkIdentity_t1766639790 * __this, int16_t ___localPlayerControllerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetConnectionToServer(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_SetConnectionToServer_m4195493442 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetConnectionToClient(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkIdentity_SetConnectionToClient_m3044012115 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___newPlayerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnNetworkDestroy()
extern "C"  void NetworkIdentity_OnNetworkDestroy_m1645028162 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ClearObservers()
extern "C"  void NetworkIdentity_ClearObservers_m209087099 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::AddObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_AddObserver_m1264596679 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RemoveObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_RemoveObserver_m3737787574 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RebuildObservers(System.Boolean)
extern "C"  void NetworkIdentity_RebuildObservers_m4213212336 (NetworkIdentity_t1766639790 * __this, bool ___initialize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::RemoveClientAuthority(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_RemoveClientAuthority_m3133301616 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::AssignClientAuthority(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_AssignClientAuthority_m2849902015 (NetworkIdentity_t1766639790 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::MarkForReset()
extern "C"  void NetworkIdentity_MarkForReset_m1573083284 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::Reset()
extern "C"  void NetworkIdentity_Reset_m3634253304 (NetworkIdentity_t1766639790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetStaticUpdate()
extern "C"  void NetworkIdentity_UNetStaticUpdate_m2136578454 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::.cctor()
extern "C"  void NetworkIdentity__cctor_m820065610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
