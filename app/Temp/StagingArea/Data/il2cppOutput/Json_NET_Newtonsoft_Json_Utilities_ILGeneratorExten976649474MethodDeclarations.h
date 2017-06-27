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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::PushInstance(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void ILGeneratorExtensions_PushInstance_m1007970294 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___generator0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::BoxIfNeeded(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void ILGeneratorExtensions_BoxIfNeeded_m3208183378 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___generator0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::UnboxIfNeeded(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void ILGeneratorExtensions_UnboxIfNeeded_m3485264839 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___generator0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::CallMethod(System.Reflection.Emit.ILGenerator,System.Reflection.MethodInfo)
extern "C"  void ILGeneratorExtensions_CallMethod_m4166677766 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___generator0, MethodInfo_t * ___methodInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::Return(System.Reflection.Emit.ILGenerator)
extern "C"  void ILGeneratorExtensions_Return_m1478027564 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___generator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
