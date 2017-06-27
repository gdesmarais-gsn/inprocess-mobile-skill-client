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

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t1350910390;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t693817632;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi1350910390.h"
#include "UnityEngine_UnityEngine_Networking_QosType2003892483.h"

// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
extern "C"  void ConnectionConfig__ctor_m3237168477 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig__ctor_m798318590 (ConnectionConfig_t1350910390 * __this, ConnectionConfig_t1350910390 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig_Validate_m2089394972 (Il2CppObject * __this /* static, unused */, ConnectionConfig_t1350910390 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C"  uint16_t ConnectionConfig_get_PacketSize_m2733127338 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C"  uint16_t ConnectionConfig_get_FragmentSize_m1341545830 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C"  uint32_t ConnectionConfig_get_MinUpdateTimeout_m3261629347 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_MinUpdateTimeout(System.UInt32)
extern "C"  void ConnectionConfig_set_MinUpdateTimeout_m3956772548 (ConnectionConfig_t1350910390 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m2889606896 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C"  bool ConnectionConfig_get_UsePlatformSpecificProtocols_m2623323857 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_UsePlatformSpecificProtocols(System.Boolean)
extern "C"  void ConnectionConfig_set_UsePlatformSpecificProtocols_m2126254050 (ConnectionConfig_t1350910390 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C"  int32_t ConnectionConfig_get_ChannelCount_m505554692 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
extern "C"  uint8_t ConnectionConfig_AddChannel_m4163195075 (ConnectionConfig_t1350910390 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::get_Channels()
extern "C"  List_1_t693817632 * ConnectionConfig_get_Channels_m2543911426 (ConnectionConfig_t1350910390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
