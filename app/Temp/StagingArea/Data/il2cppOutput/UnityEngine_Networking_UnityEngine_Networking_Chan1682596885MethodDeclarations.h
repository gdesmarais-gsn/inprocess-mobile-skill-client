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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.ChannelPacket
struct ChannelPacket_t1682596885;
struct ChannelPacket_t1682596885_marshaled_pinvoke;
struct ChannelPacket_t1682596885_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chan1682596885.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"

// System.Void UnityEngine.Networking.ChannelPacket::.ctor(System.Int32,System.Boolean)
extern "C"  void ChannelPacket__ctor_m2606970246 (ChannelPacket_t1682596885 * __this, int32_t ___packetSize0, bool ___isReliable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelPacket::Reset()
extern "C"  void ChannelPacket_Reset_m1824594335 (ChannelPacket_t1682596885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::IsEmpty()
extern "C"  bool ChannelPacket_IsEmpty_m4144367389 (ChannelPacket_t1682596885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelPacket::Write(System.Byte[],System.Int32)
extern "C"  void ChannelPacket_Write_m2862481809 (ChannelPacket_t1682596885 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___numBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::HasSpace(System.Int32)
extern "C"  bool ChannelPacket_HasSpace_m2186672477 (ChannelPacket_t1682596885 * __this, int32_t ___numBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::SendToTransport(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  bool ChannelPacket_SendToTransport_m1929980404 (ChannelPacket_t1682596885 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ChannelPacket_t1682596885;
struct ChannelPacket_t1682596885_marshaled_pinvoke;

extern "C" void ChannelPacket_t1682596885_marshal_pinvoke(const ChannelPacket_t1682596885& unmarshaled, ChannelPacket_t1682596885_marshaled_pinvoke& marshaled);
extern "C" void ChannelPacket_t1682596885_marshal_pinvoke_back(const ChannelPacket_t1682596885_marshaled_pinvoke& marshaled, ChannelPacket_t1682596885& unmarshaled);
extern "C" void ChannelPacket_t1682596885_marshal_pinvoke_cleanup(ChannelPacket_t1682596885_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ChannelPacket_t1682596885;
struct ChannelPacket_t1682596885_marshaled_com;

extern "C" void ChannelPacket_t1682596885_marshal_com(const ChannelPacket_t1682596885& unmarshaled, ChannelPacket_t1682596885_marshaled_com& marshaled);
extern "C" void ChannelPacket_t1682596885_marshal_com_back(const ChannelPacket_t1682596885_marshaled_com& marshaled, ChannelPacket_t1682596885& unmarshaled);
extern "C" void ChannelPacket_t1682596885_marshal_com_cleanup(ChannelPacket_t1682596885_marshaled_com& marshaled);
