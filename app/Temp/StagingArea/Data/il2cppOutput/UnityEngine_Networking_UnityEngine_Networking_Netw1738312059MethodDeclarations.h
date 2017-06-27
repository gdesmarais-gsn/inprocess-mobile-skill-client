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

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t1738312059;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientMoveCallback2D__ctor_m117536807 (ClientMoveCallback2D_t1738312059 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::Invoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&)
extern "C"  bool ClientMoveCallback2D_Invoke_m452234392 (ClientMoveCallback2D_t1738312059 * __this, Vector2_t2243707579 * ___position0, Vector2_t2243707579 * ___velocity1, float* ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::BeginInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ClientMoveCallback2D_BeginInvoke_m803028111 (ClientMoveCallback2D_t1738312059 * __this, Vector2_t2243707579 * ___position0, Vector2_t2243707579 * ___velocity1, float* ___rotation2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::EndInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.IAsyncResult)
extern "C"  bool ClientMoveCallback2D_EndInvoke_m946270806 (ClientMoveCallback2D_t1738312059 * __this, Vector2_t2243707579 * ___position0, Vector2_t2243707579 * ___velocity1, float* ___rotation2, Il2CppObject * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
