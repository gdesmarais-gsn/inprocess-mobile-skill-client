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

// Unity.IO.Compression.InvalidDataException
struct InvalidDataException_t3994371520;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void Unity.IO.Compression.InvalidDataException::.ctor()
extern "C"  void InvalidDataException__ctor_m1069237915 (InvalidDataException_t3994371520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.InvalidDataException::.ctor(System.String)
extern "C"  void InvalidDataException__ctor_m1042978905 (InvalidDataException_t3994371520 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.InvalidDataException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidDataException__ctor_m4065006096 (InvalidDataException_t3994371520 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
