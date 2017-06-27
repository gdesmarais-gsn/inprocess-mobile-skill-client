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

// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t2123032571;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"

// System.Void UnityEngine.Networking.NetworkLobbyPlayer::.ctor()
extern "C"  void NetworkLobbyPlayer__ctor_m4020328886 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkLobbyPlayer::get_slot()
extern "C"  uint8_t NetworkLobbyPlayer_get_slot_m1866906521 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::set_slot(System.Byte)
extern "C"  void NetworkLobbyPlayer_set_slot_m3252816360 (NetworkLobbyPlayer_t2123032571 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::get_readyToBegin()
extern "C"  bool NetworkLobbyPlayer_get_readyToBegin_m2464646446 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::set_readyToBegin(System.Boolean)
extern "C"  void NetworkLobbyPlayer_set_readyToBegin_m2869369719 (NetworkLobbyPlayer_t2123032571 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::Start()
extern "C"  void NetworkLobbyPlayer_Start_m2333801202 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnEnable()
extern "C"  void NetworkLobbyPlayer_OnEnable_m194195442 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnDisable()
extern "C"  void NetworkLobbyPlayer_OnDisable_m680833727 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnStartClient()
extern "C"  void NetworkLobbyPlayer_OnStartClient_m3296340802 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendReadyToBeginMessage()
extern "C"  void NetworkLobbyPlayer_SendReadyToBeginMessage_m1844985890 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendNotReadyToBeginMessage()
extern "C"  void NetworkLobbyPlayer_SendNotReadyToBeginMessage_m2768133383 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendSceneLoadedMessage()
extern "C"  void NetworkLobbyPlayer_SendSceneLoadedMessage_m2040629022 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void NetworkLobbyPlayer_OnSceneLoaded_m4072113067 (NetworkLobbyPlayer_t2123032571 * __this, Scene_t1684909666  ___scene0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::RemovePlayer()
extern "C"  void NetworkLobbyPlayer_RemovePlayer_m3845758523 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientEnterLobby()
extern "C"  void NetworkLobbyPlayer_OnClientEnterLobby_m682293852 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientExitLobby()
extern "C"  void NetworkLobbyPlayer_OnClientExitLobby_m4060774044 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientReady(System.Boolean)
extern "C"  void NetworkLobbyPlayer_OnClientReady_m2736084574 (NetworkLobbyPlayer_t2123032571 * __this, bool ___readyState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkLobbyPlayer_OnSerialize_m1124800212 (NetworkLobbyPlayer_t2123032571 * __this, NetworkWriter_t560143343 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkLobbyPlayer_OnDeserialize_m2506698731 (NetworkLobbyPlayer_t2123032571 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnGUI()
extern "C"  void NetworkLobbyPlayer_OnGUI_m1066694554 (NetworkLobbyPlayer_t2123032571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
