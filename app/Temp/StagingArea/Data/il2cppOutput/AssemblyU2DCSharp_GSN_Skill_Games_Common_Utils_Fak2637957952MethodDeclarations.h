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

// GSN.Skill.Games.Common.Utils.FakeWebResponse
struct FakeWebResponse_t2637957952;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.FakeWebResponse::.ctor(System.Boolean,System.Byte[],System.Int32)
extern "C"  void FakeWebResponse__ctor_m4146303556 (FakeWebResponse_t2637957952 * __this, bool ___success_0, ByteU5BU5D_t3397334013* ___bytes_1, int32_t ___httpStatusCode_2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.FakeWebResponse::.ctor(System.Boolean,System.String,System.Int32)
extern "C"  void FakeWebResponse__ctor_m721753343 (FakeWebResponse_t2637957952 * __this, bool ___success_0, String_t* ___text1, int32_t ___httpStatusCode_2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
