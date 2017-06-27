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

// UnityEngine.Networking.SyncListString
struct SyncListString_t1744845794;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1744845794.h"

// System.Void UnityEngine.Networking.SyncListString::.ctor()
extern "C"  void SyncListString__ctor_m3657499733 (SyncListString_t1744845794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::SerializeItem(UnityEngine.Networking.NetworkWriter,System.String)
extern "C"  void SyncListString_SerializeItem_m3650698970 (SyncListString_t1744845794 * __this, NetworkWriter_t560143343 * ___writer0, String_t* ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.SyncListString::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  String_t* SyncListString_DeserializeItem_m3243901754 (SyncListString_t1744845794 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListString UnityEngine.Networking.SyncListString::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListString_t1744845794 * SyncListString_ReadInstance_m1946530976 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListString)
extern "C"  void SyncListString_ReadReference_m1152595431 (Il2CppObject * __this /* static, unused */, NetworkReader_t3187690923 * ___reader0, SyncListString_t1744845794 * ___syncList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListString)
extern "C"  void SyncListString_WriteInstance_m1630149662 (Il2CppObject * __this /* static, unused */, NetworkWriter_t560143343 * ___writer0, SyncListString_t1744845794 * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
