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

// Newtonsoft.Json.Schema.JsonSchemaException
struct JsonSchemaException_t3555037192;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor()
extern "C"  void JsonSchemaException__ctor_m3541116310 (JsonSchemaException_t3555037192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor(System.String)
extern "C"  void JsonSchemaException__ctor_m1321972588 (JsonSchemaException_t3555037192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor(System.String,System.Exception)
extern "C"  void JsonSchemaException__ctor_m1157961388 (JsonSchemaException_t3555037192 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C"  void JsonSchemaException__ctor_m4252192342 (JsonSchemaException_t3555037192 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, int32_t ___lineNumber2, int32_t ___linePosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Schema.JsonSchemaException::get_LineNumber()
extern "C"  int32_t JsonSchemaException_get_LineNumber_m1353163254 (JsonSchemaException_t3555037192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::set_LineNumber(System.Int32)
extern "C"  void JsonSchemaException_set_LineNumber_m3204768501 (JsonSchemaException_t3555037192 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Schema.JsonSchemaException::get_LinePosition()
extern "C"  int32_t JsonSchemaException_get_LinePosition_m3370040592 (JsonSchemaException_t3555037192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaException::set_LinePosition(System.Int32)
extern "C"  void JsonSchemaException_set_LinePosition_m2802775207 (JsonSchemaException_t3555037192 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
