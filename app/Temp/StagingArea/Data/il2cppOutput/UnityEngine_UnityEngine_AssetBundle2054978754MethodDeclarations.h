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

// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.Object
struct Object_t1021602117;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2674559435;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C"  Object_t1021602117 * AssetBundle_LoadAsset_m866056071 (AssetBundle_t2054978754 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C"  Object_t1021602117 * AssetBundle_LoadAsset_Internal_m2781704095 (AssetBundle_t2054978754 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync(System.String,System.Type)
extern "C"  AssetBundleRequest_t2674559435 * AssetBundle_LoadAssetAsync_m664866985 (AssetBundle_t2054978754 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync_Internal(System.String,System.Type)
extern "C"  AssetBundleRequest_t2674559435 * AssetBundle_LoadAssetAsync_Internal_m97478989 (AssetBundle_t2054978754 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
