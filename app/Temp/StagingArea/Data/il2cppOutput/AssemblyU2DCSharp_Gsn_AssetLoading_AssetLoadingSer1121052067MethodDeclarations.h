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

// Gsn.AssetLoading.AssetLoadingService
struct AssetLoadingService_t1121052067;
// Gsn.AssetLoading.IAssetLoadingService
struct IAssetLoadingService_t2931780068;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gsn_AssetLoading_LoadAssetParams3868435948.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Void Gsn.AssetLoading.AssetLoadingService::.ctor()
extern "C"  void AssetLoadingService__ctor_m4288532546 (AssetLoadingService_t1121052067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gsn.AssetLoading.AssetLoadingService::Initialize(Gsn.AssetLoading.IAssetLoadingService)
extern "C"  void AssetLoadingService_Initialize_m4105601578 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gsn.AssetLoading.AssetLoadingService::CanLoadAsset(Gsn.AssetLoading.LoadAssetParams)
extern "C"  bool AssetLoadingService_CanLoadAsset_m3444931758 (Il2CppObject * __this /* static, unused */, LoadAssetParams_t3868435948  ___lap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Gsn.AssetLoading.AssetLoadingService::LoadAsset(Gsn.AssetLoading.LoadAssetParams)
extern "C"  Il2CppObject * AssetLoadingService_LoadAsset_m2099098277 (Il2CppObject * __this /* static, unused */, LoadAssetParams_t3868435948  ___lap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Gsn.AssetLoading.AssetLoadingService::PreloadAssetGroup(System.String,UnityEngine.MonoBehaviour)
extern "C"  Il2CppObject * AssetLoadingService_PreloadAssetGroup_m4236411187 (Il2CppObject * __this /* static, unused */, String_t* ___groupName0, MonoBehaviour_t1158329972 * ___coroutineManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gsn.AssetLoading.AssetLoadingService::UnloadAssetGroup(System.String)
extern "C"  void AssetLoadingService_UnloadAssetGroup_m1957365606 (Il2CppObject * __this /* static, unused */, String_t* ___groupName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gsn.AssetLoading.AssetLoadingService::IsInitialized()
extern "C"  bool AssetLoadingService_IsInitialized_m637706586 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
