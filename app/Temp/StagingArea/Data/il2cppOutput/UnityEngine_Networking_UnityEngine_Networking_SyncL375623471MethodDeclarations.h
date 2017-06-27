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

// UnityEngine.Networking.SyncListBool
struct SyncListBool_t375623471;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_SyncL375623471.h"

// System.Void UnityEngine.Networking.SyncListBool::.ctor()
extern "C"  void SyncListBool__ctor_m3856674378 (SyncListBool_t375623471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  void SyncListBool_SerializeItem_m3257944612 (SyncListBool_t375623471 * __this, NetworkWriter_t560143343 * ___writer0, bool ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.SyncListBool::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  bool SyncListBool_DeserializeItem_m1586180716 (SyncListBool_t375623471 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListBool UnityEngine.Networking.SyncListBool::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListBool_t375623471 * SyncListBool_ReadInstance_m3451976768 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListBool)
extern "C"  void SyncListBool_ReadReference_m1728533287 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, SyncListBool_t375623471 * ___syncList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListBool)
extern "C"  void SyncListBool_WriteInstance_m588462270 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, SyncListBool_t375623471 * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
