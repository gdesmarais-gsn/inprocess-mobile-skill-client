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

// MsgPack.MessageNotSupportedException
struct MessageNotSupportedException_t2800707203;
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

// System.Void MsgPack.MessageNotSupportedException::.ctor()
extern "C"  void MessageNotSupportedException__ctor_m389602420 (MessageNotSupportedException_t2800707203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessageNotSupportedException::.ctor(System.String)
extern "C"  void MessageNotSupportedException__ctor_m2038059038 (MessageNotSupportedException_t2800707203 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessageNotSupportedException::.ctor(System.String,System.Exception)
extern "C"  void MessageNotSupportedException__ctor_m1095067526 (MessageNotSupportedException_t2800707203 * __this, String_t* ___message0, Exception_t1927440687 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessageNotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MessageNotSupportedException__ctor_m1105396045 (MessageNotSupportedException_t2800707203 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
