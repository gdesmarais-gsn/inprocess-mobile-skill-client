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

// Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory
struct DynamicReflectionDelegateFactory_t4102594041;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t3307743052;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"

// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::.ctor()
extern "C"  void DynamicReflectionDelegateFactory__ctor_m3018966624 (DynamicReflectionDelegateFactory_t4102594041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::CreateDynamicMethod(System.String,System.Type,System.Type[],System.Type)
extern "C"  DynamicMethod_t3307743052 * DynamicReflectionDelegateFactory_CreateDynamicMethod_m2744782529 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Type_t * ___returnType1, TypeU5BU5D_t1664964607* ___parameterTypes2, Type_t * ___owner3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateMethodCallIL(System.Reflection.MethodBase,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateMethodCallIL_m2162468500 (DynamicReflectionDelegateFactory_t4102594041 * __this, MethodBase_t904190842 * ___method0, ILGenerator_t99948092 * ___generator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateDefaultConstructorIL(System.Type,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateDefaultConstructorIL_m636008169 (DynamicReflectionDelegateFactory_t4102594041 * __this, Type_t * ___type0, ILGenerator_t99948092 * ___generator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateGetPropertyIL(System.Reflection.PropertyInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateGetPropertyIL_m1723149935 (DynamicReflectionDelegateFactory_t4102594041 * __this, PropertyInfo_t * ___propertyInfo0, ILGenerator_t99948092 * ___generator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateGetFieldIL(System.Reflection.FieldInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateGetFieldIL_m4201146575 (DynamicReflectionDelegateFactory_t4102594041 * __this, FieldInfo_t * ___fieldInfo0, ILGenerator_t99948092 * ___generator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateSetFieldIL(System.Reflection.FieldInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateSetFieldIL_m3478214539 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, ILGenerator_t99948092 * ___generator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateSetPropertyIL(System.Reflection.PropertyInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateSetPropertyIL_m1386543787 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, ILGenerator_t99948092 * ___generator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::.cctor()
extern "C"  void DynamicReflectionDelegateFactory__cctor_m1024185135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
