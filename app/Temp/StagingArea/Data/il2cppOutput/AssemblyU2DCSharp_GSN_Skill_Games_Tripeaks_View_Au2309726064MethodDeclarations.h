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

// GSN.Skill.Games.Tripeaks.View/AudioCallback
struct AudioCallback_t2309726064;
// System.Object
struct Il2CppObject;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Tripeaks.View/AudioCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioCallback__ctor_m4132332931 (AudioCallback_t2309726064 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource GSN.Skill.Games.Tripeaks.View/AudioCallback::Invoke(System.Int32)
extern "C"  AudioSource_t1135106623 * AudioCallback_Invoke_m2701140353 (AudioCallback_t2309726064 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Tripeaks.View/AudioCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AudioCallback_BeginInvoke_m2291626633 (AudioCallback_t2309726064 * __this, int32_t ___index0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource GSN.Skill.Games.Tripeaks.View/AudioCallback::EndInvoke(System.IAsyncResult)
extern "C"  AudioSource_t1135106623 * AudioCallback_EndInvoke_m1570909586 (AudioCallback_t2309726064 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
