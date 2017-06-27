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

// System.Object
struct Il2CppObject;
// System.Runtime.InteropServices.ArrayWithOffset
struct ArrayWithOffset_t2998691084;
struct ArrayWithOffset_t2998691084_marshaled_pinvoke;
struct ArrayWithOffset_t2998691084_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_ArrayWithO2998691084.h"
#include "mscorlib_System_Object2689449295.h"

// System.Boolean System.Runtime.InteropServices.ArrayWithOffset::Equals(System.Object)
extern "C"  bool ArrayWithOffset_Equals_m2151760781 (ArrayWithOffset_t2998691084 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.ArrayWithOffset::Equals(System.Runtime.InteropServices.ArrayWithOffset)
extern "C"  bool ArrayWithOffset_Equals_m2247791755 (ArrayWithOffset_t2998691084 * __this, ArrayWithOffset_t2998691084  ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.ArrayWithOffset::GetHashCode()
extern "C"  int32_t ArrayWithOffset_GetHashCode_m3911648295 (ArrayWithOffset_t2998691084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.ArrayWithOffset::GetArray()
extern "C"  Il2CppObject * ArrayWithOffset_GetArray_m2664800596 (ArrayWithOffset_t2998691084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.ArrayWithOffset::GetOffset()
extern "C"  int32_t ArrayWithOffset_GetOffset_m3392761525 (ArrayWithOffset_t2998691084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ArrayWithOffset_t2998691084;
struct ArrayWithOffset_t2998691084_marshaled_pinvoke;

extern "C" void ArrayWithOffset_t2998691084_marshal_pinvoke(const ArrayWithOffset_t2998691084& unmarshaled, ArrayWithOffset_t2998691084_marshaled_pinvoke& marshaled);
extern "C" void ArrayWithOffset_t2998691084_marshal_pinvoke_back(const ArrayWithOffset_t2998691084_marshaled_pinvoke& marshaled, ArrayWithOffset_t2998691084& unmarshaled);
extern "C" void ArrayWithOffset_t2998691084_marshal_pinvoke_cleanup(ArrayWithOffset_t2998691084_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ArrayWithOffset_t2998691084;
struct ArrayWithOffset_t2998691084_marshaled_com;

extern "C" void ArrayWithOffset_t2998691084_marshal_com(const ArrayWithOffset_t2998691084& unmarshaled, ArrayWithOffset_t2998691084_marshaled_com& marshaled);
extern "C" void ArrayWithOffset_t2998691084_marshal_com_back(const ArrayWithOffset_t2998691084_marshaled_com& marshaled, ArrayWithOffset_t2998691084& unmarshaled);
extern "C" void ArrayWithOffset_t2998691084_marshal_com_cleanup(ArrayWithOffset_t2998691084_marshaled_com& marshaled);
