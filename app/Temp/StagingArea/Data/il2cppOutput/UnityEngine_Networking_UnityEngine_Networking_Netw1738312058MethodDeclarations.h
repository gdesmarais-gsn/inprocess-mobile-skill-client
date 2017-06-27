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

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t1738312058;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientMoveCallback3D__ctor_m3449296332 (ClientMoveCallback3D_t1738312058 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::Invoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  bool ClientMoveCallback3D_Invoke_m1094305339 (ClientMoveCallback3D_t1738312058 * __this, Vector3_t2243707580 * ___position0, Vector3_t2243707580 * ___velocity1, Quaternion_t4030073918 * ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::BeginInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ClientMoveCallback3D_BeginInvoke_m2320653216 (ClientMoveCallback3D_t1738312058 * __this, Vector3_t2243707580 * ___position0, Vector3_t2243707580 * ___velocity1, Quaternion_t4030073918 * ___rotation2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::EndInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.IAsyncResult)
extern "C"  bool ClientMoveCallback3D_EndInvoke_m3641205117 (ClientMoveCallback3D_t1738312058 * __this, Vector3_t2243707580 * ___position0, Vector3_t2243707580 * ___velocity1, Quaternion_t4030073918 * ___rotation2, Il2CppObject * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
