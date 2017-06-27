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

// UnityEngine.Networking.SyncListFloat
struct SyncListFloat_t268755165;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_SyncL268755165.h"

// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
extern "C"  void SyncListFloat__ctor_m374907526 (SyncListFloat_t268755165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Single)
extern "C"  void SyncListFloat_SerializeItem_m1080576790 (SyncListFloat_t268755165 * __this, NetworkWriter_t560143343 * ___writer0, float ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.SyncListFloat::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  float SyncListFloat_DeserializeItem_m1730781062 (SyncListFloat_t268755165 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListFloat UnityEngine.Networking.SyncListFloat::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListFloat_t268755165 * SyncListFloat_ReadInstance_m2062644600 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListFloat)
extern "C"  void SyncListFloat_ReadReference_m2040236203 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, SyncListFloat_t268755165 * ___syncList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListFloat)
extern "C"  void SyncListFloat_WriteInstance_m3187778350 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, SyncListFloat_t268755165 * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
