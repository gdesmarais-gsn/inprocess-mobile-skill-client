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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"

// System.Byte[] GSN.Skill.Games.Common.Utils.StreamExtensions::ToBytes(System.IO.MemoryStream)
extern "C"  ByteU5BU5D_t3397334013* StreamExtensions_ToBytes_m1404870387 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___mstream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.StreamExtensions::ToBytes(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* StreamExtensions_ToBytes_m2638986266 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.StreamExtensions::Write(System.IO.Stream,System.Byte[])
extern "C"  void StreamExtensions_Write_m3126618508 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.StreamExtensions::CopyTo(System.IO.Stream,System.IO.Stream)
extern "C"  void StreamExtensions_CopyTo_m2460182809 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___src0, Stream_t3255436806 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.StreamExtensions::WriteToFile(System.IO.Stream,System.String,System.Boolean)
extern "C"  void StreamExtensions_WriteToFile_m4169950173 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, String_t* ___fn1, bool ___text2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
