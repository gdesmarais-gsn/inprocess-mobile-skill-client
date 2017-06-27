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

// UnityEngine.Networking.SyncListInt
struct SyncListInt_t3316705628;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync3316705628.h"

// System.Void UnityEngine.Networking.SyncListInt::.ctor()
extern "C"  void SyncListInt__ctor_m3722780951 (SyncListInt_t3316705628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void SyncListInt_SerializeItem_m4063111383 (SyncListInt_t3316705628 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.SyncListInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  int32_t SyncListInt_DeserializeItem_m1025803091 (SyncListInt_t3316705628 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListInt UnityEngine.Networking.SyncListInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListInt_t3316705628 * SyncListInt_ReadInstance_m1911650266 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListInt)
extern "C"  void SyncListInt_ReadReference_m4093893191 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, SyncListInt_t3316705628 * ___syncList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListInt)
extern "C"  void SyncListInt_WriteInstance_m1198620636 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, SyncListInt_t3316705628 * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
