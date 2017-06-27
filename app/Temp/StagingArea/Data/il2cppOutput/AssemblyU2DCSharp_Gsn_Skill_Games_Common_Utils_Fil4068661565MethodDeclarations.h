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

// Gsn.Skill.Games.Common.Utils.FileReader
struct FileReader_t4068661565;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Gsn.Skill.Games.Common.Utils.FileReader::.ctor()
extern "C"  void FileReader__ctor_m1541850716 (FileReader_t4068661565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Gsn.Skill.Games.Common.Utils.FileReader::CreateTextReader(System.String)
extern "C"  TextReader_t1561828458 * FileReader_CreateTextReader_m1292349600 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
