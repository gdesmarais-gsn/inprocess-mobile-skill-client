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

// UnityEngine.Networking.NetworkCRC
struct NetworkCRC_t3393861890;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_t2803924168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Networking.NetworkCRC::.ctor()
extern "C"  void NetworkCRC__ctor_m4243635837 (NetworkCRC_t3393861890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkCRC UnityEngine.Networking.NetworkCRC::get_singleton()
extern "C"  NetworkCRC_t3393861890 * NetworkCRC_get_singleton_m3018606615 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Networking.NetworkCRC::get_scripts()
extern "C"  Dictionary_2_t3986656710 * NetworkCRC_get_scripts_m2784902495 (NetworkCRC_t3393861890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::get_scriptCRCCheck()
extern "C"  bool NetworkCRC_get_scriptCRCCheck_m4159366647 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::set_scriptCRCCheck(System.Boolean)
extern "C"  void NetworkCRC_set_scriptCRCCheck_m893516562 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::ReinitializeScriptCRCs(System.Reflection.Assembly)
extern "C"  void NetworkCRC_ReinitializeScriptCRCs_m2535128634 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___callingAssembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::RegisterBehaviour(System.String,System.Int32)
extern "C"  void NetworkCRC_RegisterBehaviour_m3146466018 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___channel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::Validate(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[],System.Int32)
extern "C"  bool NetworkCRC_Validate_m2340395943 (Il2CppObject * __this /* static, unused */, CRCMessageEntryU5BU5D_t2803924168* ___scripts0, int32_t ___numChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::ValidateInternal(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[],System.Int32)
extern "C"  bool NetworkCRC_ValidateInternal_m2834685394 (NetworkCRC_t3393861890 * __this, CRCMessageEntryU5BU5D_t2803924168* ___remoteScripts0, int32_t ___numChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::Dump(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[])
extern "C"  void NetworkCRC_Dump_m314611242 (NetworkCRC_t3393861890 * __this, CRCMessageEntryU5BU5D_t2803924168* ___remoteScripts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
