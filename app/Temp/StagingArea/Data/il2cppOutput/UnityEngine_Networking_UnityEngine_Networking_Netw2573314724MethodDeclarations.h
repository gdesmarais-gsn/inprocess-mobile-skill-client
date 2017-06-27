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

// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t2573314724;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CmdDelegate__ctor_m905155896 (CmdDelegate_t2573314724 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::Invoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader)
extern "C"  void CmdDelegate_Invoke_m3486633240 (CmdDelegate_t2573314724 * __this, NetworkBehaviour_t3873055601 * ___obj0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/CmdDelegate::BeginInvoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CmdDelegate_BeginInvoke_m887111743 (CmdDelegate_t2573314724 * __this, NetworkBehaviour_t3873055601 * ___obj0, NetworkReader_t3187690923 * ___reader1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CmdDelegate_EndInvoke_m4184273514 (CmdDelegate_t2573314724 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
