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

// UnityEngine.Networking.SyncListUInt
struct SyncListUInt_t2190275715;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync2190275715.h"

// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
extern "C"  void SyncListUInt__ctor_m4139491810 (SyncListUInt_t2190275715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.UInt32)
extern "C"  void SyncListUInt_SerializeItem_m948085043 (SyncListUInt_t2190275715 * __this, NetworkWriter_t560143343 * ___writer0, uint32_t ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.SyncListUInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  uint32_t SyncListUInt_DeserializeItem_m2837585443 (SyncListUInt_t2190275715 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListUInt UnityEngine.Networking.SyncListUInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListUInt_t2190275715 * SyncListUInt_ReadInstance_m1194897600 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListUInt)
extern "C"  void SyncListUInt_ReadReference_m1218698919 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, SyncListUInt_t2190275715 * ___syncList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListUInt)
extern "C"  void SyncListUInt_WriteInstance_m582358334 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, SyncListUInt_t2190275715 * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
