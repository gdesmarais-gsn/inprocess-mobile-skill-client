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

// System.Reflection.Emit.ArrayType
struct ArrayType_t3579558425;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_TypeAttributes2229518203.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Reflection.Emit.ArrayType::.ctor(System.Type,System.Int32)
extern "C"  void ArrayType__ctor_m2180920014 (ArrayType_t3579558425 * __this, Type_t * ___elementType0, int32_t ___rank1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ArrayType::IsArrayImpl()
extern "C"  bool ArrayType_IsArrayImpl_m1933822935 (ArrayType_t3579558425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ArrayType::GetArrayRank()
extern "C"  int32_t ArrayType_GetArrayRank_m3992159555 (ArrayType_t3579558425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ArrayType::get_BaseType()
extern "C"  Type_t * ArrayType_get_BaseType_m3358371806 (ArrayType_t3579558425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.ArrayType::GetAttributeFlagsImpl()
extern "C"  int32_t ArrayType_GetAttributeFlagsImpl_m3973613023 (ArrayType_t3579558425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ArrayType::FormatName(System.String)
extern "C"  String_t* ArrayType_FormatName_m2913128363 (ArrayType_t3579558425 * __this, String_t* ___elementName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
