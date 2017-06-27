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

// MsgPack.UnassignedMessageTypeException
struct UnassignedMessageTypeException_t1337934463;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void MsgPack.UnassignedMessageTypeException::.ctor()
extern "C"  void UnassignedMessageTypeException__ctor_m624073620 (UnassignedMessageTypeException_t1337934463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.UnassignedMessageTypeException::.ctor(System.String)
extern "C"  void UnassignedMessageTypeException__ctor_m2615119650 (UnassignedMessageTypeException_t1337934463 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.UnassignedMessageTypeException::.ctor(System.String,System.Exception)
extern "C"  void UnassignedMessageTypeException__ctor_m2370203242 (UnassignedMessageTypeException_t1337934463 * __this, String_t* ___message0, Exception_t1927440687 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.UnassignedMessageTypeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnassignedMessageTypeException__ctor_m2280070793 (UnassignedMessageTypeException_t1337934463 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
