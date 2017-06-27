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

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct DecimalConstantAttribute_t569828555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Void System.Runtime.CompilerServices.DecimalConstantAttribute::.ctor(System.Byte,System.Byte,System.UInt32,System.UInt32,System.UInt32)
extern "C"  void DecimalConstantAttribute__ctor_m71487003 (DecimalConstantAttribute_t569828555 * __this, uint8_t ___scale0, uint8_t ___sign1, uint32_t ___hi2, uint32_t ___mid3, uint32_t ___low4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::get_Value()
extern "C"  Decimal_t724701077  DecimalConstantAttribute_get_Value_m2491380330 (DecimalConstantAttribute_t569828555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
