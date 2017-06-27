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

// IntegrationTest/ExpectExceptions
struct ExpectExceptions_t1126243032;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void IntegrationTest/ExpectExceptions::.ctor()
extern "C"  void ExpectExceptions__ctor_m1586493255 (ExpectExceptions_t1126243032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean)
extern "C"  void ExpectExceptions__ctor_m4086398906 (ExpectExceptions_t1126243032 * __this, bool ___succeedOnException0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean,System.String[])
extern "C"  void ExpectExceptions__ctor_m2698777030 (ExpectExceptions_t1126243032 * __this, bool ___succeedOnException0, StringU5BU5D_t1642385972* ___exceptionTypeNames1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean,System.Type[])
extern "C"  void ExpectExceptions__ctor_m1558277165 (ExpectExceptions_t1126243032 * __this, bool ___succeedOnException0, TypeU5BU5D_t1664964607* ___exceptionTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.String[])
extern "C"  void ExpectExceptions__ctor_m413651203 (ExpectExceptions_t1126243032 * __this, StringU5BU5D_t1642385972* ___exceptionTypeNames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Type[])
extern "C"  void ExpectExceptions__ctor_m143235428 (ExpectExceptions_t1126243032 * __this, TypeU5BU5D_t1664964607* ___exceptionTypes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IntegrationTest/ExpectExceptions::<ExpectExceptions>m__0(System.Type)
extern "C"  String_t* ExpectExceptions_U3CExpectExceptionsU3Em__0_m3199783725 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
