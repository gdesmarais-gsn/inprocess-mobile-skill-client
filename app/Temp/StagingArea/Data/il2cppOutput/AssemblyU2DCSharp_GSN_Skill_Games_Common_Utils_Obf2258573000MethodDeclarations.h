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

// GSN.Skill.Games.Common.Utils.Obfuscator
struct Obfuscator_t2258573000;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.Obfuscator::.ctor()
extern "C"  void Obfuscator__ctor_m2844717383 (Obfuscator_t2258573000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.Obfuscator::Obfuscate(System.String)
extern "C"  String_t* Obfuscator_Obfuscate_m4017533076 (Il2CppObject * __this /* static, unused */, String_t* ___clearText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.Obfuscator::Deobfuscate(System.String)
extern "C"  String_t* Obfuscator_Deobfuscate_m1467228835 (Il2CppObject * __this /* static, unused */, String_t* ___cipherText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.Obfuscator::Encrypt(System.Byte[],System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Obfuscator_Encrypt_m2787665707 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___clearData0, ByteU5BU5D_t3397334013* ___Key1, ByteU5BU5D_t3397334013* ___IV2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.Obfuscator::Decrypt(System.Byte[],System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Obfuscator_Decrypt_m3397263361 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___cipherData0, ByteU5BU5D_t3397334013* ___Key1, ByteU5BU5D_t3397334013* ___IV2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Obfuscator::.cctor()
extern "C"  void Obfuscator__cctor_m2153515484 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
