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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Complex4256120740.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void Complex::.ctor(System.Single,System.Single)
extern "C"  void Complex__ctor_m1573336311 (Complex_t4256120740 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complex Complex::get_Conjugate()
extern "C"  Complex_t4256120740  Complex_get_Conjugate_m3343692415 (Complex_t4256120740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complex Complex::Rotation(System.Single)
extern "C"  Complex_t4256120740  Complex_Rotation_m2147052233 (Il2CppObject * __this /* static, unused */, float ___radians0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complex Complex::RotationY(UnityEngine.Vector3)
extern "C"  Complex_t4256120740  Complex_RotationY_m2044733348 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___normal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Complex::get_QuaternionY()
extern "C"  Quaternion_t4030073918  Complex_get_QuaternionY_m1879228755 (Complex_t4256120740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complex Complex::op_Multiply(Complex,Complex)
extern "C"  Complex_t4256120740  Complex_op_Multiply_m2799893144 (Il2CppObject * __this /* static, unused */, Complex_t4256120740  ___l0, Complex_t4256120740  ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Complex::get_Radians()
extern "C"  float Complex_get_Radians_m2608634324 (Complex_t4256120740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Complex::get_Length()
extern "C"  float Complex_get_Length_m3417638648 (Complex_t4256120740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complex Complex::get_Zero()
extern "C"  Complex_t4256120740  Complex_get_Zero_m3147833963 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complex Complex::get_One()
extern "C"  Complex_t4256120740  Complex_get_One_m1374725589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complex::Normalize()
extern "C"  void Complex_Normalize_m2899907940 (Complex_t4256120740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
