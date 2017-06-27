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

// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.SecureHunk::.ctor()
extern "C"  void SecureHunk__ctor_m2190226928 (SecureHunk_t3302567905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.SecureHunk::GetUncompressedBody(System.IO.MemoryStream)
extern "C"  void SecureHunk_GetUncompressedBody_m1057361296 (SecureHunk_t3302567905 * __this, MemoryStream_t743994179 * ___outStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::GetUncompressedBody()
extern "C"  ByteU5BU5D_t3397334013* SecureHunk_GetUncompressedBody_m502860322 (SecureHunk_t3302567905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.SecureHunk::SetBody(System.Byte[],System.String,System.Byte[])
extern "C"  void SecureHunk_SetBody_m3772538498 (SecureHunk_t3302567905 * __this, ByteU5BU5D_t3397334013* ___body_0, String_t* ___compression_1, ByteU5BU5D_t3397334013* ___priorHash2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::ComputeHash(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* SecureHunk_ComputeHash_m1625050052 (SecureHunk_t3302567905 * __this, ByteU5BU5D_t3397334013* ___priorHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.SecureHunk::Authenticate(System.Byte[])
extern "C"  void SecureHunk_Authenticate_m1516241302 (SecureHunk_t3302567905 * __this, ByteU5BU5D_t3397334013* ___priorHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.SecureHunk::.cctor()
extern "C"  void SecureHunk__cctor_m2674598165 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
