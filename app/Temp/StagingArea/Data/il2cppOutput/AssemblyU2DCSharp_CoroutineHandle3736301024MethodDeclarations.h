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

// CoroutineHandle
struct CoroutineHandle_t3736301024;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3462875981;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_SequenceType4084443865.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_YieldInstruction3462875981.h"

// System.Void CoroutineHandle::.ctor(UnityEngine.GameObject,System.Collections.IEnumerator,SequenceType)
extern "C"  void CoroutineHandle__ctor_m1295750985 (CoroutineHandle_t3736301024 * __this, GameObject_t1756533147 * ___target0, Il2CppObject * ___function1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CoroutineHandle::get_IsDone()
extern "C"  bool CoroutineHandle_get_IsDone_m1959673924 (CoroutineHandle_t3736301024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CoroutineHandle::get_IsFinished()
extern "C"  bool CoroutineHandle_get_IsFinished_m1552844738 (CoroutineHandle_t3736301024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CoroutineHandle::Pause(System.Boolean)
extern "C"  void CoroutineHandle_Pause_m2458655932 (CoroutineHandle_t3736301024 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CoroutineHandle::MoveNext()
extern "C"  bool CoroutineHandle_MoveNext_m1426578185 (CoroutineHandle_t3736301024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CoroutineHandle::Update(System.Single)
extern "C"  bool CoroutineHandle_Update_m2410620451 (CoroutineHandle_t3736301024 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CoroutineHandle::Stop()
extern "C"  void CoroutineHandle_Stop_m1198512815 (CoroutineHandle_t3736301024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CoroutineHandle::ProcessMoveResult()
extern "C"  bool CoroutineHandle_ProcessMoveResult_m2566848944 (CoroutineHandle_t3736301024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CoroutineHandle::ProcessYieldInstruction(System.Object)
extern "C"  bool CoroutineHandle_ProcessYieldInstruction_m2539139007 (CoroutineHandle_t3736301024 * __this, Il2CppObject * ___current0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CoroutineHandle::YieldInstructionHandlerCoroutine(UnityEngine.YieldInstruction)
extern "C"  Il2CppObject * CoroutineHandle_YieldInstructionHandlerCoroutine_m431084986 (CoroutineHandle_t3736301024 * __this, YieldInstruction_t3462875981 * ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
