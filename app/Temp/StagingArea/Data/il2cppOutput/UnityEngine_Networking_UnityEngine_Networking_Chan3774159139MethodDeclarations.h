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

// UnityEngine.Networking.ChannelBuffer
struct ChannelBuffer_t3774159139;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chann888737962.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chan1682596885.h"

// System.Void UnityEngine.Networking.ChannelBuffer::.ctor(UnityEngine.Networking.NetworkConnection,System.Int32,System.Byte,System.Boolean,System.Boolean)
extern "C"  void ChannelBuffer__ctor_m1152455645 (ChannelBuffer_t3774159139 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___bufferSize1, uint8_t ___cid2, bool ___isReliable3, bool ___isSequenced4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numMsgsOut()
extern "C"  int32_t ChannelBuffer_get_numMsgsOut_m430762431 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numMsgsOut(System.Int32)
extern "C"  void ChannelBuffer_set_numMsgsOut_m592758584 (ChannelBuffer_t3774159139 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBufferedMsgsOut()
extern "C"  int32_t ChannelBuffer_get_numBufferedMsgsOut_m2479774984 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBufferedMsgsOut(System.Int32)
extern "C"  void ChannelBuffer_set_numBufferedMsgsOut_m1774704613 (ChannelBuffer_t3774159139 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBytesOut()
extern "C"  int32_t ChannelBuffer_get_numBytesOut_m3494728114 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBytesOut(System.Int32)
extern "C"  void ChannelBuffer_set_numBytesOut_m2516029251 (ChannelBuffer_t3774159139 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numMsgsIn()
extern "C"  int32_t ChannelBuffer_get_numMsgsIn_m2992622154 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numMsgsIn(System.Int32)
extern "C"  void ChannelBuffer_set_numMsgsIn_m2329304321 (ChannelBuffer_t3774159139 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBytesIn()
extern "C"  int32_t ChannelBuffer_get_numBytesIn_m1120556717 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBytesIn(System.Int32)
extern "C"  void ChannelBuffer_set_numBytesIn_m35493442 (ChannelBuffer_t3774159139 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBufferedPerSecond()
extern "C"  int32_t ChannelBuffer_get_numBufferedPerSecond_m1352439757 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBufferedPerSecond(System.Int32)
extern "C"  void ChannelBuffer_set_numBufferedPerSecond_m897165896 (ChannelBuffer_t3774159139 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_lastBufferedPerSecond()
extern "C"  int32_t ChannelBuffer_get_lastBufferedPerSecond_m574105961 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_lastBufferedPerSecond(System.Int32)
extern "C"  void ChannelBuffer_set_lastBufferedPerSecond_m1484941236 (ChannelBuffer_t3774159139 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::Dispose()
extern "C"  void ChannelBuffer_Dispose_m4088791589 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::Dispose(System.Boolean)
extern "C"  void ChannelBuffer_Dispose_m1626712892 (ChannelBuffer_t3774159139 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SetOption(UnityEngine.Networking.ChannelOption,System.Int32)
extern "C"  bool ChannelBuffer_SetOption_m674077613 (ChannelBuffer_t3774159139 * __this, int32_t ___option0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::CheckInternalBuffer()
extern "C"  void ChannelBuffer_CheckInternalBuffer_m4209671103 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendWriter(UnityEngine.Networking.NetworkWriter)
extern "C"  bool ChannelBuffer_SendWriter_m3924718399 (ChannelBuffer_t3774159139 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ChannelBuffer_Send_m2168612748 (ChannelBuffer_t3774159139 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::HandleFragment(UnityEngine.Networking.NetworkReader)
extern "C"  bool ChannelBuffer_HandleFragment_m2278136358 (ChannelBuffer_t3774159139 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendFragmentBytes(System.Byte[],System.Int32)
extern "C"  bool ChannelBuffer_SendFragmentBytes_m4011913601 (ChannelBuffer_t3774159139 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___bytesToSend1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendBytes(System.Byte[],System.Int32)
extern "C"  bool ChannelBuffer_SendBytes_m1586517753 (ChannelBuffer_t3774159139 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___bytesToSend1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::QueuePacket()
extern "C"  void ChannelBuffer_QueuePacket_m3754520687 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ChannelPacket UnityEngine.Networking.ChannelBuffer::AllocPacket()
extern "C"  ChannelPacket_t1682596885  ChannelBuffer_AllocPacket_m50598114 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::FreePacket(UnityEngine.Networking.ChannelPacket)
extern "C"  void ChannelBuffer_FreePacket_m167805244 (Il2CppObject * __this /* static, unused */, ChannelPacket_t1682596885  ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendInternalBuffer()
extern "C"  bool ChannelBuffer_SendInternalBuffer_m3063768557 (ChannelBuffer_t3774159139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::.cctor()
extern "C"  void ChannelBuffer__cctor_m2915962785 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
