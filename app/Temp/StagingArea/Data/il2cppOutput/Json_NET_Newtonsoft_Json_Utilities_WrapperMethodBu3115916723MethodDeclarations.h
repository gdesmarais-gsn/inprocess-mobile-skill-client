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

// Newtonsoft.Json.Utilities.WrapperMethodBuilder
struct WrapperMethodBuilder_t3115916723;
// System.Type
struct Type_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Collections.Generic.ICollection`1<System.Reflection.ParameterInfo>
struct ICollection_1_t3201115380;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder3308873219.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"

// System.Void Newtonsoft.Json.Utilities.WrapperMethodBuilder::.ctor(System.Type,System.Reflection.Emit.TypeBuilder)
extern "C"  void WrapperMethodBuilder__ctor_m1188802667 (WrapperMethodBuilder_t3115916723 * __this, Type_t * ___realObjectType0, TypeBuilder_t3308873219 * ___proxyBuilder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.WrapperMethodBuilder::Generate(System.Reflection.MethodInfo)
extern "C"  void WrapperMethodBuilder_Generate_m2488108318 (WrapperMethodBuilder_t3115916723 * __this, MethodInfo_t * ___newMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.WrapperMethodBuilder::Return(System.Reflection.Emit.ILGenerator)
extern "C"  void WrapperMethodBuilder_Return_m1986468173 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___ilGenerator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.WrapperMethodBuilder::ExecuteMethod(System.Reflection.MethodBase,System.Type[],System.Reflection.Emit.ILGenerator)
extern "C"  void WrapperMethodBuilder_ExecuteMethod_m3212157770 (WrapperMethodBuilder_t3115916723 * __this, MethodBase_t904190842 * ___newMethod0, TypeU5BU5D_t1664964607* ___parameterTypes1, ILGenerator_t99948092 * ___ilGenerator2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.WrapperMethodBuilder::GetMethod(System.Reflection.MethodBase,System.Type[])
extern "C"  MethodInfo_t * WrapperMethodBuilder_GetMethod_m948278910 (WrapperMethodBuilder_t3115916723 * __this, MethodBase_t904190842 * ___realMethod0, TypeU5BU5D_t1664964607* ___parameterTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.WrapperMethodBuilder::PushParameters(System.Collections.Generic.ICollection`1<System.Reflection.ParameterInfo>,System.Reflection.Emit.ILGenerator)
extern "C"  void WrapperMethodBuilder_PushParameters_m3274809205 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___parameters0, ILGenerator_t99948092 * ___ilGenerator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.WrapperMethodBuilder::LoadUnderlyingObject(System.Reflection.Emit.ILGenerator,System.Reflection.FieldInfo)
extern "C"  void WrapperMethodBuilder_LoadUnderlyingObject_m3287786907 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___ilGenerator0, FieldInfo_t * ___srcField1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.WrapperMethodBuilder::<Generate>m__0(System.Reflection.ParameterInfo)
extern "C"  Type_t * WrapperMethodBuilder_U3CGenerateU3Em__0_m4250063033 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.WrapperMethodBuilder::<Generate>m__1(System.Type)
extern "C"  String_t* WrapperMethodBuilder_U3CGenerateU3Em__1_m3386959199 (Il2CppObject * __this /* static, unused */, Type_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
