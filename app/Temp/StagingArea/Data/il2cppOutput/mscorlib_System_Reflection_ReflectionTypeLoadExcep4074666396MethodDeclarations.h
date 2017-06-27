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

// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_t4074666396;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Exception[]
struct ExceptionU5BU5D_t1780857142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Reflection.ReflectionTypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ReflectionTypeLoadException__ctor_m2107856835 (ReflectionTypeLoadException_t4074666396 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___sc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.ReflectionTypeLoadException::get_Types()
extern "C"  TypeU5BU5D_t1664964607* ReflectionTypeLoadException_get_Types_m835620582 (ReflectionTypeLoadException_t4074666396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception[] System.Reflection.ReflectionTypeLoadException::get_LoaderExceptions()
extern "C"  ExceptionU5BU5D_t1780857142* ReflectionTypeLoadException_get_LoaderExceptions_m3628053757 (ReflectionTypeLoadException_t4074666396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ReflectionTypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ReflectionTypeLoadException_GetObjectData_m2560477454 (ReflectionTypeLoadException_t4074666396 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
